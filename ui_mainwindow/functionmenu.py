from typing import Optional

from PySide6.QtCore import Signal
from PySide6.QtGui import QAction
from PySide6.QtWidgets import QMenuBar, QMenu, QWidget


class FunctionMenu(QMenuBar):
    calculationStarted = Signal()
    stmtDataManagement = Signal()
    projectCreating = Signal()
    projectSwitching = Signal()

    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        self.qmenu_project = QMenu(title='项目', parent=self)
        self.qaction_createprj = QAction(text='新建', parent=self.qmenu_project)
        self.qaction_createprj.triggered.connect(self.createProject)
        self.qaction_switchprj = QAction(text='管理', parent=self.qmenu_project)
        self.qaction_switchprj.triggered.connect(self.switchProject)
        self.qmenu_project.addActions([self.qaction_createprj, self.qaction_switchprj])

        self.qmenu_data = QMenu(title='数据', parent=self)
        self.qaction_calc = QAction(text='计算', parent=self.qmenu_data)
        self.qaction_calc.triggered.connect(self.startCalculation)
        self.qaction_manage = QAction(text='设置', parent=self.qmenu_data)
        self.qaction_manage.triggered.connect(self.manageStmtData)
        self.qmenu_data.addActions([self.qaction_calc, self.qaction_manage])

        self.addMenu(self.qmenu_project)
        self.addMenu(self.qmenu_data)

    def createProject(self):
        self.projectCreating.emit()

    def switchProject(self):
        self.projectSwitching.emit()

    def startCalculation(self, checked=None):
        self.calculationStarted.emit()

    def manageStmtData(self, checked=None):
        self.stmtDataManagement.emit()

    def setCalcDisable(self):
        self.qmenu_data.setDisabled(True)

    def setCalcEnable(self):
        self.qmenu_data.setEnabled(True)
