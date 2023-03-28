<template>
    <div v-if="isInExcel">
        <button @click="setColor()">变！</button><br />
    </div>
    <div v-else>
        <h3>
            You are not using MS Excel.<br />
        </h3>
    </div>
</template>

<script>
export default {
    name: 'ExcelAddinForBalanceSheet',
    inject: ['_stmtdata'],
    watch: {
        _stmtdata(newdata) {
            this.stmtdata = newdata
        }
    },
    data() {
        return {
            stmtdata: this._stmtdata
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
                let sheetcol = context.workbook.worksheets
                let sheet = sheetcol.getItem("1-BS_CN")
                sheet.activate()
                let range = sheet.getRange("E7")
                range.values = [[592]]
                range.format.autofitColumns();
                await context.sync();
            });
        }
    }
}
</script>