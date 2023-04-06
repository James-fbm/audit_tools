import os
import sys

import httpx
from PySide6.QtCore import QModelIndex
from PySide6.QtWidgets import QMainWindow, QApplication, QDockWidget, QAbstractItemView, QFileDialog

from filebrowser import *
from filemenu import *
from functionmenu import *
from functiontoolbar import *
from projectmanagedialog import *
from templatebrowser import *


class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.isInWindow = False
        # 该对话框需要在global_db初始化数据库后进行初始化，因而需要延后至newActiveProject中创建。
        self._projectmanagedialog = ProjectManageDialog()

        if global_db.checkDataBase() == 1:
            self.newActiveProject()


        self._qdock_leftwindow = QDockWidget(parent=self)
        self._filebrowser = FileBrowser(self._qdock_leftwindow)
        self._qdock_leftwindow.setWidget(self._filebrowser)
        self._qdock_leftwindow.setFeatures(QDockWidget.NoDockWidgetFeatures)
        self._qdock_leftwindow.setWindowTitle("审计报告")
        self.addDockWidget(Qt.LeftDockWidgetArea, self._qdock_leftwindow)




        self._qdock_rightwindow = QDockWidget(parent=self)
        self._templatebrowser = TemplateBrowser(self._qdock_rightwindow)
        self._qdock_rightwindow.setFeatures(QDockWidget.NoDockWidgetFeatures)
        self._qdock_rightwindow.setWindowTitle("报告模板")
        self._qdock_rightwindow.setWidget(self._templatebrowser)
        self.addDockWidget(Qt.RightDockWidgetArea, self._qdock_rightwindow)





        self._functionmenu = FunctionMenu(self)
        self._functionmenu.projectCreating.connect(self.createProject)
        self._functionmenu.calculationStarted.connect(self.calculateData)
        self._functionmenu.projectSwitching.connect(self.newActiveProject)
        self.setMenuBar(self._functionmenu)

        self._functiontoolbar = FunctionToolBar(self)
        self.addToolBar(self._functiontoolbar)

        # 各种事件共用消息弹窗
        self._msgbox = QMessageBox(parent=self)
        self._msgbox.setContentsMargins(10, 10, 10, 10)

        # 新建项目对话框
        self._projectcreatedialog = ProjectCreateDialog(self)

        self.isInWindow = True

    def init(self):
        self._functiontoolbar.init()
        self._filebrowser.init()

    # 若程序初始化时未找到可激活的项目，或是需要更换项目，则调用该方法
    def newActiveProject(self):
        self._projectmanagedialog.init()
        ret = self._projectmanagedialog.exec()
        # 未进主窗口而直接退出对话框
        if ret == QDialog.Rejected and self.isInWindow == False:
            sys.exit(0)
        # 未进主窗口而选择了一个项目
        elif self.isInWindow == False:
            pass
        # 若进了主窗口，无论Accept还是Reject该对话框，都需要重新刷新主界面
        # 若Accept, 主界面需要加载新项目数据
        # 若Reject, 主界面需要判断原项目是否仍存在（可能已被用户删除）
        elif self.isInWindow == True:
            # try:
            #     self.init()
            # except Exception:
            #     self.newActiveProject()
            self.init()

    def calculateData(self):
        flink_balance = self._filebrowser.getView().getFileLinkFromFileName("科目余额表")
        flink_map = self._filebrowser.getView().getFileLinkFromFileName("报表项目映射表")
        str_account_standard = self._functiontoolbar.currentStandardSelection()
        #
        # calc_return = calc_stmt_data(flink_balance, flink_map, str_account_standard)
        requestdata = {
            'id': global_db.getActiveProjectID(),
            '科目余额表': flink_balance,
            '报表项目映射表': flink_map,
            '会计准则': str_account_standard
        }

        # 为减少打包后可执行文件大小，将所有利用pandas的运算过程都集中到sv_backend
        calc_return = httpx.post('http://localhost:8080/calcstmtdata', json=requestdata).json()

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
                self._msgbox.setText('无效的会计准则: ' + self._functiontoolbar.currentStandardSelection())
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.exec()
            case 3:
                self._msgbox.setText('无法打开报表项目映射表: ' + flink_map)
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.exec()
            case 4:
                self._msgbox.setText('在处理报表项目映射表时出现异常: ' + flink_map)
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.exec()
            case 5:
                self._msgbox.setText('无法打开科目余额表: ' + flink_balance)
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.exec()
            case 6:
                self._msgbox.setText('在处理科目余额表时出现异常: ' + flink_balance)
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.exec()

    # 进入主页后的createProject子过程
    def createProject(self):
        if self._projectcreatedialog.exec() == QDialog.Accepted:
            prjname = self._projectcreatedialog.getNameSetting()
            accstd = self._projectcreatedialog.getStdSetting()
            isactive = self._projectcreatedialog.getOpenSetting()
            global_db.initNewProject(prjname, isactive, accstd)
            # 更换项目，刷新主窗口数据
            if isactive == True:
                self.init()

        print('create Project dialog')


if __name__ == '__main__':
    app = QApplication()

    app.setStyle('Fusion')

    main_window = MainWindow()
    main_window.setMinimumSize(600, 400)

    main_window.show()

    sys.exit(app.exec())