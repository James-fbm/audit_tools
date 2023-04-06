from typing import Optional

from PySide6.QtGui import QIcon
from PySide6.QtWidgets import QWidget, QTreeView, QVBoxLayout, QRadioButton, QButtonGroup, QHBoxLayout, QToolButton, \
    QPushButton


class TemplateBrowser(QWidget):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        # 创建 QButtonGroup 和两个 QRadioButton
        self._radio_group = QButtonGroup(self)
        self._radio_BS = QRadioButton('资产负债表', parent=self)
        self._radio_PL = QRadioButton('利润表', parent=self)
        self._radio_group.addButton(self._radio_BS)
        self._radio_group.addButton(self._radio_PL)

        self._push_add = QPushButton(parent=self)
        self._push_add.setIcon(QIcon("icons/icon_add.svg"))
        self._push_delete = QPushButton(parent=self)
        self._push_delete.setIcon(QIcon("icons/icon_delete.svg"))

        self._templatebrowserview = TemplateBrowserView(self)

        # 创建 QVBoxLayout 布局管理器，并将两个 QRadioButton 和 QTreeView 添加到其中
        self._stmtbuttonlayout = QHBoxLayout()
        self._stmtbuttonlayout.addWidget(self._radio_BS)
        self._stmtbuttonlayout.addWidget(self._radio_PL)
        self._toolbuttonlayout = QVBoxLayout()
        self._toolbuttonlayout.addWidget(self._push_add)
        self._toolbuttonlayout.addWidget(self._push_delete)
        self._viewlayout = QHBoxLayout()
        self._viewlayout.addWidget(self._templatebrowserview)
        self._viewlayout.addLayout(self._toolbuttonlayout)
        self._mainlayout = QVBoxLayout()
        self._mainlayout.addLayout(self._stmtbuttonlayout)
        self._mainlayout.addLayout(self._viewlayout)

        # 设置布局管理器
        self.setLayout(self._mainlayout)

    def init(self):
        self._templateview.init()


class TemplateBrowserView(QTreeView):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self._model = {}

    def init(self):
        self.initModel()

    def initModel(self):
        pass
