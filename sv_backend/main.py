import json

from flask import Flask, g, request

from database import *
from fn_calc_stmt_data import calc_stmt_data

app = Flask(__name__)


# ui_mainwindow向此处发请求，用于计算报表数据
@app.route('/calcstmtdata', methods=['POST'])
def calcStmtData():
    requestdata = request.get_json()
    id = int(requestdata['id'])
    flink_balance = requestdata['科目余额表']
    flink_map = requestdata['报表项目映射表']
    account_std = requestdata['会计准则']
    calc_result = calc_stmt_data(flink_balance, flink_map, account_std)
    if calc_result[1] == 0:
        update_calc_result(id, calc_result[0])
    return str(calc_result[1])


@app.route('/managestmtdata', methods=['POST'])
def manageStmtData():
    requestdata = request.get_json()
    projectid = int(requestdata['projectid'])
    try:
        manage_stmt_data(projectid)
        return json.dumps({'execute': 0})
    except Exception:
        return json.dumps({'execute': 1})


@app.route('/savestmtdata', methods=['POST'])
def saveStmtData():
    requestdata = request.get_json()
    projectid = int(requestdata['projectid'])
    try:
        save_stmt_data(projectid)
        return json.dumps({'execute': 0})
    except Exception:
        return json.dumps({'execute': 1})
    # save_stmt_data(projectid)
    # return json.dumps({'execute': 0})


@app.route('/inittemplate', methods=['POST'])
def initTemplate():
    try:
        rq = request.get_json()
        stmt = rq['报表']
        account_std = rq['会计准则']
        templateid = int(rq['templateid'])
    except Exception:
        return json.dumps({'request': 1, 'execute': -1})

    status = init_template(stmt, account_std, templateid)
    return json.dumps({'request': 0, 'execute': status}, ensure_ascii=False)


# 将template_cache中的数据存入数据库
@app.route('/savetemplatesettings', methods=['POST'])
def saveTemplateSettings():
    try:
        rq = request.get_json()
        templateid = int(rq['templateid'])
        update = bool(rq['update'])
    except Exception:
        return json.dumps({'request': 1, 'execute': 1})
    status = save_template_settings(templateid, update)
    return json.dumps({'request': 0, 'execute': status}, ensure_ascii=False)


#################################################################
#################################################################
#################################################################

# ui_addins向此处发请求，用于获取报表数据
@app.route('/getstmtdata', methods=['GET'])
def getStmtData():
    hidezero = request.args.get('hidezero')
    ls_stmtdata = get_active_stmt_data(hidezero)
    return json.dumps(ls_stmtdata, ensure_ascii=False)


@app.route('/gettemplates', methods=['GET'])
def getTemplates():
    category = request.args.get('报表')
    return json.dumps(get_templates(category), ensure_ascii=False)


@app.route('/gettemplatestructure', methods=['GET'])
def getTemplateStructure():
    templateid = int(request.args.get('templateID'))
    return json.dumps(get_template_structure(templateid), ensure_ascii=False)


if __name__ == '__main__':
    app.run(host='127.0.0.1', port=8080)
    # serve(app, host='127.0.0.1', port=8080)
