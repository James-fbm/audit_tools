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
          <el-button type="info" plain @click="dialog_setsheetstructure = true">设置报表结构</el-button>
        </el-col>
      </el-row>
    </div>
    <div v-else>
      <h3>
        You are not using MS Excel.<br />
      </h3>
    </div>
    <el-dialog :visible.sync="dialog_showdatamap" :fullscreen="true">
      <el-button type="primary" plain @click="dialog_showdatamap = false">返回</el-button>
    </el-dialog>
    <el-dialog :visible.sync="dialog_setsheetstructure" :fullscreen="true">
      <el-button type="primary" plain @click="dialog_setsheetstructure = false">返回</el-button>
      <el-button type="primary" plain @click="setSheetStructure">初始化结构描述表</el-button>
      <el-divider>设置栏目别名</el-divider>
      <el-form label-position="top" :inline="true">
        <el-form-item label="审定期初数">
          <el-input v-model="alias_openbalance"></el-input>
        </el-form-item>
        <el-form-item label="审定期末数">
          <el-input v-model="alias_closebalance"></el-input>
        </el-form-item>
      </el-form>
      <el-divider>结构描述表</el-divider>
    </el-dialog>
  </div>
</template>

<script>
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
      datamap: [],
      // 使用WorksheetCollection.getItemOrNullObject()方法时不可传入空字符串，故将其如此初始化
      selectedsheetname: '请选择',
      selectedsheetitem: null,
      sheetnamelist: [],
      alias_openbalance: '期初余额',
      alias_closebalance: '期末余额',
      dialog_showdatamap: false,
      dialog_setsheetstructure: false,
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
          this.selectedsheetitem = sheetBS
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
  // computed: {
  //   isInExcel: function () {
  //     return (typeof (window.Excel) != "undefined")
  //   }
  // },
  methods: {
    writeStmtData() {
      console.log('写')
      console.log(this.selectedsheetitem)
      if (this.selectedsheetitem == null) {
        this.$message({
            message: '请选择工作表',
            type: 'error',
            duration: 2500
          })
      } else {
        console.log('prepare write')
      }
    },
    setSheetStructure() {
      // for (let i = 0 ; i < this.stmtdata.length ; ++i) {
      //   let accname = this.stmtdata[i]['报表科目']
      //   let mapsheetname = accname
      // }
      window.Excel.run(async context => {
        this.dialog_setsheetstructure = true
        rg = this.selectedsheetitem.findAllOrNullObject('应收账款', null)
        
        await context.sync()
      })
    }
  }
}
</script>