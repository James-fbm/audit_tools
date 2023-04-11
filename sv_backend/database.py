import sqlite3

import pandas as pd

global_db = sqlite3.connect("../data_cache", check_same_thread=False)


def get_active_stmt_data():
    cur = global_db.cursor()
    ls_stmtdata = []
    cur.execute('SELECT account_cls, open_balance, close_balance, open_amount, close_amount FROM basicstmtdata '
                'INNER JOIN projects ON basicstmtdata.projectid = projects.id WHERE projects.active = 1')
    for (account_cls, open_balance, close_balance, open_amount, close_amount) in cur.fetchall():
        ls_stmtdata.append({'报表科目': account_cls, '审定期初数': open_balance, '审定期末数': close_balance,
                            '审定上期发生额': open_amount, '审定发生额': close_amount})
    return ls_stmtdata


# 获取模板单元格定义，加载到template_default中
def init_template(str_stmt, str_account_standard, templateid: int):
    # 获取默认定义
    if templateid == 0:
        # 初始化：从account_meta中读取template单元格结构
        template = pd.read_excel('../account_meta1.xlsx', index_col='序号', sheet_name=str_account_standard,
                                         usecols=['序号', '项目名称', '类别', '别名', '审定期初数单元格',
                                                  '审定期末数单元格', '审定借方发生额单元格', '审定贷方发生额单元格'])
        if str_stmt == '资产负债表':
            template = template[template['类别'].isin(('资产', '负债', '权益'))]
        elif str_stmt == '利润表':
            template = template[template['类别'] == '损益']
        else:
            return
        template.to_excel('../template_cache.xlsx')
    else:
        # 重新编辑：从数据库中读取template单元格结构
        cur = global_db.cursor()
        cur.execute('SELECT * FROM celldefinition WHERE templateid = ?', [templateid])
        template = []
        for row in cur.fetchall():
            template.append(row[0:7])
        template = pd.DataFrame(template, columns = ['项目名称', '类别', '别名', '审定期初数单元格',
                                                     '审定期末数单元格', '审定借方发生额单元格', '审定贷方发生额单元格'])
        template.index.name = '序号'

    template.to_excel('../template_cache.xlsx', index=True)


def save_template_settings(templateid: int, update: bool):
    if update == True:
        global_db.execute('DELETE FROM celldefinition WHERE templateid = ?', [templateid])
        global_db.commit()
    template = pd.read_excel('../template_cache.xlsx', index_col='序号')
    template = template.reindex(columns=['项目名称', '别名', '类别', '审定期初数单元格', '审定期末数单元格',
                                         '审定借方发生额单元格', '审定贷方发生额单元格', '模板id'])
    template['模板id'] = templateid
    ls_template = template.values.tolist()
    global_db.executemany('INSERT INTO celldefinition VALUES(?,?,?,?,?,?,?,?)', ls_template)
    global_db.commit()

