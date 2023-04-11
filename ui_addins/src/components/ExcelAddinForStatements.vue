<template>
  <div>
    <el-divider>资产负债表(Excel)</el-divider>
    <div v-if="isInExcel">
      <el-form label-position="left" label-width="auto">
        <el-form-item label="选择工作表">
          <el-select v-model="selectedsheetname">
            <el-option v-for="sheet in sheetnamelist" :key="sheet.value" :label="sheet.label" :value="sheet.value">
            </el-option>
          </el-select>
        </el-form-item>
      </el-form>
      <el-row :span="24">
        <el-col :span="12">
          <el-button type="info" plain @click="writeStmtData">写入报表数据</el-button>
        </el-col>
        <el-col :span="12">
          <el-button type="info" plain @click="showsheetstructure">查看模板结构</el-button>
        </el-col>
      </el-row>
    </div>
    <div v-else>
      <h3>
        You are not using MS Excel.<br />
      </h3>
    </div>
    <el-dialog :visible.sync="dialog_showtemplatestructure" :fullscreen="true">
      <el-button type="primary" plain @click="dialog_showtemplatestructure = false">返回</el-button>
      <el-table :data="templatestructure" height="500">
        <el-table-column prop="项目名称" label="项目名称"></el-table-column>
        <el-table-column prop="类别" label="类别"></el-table-column>
        <el-table-column prop="别名" label="别名"></el-table-column>
        <el-table-column prop="审定期初数单元格" label="审定期初数单元格"></el-table-column>
        <el-table-column prop="审定期末数单元格" label="审定期末数单元格"></el-table-column>
      </el-table>
    </el-dialog>
  </div>
</template>

<script>
import axios from 'axios'
export default {
  name: 'ExcelAddinForBalanceSheet',
  inject: ['_stmtdata'],
  mounted() {
    this.isInExcel = typeof (window.Excel) != "undefined"
    window.Excel.run(async context => {
      let sheetcollection = context.workbook.worksheets
      sheetcollection.load('items')
      await context.sync()
      let sheetlist = sheetcollection.items
      for (let i = 0; i < sheetlist.length; ++i) {
        this.sheetnamelist.push({
          value: sheetlist[i].name,
          label: sheetlist[i].name
        })
      }
    })
  },
  data() {
    return {
      // stmtdata通过父组件响应式更新
      stmtdata: this._stmtdata,
      templatestructure: [],
      // 使用WorksheetCollection.getItemOrNullObject()方法时不可传入空字符串，故将其如此初始化
      selectedsheetname: '请选择',
      sheetnamelist: [],
      dialog_showtemplatestructure: false,
      isInExcel: false
    }
  },
  watch: {
    _stmtdata(newdata) {
      this.stmtdata = newdata
    },
    selectedsheetname(newsheetname, oldsheetname) {
      window.Excel.run(async context => {
        let sheetcollection = context.workbook.worksheets
        // 资产负债表的worksheet对象
        let sheetBS = sheetcollection.getItemOrNullObject(newsheetname)
        sheetBS.load('isNullObject')
        sheetBS.load('visibility')
        await context.sync()
        // 存在当前工作表，且当前工作表可见
        if (sheetBS.isNullObject == false && sheetBS.visibility == 'Visible') {
          sheetBS.activate()
        } else {
          this.$message({
            message: '无法跳转至当前选定工作表，该表可能不存在或是已被隐藏',
            type: 'error',
            duration: 2500
          })
          this.selectedsheetname = oldsheetname
        }
        await context.sync()
      })
    }
  },
  methods: {
    writeStmtData() {
      window.Excel.run(async context => {
        let sheet = context.workbook.worksheets.getActiveWorksheet()

        for (let i = 0; i < this.stmtdata.length; ++i) {
          let account_name = this.stmtdata[i]['报表科目']
          let open_balance = this.stmtdata[i]['审定期初数']
          let close_balance = this.stmtdata[i]['审定期末数']
          let open_balance_cell = ''
          let close_balance_cell = ''
          for (let j = 0; j < this.templatestructure.length; ++j) {
            if (this.templatestructure[j]['项目名称'] == account_name) {
              open_balance_cell = this.templatestructure[j]['审定期初数单元格']
              close_balance_cell = this.templatestructure[j]['审定期末数单元格']
              break
            }
          }
          console.log(open_balance_cell, close_balance_cell, open_balance, close_balance)
          if (open_balance_cell != 'NULL' && close_balance_cell != 'NULL') {
            open_balance_cell = sheet.getRange(open_balance_cell)
            close_balance_cell = sheet.getRange(close_balance_cell)
            open_balance_cell.values = [[open_balance]]
            close_balance_cell.values = [[close_balance]]
            await context.sync()
          }
        }

      })
    },
    showsheetstructure() {
      this.dialog_showtemplatestructure = true
      let _this = this
      axios({
        method: 'get',
        url: '/getdefaulttemplate',
        params: {
          '报表': '资产负债表',
        }
      }).then(function (response) {
        _this.templatestructure = response.data
      })
    }
  }
}
</script>