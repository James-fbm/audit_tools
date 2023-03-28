<template>
    <div>
        <div v-if="isInWord">
            <button @click="insertParagraph()">Insert Paragraph</button><br />
            <button @click="readTables()">Read Tables</button>
        </div>
        <div v-else>
            <h3>
                You are not using MS Word.<br />
            </h3>
        </div>
    </div>
</template>

<script>

export default {
    name: 'WordAddinForNote',
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
        isInWord: function () {
            return (typeof (window.Word) != "undefined")
        }
    },
    methods: {
        insertParagraph() {
            window.Word.run(async (context) => {
                const docBody = context.document.body;
                docBody.insertParagraph("Office has several versions, including Office 2016, Microsoft 365 subscription, and Office on the web.", "Start")
                await context.sync()
            })
        },
        readTables() {
            window.Word.run(async (context) => {
                await window.Office.onReady();

                let pCollection = context.document.body.paragraphs;
                pCollection.load("items")
                await context.sync()
                let pItems = pCollection.items
                for (let i = 0; i < pCollection.items.length; ++i) {
                    let p = pItems[i]
                    p.load("text")
                    p.load("listItem")
                    await context.sync()
                    let pText = p.text
                    let pListItem = p.listItem
                    pListItem.load("listString")
                    await context.sync()
                    console.log(pText)
                    console.log(pListItem.listString)
                }

            })
        }
    }
}
</script>