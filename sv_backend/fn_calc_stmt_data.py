import numpy as np
import pandas as pd
import os
import re
import sys
import json

'''
# 系统相对路径
str_relative_path = 'C:/Users/a1595/Desktop/audit_tools'
# 由鼎信诺自动生成的报表项目对应科目映射表，由用户指定文件路径。
# 此处路径用于测试read_account_map功能
str_account_map_path_18 = str_relative_path + '/test_映射表/18_小企业_映射表.txt'
str_account_map_path_19 = str_relative_path + '/test_映射表/19_小企业_映射表.txt'
str_account_map_path_20 = str_relative_path + '/test_映射表/20_小企业_映射表.txt'
str_account_map_path_21 = str_relative_path + '/test_映射表/21_企业_映射表.txt'
str_account_map_path_22 = str_relative_path + '/test_映射表/22_企业_映射表.txt'

# 此处路径用于测试calc_stmt_data功能
str_account_table_path_18 = str_relative_path + '/test_科目余额表/18_科目余额表.xlsx'
str_account_table_path_19 = str_relative_path + '/test_科目余额表/19_科目余额表.xlsx'
str_account_table_path_20 = str_relative_path + '/test_科目余额表/20_科目余额表.xlsx'
str_account_table_path_21 = str_relative_path + '/test_科目余额表/21_科目余额表.xlsx'
str_account_table_path_22 = str_relative_path + '/test_科目余额表/22_科目余额表.xlsx'
'''

# 读取报表项目对应科目映射表，并生成处理后数据结构。参数为映射表的路径和会计制度，由用户指定。
# 返回值格式为：({报表科目1: (报表科目1编号, [一级科目1编号, ...], 借贷方向1), ...}, 函数返回状态)；示例如下：
# ({'货币资金': (1001, [1001, 1002], '借'), '货币资金-现金': (100101, [1001], '借'), ...}, 0)
def read_account_map(str_account_map_path, str_account_standard):
    # 系统内模板，格式固定，包含了报表项目对应一级科目映射表数据。
    if str_account_standard == '企业会计准则' or str_account_standard == '2011年小企业会计准则':
        try:
            df_account_meta_dxn = pd.read_excel('account_meta1.xlsx', sheet_name=str_account_standard, index_col='序号',
                        usecols=['序号', '项目名称', '借贷方向', '项目编号'])
        except Exception:
            return ({}, 1)
    else:
        return ({}, 2)
    try:
        fl_account_map = open(str_account_map_path, 'r')
    except Exception:
        return ({}, 3)
    try:
        dict_account_map = {}
        # 报表项目对应一级科目映射表所有行字符串所组成的列表
        ls_lines_account_map = fl_account_map.readlines()
        for str_iter_line in ls_lines_account_map:
            # 鼎信诺导出文件的某一行的格式示例如下：
            # '1\t7\t0\t1\t1001\t余\t\t\t\n'
            # 这一步将其转化为
            # '1,7,0,1,1001,余,\n'
            str_line = re.sub('[\t]+', ',', str_iter_line)
            # 以逗号作为表项的分隔符
            ls_item_line_iter = str_line.split(',')
            # 第四个项是df_account_id中所读取的报表项目顺序seq值
            num_account_seq_dxn_iter = int(ls_item_line_iter[3])
            # 读取得到该顺序seq值对应的报表项目元数据
            df_account_meta_dxn_iter = df_account_meta_dxn.loc[num_account_seq_dxn_iter]
            num_account_id_dxn_iter = df_account_meta_dxn_iter.loc['项目编号']
            str_account_name_dxn_iter = df_account_meta_dxn_iter.loc['项目名称']
            str_account_direct_dxn_iter = df_account_meta_dxn_iter.loc['借贷方向']
            # 第五个项是鼎信诺中设定的报表项目所对应的一级科目编号
            num_account_id_set_iter = int(ls_item_line_iter[4])
            if str_account_name_dxn_iter in dict_account_map.keys():
                dict_account_map[str_account_name_dxn_iter][1].append(num_account_id_set_iter)
            else:
                # 新建字典项，报表项目名称为key值
                dict_account_map[str_account_name_dxn_iter] = (
                num_account_id_dxn_iter, [num_account_id_set_iter], str_account_direct_dxn_iter)
        fl_account_map.close()
        return (dict_account_map, 0)
    except Exception:
        fl_account_map.close()
        return ({}, 4)


