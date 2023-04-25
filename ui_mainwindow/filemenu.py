from typing import Optional

from PySide6.QtCore import Signal
from PySide6.QtGui import QAction, QStandardItem
from PySide6.QtWidgets import QMenu, QWidget

class FileMenu(QMenu):
    fileLinkSetting = Signal(QStandardItem)
    fileOpening = Signal(QStandardItem)
    dirOpening = Signal(QStandardItem)
    attributeShowing = Signal(QStandardItem)

    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        # 被右键选中的文件项
        self._currentfileitem = ''
        self._qaction_open = QAction(text='打开', parent=self)
        self._qaction_dir = QAction(text='打开目录', parent=self)
        self._qaction_link = QAction(text='链接至', parent=self)
        self._qaction_attr = QAction(text='属性', parent=self)

        self._qaction_link.triggered.connect(self.actionSetFileLink)
        self._qaction_dir.triggered.connect(self.actionOpenDir)
        self._qaction_open.triggered.connect(self.actionOpenFile)
        self._qaction_attr.triggered.connect(self.actionShowAttribute)

        self.addActions([self._qaction_open, self._qaction_dir, self._qaction_link, self._qaction_attr])

    def setCurrentFileItem(self, fileitem: QStandardItem):
        self._currentfileitem = fileitem

    # 如果文件项不存在相应的磁盘链接文件，禁用菜单栏的打开选项
    def setOpenDisabled(self):
        self._qaction_open.setDisabled(True)

    def setOpenEnabled(self):
        self._qaction_open.setEnabled(True)

    def setOpenDirDisabled(self):
        self._qaction_dir.setDisabled(True)

    def setOpenDirEnabled(self):
        self._qaction_dir.setEnabled(True)

    def setAttributeDisabled(self):
        self._qaction_attr.setDisabled(True)

    def setAttributeEnabled(self):
        self._qaction_attr.setEnabled(True)


    def actionSetFileLink(self, checked=None):
        self.fileLinkSetting.emit(self._currentfileitem)

    def actionOpenDir(self, checked=None):
        self.dirOpening.emit(self._currentfileitem)

    def actionOpenFile(self, checked=None):
        self.fileOpening.emit(self._currentfileitem)

    def actionShowAttribute(self, checked=None):
        self.attributeShowing.emit(self._currentfileitem)

