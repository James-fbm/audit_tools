from typing import Optional

from PySide6.QtCore import Signal
from PySide6.QtWidgets import QToolBar, QComboBox, QWidget
from database import global_db


class FunctionToolBar(QToolBar):
    accountSelectionChanged = Signal()
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.qcombo_accstd = QComboBox(parent=self)
        self.qcombo_accstd.addItem("企业会计准则")
        self.qcombo_accstd.addItem("2011年小企业会计准则")

        self.qcombo_accstd.currentTextChanged.connect(self.changeAccountSelection)

        self.addWidget(self.qcombo_accstd)

        self.init()

    def init(self):
        self.initAccountStdFromDB()

    # 将会计准则的变化实时写入数据库
    def currentStandardSelection(self):
        return self.qcombo_accstd.currentText()

    def changeAccountSelection(self):
        global_db.updateAccountStd(None, self.qcombo_accstd.currentText())
        self.accountSelectionChanged.emit()

    def initAccountStdFromDB(self):
        self.qcombo_accstd.setCurrentText(global_db.getProjectFromDB(active=True)['account_std'])