# 读取科目余额表，根据read_account_map函数返回值，生成会计报表基本数据
# ([{'报表科目': '货币资金', '审定期初数': 2601719.61, '审定期末数': 5024455.83, '审定上期发生额': 1185569.72, '审定发生额': 2410168.68}, ...], 0)
def calc_stmt_data(str_account_table_path, str_account_map_path, str_account_standard):
    try:
        df_account_table = pd.read_excel(str_account_table_path,
                                         usecols=['科目编号', '科目名称', '科目类别', '借贷方向', '审定期初数',
                                                  '审定期末数', '审定上期发生额', '审定发生额'])
        df_account_table.fillna(0, inplace=True)
    except Exception:
        return ([], 5)
    tp_read_account_map_return = read_account_map(str_account_map_path, str_account_standard)
    # 详见read_account_map()函数的返回值
    dict_account_map = tp_read_account_map_return[0]
    num_read_account_map_return_status = tp_read_account_map_return[1]
    if num_read_account_map_return_status != 0:
        return ([], num_read_account_map_return_status)
    ls_stmt_data = []
    try:
        for str_account_name_iter in dict_account_map.keys():
            dict_stmt_data_iter = {}
            tp_account_item_iter = dict_account_map[str_account_name_iter]
            # 该报表科目所包含的所有一级科目
            ls_account_id_map_iter = tp_account_item_iter[1]
            # 该报表科目的借贷方向
            str_account_direct = tp_account_item_iter[2]
            df_account_map_iter = df_account_table[df_account_table['科目编号'].isin(ls_account_id_map_iter)]
            # 该报表科目所包含的、借贷方向与报表科目一致的所有一级科目
            df_account_map_direct_cons_iter = df_account_map_iter[df_account_map_iter['借贷方向'] == str_account_direct]
            # 该报表科目所包含的、借贷方向与报表科目不一致的所有一级科目
            df_account_map_direct_incons_iter = df_account_map_iter[
                df_account_map_iter['借贷方向'] != str_account_direct]
            # 分别将借贷方向一致以及不一致的所有一级科目相加
            sr_account_map_diect_cons_sum_iter = df_account_map_direct_cons_iter[
                ['审定期初数', '审定期末数', '审定上期发生额', '审定发生额']].sum()
            sr_account_map_direct_incons_sum_iter = df_account_map_direct_incons_iter[
                ['审定期初数', '审定期末数', '审定上期发生额', '审定发生额']].sum()
            # 最终对上述两个结果再求和：借贷方向一致的结果取原值；不一致的取相反数
            sr_account_map_sum_iter = sr_account_map_diect_cons_sum_iter - sr_account_map_direct_incons_sum_iter
            # 将求和结果保留两位小数并存于字典中
            dict_stmt_data_iter['报表科目'] = str_account_name_iter
            dict_stmt_data_iter['审定期初数'] = round(sr_account_map_sum_iter['审定期初数'], 2)
            dict_stmt_data_iter['审定期末数'] = round(sr_account_map_sum_iter['审定期末数'], 2)
            dict_stmt_data_iter['审定上期发生额'] = round(sr_account_map_sum_iter['审定上期发生额'], 2)
            dict_stmt_data_iter['审定发生额'] = round(sr_account_map_sum_iter['审定发生额'], 2)
            ls_stmt_data.append(dict_stmt_data_iter)
        return (ls_stmt_data, 0)
    except Exception:
        return ([], 6)

'''
if __name__ == '__main__':
    try:
        str_stmt_data_file_path = sys.argv[1]
        str_account_table_path = sys.argv[2]
        str_account_map_path = sys.argv[3]
        num_account_standard = int(sys.argv[4])
    except Exception:
        sys.exit(7)
    tp_calc_stmt_data_return = calc_stmt_data(str_account_table_path, str_account_map_path, num_account_standard)
    dict_stmt_data = tp_calc_stmt_data_return[0]
    num_calc_stmt_data_return_status = tp_calc_stmt_data_return[1]
    if num_calc_stmt_data_return_status != 0:
        sys.exit(num_calc_stmt_data_return_status)
    try:
        fl_stmt_data_file = open(str_stmt_data_file_path, "w+", encoding='utf-8')
    except Exception:
        sys.exit(8)
    try:
        json.dump(dict_stmt_data, fl_stmt_data_file, ensure_ascii=False, indent=2)
    except Exception:
        fl_stmt_data_file.close()
        sys.exit(9)
    fl_stmt_data_file.close()
    sys.exit(0)

#  python fn_calc_stmt_data.py ./output.json ../test_科目余额表/21_科目余额表.xlsx ../test_映射表/21_企业_映射表.txt 1
'''