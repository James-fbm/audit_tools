import VueRouter from "vue-router";
import WordAddinForNote from "../components/WordAddinForNote"
import ExcelAddinForNote from "../components/ExcelAddinForNote"
import ExcelAddinForBalanceSheet from "../components/ExcelAddinForBalanceSheet"

const routes = [
  {
    path: "/",
    name: "home",
  },
  {
    path: "/word-add-in-for-note",
    name: "word-add-in-for-note",
    component: WordAddinForNote
  },
  {
    path: "/excel-add-in-for-note",
    name: "excel-add-in-for-note",
    component: ExcelAddinForNote
  },
  {
    path: "/excel-add-in-for-balance-sheet",
    name: "excel-add-in-for-balance-sheet",
    component: ExcelAddinForBalanceSheet
  }
]

const router = new VueRouter({
  mode: "history",
  routes
})

export default router
