from typing import Optional

from PySide6.QtCore import Signal
from PySide6.QtGui import QAction
from PySide6.QtWidgets import QMenuBar, QMenu, QWidget


class FunctionMenu(QMenuBar):
    calculationStarted = Signal()

    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        qmenu_data = QMenu(title='数据', parent=self)
        qaction_calc = QAction(text='算!', parent=qmenu_data)
        qaction_calc.triggered.connect(self.startCalculation)

        qmenu_data.addAction(qaction_calc)

        self.addMenu(qmenu_data)

    def startCalculation(self, checked=None):
        self.calculationStarted.emit()
