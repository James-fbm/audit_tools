from typing import Optional

from PySide6.QtCore import Qt, QPoint
from PySide6.QtGui import QStandardItemModel, QStandardItem, QIcon, QBrush, QMouseEvent
from PySide6.QtSql import QSqlDatabase, QSqlQuery
from PySide6.QtWidgets import QTreeView, QWidget
from database import global_db


class FileBrowser(QTreeView):
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
        self.init()
        self.header().setVisible(False)

    # 可供外部调用的init
    def init(self):
        try:
            self.initFileLinkFromDB()
            self.initModel()
            self.expandAll()
        except Exception:
            self._model.clear()

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

    def getModelData(self):
        return self._modeldata

    def getModel(self):
        return self._model

    def getItemFromFileName(self, filename: str):
        pass

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
