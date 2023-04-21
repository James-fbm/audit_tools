<template>
  <div>
    <el-divider>附注中间文件(Excel)</el-divider>
    <div v-if="isInExcel">
      <button @click="setColor()">turn green</button><br />
    </div>
    <div v-else>
      <h3>
        You are not using MS Excel.<br />
      </h3>
    </div>
  </div>
</template>
  
<script>
export default {
  name: 'ExcelAddinForNote',
  inject: ['_stmtdata', '_hidezerorows'],
  watch: {
    _stmtdata(newdata) {
      this.stmtdata = newdata
    },
    _hidezerorows(ifhidezero) {
      this._hidezerorows = ifhidezero
    }
  },
  data() {
    return {
      stmtdata: this._stmtdata,
      hidezerorows: this._hidezerorows
    }
  },
  computed: {
    isInExcel: function () {
      return (typeof (window.Excel) != "undefined")
    }
  },
  methods: {
    setColor() {
      window.Excel.run(async context => {
        const range = context.workbook.getSelectedRange();
        range.format.fill.color = 'green';
        await context.sync();
      });
    }
  }
};
</script>