import os
import sys

import httpx
from PySide6.QtCore import QModelIndex, QFile, QTextStream
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
        # self.addDockWidget(Qt.LeftDockWidgetArea, self._qdock_leftwindow)

        self._qdock_rightwindow = QDockWidget(parent=self)
        self._templatebrowser = TemplateBrowser(self._qdock_rightwindow)
        self._qdock_rightwindow.setFeatures(QDockWidget.NoDockWidgetFeatures)
        self._qdock_rightwindow.setWindowTitle("报告模板")
        self._qdock_rightwindow.setWidget(self._templatebrowser)
        # self.addDockWidget(Qt.RightDockWidgetArea, self._qdock_rightwindow)

        # 设置左边和右边的dockwidget的宽度成比例
        self.addDockWidget(Qt.LeftDockWidgetArea, self._qdock_leftwindow)
        self.addDockWidget(Qt.RightDockWidgetArea, self._qdock_rightwindow)
        self.splitDockWidget(self._qdock_leftwindow, self._qdock_rightwindow, Qt.Horizontal)
        self.resizeDocks([self._qdock_leftwindow, self._qdock_rightwindow], [4, 9], Qt.Horizontal)

        self._functionmenu = FunctionMenu(self)
        self._functionmenu.projectCreating.connect(self.createProject)
        self._functionmenu.calculationStarted.connect(self.calculateData)
        self._functionmenu.stmtDataManagement.connect(self.manageStmtData)
        self._functionmenu.projectSwitching.connect(self.newActiveProject)
        self.setMenuBar(self._functionmenu)

        self._functiontoolbar = FunctionToolBar(self)
        self._functiontoolbar.accountSelectionChanged.connect(self.changeAccountSelection)
        self._functiontoolbar.templateShowing.connect(self.templateViewChange)
        self._templateShowing = True
        self.addToolBar(self._functiontoolbar)

        # 各种事件共用消息弹窗
        self._msgbox = QMessageBox(parent=self)
        self._msgbox.setContentsMargins(10, 10, 10, 10)

        # 新建项目对话框
        self._projectcreatedialog = ProjectCreateDialog(self)

        self.isInWindow = True

    def init(self):
        try:
            self._functiontoolbar.init()
            self._functiontoolbar.show()
            self._filebrowser.init()
            self._filebrowser.show()
            self._templatebrowser.init()
            self._templatebrowser.show()
            self._functionmenu.setCalcEnable()
            self.resizeDocks([self._qdock_leftwindow, self._qdock_rightwindow], [4, 9], Qt.Horizontal)
        except Exception:
            self._functiontoolbar.hide()
            self._filebrowser.hide()
            self._templatebrowser.hide()
            self._functionmenu.setCalcDisable()
            pass

    def templateViewChange(self):
        if self._templateShowing == True:
            filebrowser_width = self._qdock_leftwindow.size().width()
            self._qdock_rightwindow.hide()
            self.resize(filebrowser_width, self.size().height())
            self._templateShowing = False
        else:
            self._qdock_rightwindow.show()
            self.resize(self.size().width() + 400, self.height())
            self.resizeDocks([self._qdock_leftwindow, self._qdock_rightwindow], [4, 9], Qt.Horizontal)
            self._templateShowing = True

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
            self.init()

    def changeAccountSelection(self):
        self._templatebrowser.init()

    def calculateData(self):

        self._msgbox.setText('计算操作会覆盖当前项目的报表数据，是否继续？')
        self._msgbox.setIcon(QMessageBox.Warning)
        self._msgbox.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel)
        self._msgbox.setWindowTitle('计算')
        if self._msgbox.exec() != QMessageBox.Ok:
            self._msgbox.setStandardButtons(QMessageBox.Ok)
            return
        self._msgbox.setStandardButtons(QMessageBox.Ok)

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


        r = httpx.post('http://127.0.0.1:8080/calcstmtdata', json=requestdata)
        if r.status_code == 200:
            return_flag = r.json()
        else:
            self._msgbox.setText('计算失败：无法连接至后台进程。\n请检查后台进程状态，或是直接重启本程序。')
            self._msgbox.setWindowTitle('错误')
            self._msgbox.setIcon(QMessageBox.Critical)
            self._msgbox.exec()
            return

        match return_flag:
            case 0:
                self._msgbox.setText('计算成功。')
                self._msgbox.setIcon(QMessageBox.Information)
                self._msgbox.setWindowTitle('成功')
                self._msgbox.exec()
            case 1:
                self._msgbox.setText('计算失败：无法打开程序内部文件：account_meta1.xlsx')
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.setWindowTitle('错误')
                self._msgbox.exec()
            case 2:
                self._msgbox.setText('计算失败：无效的会计准则: ' + self._functiontoolbar.currentStandardSelection())
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.setWindowTitle('错误')
                self._msgbox.exec()
            case 3:
                self._msgbox.setText('计算失败：无法打开报表项目映射表: ' + flink_map)
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.setWindowTitle('错误')
                self._msgbox.exec()
            case 4:
                self._msgbox.setText('计算失败：在处理报表项目映射表时出现异常: ' + flink_map)
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.setWindowTitle('错误')
                self._msgbox.exec()
            case 5:
                self._msgbox.setText('计算失败：无法打开科目余额表: ' + flink_balance)
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.setWindowTitle('错误')
                self._msgbox.exec()
            case 6:
                self._msgbox.setText('计算失败：在处理科目余额表时出现异常: ' + flink_balance)
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.setWindowTitle('错误')
                self._msgbox.exec()

    def manageStmtData(self):
        r = httpx.post('http://127.0.0.1:8080/managestmtdata', json={'projectid': global_db.getActiveProjectID()})
        if r.status_code == 200:
            rq = r.json()
            if rq['execute'] == 1:
                self._msgbox.setText('读取失败：在处理过程中出现异常。\n请检查数据库database_sqlite的完整性，或是直接重启本程序。')
                self._msgbox.setIcon(QMessageBox.Critical)
                self._msgbox.setWindowTitle('错误')
                self._msgbox.exec()
                return
            else:
                parent_dir = os.path.abspath(os.path.join(os.getcwd(), ".."))
                file_path = os.path.join(parent_dir, "program_files", "stmtdata_cache.xlsx")
                os.system(file_path)
                r = httpx.post('http://127.0.0.1:8080/savestmtdata',
                               json={'projectid': global_db.getActiveProjectID()})
                if r.status_code == 200:
                    rq = r.json()
                    if rq['execute'] == 1:
                        self._msgbox.setText(
                            '更新失败：在处理过程中出现异常。\n请检查数据库database_sqlite的完整性、新设置数据的规范性，或是直接重启本程序。')
                        self._msgbox.setIcon(QMessageBox.Critical)
                        self._msgbox.setWindowTitle('错误')
                        self._msgbox.exec()
                        return
                    else:
                        self._msgbox.setText('更新成功')
                        self._msgbox.setWindowTitle('成功')
                        self._msgbox.setIcon(QMessageBox.Information)
                        self._msgbox.exec()
                else:
                    self._msgbox.setText('更新失败：无法连接至后台进程。\n请检查后台进程状态，或是直接重启本程序。')
                    self._msgbox.setWindowTitle('错误')
                    self._msgbox.setIcon(QMessageBox.Critical)
                    self._msgbox.exec()
                    return

        else:
            self._msgbox.setText('读取失败：无法连接至后台进程。\n请检查后台进程状态，或是直接重启本程序。')
            self._msgbox.setIcon(QMessageBox.Critical)
            self._msgbox.exec()
            return



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


if __name__ == '__main__':
    app = QApplication()

    app.setStyle('Fusion')

    main_window = MainWindow()
    main_window.setMinimumSize(400, 450)
    main_window.resize(800, 450)
    main_window.setWindowTitle('主窗口')

    style_file = QFile("stylesheet.qss")
    style_file.open(QFile.ReadOnly | QFile.Text)
    stream = QTextStream(style_file)
    app.setStyleSheet(stream.readAll())

    main_window.show()

    sys.exit(app.exec())
