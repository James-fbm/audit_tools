from typing import Optional

from PySide6.QtCore import Signal
from PySide6.QtGui import QAction
from PySide6.QtWidgets import QMenuBar, QMenu, QWidget


class FunctionMenu(QMenuBar):
    calculationStarted = Signal()
    projectCreating = Signal()
    projectSwitching = Signal()

    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        qmenu_project = QMenu(title='项目', parent=self)
        qaction_createprj = QAction(text='新建', parent=qmenu_project)
        qaction_createprj.triggered.connect(self.createProject)
        qaction_switchprj = QAction(text='切换', parent=qmenu_project)
        qaction_switchprj.triggered.connect(self.switchProject)
        qmenu_project.addActions([qaction_createprj, qaction_switchprj])

        qmenu_data = QMenu(title='数据', parent=self)
        qaction_calc = QAction(text='给我算！', parent=qmenu_data)
        qaction_calc.triggered.connect(self.startCalculation)
        qmenu_data.addAction(qaction_calc)

        self.addMenu(qmenu_project)
        self.addMenu(qmenu_data)

    def createProject(self):
        self.projectCreating.emit()

    def switchProject(self):
        self.projectSwitching.emit()

    def startCalculation(self, checked=None):
        self.calculationStarted.emit()