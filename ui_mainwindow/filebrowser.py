import os
from typing import Optional

from PySide6.QtCore import Qt, QPoint, QModelIndex
from PySide6.QtGui import QStandardItemModel, QStandardItem, QIcon, QBrush, QMouseEvent
from PySide6.QtSql import QSqlDatabase, QSqlQuery
from PySide6.QtWidgets import QTreeView, QWidget, QAbstractItemView, QFileDialog, QVBoxLayout
from database import global_db
from filemenu import FileMenu


class FileBrowser(QWidget):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        self._filebrowserview = FileBrowserView(self)
        # 激活文件项信号
        self._filebrowserview.activated.connect(self.fileactivated)
        # 用户不可编辑
        self._filebrowserview.setEditTriggers(QAbstractItemView.NoEditTriggers)
        # 右键文件项信号
        self._filebrowserview.setContextMenuPolicy(Qt.CustomContextMenu)
        self._filebrowserview.customContextMenuRequested.connect(self.filerightclicked)

        # 右击filebrowser打开相应菜单栏
        # 菜单栏的状态（禁用/启用等）依赖于self._filebrowserview的数据
        self._filemenu = FileMenu(self._filebrowserview)
        self._filemenu.fileOpening.connect(self.openFile)
        self._filemenu.fileLinkSetting.connect(self.setFileLink)
        self._filemenu.attributeShowing.connect(self.showAttribute)

        self._mainlayout = QVBoxLayout()
        self._mainlayout.addWidget(self._filebrowserview)
        self.setLayout(self._mainlayout)

        self.init()

    def init(self):
        self._filebrowserview.init()

    def getView(self):
        return self._filebrowserview

    def fileactivated(self, index: QModelIndex):
        qitem_file = self._filebrowserview.getModel().itemFromIndex(index)
        str_filelink = self._filebrowserview.getFileLink(qitem_file)
        # 若文件项是一个category, 则忽略操作
        if self._filebrowserview.isCategory(qitem_file):
            pass
        # 若文件项不存在关联的磁盘文件，则打开FileDialog让用户选择文件
        elif str_filelink == '':
            self.setFileLink(qitem_file)
        else:
            self.openFile(qitem_file)

    def filerightclicked(self, pos: QPoint):
        qitem_file = self._filebrowserview.getItemFromPoint(pos)
        if qitem_file is not None:
            # 若文件项是category，则不打开菜单栏
            if self._filebrowserview.isCategory(qitem_file):
                pass
            else:
                # 若该文件项无链接的磁盘文件，则禁用“打开”功能
                if self._filebrowserview.getFileLink(qitem_file) == '':
                    self._filemenu.setOpenDisabled()
                    self._filemenu.setAttributeDisabled()
                else:
                    self._filemenu.setOpenEnabled()
                    self._filemenu.setAttributeEnabled()
                self._filemenu.setCurrentFileItem(qitem_file)
                self._filemenu.exec(self._filebrowserview.mapToGlobal(pos))

    def setFileLink(self, fileitem: QStandardItem):
        tp_dialogreturn = QFileDialog.getOpenFileName(parent=self,
                                                      filter=self._filebrowserview.getFileFilter(fileitem))
        # 若FileDialog返回值非空，则保存该路径，并将文件项显示为黑色
        if tp_dialogreturn[0] != '':
            self._filebrowserview.setFileLink(fileitem, tp_dialogreturn[0])
            fileitem.setForeground(QBrush(Qt.black))

    def openFile(self, fileitem: QStandardItem):
        str_filelink = self._filebrowserview.getFileLink(fileitem)
        os.startfile(str_filelink)

    def showAttribute(self, fileitem: QStandardItem):
        print(fileitem.text() + ' attribute should be shown')


class FileBrowserView(QTreeView):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self._filelink = []
        self._modeldata = {
            "基本表": [
                ["科目余额表", "icons/icon_excel.svg"],
                ["核算项目表", "icons/icon_excel.svg"],
                ["报表项目映射表", "icons/icon_text.svg"]
            ],
            "会计报表": [
                ["报表模板", "icons/icon_excel.svg"]
            ],
            "审计报告": [
                ["附注", "icons/icon_word.svg"]
            ]
        }
        self._model = {}
        self.header().setVisible(False)

    # 可供外部调用的init
    def init(self):
        self.initFileLinkFromDB()
        self.initModel()
        self.expandAll()


    def getFileLink(self, fileitem: QStandardItem):
        filename = fileitem.text()
        return self._filelink[filename][0]

    def setFileLink(self, fileitem: QStandardItem, filelink: str):
        global_db.updateFileLink(fileitem.text(), filelink)
        self._filelink[fileitem.text()][0] = filelink

    def getFileLinkFromFileName(self, filename: str):
        return self._filelink[filename][0]

    def getFileFilter(self, fileitem: QStandardItem):
        return self._filelink[fileitem.text()][1]

    def getModel(self):
        return self._model

    def getItemFromPoint(self, pos: QPoint):
        return self.getModel().itemFromIndex(self.indexAt(pos))

    def isCategory(self, fileitem: QStandardItem):
        filename = fileitem.text()
        if filename == '基本表' or filename == '会计报表' or filename == '审计报告':
            return True
        else:
            return False

    def initFileLinkFromDB(self):
        self._filelink = global_db.getFileLink()

    def initModel(self):
        qmodel_file = QStandardItemModel(0, 1, self)

        for (cate, childlist) in self._modeldata.items():
            qitem_cate = QStandardItem(cate)
            for child in childlist:
                qitem_child = QStandardItem(QIcon(child[1]), child[0])
                # 若文件项不存在关联的磁盘文件，则将其显示为灰色
                if self.getFileLinkFromFileName(child[0]) == '':
                    qitem_child.setForeground(QBrush(Qt.gray))
                qitem_cate.appendRow(qitem_child)
            qmodel_file.appendRow(qitem_cate)

        self._model = qmodel_file
        self.setModel(self._model)

    def mousePressEvent(self, event: QMouseEvent) -> None:
        # 通过左键的单击事件
        if event.button() == Qt.LeftButton:
            super().mousePressEvent(event)
        # 点击其它键只允许选中文件项
        else:
            i = self.indexAt(event.pos())
            self.setCurrentIndex(i)

    def mouseDoubleClickEvent(self, event: QMouseEvent) -> None:
        # 只通过左键的双击事件
        if event.button() == Qt.LeftButton:
            super().mouseDoubleClickEvent(event)
        else:
            pass