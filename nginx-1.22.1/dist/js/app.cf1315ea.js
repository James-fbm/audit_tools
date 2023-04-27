(function(){"use strict";var t={635:function(t,e,a){var l=function(){var t=this,e=t._self._c;return e("div",{attrs:{id:"app"}},[e("div",[e("el-menu",{attrs:{router:"",mode:"vertical","background-color":"#F8F8FF","text-color":"#000000","active-text-color":"#FA8072"}},[e("el-menu-item",{attrs:{index:"excel-add-in-for-statements"}},[t._v("报表(Excel)")]),e("el-menu-item",{attrs:{index:"word-add-in-for-note"}},[t._v("附注(Word)")])],1)],1),e("div",[e("router-view")],1),e("el-divider",[t._v("基础功能")]),e("div",[e("el-row",{attrs:{type:"flex"}},[e("el-col",[e("el-button",{attrs:{type:"primary",plain:""},on:{click:t.getStmtData}},[t._v("获取报表数据")]),e("br")],1),e("el-col",[e("el-button",{attrs:{type:"primary",plain:""},on:{click:function(e){t.dialog_showstmtdata=!0}}},[t._v("查看报表数据")])],1)],1)],1),e("el-dialog",{attrs:{visible:t.dialog_showstmtdata,fullscreen:!0},on:{"update:visible":function(e){t.dialog_showstmtdata=e}}},[e("el-row",{attrs:{type:"flex"}},[e("el-col",[e("el-button",{attrs:{type:"primary",plain:""},on:{click:function(e){t.dialog_showstmtdata=!1}}},[t._v("返回")])],1),e("el-col",[e("el-checkbox",{model:{value:t.hidezerorows,callback:function(e){t.hidezerorows=e},expression:"hidezerorows"}},[t._v("隐藏无数额的行")])],1)],1),e("el-table",{attrs:{data:t.stmtdata,height:"500"}},[e("el-table-column",{attrs:{prop:"account_cls",label:"报表科目"}}),e("el-table-column",{attrs:{prop:"open_balance",label:"审定期初数"}}),e("el-table-column",{attrs:{prop:"close_balance",label:"审定期末数"}}),e("el-table-column",{attrs:{prop:"open_amount",label:"审定上期发生额"}}),e("el-table-column",{attrs:{prop:"close_amount",label:"审定发生额"}})],1)],1)],1)},o=[],n=a(4161),s=a(6369),r={name:"App",provide(){return{_stmtdata:(0,s.computed)((()=>this.stmtdata)),_hidezerorows:(0,s.computed)((()=>this.hidezerorows))}},data(){return{stmtdata:[],hidezerorows:!1,dialog_showstmtdata:!1}},watch:{hidezerorows(){0!=this.stmtdata.length&&this.getStmtData()}},methods:{getStmtData(){let t=this;(0,n.Z)({method:"get",url:"/getstmtdata",params:{hidezero:t.hidezerorows}}).then((function(e){t.stmtdata=e.data,t.$message({message:"获取成功",type:"success",duration:1500})})).catch((function(){t.$message({message:"获取失败",type:"error",duration:1500})})),console.log(this.stmtdata)}}},i=r,c=a(1001),u=(0,c.Z)(i,l,o,!1,null,null,null),d=u.exports,m=a(2631),h=function(){var t=this,e=t._self._c;return e("div",[e("el-divider",[t._v("附注(Word)")]),t.isInWord?e("div",[e("el-row",{attrs:{span:24}},[e("el-col",{attrs:{span:12}},[e("el-button",{attrs:{type:"info",plain:""},on:{click:t.dropEmptyRows}},[t._v("删除所有空行")])],1),e("el-col",{attrs:{span:12}},[e("el-button",{attrs:{type:"info",plain:""},on:{click:t.dropNoDataRows}},[t._v("删除所有无数据行")])],1)],1),e("br")],1):e("div",[t._m(0)])],1)},p=[function(){var t=this,e=t._self._c;return e("h3",[t._v(" You are not using MS Word."),e("br")])}],f=(a(7658),{name:"WordAddinForNote",inject:["_stmtdata","_hidezerorows"],watch:{_stmtdata(t){this.stmtdata=t},_hidezerorows(t){this._hidezerorows=t}},data(){return{stmtdata:this._stmtdata,hidezerorows:this._hidezerorows}},computed:{isInWord:function(){return"undefined"!=typeof window.Word}},methods:{dropEmptyRows(){window.Word.run((async t=>{let e=t.document.body.tables;e.load("items"),await t.sync();let a=e.items;for(let o=0;o<a.length;++o){let e=a[o];e.load("rows"),await t.sync();let n=e.rows;n.load("items"),await t.sync();let s=n.items,r=[];for(let t=0;t<s.length;++t){var l=s[t];let e=!0,a=l.values[0];for(let t=0;t<a.length;++t)if(""!=a[t]){e=!1;break}1==e&&r.push(t)}for(let a=r.length-1;a>=0;--a){let l=r[a];e.deleteRows(l,1),await t.sync()}}this.$message({message:"删除成功",type:"success",duration:1500})}))},dropNoDataRows(){window.Word.run((async t=>{let e=t.document.body.tables;e.load("items"),await t.sync();let a=e.items;for(let o=0;o<a.length;++o){let e=a[o];e.load("rows"),await t.sync();let n=e.rows;n.load("items"),await t.sync();let s=n.items,r=[];for(let t=0;t<s.length;++t){var l=s[t];let e=!0,a=l.values[0];for(let t=1;t<a.length;++t)if(""!=a[t]){e=!1;break}1==e&&r.push(t)}for(let a=r.length-1;a>=0;--a){let l=r[a];e.deleteRows(l,1),await t.sync()}}this.$message({message:"删除成功",type:"success",duration:1500})}))}}}),w=f,_=(0,c.Z)(w,h,p,!1,null,null,null),b=_.exports,g=function(){var t=this,e=t._self._c;return e("div",[e("el-divider",[t._v("附注中间文件(Excel)")]),t.isInExcel?e("div",[e("button",{on:{click:function(e){return t.setColor()}}},[t._v("turn green")]),e("br")]):e("div",[t._m(0)])],1)},v=[function(){var t=this,e=t._self._c;return e("h3",[t._v(" You are not using MS Excel."),e("br")])}],y={name:"ExcelAddinForNote",inject:["_stmtdata","_hidezerorows"],watch:{_stmtdata(t){this.stmtdata=t},_hidezerorows(t){this._hidezerorows=t}},data(){return{stmtdata:this._stmtdata,hidezerorows:this._hidezerorows}},computed:{isInExcel:function(){return"undefined"!=typeof window.Excel}},methods:{setColor(){window.Excel.run((async t=>{const e=t.workbook.getSelectedRange();e.format.fill.color="green",await t.sync()}))}}},k=y,x=(0,c.Z)(k,g,v,!1,null,null,null),z=x.exports,E=function(){var t=this,e=t._self._c;return e("div",[e("el-divider",[t._v("报表(Excel)")]),t.isInExcel?e("div",[e("el-form",{attrs:{"label-position":"left","label-width":"auto"}},[e("el-form-item",[e("el-radio-group",{model:{value:t.selectedstatement,callback:function(e){t.selectedstatement=e},expression:"selectedstatement"}},[e("el-radio",{attrs:{label:1}},[t._v("资产负债表")]),e("el-radio",{attrs:{label:2}},[t._v("利润表")])],1)],1),e("el-form-item",{attrs:{label:"转至工作表"}},[e("el-select",{model:{value:t.selectedsheetname,callback:function(e){t.selectedsheetname=e},expression:"selectedsheetname"}},t._l(t.sheetnamelist,(function(t){return e("el-option",{key:t.value,attrs:{label:t.label,value:t.value}})})),1)],1),e("el-form-item",{attrs:{label:"选择模板"}},[e("el-select",{model:{value:t.selectedtemplate,callback:function(e){t.selectedtemplate=e},expression:"selectedtemplate"}},t._l(t.templatelist,(function(t){return e("el-option",{key:t.id,attrs:{label:t.name,value:t.id}})})),1)],1)],1),e("el-row",{attrs:{span:24}},[e("el-col",{attrs:{span:12}},[e("el-button",{attrs:{type:"info",plain:""},on:{click:t.gettemplatestructure}},[t._v("获取模板结构")])],1),e("el-col",{attrs:{span:12}},[e("el-button",{attrs:{type:"info",plain:""},on:{click:function(e){t.dialog_showtemplates=!0}}},[t._v("查看模板结构")])],1)],1),e("br"),e("el-row",{attrs:{span:24}},[e("el-col",{attrs:{span:12}},[e("el-button",{attrs:{type:"info",plain:""},on:{click:t.writeStmtData}},[t._v("写入报表数据")])],1)],1)],1):e("div",[t._m(0)]),e("el-dialog",{attrs:{visible:t.dialog_showtemplates,fullscreen:!0},on:{"update:visible":function(e){t.dialog_showtemplates=e}}},[e("el-button",{attrs:{type:"primary",plain:""},on:{click:function(e){t.dialog_showtemplates=!1}}},[t._v("返回")]),e("el-table",{attrs:{data:t.templatestructure,height:"500"}},[e("el-table-column",{attrs:{prop:"account_name",label:"项目名称"}}),e("el-table-column",{attrs:{prop:"account_alias",label:"类别"}}),e("el-table-column",{attrs:{prop:"account_category",label:"别名"}}),e("el-table-column",{attrs:{prop:"open_balance_cell",label:"审定期初数单元格"}}),e("el-table-column",{attrs:{prop:"close_balance_cell",label:"审定期末数单元格"}}),e("el-table-column",{attrs:{prop:"open_amount_cell",label:"审定上期发生额单元格"}}),e("el-table-column",{attrs:{prop:"close_amount_cell",label:"审定发生额单元格"}})],1)],1)],1)},O=[function(){var t=this,e=t._self._c;return e("h3",[t._v(" You are not using MS Excel."),e("br")])}],j={name:"ExcelAddinForBalanceSheet",inject:["_stmtdata","_hidezerorows"],mounted(){this.isInExcel="undefined"!=typeof window.Excel,window.Excel.run((async t=>{let e=t.workbook.worksheets;e.load("items"),await t.sync();let a=e.items;for(let l=0;l<a.length;++l)this.sheetnamelist.push({value:a[l].name,label:a[l].name})}));let t=this;(0,n.Z)({method:"get",url:"/gettemplates",params:{"报表":1==t.selectedstatement?"资产负债表":"利润表"}}).then((function(e){t.templatelist=e.data}))},data(){return{stmtdata:this._stmtdata,hidezerorows:this._hidezerorows,templatelist:[],selectedtemplate:"",selectedstatement:1,selectedsheetname:"",sheetnamelist:[],templatestructure:[],dialog_showtemplates:!1,isInExcel:!1}},watch:{_stmtdata(t){this.stmtdata=t},_hidezerorows(t){this._hidezerorows=t},selectedstatement(t){let e="";e=1==t?"资产负债表":"利润表",this.selectedtemplate="";let a=this;(0,n.Z)({method:"get",url:"/gettemplates",params:{"报表":e}}).then((function(t){a.templatelist=t.data}))},selectedsheetname(t,e){window.Excel.run((async a=>{let l=a.workbook.worksheets,o=l.getItemOrNullObject(t);o.load("isNullObject"),o.load("visibility"),await a.sync(),0==o.isNullObject&&"Visible"==o.visibility?o.activate():(this.$message({message:"无法跳转至当前选定工作表，该表可能不存在或是已被隐藏",type:"error",duration:2500}),this.selectedsheetname=e),await a.sync()}))}},methods:{writeStmtData(){window.Excel.run((async t=>{if(1==this.selectedstatement){let a=t.workbook.worksheets.getActiveWorksheet(),l=[],o=[];for(let n=0;n<this.stmtdata.length;++n){let s=this.stmtdata[n]["account_cls"],r=this.stmtdata[n]["open_balance"],i=this.stmtdata[n]["close_balance"],c="",u="",d=!1;for(let t=0;t<this.templatestructure.length;++t)if(this.templatestructure[t]["account_name"]==s){c=this.templatestructure[t]["open_balance_cell"],u=this.templatestructure[t]["close_balance_cell"],d=!0;break}if(0!=d){if(null!=c)try{let e=a.getRange(c);e.values=[[r]],await t.sync()}catch(e){l.push(s+"-"+c)}if(null!=u)try{let e=a.getRange(u);e.values=[[i]],await t.sync()}catch(e){o.push(s+"-"+u)}}}l.length>0&&await this.$message({message:"未能写入的单元格（审定期初数）: "+l.join(", "),type:"error",duration:4500}),o.length>0&&await this.$message({message:"未能写入的单元格（审定期末数）: "+o.join(", "),type:"error",duration:4500})}else{let a=t.workbook.worksheets.getActiveWorksheet(),l=[],o=[];for(let n=0;n<this.stmtdata.length;++n){let s=this.stmtdata[n]["account_cls"],r=this.stmtdata[n]["open_amount"],i=this.stmtdata[n]["close_amount"],c="",u="",d=!1;for(let t=0;t<this.templatestructure.length;++t)if(this.templatestructure[t]["account_name"]==s){c=this.templatestructure[t]["open_amount_cell"],u=this.templatestructure[t]["close_amount_cell"],d=!0;break}if(0!=d){if(null!=c)try{let e=a.getRange(c);e.values=[[r]],await t.sync()}catch(e){l.push(s+"-"+c)}if(null!=u)try{let e=a.getRange(u);e.values=[[i]],await t.sync()}catch(e){o.push(s+"-"+u)}}}l.length>0&&await this.$message({message:"未能写入的单元格（审定期上期发生额）: "+l.join(", "),type:"error",duration:4500}),o.length>0&&await this.$message({message:"未能写入的单元格（审定发生额）: "+o.join(", "),type:"error",duration:4500})}}))},gettemplatestructure(){let t=this;(0,n.Z)({method:"get",url:"/gettemplatestructure",params:{templateID:t.selectedtemplate}}).then((function(e){t.templatestructure=e.data,t.$message({message:"获取成功",type:"success",duration:1500})})).catch((function(){t.$message({message:"获取失败",type:"error",duration:1500})}))}}},S=j,R=(0,c.Z)(S,E,O,!1,null,null,null),$=R.exports;const W=[{path:"/",name:"home"},{path:"/word-add-in-for-note",name:"word-add-in-for-note",component:b},{path:"/excel-add-in-for-note",name:"excel-add-in-for-note",component:z},{path:"/excel-add-in-for-statements",name:"excel-add-in-for-statements",component:$}],Z=new m.ZP({mode:"history",routes:W});var F=Z,I=a(8499),D=a.n(I);s["default"].config.productionTip=!1,s["default"].use(m.ZP),s["default"].use(D()),window.Office.onReady(new s["default"]({router:F,el:"#app",render:t=>t(d)}).$mount("#app"))}},e={};function a(l){var o=e[l];if(void 0!==o)return o.exports;var n=e[l]={id:l,loaded:!1,exports:{}};return t[l](n,n.exports,a),n.loaded=!0,n.exports}a.m=t,function(){a.amdO={}}(),function(){var t=[];a.O=function(e,l,o,n){if(!l){var s=1/0;for(u=0;u<t.length;u++){l=t[u][0],o=t[u][1],n=t[u][2];for(var r=!0,i=0;i<l.length;i++)(!1&n||s>=n)&&Object.keys(a.O).every((function(t){return a.O[t](l[i])}))?l.splice(i--,1):(r=!1,n<s&&(s=n));if(r){t.splice(u--,1);var c=o();void 0!==c&&(e=c)}}return e}n=n||0;for(var u=t.length;u>0&&t[u-1][2]>n;u--)t[u]=t[u-1];t[u]=[l,o,n]}}(),function(){a.n=function(t){var e=t&&t.__esModule?function(){return t["default"]}:function(){return t};return a.d(e,{a:e}),e}}(),function(){a.d=function(t,e){for(var l in e)a.o(e,l)&&!a.o(t,l)&&Object.defineProperty(t,l,{enumerable:!0,get:e[l]})}}(),function(){a.g=function(){if("object"===typeof globalThis)return globalThis;try{return this||new Function("return this")()}catch(t){if("object"===typeof window)return window}}()}(),function(){a.o=function(t,e){return Object.prototype.hasOwnProperty.call(t,e)}}(),function(){a.r=function(t){"undefined"!==typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(t,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(t,"__esModule",{value:!0})}}(),function(){a.nmd=function(t){return t.paths=[],t.children||(t.children=[]),t}}(),function(){var t={143:0};a.O.j=function(e){return 0===t[e]};var e=function(e,l){var o,n,s=l[0],r=l[1],i=l[2],c=0;if(s.some((function(e){return 0!==t[e]}))){for(o in r)a.o(r,o)&&(a.m[o]=r[o]);if(i)var u=i(a)}for(e&&e(l);c<s.length;c++)n=s[c],a.o(t,n)&&t[n]&&t[n][0](),t[n]=0;return a.O(u)},l=self["webpackChunkui_addins"]=self["webpackChunkui_addins"]||[];l.forEach(e.bind(null,0)),l.push=e.bind(null,l.push.bind(l))}();var l=a.O(void 0,[998],(function(){return a(635)}));l=a.O(l)})();
//# sourceMappingURL=app.cf1315ea.js.map