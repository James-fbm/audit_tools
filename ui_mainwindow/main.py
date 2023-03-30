import os
import sys
import json
import time

from PySide6.QtCore import QModelIndex
from PySide6.QtSql import QSqlDatabase, QSqlQuery
from PySide6.QtWidgets import QMainWindow, QApplication, QDockWidget, QAbstractItemView, QFileDialog, QMessageBox

from filebrowser import *
from filemenu import *
from fn_calc_stmt_data import calc_stmt_data
from functionmenu import *
from database import global_db
from functiontoolbar import *


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()

        global_db.noActiveProject.connect(self.newActiveProject)
        global_db.checkDataBase('../data_cache')

        # 1: 企业会计准则; 2: 小企业会计准则
        self._account_standard = 1

        self._qdock_leftwindow = QDockWidget(parent=self)

        self._filebrowser = FileBrowser(self._qdock_leftwindow)
        # 激活文件项信号
        self._filebrowser.activated.connect(self.fileactivated)
        # 用户不可编辑
        self._filebrowser.setEditTriggers(QAbstractItemView.NoEditTriggers)
        # 右键文件项信号
        self._filebrowser.setContextMenuPolicy(Qt.CustomContextMenu)
        self._filebrowser.customContextMenuRequested.connect(self.filerightclicked)

        # 右击filebrowser打开相应菜单栏
        self._filemenu = FileMenu(self._filebrowser)
        self._filemenu.fileOpening.connect(self.openFile)
        self._filemenu.fileLinkSetting.connect(self.setFileLink)

        self._qdock_leftwindow.setWidget(self._filebrowser)
        self._qdock_leftwindow.setFeatures(QDockWidget.NoDockWidgetFeatures)
        self._qdock_leftwindow.setWindowTitle("审计报告")
        self.addDockWidget(Qt.LeftDockWidgetArea, self._qdock_leftwindow)

        self._functionmenu = FunctionMenu(self)
        self._functionmenu.calculationStarted.connect(self.calculateData)
        self.setMenuBar(self._functionmenu)

        self._functiontoolbar = FunctionToolBar(self)
        self.addToolBar(self._functiontoolbar)

        # 各种事件共用消息弹窗
        self._msgbox = QMessageBox(parent=self)

        # 报表基础数据
        self._stmtdata = {}

    # 若程序初始化时未找到可激活的项目，则调用该方法
    def newActiveProject(self):
        #
        # TODO, 编写交互过程
        #
        global_db.initNewProject('', True, '企业会计准则')

    # activate一个文件项
    def fileactivated(self, index: QModelIndex):
        qitem_file = self._filebrowser.getModel().itemFromIndex(index)
        str_filelink = self._filebrowser.getFileLink(qitem_file)
        # 若文件项是一个category, 则忽略操作
        if self._filebrowser.isCategory(qitem_file):
            pass
        # 若文件项不存在关联的磁盘文件，则打开FileDialog让用户选择文件
        elif str_filelink == '':
            self.setFileLink(qitem_file)
        else:
            self.openFile(qitem_file)

    def filerightclicked(self, pos: QPoint):
        qitem_file = self._filebrowser.getItemFromPoint(pos)
        if qitem_file is not None:
            # 若文件项是category，则不打开菜单栏
            if self._filebrowser.isCategory(qitem_file):
                pass
            else:
                # 若该文件项无链接的磁盘文件，则禁用“打开”功能
                if self._filebrowser.getFileLink(qitem_file) == '':
                    self._filemenu.setOpenDisabled()
                else:
                    self._filemenu.setOpenEnabled()
                self._filemenu.setCurrentFileItem(qitem_file)
                self._filemenu.exec(self._filebrowser.mapToGlobal(pos))

    def setFileLink(self, fileitem: QStandardItem):
        tp_dialogreturn = QFileDialog.getOpenFileName(parent=self,
                                                      filter=self._filebrowser.getFileFilter(fileitem))
        # 若FileDialog返回值非空，则保存该路径，并将文件项显示为黑色
        if tp_dialogreturn[0] != '':
            self._filebrowser.setFileLink(fileitem, tp_dialogreturn[0])
            fileitem.setForeground(QBrush(Qt.black))

    def openFile(self, fileitem: QStandardItem):
        str_filelink = self._filebrowser.getFileLink(fileitem)
        os.startfile(str_filelink)

    def calculateData(self):
        flink_balance = self._filebrowser.getFileLinkFromFileName("科目余额表")
        flink_map = self._filebrowser.getFileLinkFromFileName("报表项目映射表")

        str_account_standard = self._functiontoolbar.currentStandardSelection()

        calc_return = calc_stmt_data(flink_balance, flink_map, str_account_standard)

        match calc_return[1]:
            case 0:
                global_db.updateCalcResult(calc_return[0])

                self._msgbox.setText('成功')
                self._msgbox.setIcon(QMessageBox.Information)
                self._msgbox.exec()
            case 1:
                self._msgbox.setText('无法打开程序内部文件: account_meta.xltx')
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.exec()
            case 2:
                self._msgbox.setText('无效的会计准则: ' + str(self._account_standard))
                self._msgbox.setIcon(QMessageBox.Warning)
                self._msgbox.exec()
            case 3:
                self._msgbox.setText('无法打开报表项目映射表: ' + flink_map)
                self._msgbox.setIcon(QMessageBox.Warning)
                self._msgbox.exec()
            case 4:
                self._msgbox.setText('在处理报表项目映射表时出现异常: ' + flink_map)
                self._msgbox.setIcon(QMessageBox.Warning)
                self._msgbox.exec()
            case 5:
                self._msgbox.setText('无法打开科目余额表: ' + flink_balance)
                self._msgbox.setIcon(QMessageBox.Warning)
                self._msgbox.exec()
            case 6:
                self._msgbox.setText('在处理科目余额表时出现异常: ' + flink_balance)
                self._msgbox.setIcon(QMessageBox.Warning)
                self._msgbox.exec()


if __name__ == '__main__':
    app = QApplication()

    app.setStyle('Fusion')

    main_window = MainWindow()
    main_window.setMinimumSize(450, 300)

    main_window.show()

    sys.exit(app.exec())

