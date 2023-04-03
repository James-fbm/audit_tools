from typing import Optional

from PySide6.QtCore import Qt, QSize
from PySide6.QtGui import QStandardItemModel, QStandardItem
from PySide6.QtWidgets import QDialog, QWidget, QDialogButtonBox, QVBoxLayout, QHBoxLayout, QPushButton, QTreeView, \
    QLabel, QLineEdit, QFormLayout, QMessageBox

from database import global_db
from projectcreatedialog import ProjectCreateDialog


class ProjectRenameDialog(QDialog):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        layout = QFormLayout()
        self.qlabel_rename = QLabel("新名称:", parent=self)
        self.qline_rename = QLineEdit(parent=self)
        layout.addRow(self.qlabel_rename, self.qline_rename)

        buttons = QDialogButtonBox(QDialogButtonBox.Ok | QDialogButtonBox.Cancel, Qt.Horizontal, self)
        buttons.accepted.connect(self.accept)
        buttons.rejected.connect(self.reject)
        layout.addWidget(buttons)

        layout.setVerticalSpacing(30)
        self.setLayout(layout)

        self.setContentsMargins(10, 10, 10, 10)

    def getNewName(self):
        return self.qline_rename.text()


class ProjectDeleteDialog(QMessageBox):
    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)
        self.setText('即将删除该项目所有相关数据，请三思')
        # buttons = QDialogButtonBox(QDialogButtonBox.Ok | QDialogButtonBox.Cancel, Qt.Horizontal, self)
        # buttons.accepted.connect(self.accept)
        # buttons.rejected.connect(self.reject)
        self.setIcon(QMessageBox.Warning)
        self.setStandardButtons(QMessageBox.Ok | QMessageBox.Cancel)
        self.setContentsMargins(10, 10, 10, 10)


class ProjectManageDialog(QDialog):

    def __init__(self, parent: Optional[QWidget] = None):
        super().__init__(parent)

        # 不要设置parent, 父子关系在下边的addLayout中被自动设置
        self._qhlayout_dialog = QHBoxLayout()
        self._qvlayout_left = QVBoxLayout()
        self._qvlayout_right = QVBoxLayout()
        self._qhlayout_leftbottom = QHBoxLayout()

        self._projectview = QTreeView(parent=self)
        self._projectview.setEditTriggers(QTreeView.NoEditTriggers)
        self._projectview.header().setStretchLastSection(True)

        self._qbutton_selectprj = QPushButton(parent=self, text="选择")
        self._qbutton_selectprj.clicked.connect(self.selectProject)
        self._qbutton_newprj = QPushButton(parent=self, text="新建")
        self._qbutton_newprj.clicked.connect(self.createProject)
        self._qbutton_cancel = QPushButton(parent=self, text="Cancel")
        self._qbutton_cancel.clicked.connect(self.reject)
        self._qbutton_rename = QPushButton(parent=self, text="重命名")
        self._qbutton_rename.clicked.connect(self.renameProject)
        self._qbutton_delete = QPushButton(parent=self, text="删除")
        self._qbutton_delete.clicked.connect(self.deleteProject)

        # 在左半部分先添加一个project的listview
        self._qvlayout_left.addWidget(self._projectview, 1)
        # 设置左下角布局，添加新建和选择按钮
        self._qhlayout_leftbottom.addWidget(self._qbutton_newprj)
        self._qhlayout_leftbottom.addStretch()
        self._qhlayout_leftbottom.addWidget(self._qbutton_selectprj)
        self._qhlayout_leftbottom.setContentsMargins(0, 10, 0, 0)
        # 将左下角布局添加到左侧布局中
        self._qvlayout_left.addLayout(self._qhlayout_leftbottom)

        self._qvlayout_right.addWidget(self._qbutton_rename)
        self._qvlayout_right.addWidget(self._qbutton_delete)
        self._qvlayout_right.addWidget(self._qbutton_cancel)

        self._qhlayout_dialog.addLayout(self._qvlayout_left, 1)
        self._qhlayout_dialog.addLayout(self._qvlayout_right)

        self._qvlayout_left.setContentsMargins(10, 10, 10, 10)
        self._qvlayout_right.setContentsMargins(10, 10, 10, 10)
        self.resize(QSize(500, 300))
        self.setLayout(self._qhlayout_dialog)

        # 各种项目管理对话框，不参与布局
        self._projectcreatedialog = ProjectCreateDialog(self)
        self._projectrenamedialog = ProjectRenameDialog(self)
        self._projectdeletedialog = ProjectDeleteDialog(self)

        # 与projectview绑定的model
        self._projectmodel = QStandardItemModel(0, 3, self._projectview)
        self._projectmodel.setHorizontalHeaderLabels(["序号", "名称", "创建时间"])


        # self.initModel()

    def init(self):
        self.initModel()

    def initModel(self):
        projects = global_db.getProjects()
        self._projectmodel.clear()
        self._projectmodel.setHorizontalHeaderLabels(['序号', '项目名称', '创建时间'])
        for project in projects:
            qitem_id = QStandardItem()
            qitem_id.setText(str(project[0]))
            qitem_name = QStandardItem()
            qitem_name.setText(project[1])
            qitem_time = QStandardItem()
            qitem_time.setText(project[2])

            self._projectmodel.appendRow([qitem_id, qitem_name, qitem_time])
        self._projectview.setModel(self._projectmodel)

    # 与主窗口处的createProject拥有不同的返回流程
    def createProject(self):
        if self._projectcreatedialog.exec() == QDialog.Accepted:
            prjname = self._projectcreatedialog.getNameSetting()
            accstd = self._projectcreatedialog.getStdSetting()
            isactive = self._projectcreatedialog.getOpenSetting()
            global_db.initNewProject(prjname, isactive, accstd)
            # 直接进入项目
            if isactive == True:
                self.done(QDialog.Accepted)
            else:
                self.init()

    def selectProject(self):
        # 当用户未选定项目而点击选择按钮时，会抛出此异常
        try:
            index = self._projectview.selectionModel().selectedIndexes()[0]
            id = int(self._projectmodel.itemData(index).get(0))
            global_db.switchActiveProject(id)
            self.done(QDialog.Accepted)
        except:
            pass

    def renameProject(self):
        try:
            index = self._projectview.selectionModel().selectedIndexes()[0]
            id = int(self._projectmodel.itemData(index).get(0))
            if self._projectrenamedialog.exec() == QDialog.Accepted:
                newname = self._projectrenamedialog.getNewName()
                global_db.updateProjectName(id, newname)
                self.init()
        except Exception:
            pass

    def deleteProject(self):
        try:
            index = self._projectview.selectionModel().selectedIndexes()[0]
            id = int(self._projectmodel.itemData(index).get(0))
            if self._projectdeletedialog.exec() == QMessageBox.Ok:
                global_db.deleteProject(id)
                self.init()
        except Exception:
            pass