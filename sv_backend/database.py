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


# 根据会计准则和报表项目类型，获取默认模板结构
def get_active_default_template(str_stmt, str_account_standard):
    template_default = pd.read_excel('C:/Users/a1595/Desktop/audit_tools/sv_backend/account_meta1.xlsx',
                                     index_col='序号', sheet_name=str_account_standard,
                                     usecols=['序号', '项目名称', '类别', '别名', '审定期初数单元格',
                                            '审定期末数单元格', '审定借方发生额单元格', '审定贷方发生额单元格'])
    template_default.fillna('NULL', inplace=True)
    if str_stmt == '资产负债表':
        template_default = template_default[template_default['类别'].isin(('资产', '负债', '权益'))]
    elif str_stmt == '利润表':
        template_default = template_default[template_default['类别'] == '损益']
    else:
        return []
    dict_template_default = template_default.T.to_dict()
    ls_template_default = []
    for seq in dict_template_default.keys():
        ls_template_default.append(dict_template_default[seq])
    return ls_template_default
