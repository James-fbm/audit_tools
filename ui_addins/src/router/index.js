import VueRouter from "vue-router";
import WordAddinForNote from "../components/WordAddinForNote"
import ExcelAddinForNote from "../components/ExcelAddinForNote"
import ExcelAddinForStatements from "../components/ExcelAddinForStatements"

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
    path: "/excel-add-in-for-statements",
    name: "excel-add-in-for-statements",
    component: ExcelAddinForStatements
  },
]

const router = new VueRouter({
  mode: "history",
  routes
})

export default router
