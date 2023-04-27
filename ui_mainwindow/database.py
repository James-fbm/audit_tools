import os

from PySide6.QtSql import QSqlDatabase, QSqlQuery


class DataBase():
    def __init__(self, dbname: str):
        super().__init__()
        self._default_filelinks = {
            # 'FILLED'填充文件类别项目，这些项目不应有磁盘文件链接
            "基本表": ['FILLED', 'NONE'],
            "会计报表": ['FILLED', 'NONE'],
            "审计报告": ['FILLED', 'NONE'],
            "科目余额表": ['', '*xltx *.xltm *.xlsx *.xlsm'],
            "报表项目映射表": ['', '*.txt'],
            "合订报表": [os.path.abspath(os.path.join(os.pardir, 'program_files',
                                                      'FS Audited 2021_Template（适用于已执行新收入、金融、租赁准则的企业及小企业）.xltx')),
                         '*.xltx *.xltm *.xlsx *.xlsm'],
            "附注": [os.path.abspath(os.path.join(os.pardir, 'program_files',
                                                  'Notes to FS 2022_CN_Template.dotx')), '*.dotx *.dotm *.docx *.docm']
        }

        self._db = QSqlDatabase.addDatabase("QSQLITE", "sqlite_connection")
        self._db.setDatabaseName(dbname)
        self._db.open()
        self._max_projectid = 0
        self._active_projectid = 0
        self._max_templateid = 0
        self._max_notetemplateid = 0

    # 初始化数据库和数据表
    def checkDataBase(self):
        query = QSqlQuery(db=self._db)
        # 如果不存在这三个表，则创建新表
        query.exec('CREATE TABLE IF NOT EXISTS projects(id INTEGER UNIQUE, name TEXT, active BOOLEAN, '
                   'account_std TEXT, create_time DATETIME)')
        query.exec('CREATE TABLE IF NOT EXISTS filelinks(filename TEXT, link TEXT, filter TEXT, '
                   'projectid INTEGER, UNIQUE(filename, projectid))')
        # '审定期初数': xxx, '审定期末数': xxx, '审定上期发生额': xxx, '审定发生额': xxx
        query.exec('CREATE TABLE IF NOT EXISTS basicstmtdata(account_cls TEXT, open_balance REAL, close_balance REAL,'
                   ' open_amount REAL, close_amount REAL, projectid INTEGER, UNIQUE(account_cls, projectid))')
        query.exec('CREATE TABLE IF NOT EXISTS templates(id INTEGER UNIQUE, name TEXT, account_std TEXT, '
                   'category TEXT, create_time DATETIME, open_balance_alias TEXT, close_balance_alias TEXT, '
                   'open_amount_alias TEXT, close_amount_alias TEXT)')
        query.exec('CREATE TABLE IF NOT EXISTS celldefinition(account_name TEXT, account_alias TEXT, '
                   'account_category TEXT, open_balance_cell TEXT, close_balance_cell TEXT, open_amount_cell TEXT,  '
                   'close_amount_cell TEXT, templateid INTEGER)')
        query.exec('CREATE TABLE IF NOT EXISTS notetemplates(id INTEGER UNIQUE, name TEXT, '
                   'account_std TEXT, create_time DATETIME)')
        query.exec('CREATE TABLE IF NOT EXISTS tabledefinition(account_name TEXT, account_title TEXT,'
                   'open_balance_rowloc TEXT, open_balance_rowoffset INTEGER,'
                   'open_balance_colloc TEXT, open_balance_coloffset INTEGER,'
                   'close_balance_rowloc TEXT, close_balance_rowoffset INTEGER,'
                   'close_balance_colloc TEXT, close_balance_coloffset INTEGER,'
                   'open_amount_rowloc TEXT, open_amount_rowoffset INTEGER,'
                   'open_amount_colloc TEXT, open_amount_coloffset INTEGER,'
                   'close_amount_rowloc TEXT, close_amount_rowoffset INTEGER,'
                   'close_amount_colloc TEXT, close_amount_coloffset INTEGER, templateid INTEGER)')

        self._max_projectid = self.getMaxProjectIDFromDB()
        self._active_projectid = self.getActiveProjectIDFromDB()
        self._max_templateid = self.getMaxTemplateIDFromDB()
        self._max_notetemplateid = self.getMaxNoteTemplateIDFromDB()

        # 没有激活的项目，则返回1
        if self._active_projectid == 0:
            return 1
        else:
            return 0

    def getMaxProjectIDFromDB(self):
        maxprojectid = 0
        query = QSqlQuery(db=self._db)
        query.exec('SELECT * FROM (SELECT MAX(id) AS maxprojectid FROM projects) WHERE maxprojectid IS NOT NULL')
        while query.next():
            maxprojectid = query.value("maxprojectid")
        return maxprojectid

    def getActiveProjectIDFromDB(self):
        activeprojectid = 0
        query = QSqlQuery(db=self._db)
        query.exec('SELECT * FROM (SELECT id AS activeprojectid FROM projects WHERE active=1) '
                   'WHERE activeprojectid IS NOT NULL')
        while query.next():
            activeprojectid = query.value("activeprojectid")
        return activeprojectid

    def getActiveProjectID(self):
        return self._active_projectid

    def getProjectFromDB(self, id=None, active=False):
        query = QSqlQuery(db=self._db)
        if id is None and active == False:
            projects = []
            query.exec('SELECT * FROM projects')
            while query.next():
                projects.append(
                    (query.value('id'), query.value('name'), query.value('account_std'), query.value('create_time')))
            return projects
        else:
            project = {}
            if id is not None:
                query.prepare('SELECT * FROM projects WHERE id = :id')
                query.bindValue(':id', id)
                query.exec()
            elif active == True:
                query.exec('SELECT * FROM projects WHERE active = True')
            else:
                return
            while query.next():
                project['id'] = query.value('id')
                project['name'] = query.value('name')
                project['account_std'] = query.value('account_std')
                project['create_time'] = query.value('create_time')
            return project

    def getTemplateFromDB(self, id=None, stmtcategory=None):
        query = QSqlQuery(db=self._db)
        if id is not None:
            template = {}
            query.prepare('SELECT * FROM templates WHERE id = :id')
            query.bindValue(':id', id)
            query.exec()
            while query.next():
                template['id'] = query.value('id')
                template['name'] = query.value('name')
                template['account_std'] = query.value('account_std')
                template['category'] = query.value('category')
                template['create_time'] = query.value('create_time')
                template['open_balance_alias'] = query.value('open_balance_alias')
                template['close_balance_alias'] = query.value('close_balance_alias')
                template['open_amount_alias'] = query.value('open_amount_alias')
                template['close_amount_alias'] = query.value('close_amount_alias')
            return template
        elif stmtcategory is not None:
            templates = []
            query.prepare('SELECT * FROM templates INNER JOIN projects ON templates.account_std = projects.account_std '
                          'WHERE projects.active=1 AND templates.category=:category')
            query.bindValue(':category', stmtcategory)
            query.exec()
            while query.next():
                templates.append((query.value('id'), query.value('name'), query.value('category'),
                                  query.value('create_time')))
            return templates
        else:
            pass

    def getMaxTemplateIDFromDB(self):
        maxtemplateid = 0
        query = QSqlQuery(db=self._db)
        query.exec('SELECT * FROM (SELECT MAX(id) AS maxtemplateid FROM templates) WHERE maxtemplateid IS NOT NULL')
        while query.next():
            maxtemplateid = query.value("maxtemplateid")
        return maxtemplateid

    def getMaxTemplateID(self):
        return self._max_templateid

    def getNoteTemplateFromDB(self, id=None):
        query = QSqlQuery(db=self._db)
        if id is not None:
            template = {}
            query.prepare('SELECT * FROM notetemplates WHERE id = :id')
            query.bindValue(':id', id)
            query.exec()
            while query.next():
                template['id'] = query.value('id')
                template['name'] = query.value('name')
                template['account_std'] = query.value('account_std')
                template['create_time'] = query.value('create_time')
            return template
        else:
            templates = []
            query.prepare('SELECT * FROM notetemplates INNER JOIN projects '
                          'ON notetemplates.account_std = projects.account_std WHERE projects.active=1')
            query.exec()
            while query.next():
                templates.append((query.value('id'), query.value('name'), query.value('create_time')))
            return templates

    def getMaxNoteTemplateID(self):
        return self._max_notetemplateid

    def getMaxNoteTemplateIDFromDB(self):
        maxtemplateid = 0
        query = QSqlQuery(db=self._db)
        query.exec('SELECT * FROM (SELECT MAX(id) AS maxtemplateid FROM notetemplates) WHERE maxtemplateid IS NOT NULL')
        while query.next():
            maxtemplateid = query.value("maxtemplateid")
        return maxtemplateid

    def getFileLink(self):
        filelink = {}
        query = QSqlQuery(db=self._db)
        query.prepare('SELECT * FROM filelinks WHERE projectid = :projectid')
        query.bindValue(':projectid', self._active_projectid)
        query.exec()
        while query.next():
            filelink[query.value('filename')] = [query.value('link'), query.value('filter')]
        return filelink

    def initNewProject(self, name: str, active: bool, account_std: str):
        self._max_projectid += 1
        # 创建项目时是否跳转到该项目
        # 若未设置项目名，则设定其默认名
        if name == '':
            name = '新项目' + str(self._max_projectid)

        query = QSqlQuery(db=self._db)
        # 创建项目时是否跳转到该项目
        if active == True:
            q = 'UPDATE projects SET active = 0'
            query.exec(q)
            self._active_projectid = self._max_projectid
        # 向projects表插入新项目
        q = "INSERT INTO projects(id, name, active, account_std, create_time) VALUES (:id, :name, :active," \
            " :account_std, datetime('now', 'localtime'))"
        query.prepare(q)
        query.bindValue(':id', self._max_projectid)
        query.bindValue(':name', name)
        query.bindValue(':active', active)
        query.bindValue(':account_std', account_std)
        query.exec()

        # 初始化新项目中文件项的默认磁盘链接
        for filename in self._default_filelinks.keys():
            q = 'INSERT OR IGNORE INTO filelinks(filename, link, filter, projectid) ' \
                'VALUES(:filename, :link, :filter, :projectid)'
            query.prepare(q)
            query.bindValue(':filename', filename)
            query.bindValue(':link', self._default_filelinks[filename][0])
            query.bindValue(':filter', self._default_filelinks[filename][1])
            query.bindValue(':projectid', self._max_projectid)
            query.exec()

    # 参数太多，用字典传参
    def initNewTemplate(self, settings):
        self._max_templateid += 1
        if settings['模板名称'] == '':
            settings['模板名称'] = 'template' + str(self._max_templateid)
        query = QSqlQuery(db=self._db)
        q = "INSERT INTO templates VALUES(:id, :name, :account_std, :category, datetime('now', 'localtime'), " \
            ":open_balance_alias, :close_balance_alias, :open_amount_alias, :close_amount_alias)"
        query.prepare(q)
        query.bindValue(':id', self._max_templateid)
        query.bindValue(':name', settings['模板名称'])
        query.bindValue(':account_std', settings['会计准则'])
        query.bindValue(':category', settings['报表类别'])
        query.bindValue(':open_balance_alias', settings['审定期初数'])
        query.bindValue(':close_balance_alias', settings['审定期末数'])
        query.bindValue(':open_amount_alias', settings['审定上期发生额'])
        query.bindValue(':close_amount_alias', settings['审定发生额'])
        query.exec()

    def initNewNoteTemplate(self, settings):
        self._max_notetemplateid += 1
        if settings['模板名称'] == '':
            settings['模板名称'] = 'template' + str(self._max_notetemplateid)
        query = QSqlQuery(db=self._db)
        q = "INSERT INTO notetemplates VALUES(:id, :name, :account_std, datetime('now', 'localtime')) "
        query.prepare(q)
        query.bindValue(':id', self._max_notetemplateid)
        query.bindValue(':name', settings['模板名称'])
        query.bindValue(':account_std', settings['会计准则'])
        query.exec()

    def updateFileLink(self, filename, filelink):
        query = QSqlQuery(db=self._db)
        q = 'UPDATE filelinks SET link = :link WHERE filename = :filename AND projectid = :projectid'
        query.prepare(q)
        query.bindValue(':link', filelink)
        query.bindValue(':filename', filename)
        query.bindValue(':projectid', self._active_projectid)
        query.exec()

    def updateAccountStd(self, id: int, account_std: str):
        query = QSqlQuery(db=self._db)
        q = 'UPDATE projects SET account_std = :account_std WHERE id = :id'
        query.prepare(q)
        query.bindValue(':account_std', account_std)
        if id is None:
            query.bindValue(':id', self._active_projectid)
        else:
            query.bindValue(':id', id)
        query.exec()

    def updateTemplate(self, settings):
        query = QSqlQuery(db=self._db)
        q = "UPDATE templates SET name=:name, account_std=:account_std, category=:category," \
            "open_balance_alias=:open_balance_alias, close_balance_alias=:close_balance_alias," \
            "open_amount_alias=:open_amount_alias, close_amount_alias=:close_amount_alias WHERE id=:id"
        query.prepare(q)
        query.bindValue(':id', settings['序号'])
        query.bindValue(':name', settings['模板名称'])
        query.bindValue(':account_std', settings['会计准则'])
        query.bindValue(':category', settings['报表类别'])
        query.bindValue(':open_balance_alias', settings['审定期初数'])
        query.bindValue(':close_balance_alias', settings['审定期末数'])
        query.bindValue(':open_amount_alias', settings['审定上期发生额'])
        query.bindValue(':close_amount_alias', settings['审定发生额'])
        query.exec()

    def updateNoteTemplate(self, settings):
        query = QSqlQuery(db=self._db)
        q = "UPDATE notetemplates SET name=:name WHERE id=:id"
        query.prepare(q)
        query.bindValue(':id', settings['序号'])
        query.bindValue(':name', settings['模板名称'])
        query.exec()

    def switchActiveProject(self, activeid: int):
        query = QSqlQuery(db=self._db)
        query.exec('UPDATE projects SET active = 0')
        q = 'UPDATE projects SET active = 1 WHERE id = :id'
        query.prepare(q)
        query.bindValue(':id', activeid)
        query.exec()
        self._active_projectid = activeid

    def updateProjectName(self, id: int, name: str):
        query = QSqlQuery(db=self._db)
        q = 'UPDATE projects SET name = :name WHERE id = :id'
        query.prepare(q)
        query.bindValue(':name', name)
        query.bindValue(':id', id)
        query.exec()

    def deleteProject(self, id: int):
        query = QSqlQuery(db=self._db)
        q = 'DELETE FROM projects where id = :id'
        query.prepare(q)
        query.bindValue(':id', id)
        query.exec()
        q = 'DELETE FROM filelinks WHERE projectid = :id'
        query.prepare(q)
        query.bindValue(':id', id)
        query.exec()
        q = 'DELETE FROM basicstmtdata WHERE projectid = :id'
        query.prepare(q)
        query.bindValue(':id', id)
        query.exec()
        if self._active_projectid == id:
            self._active_projectid = 0

    def deleteTemplate(self, id: int):
        query = QSqlQuery(db=self._db)
        q = 'DELETE FROM templates WHERE id = :id'
        query.prepare(q)
        query.bindValue(':id', id)
        query.exec()
        q = 'DELETE FROM celldefinition WHERE templateid = :id'
        query.prepare(q)
        query.bindValue(':id', id)
        query.exec()

    def deleteNoteTemplate(self, id: int):
        query = QSqlQuery(db=self._db)
        q = 'DELETE FROM notetemplates WHERE id = :id'
        query.prepare(q)
        query.bindValue(':id', id)
        query.exec()
        q = 'DELETE FROM tabledefinition WHERE templateid = :id'
        query.prepare(q)
        query.bindValue(':id', id)
        query.exec()


global_db = DataBase('../program_files/database_sqlite')
