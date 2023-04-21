import sqlite3

import pandas as pd

global_db = sqlite3.connect("../program_files/database_sqlite", check_same_thread=False)


def manage_stmt_data(projectid):
    cur = global_db.cursor()
    cur.execute('SELECT account_cls, open_balance, close_balance, open_amount, close_amount FROM basicstmtdata '
                'WHERE projectid = ?', [projectid])
    ls_stmtdata = []
    for (account_cls, open_balance, close_balance, open_amount, close_amount) in cur.fetchall():
        ls_stmtdata.append((account_cls, open_balance, close_balance, open_amount, close_amount))
    df_stmtdata = pd.DataFrame(ls_stmtdata, columns=['项目名称', '审定期初数', '审定期末数',
                                                     '审定上期发生额单元格', '审定发生额单元格'])
    df_stmtdata.index.name = '序号'
    df_stmtdata.to_excel('../program_files/stmtdata_cache.xlsx', index=True)

def save_stmt_data(projectid):
    df_stmtdata = pd.read_excel("../program_files/stmtdata_cache.xlsx", index_col='序号')
    df_stmtdata['projectid'] = projectid
    arr_stmtdata = df_stmtdata.values
    global_db.execute('DELETE FROM basicstmtdata WHERE projectid = ?', [projectid])
    global_db.commit()
    global_db.executemany('INSERT INTO basicstmtdata VALUES(?,?,?,?,?,?)', arr_stmtdata)
    global_db.commit()


def update_calc_result(projectid, result):
    global_db.execute('DELETE FROM basicstmtdata WHERE projectid = ?', [projectid])
    global_db.commit()

    for i in range(len(result)):
        result[i].append(projectid)

    global_db.executemany('INSERT INTO basicstmtdata VALUES(?,?,?,?,?,?)', result)
    global_db.commit()


# 获取模板单元格定义，加载到template_default中
def init_template(str_stmt, str_account_standard, templateid: int):
    # 获取默认定义，用于初始化一个模板
    if templateid == 0:
        try:
            # 初始化：从account_meta中读取template单元格结构
            template = pd.read_excel('../program_files/account_meta1.xlsx', index_col='序号',
                                     sheet_name=str_account_standard, usecols=['序号', '项目名称', '类别', '别名',
                                        '审定期初数单元格','审定期末数单元格', '审定上期发生额单元格', '审定发生额单元格'])
        except Exception:
            return 1
        try:
            if str_stmt == '资产负债表':
                template = template[template['类别'].isin(('资产', '负债', '权益'))]
            elif str_stmt == '利润表':
                template = template[template['类别'] == '损益']
            else:
                return 2
            template.to_excel('../program_files/template_cache.xlsx')
            return 0
        except Exception:
            return 2
    # 从数据库中加载该模板的数据，用于重新边界模板数据
    else:
        try:
            # 重新编辑：从数据库中读取template单元格结构
            cur = global_db.cursor()
            cur.execute('SELECT * FROM celldefinition WHERE templateid = ?', [templateid])
            template = []
            for row in cur.fetchall():
                template.append(row[0:7])
            template = pd.DataFrame(template, columns = ['项目名称', '类别', '别名', '审定期初数单元格',
                                                         '审定期末数单元格', '审定上期发生额单元格', '审定发生额单元格'])
            template.index.name = '序号'

            template.to_excel('../program_files/template_cache.xlsx', index=True)
            return 0
        except Exception:
            return 3


def save_template_settings(templateid: int, update: bool):
    try:
        if update == True:
            global_db.execute('DELETE FROM celldefinition WHERE templateid = ?', [templateid])
            global_db.commit()
        template = pd.read_excel('../program_files/template_cache.xlsx', index_col='序号')
        template.dropna(axis=0, how='all', inplace=True)
        template = template.reindex(columns=['项目名称', '别名', '类别', '审定期初数单元格', '审定期末数单元格',
                                             '审定上期发生额单元格', '审定发生额单元格', '模板id'])
        template['模板id'] = templateid
        ls_template = template.values.tolist()
        global_db.executemany('INSERT INTO celldefinition VALUES(?,?,?,?,?,?,?,?)', ls_template)
        global_db.commit()
        return 0
    except Exception:
        return 1

##############################################################################################################
##############################################################################################################
##############################################################################################################

def get_active_stmt_data(hidezero):
    cur = global_db.cursor()
    ls_stmtdata = []
    if hidezero == 'false':
        cur.execute('SELECT account_cls, open_balance, close_balance, open_amount, close_amount FROM basicstmtdata '
                    'INNER JOIN projects ON basicstmtdata.projectid = projects.id WHERE projects.active = 1')
    else:
        cur.execute('SELECT account_cls, open_balance, close_balance, open_amount, close_amount FROM basicstmtdata '
                    'INNER JOIN projects ON basicstmtdata.projectid = projects.id WHERE projects.active = 1 AND '
                    '(basicstmtdata.open_balance != 0 OR basicstmtdata.close_balance != 0 OR '
                    'basicstmtdata.open_amount != 0 OR basicstmtdata.close_amount != 0)')
    for (account_cls, open_balance, close_balance, open_amount, close_amount) in cur.fetchall():
        ls_stmtdata.append({'account_cls': account_cls, 'open_balance': open_balance, 'close_balance': close_balance,
                            'open_amount': open_amount, 'close_amount': close_amount})
    return ls_stmtdata

def get_templates(category):
    cur = global_db.cursor()
    ls_templates = []
    cur.execute('SELECT id, name, account_std FROM templates WHERE category = ?', [category])
    for (id, name, account_std) in cur.fetchall():
        ls_templates.append({'id': id, 'name': name, 'account_std': account_std})
    return ls_templates

def get_template_structure(templateid):
    cur = global_db.cursor()
    ls_templatestructure = []
    cur.execute('SELECT * FROM celldefinition WHERE templateid = ?', [templateid])
    for (account_name, account_alias, account_category, open_balance_cell, close_balance_cell,
        open_amount_cell, close_amount_cell, templateid) in cur.fetchall():
        ls_templatestructure.append({'account_name': account_name, 'account_alias': account_alias,
                                     'account_category': account_category, 'open_balance_cell': open_balance_cell,
                                     'close_balance_cell': close_balance_cell, 'open_amount_cell': open_amount_cell,
                                     'close_amount_cell': close_amount_cell})
    return ls_templatestructure