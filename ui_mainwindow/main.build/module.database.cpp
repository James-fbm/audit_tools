/* Generated code for Python module 'database'
 * created by Nuitka version 1.5.6
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_database" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_database;
PyDictObject *moduledict_database;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[207];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[207];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("database"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 207; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_database(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 207; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_83786fd64b03a6311ac2c0c58148b1a3;
static PyCodeObject *codeobj_60517d789fcd8211c23d62377da2e19c;
static PyCodeObject *codeobj_1cf5fe48b83424e10db7165484d8ea3a;
static PyCodeObject *codeobj_903ea2ef080b4b1263e4ea647a249ca2;
static PyCodeObject *codeobj_dfbde37f4644694c52e5d4b87debbf16;
static PyCodeObject *codeobj_7430f3662c2a2d6aa488e0a58ff9f469;
static PyCodeObject *codeobj_947775e7b3d8bf8f4366822b3a7019c0;
static PyCodeObject *codeobj_93cda9e2918da8da1f922df3b107b00f;
static PyCodeObject *codeobj_35808089691647f08f36b8b4bf17523d;
static PyCodeObject *codeobj_681d8d9ea18e46d9ecd8e2ce9308a290;
static PyCodeObject *codeobj_c0ab20bc8abed8263cbc42b9b997e9cb;
static PyCodeObject *codeobj_d71bffa7f7f5bfd52d90236eb41c94f7;
static PyCodeObject *codeobj_a35f1240c44ac8a48422764625d92e45;
static PyCodeObject *codeobj_93c92ca68b44b255e6331329415dbfa4;
static PyCodeObject *codeobj_daf0cb56de3c9fdb23f5177b9cb1b472;
static PyCodeObject *codeobj_423cbea6e370b0f49fdb18a44d8f12fd;
static PyCodeObject *codeobj_c6a5752f72bd9459eebc3278bceaa0dd;
static PyCodeObject *codeobj_3b82c71ea70fefc19fd6f9dc73f8c624;
static PyCodeObject *codeobj_ad6f60ef5403c5e76a885cbcf372b3bf;
static PyCodeObject *codeobj_1c7f9185229ab7ea73631a345f5b14b4;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[188]); CHECK_OBJECT(module_filename_obj);
    codeobj_83786fd64b03a6311ac2c0c58148b1a3 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[189], mod_consts[189], NULL, NULL, 0, 0, 0);
    codeobj_60517d789fcd8211c23d62377da2e19c = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[190], mod_consts[191], 2, 0, 0);
    codeobj_1cf5fe48b83424e10db7165484d8ea3a = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[145], mod_consts[145], mod_consts[192], NULL, 1, 0, 0);
    codeobj_903ea2ef080b4b1263e4ea647a249ca2 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[193], NULL, 2, 0, 0);
    codeobj_dfbde37f4644694c52e5d4b87debbf16 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[193], NULL, 2, 0, 0);
    codeobj_7430f3662c2a2d6aa488e0a58ff9f469 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[194], NULL, 1, 0, 0);
    codeobj_947775e7b3d8bf8f4366822b3a7019c0 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[195], NULL, 1, 0, 0);
    codeobj_93cda9e2918da8da1f922df3b107b00f = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[196], NULL, 1, 0, 0);
    codeobj_35808089691647f08f36b8b4bf17523d = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[197], NULL, 1, 0, 0);
    codeobj_681d8d9ea18e46d9ecd8e2ce9308a290 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[194], NULL, 1, 0, 0);
    codeobj_c0ab20bc8abed8263cbc42b9b997e9cb = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[198], NULL, 1, 0, 0);
    codeobj_d71bffa7f7f5bfd52d90236eb41c94f7 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[199], NULL, 3, 0, 0);
    codeobj_a35f1240c44ac8a48422764625d92e45 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[200], NULL, 3, 0, 0);
    codeobj_93c92ca68b44b255e6331329415dbfa4 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[201], NULL, 4, 0, 0);
    codeobj_daf0cb56de3c9fdb23f5177b9cb1b472 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[202], NULL, 2, 0, 0);
    codeobj_423cbea6e370b0f49fdb18a44d8f12fd = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[175], mod_consts[175], mod_consts[203], NULL, 2, 0, 0);
    codeobj_c6a5752f72bd9459eebc3278bceaa0dd = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[204], NULL, 3, 0, 0);
    codeobj_3b82c71ea70fefc19fd6f9dc73f8c624 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[205], NULL, 3, 0, 0);
    codeobj_ad6f60ef5403c5e76a885cbcf372b3bf = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[206], NULL, 3, 0, 0);
    codeobj_1c7f9185229ab7ea73631a345f5b14b4 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[202], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_database$$$function__10_getFileLink();


static PyObject *MAKE_FUNCTION_database$$$function__11_initNewProject(PyObject *annotations);


static PyObject *MAKE_FUNCTION_database$$$function__12_initNewTemplate();


static PyObject *MAKE_FUNCTION_database$$$function__13_updateFileLink();


static PyObject *MAKE_FUNCTION_database$$$function__14_updateAccountStd(PyObject *annotations);


static PyObject *MAKE_FUNCTION_database$$$function__15_updateTemplate();


static PyObject *MAKE_FUNCTION_database$$$function__16_switchActiveProject(PyObject *annotations);


static PyObject *MAKE_FUNCTION_database$$$function__17_updateProjectName(PyObject *annotations);


static PyObject *MAKE_FUNCTION_database$$$function__18_deleteProject(PyObject *annotations);


static PyObject *MAKE_FUNCTION_database$$$function__19_deleteTemplate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_database$$$function__1___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_database$$$function__2_checkDataBase();


static PyObject *MAKE_FUNCTION_database$$$function__3_getMaxProjectIDFromDB();


static PyObject *MAKE_FUNCTION_database$$$function__4_getActiveProjectIDFromDB();


static PyObject *MAKE_FUNCTION_database$$$function__5_getActiveProjectID();


static PyObject *MAKE_FUNCTION_database$$$function__6_getProjectFromDB(PyObject *defaults);


static PyObject *MAKE_FUNCTION_database$$$function__7_getTemplateFromDB(PyObject *defaults);


static PyObject *MAKE_FUNCTION_database$$$function__8_getMaxTemplateIDFromDB();


static PyObject *MAKE_FUNCTION_database$$$function__9_getMaxTemplateID();


// The module function definitions.
static PyObject *impl_database$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dbname = python_pars[1];
    struct Nuitka_FrameObject *frame_60517d789fcd8211c23d62377da2e19c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_60517d789fcd8211c23d62377da2e19c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_60517d789fcd8211c23d62377da2e19c)) {
        Py_XDECREF(cache_frame_60517d789fcd8211c23d62377da2e19c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60517d789fcd8211c23d62377da2e19c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60517d789fcd8211c23d62377da2e19c = MAKE_FUNCTION_FRAME(codeobj_60517d789fcd8211c23d62377da2e19c, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_60517d789fcd8211c23d62377da2e19c->m_type_description == NULL);
    frame_60517d789fcd8211c23d62377da2e19c = cache_frame_60517d789fcd8211c23d62377da2e19c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_60517d789fcd8211c23d62377da2e19c);
    assert(Py_REFCNT(frame_60517d789fcd8211c23d62377da2e19c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_database, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_60517d789fcd8211c23d62377da2e19c->m_frame.f_lineno = 8;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_dict_key_1 = mod_consts[2];
        tmp_dict_value_1 = MAKE_LIST2(mod_consts[3],mod_consts[4]);
        tmp_assattr_value_1 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_list_element_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[5];
            tmp_dict_value_1 = MAKE_LIST2(mod_consts[3],mod_consts[4]);
            tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[6];
            tmp_dict_value_1 = MAKE_LIST2(mod_consts[3],mod_consts[4]);
            tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[7];
            tmp_dict_value_1 = MAKE_LIST2(mod_consts[8],mod_consts[9]);
            tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            tmp_dict_value_1 = MAKE_LIST2(mod_consts[8],mod_consts[11]);
            tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[12];
            tmp_expression_value_1 = IMPORT_HARD_NTPATH();
            assert(!(tmp_expression_value_1 == NULL));
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_2 = IMPORT_HARD_NTPATH();
            assert(!(tmp_expression_value_2 == NULL));
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 16;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            frame_60517d789fcd8211c23d62377da2e19c->m_frame.f_lineno = 16;
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_2, mod_consts[15]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 16;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            frame_60517d789fcd8211c23d62377da2e19c->m_frame.f_lineno = 16;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[16];
            PyList_SET_ITEM0(tmp_dict_value_1, 1, tmp_list_element_1);
            tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            tmp_expression_value_3 = IMPORT_HARD_NTPATH();
            assert(!(tmp_expression_value_3 == NULL));
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = IMPORT_HARD_NTPATH();
            assert(!(tmp_expression_value_4 == NULL));
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[14]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 19;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            frame_60517d789fcd8211c23d62377da2e19c->m_frame.f_lineno = 19;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[18]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 19;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            frame_60517d789fcd8211c23d62377da2e19c->m_frame.f_lineno = 19;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_1 = "ooc";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[19];
            PyList_SET_ITEM0(tmp_dict_value_1, 1, tmp_list_element_2);
            tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assattr_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[21], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_60517d789fcd8211c23d62377da2e19c->m_frame.f_lineno = 27;
        tmp_assattr_value_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[23],
            &PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[25], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[25]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dbname);
        tmp_args_element_value_3 = par_dbname;
        frame_60517d789fcd8211c23d62377da2e19c->m_frame.f_lineno = 28;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[26], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[25]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_60517d789fcd8211c23d62377da2e19c->m_frame.f_lineno = 29;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[27]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = mod_consts[28];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[29], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = mod_consts[28];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[30], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = mod_consts[28];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[31], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60517d789fcd8211c23d62377da2e19c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60517d789fcd8211c23d62377da2e19c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60517d789fcd8211c23d62377da2e19c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60517d789fcd8211c23d62377da2e19c,
        type_description_1,
        par_self,
        par_dbname,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_60517d789fcd8211c23d62377da2e19c == cache_frame_60517d789fcd8211c23d62377da2e19c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_60517d789fcd8211c23d62377da2e19c);
        cache_frame_60517d789fcd8211c23d62377da2e19c = NULL;
    }

    assertFrameObject(frame_60517d789fcd8211c23d62377da2e19c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbname);
    Py_DECREF(par_dbname);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dbname);
    Py_DECREF(par_dbname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__2_checkDataBase(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_1cf5fe48b83424e10db7165484d8ea3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1cf5fe48b83424e10db7165484d8ea3a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1cf5fe48b83424e10db7165484d8ea3a)) {
        Py_XDECREF(cache_frame_1cf5fe48b83424e10db7165484d8ea3a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1cf5fe48b83424e10db7165484d8ea3a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1cf5fe48b83424e10db7165484d8ea3a = MAKE_FUNCTION_FRAME(codeobj_1cf5fe48b83424e10db7165484d8ea3a, module_database, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1cf5fe48b83424e10db7165484d8ea3a->m_type_description == NULL);
    frame_1cf5fe48b83424e10db7165484d8ea3a = cache_frame_1cf5fe48b83424e10db7165484d8ea3a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1cf5fe48b83424e10db7165484d8ea3a);
    assert(Py_REFCNT(frame_1cf5fe48b83424e10db7165484d8ea3a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame.f_lineno = 36;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame.f_lineno = 38;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame.f_lineno = 40;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_query);
        tmp_called_instance_3 = var_query;
        frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame.f_lineno = 43;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_4 = var_query;
        frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame.f_lineno = 45;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_query);
        tmp_called_instance_5 = var_query;
        frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame.f_lineno = 48;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame.f_lineno = 52;
        tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[40]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame.f_lineno = 53;
        tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[41]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame.f_lineno = 54;
        tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[42]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[31], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[28];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[43];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = mod_consts[28];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1cf5fe48b83424e10db7165484d8ea3a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1cf5fe48b83424e10db7165484d8ea3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1cf5fe48b83424e10db7165484d8ea3a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1cf5fe48b83424e10db7165484d8ea3a,
        type_description_1,
        par_self,
        var_query
    );


    // Release cached frame if used for exception.
    if (frame_1cf5fe48b83424e10db7165484d8ea3a == cache_frame_1cf5fe48b83424e10db7165484d8ea3a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1cf5fe48b83424e10db7165484d8ea3a);
        cache_frame_1cf5fe48b83424e10db7165484d8ea3a = NULL;
    }

    assertFrameObject(frame_1cf5fe48b83424e10db7165484d8ea3a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__3_getMaxProjectIDFromDB(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_maxprojectid = NULL;
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_35808089691647f08f36b8b4bf17523d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_35808089691647f08f36b8b4bf17523d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[28];
        assert(var_maxprojectid == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_maxprojectid = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_35808089691647f08f36b8b4bf17523d)) {
        Py_XDECREF(cache_frame_35808089691647f08f36b8b4bf17523d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35808089691647f08f36b8b4bf17523d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35808089691647f08f36b8b4bf17523d = MAKE_FUNCTION_FRAME(codeobj_35808089691647f08f36b8b4bf17523d, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_35808089691647f08f36b8b4bf17523d->m_type_description == NULL);
    frame_35808089691647f08f36b8b4bf17523d = cache_frame_35808089691647f08f36b8b4bf17523d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_35808089691647f08f36b8b4bf17523d);
    assert(Py_REFCNT(frame_35808089691647f08f36b8b4bf17523d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_35808089691647f08f36b8b4bf17523d->m_frame.f_lineno = 64;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_35808089691647f08f36b8b4bf17523d->m_frame.f_lineno = 65;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_2;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_query;
        frame_35808089691647f08f36b8b4bf17523d->m_frame.f_lineno = 66;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[46]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_query;
        frame_35808089691647f08f36b8b4bf17523d->m_frame.f_lineno = 67;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[48], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_maxprojectid;
            var_maxprojectid = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 66;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_maxprojectid == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_maxprojectid;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35808089691647f08f36b8b4bf17523d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35808089691647f08f36b8b4bf17523d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35808089691647f08f36b8b4bf17523d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35808089691647f08f36b8b4bf17523d,
        type_description_1,
        par_self,
        var_maxprojectid,
        var_query
    );


    // Release cached frame if used for exception.
    if (frame_35808089691647f08f36b8b4bf17523d == cache_frame_35808089691647f08f36b8b4bf17523d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_35808089691647f08f36b8b4bf17523d);
        cache_frame_35808089691647f08f36b8b4bf17523d = NULL;
    }

    assertFrameObject(frame_35808089691647f08f36b8b4bf17523d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_maxprojectid);
    var_maxprojectid = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_maxprojectid);
    var_maxprojectid = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__4_getActiveProjectIDFromDB(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_activeprojectid = NULL;
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_947775e7b3d8bf8f4366822b3a7019c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_947775e7b3d8bf8f4366822b3a7019c0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[28];
        assert(var_activeprojectid == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_activeprojectid = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_947775e7b3d8bf8f4366822b3a7019c0)) {
        Py_XDECREF(cache_frame_947775e7b3d8bf8f4366822b3a7019c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_947775e7b3d8bf8f4366822b3a7019c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_947775e7b3d8bf8f4366822b3a7019c0 = MAKE_FUNCTION_FRAME(codeobj_947775e7b3d8bf8f4366822b3a7019c0, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_947775e7b3d8bf8f4366822b3a7019c0->m_type_description == NULL);
    frame_947775e7b3d8bf8f4366822b3a7019c0 = cache_frame_947775e7b3d8bf8f4366822b3a7019c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_947775e7b3d8bf8f4366822b3a7019c0);
    assert(Py_REFCNT(frame_947775e7b3d8bf8f4366822b3a7019c0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_947775e7b3d8bf8f4366822b3a7019c0->m_frame.f_lineno = 72;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_947775e7b3d8bf8f4366822b3a7019c0->m_frame.f_lineno = 73;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[50], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_2;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_query;
        frame_947775e7b3d8bf8f4366822b3a7019c0->m_frame.f_lineno = 75;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[46]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_query;
        frame_947775e7b3d8bf8f4366822b3a7019c0->m_frame.f_lineno = 76;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[51], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_activeprojectid;
            var_activeprojectid = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 75;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_activeprojectid == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 77;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_activeprojectid;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_947775e7b3d8bf8f4366822b3a7019c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_947775e7b3d8bf8f4366822b3a7019c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_947775e7b3d8bf8f4366822b3a7019c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_947775e7b3d8bf8f4366822b3a7019c0,
        type_description_1,
        par_self,
        var_activeprojectid,
        var_query
    );


    // Release cached frame if used for exception.
    if (frame_947775e7b3d8bf8f4366822b3a7019c0 == cache_frame_947775e7b3d8bf8f4366822b3a7019c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_947775e7b3d8bf8f4366822b3a7019c0);
        cache_frame_947775e7b3d8bf8f4366822b3a7019c0 = NULL;
    }

    assertFrameObject(frame_947775e7b3d8bf8f4366822b3a7019c0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_activeprojectid);
    var_activeprojectid = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_activeprojectid);
    var_activeprojectid = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__5_getActiveProjectID(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7430f3662c2a2d6aa488e0a58ff9f469;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7430f3662c2a2d6aa488e0a58ff9f469 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7430f3662c2a2d6aa488e0a58ff9f469)) {
        Py_XDECREF(cache_frame_7430f3662c2a2d6aa488e0a58ff9f469);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7430f3662c2a2d6aa488e0a58ff9f469 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7430f3662c2a2d6aa488e0a58ff9f469 = MAKE_FUNCTION_FRAME(codeobj_7430f3662c2a2d6aa488e0a58ff9f469, module_database, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7430f3662c2a2d6aa488e0a58ff9f469->m_type_description == NULL);
    frame_7430f3662c2a2d6aa488e0a58ff9f469 = cache_frame_7430f3662c2a2d6aa488e0a58ff9f469;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7430f3662c2a2d6aa488e0a58ff9f469);
    assert(Py_REFCNT(frame_7430f3662c2a2d6aa488e0a58ff9f469) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7430f3662c2a2d6aa488e0a58ff9f469, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7430f3662c2a2d6aa488e0a58ff9f469->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7430f3662c2a2d6aa488e0a58ff9f469, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7430f3662c2a2d6aa488e0a58ff9f469,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7430f3662c2a2d6aa488e0a58ff9f469 == cache_frame_7430f3662c2a2d6aa488e0a58ff9f469) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7430f3662c2a2d6aa488e0a58ff9f469);
        cache_frame_7430f3662c2a2d6aa488e0a58ff9f469 = NULL;
    }

    assertFrameObject(frame_7430f3662c2a2d6aa488e0a58ff9f469);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__6_getProjectFromDB(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_id = python_pars[1];
    PyObject *par_active = python_pars[2];
    PyObject *var_query = NULL;
    PyObject *var_projects = NULL;
    PyObject *var_project = NULL;
    struct Nuitka_FrameObject *frame_d71bffa7f7f5bfd52d90236eb41c94f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7)) {
        Py_XDECREF(cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7 = MAKE_FUNCTION_FRAME(codeobj_d71bffa7f7f5bfd52d90236eb41c94f7, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_type_description == NULL);
    frame_d71bffa7f7f5bfd52d90236eb41c94f7 = cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d71bffa7f7f5bfd52d90236eb41c94f7);
    assert(Py_REFCNT(frame_d71bffa7f7f5bfd52d90236eb41c94f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 83;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_id);
        tmp_cmp_expr_left_1 = par_id;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_active);
        tmp_cmp_expr_left_2 = par_active;
        tmp_cmp_expr_right_2 = Py_False;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_projects == NULL);
        var_projects = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 86;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[53], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    loop_start_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_2;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 87;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[46]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_3;
        if (var_projects == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = var_projects;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[55]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_query == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 89;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_called_instance_6;
            PyTuple_SET_ITEM(tmp_args_element_value_1, 0, tmp_tuple_element_1);
            if (var_query == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_4 = var_query;
            frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 89;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_4,
                mod_consts[47],
                PyTuple_GET_ITEM(mod_consts[57], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_1);
            if (var_query == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_5 = var_query;
            frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 89;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_5,
                mod_consts[47],
                PyTuple_GET_ITEM(mod_consts[58], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_1, 2, tmp_tuple_element_1);
            if (var_query == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_6 = var_query;
            frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 89;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_6,
                mod_consts[47],
                PyTuple_GET_ITEM(mod_consts[59], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 88;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 87;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_projects == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 90;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_projects;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_DICT_EMPTY();
        assert(var_project == NULL);
        var_project = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_id);
        tmp_cmp_expr_left_3 = par_id;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_query);
        tmp_called_instance_7 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 94;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[61], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_query);
        tmp_called_instance_8 = var_query;
        tmp_args_element_value_2 = mod_consts[63];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_3 = par_id;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_query);
        tmp_called_instance_9 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 96;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[34]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_active);
        tmp_cmp_expr_left_4 = par_active;
        tmp_cmp_expr_right_4 = Py_True;
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_query);
        tmp_called_instance_10 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 98;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[64], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_4:;
    branch_end_3:;
    loop_start_2:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_11;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 101;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[46]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    goto loop_end_2;
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 102;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_project == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_project;
        tmp_ass_subscript_1 = mod_consts[66];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 103;
        tmp_ass_subvalue_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_project == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_project;
        tmp_ass_subscript_2 = mod_consts[67];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_14 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 104;
        tmp_ass_subvalue_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_project == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_project;
        tmp_ass_subscript_3 = mod_consts[68];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_15 = var_query;
        frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame.f_lineno = 105;
        tmp_ass_subvalue_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_project == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = var_project;
        tmp_ass_subscript_4 = mod_consts[69];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 101;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    if (var_project == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 106;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_project;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d71bffa7f7f5bfd52d90236eb41c94f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d71bffa7f7f5bfd52d90236eb41c94f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d71bffa7f7f5bfd52d90236eb41c94f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d71bffa7f7f5bfd52d90236eb41c94f7,
        type_description_1,
        par_self,
        par_id,
        par_active,
        var_query,
        var_projects,
        var_project
    );


    // Release cached frame if used for exception.
    if (frame_d71bffa7f7f5bfd52d90236eb41c94f7 == cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7);
        cache_frame_d71bffa7f7f5bfd52d90236eb41c94f7 = NULL;
    }

    assertFrameObject(frame_d71bffa7f7f5bfd52d90236eb41c94f7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_projects);
    var_projects = NULL;
    Py_XDECREF(var_project);
    var_project = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_projects);
    var_projects = NULL;
    Py_XDECREF(var_project);
    var_project = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_active);
    Py_DECREF(par_active);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_active);
    Py_DECREF(par_active);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__7_getTemplateFromDB(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_id = python_pars[1];
    PyObject *par_stmtname = python_pars[2];
    PyObject *var_query = NULL;
    PyObject *var_template = NULL;
    PyObject *var_templates = NULL;
    struct Nuitka_FrameObject *frame_a35f1240c44ac8a48422764625d92e45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a35f1240c44ac8a48422764625d92e45 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a35f1240c44ac8a48422764625d92e45)) {
        Py_XDECREF(cache_frame_a35f1240c44ac8a48422764625d92e45);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a35f1240c44ac8a48422764625d92e45 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a35f1240c44ac8a48422764625d92e45 = MAKE_FUNCTION_FRAME(codeobj_a35f1240c44ac8a48422764625d92e45, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a35f1240c44ac8a48422764625d92e45->m_type_description == NULL);
    frame_a35f1240c44ac8a48422764625d92e45 = cache_frame_a35f1240c44ac8a48422764625d92e45;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a35f1240c44ac8a48422764625d92e45);
    assert(Py_REFCNT(frame_a35f1240c44ac8a48422764625d92e45) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 109;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_id);
        tmp_cmp_expr_left_1 = par_id;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        assert(var_template == NULL);
        var_template = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 112;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        tmp_args_element_value_1 = mod_consts[63];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_2 = par_id;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_query);
        tmp_called_instance_3 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 114;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[34]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    loop_start_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_4;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 115;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[46]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 116;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_template == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_template;
        tmp_ass_subscript_1 = mod_consts[66];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 117;
        tmp_ass_subvalue_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[57], 0)
        );

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_template == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = var_template;
        tmp_ass_subscript_2 = mod_consts[67];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 118;
        tmp_ass_subvalue_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_template == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_template;
        tmp_ass_subscript_3 = mod_consts[68];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 119;
        tmp_ass_subvalue_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[72], 0)
        );

        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_template == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = var_template;
        tmp_ass_subscript_4 = mod_consts[73];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 120;
        tmp_ass_subvalue_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[59], 0)
        );

        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_template == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_5 = var_template;
        tmp_ass_subscript_5 = mod_consts[69];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 121;
        tmp_ass_subvalue_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[74], 0)
        );

        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_template == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = var_template;
        tmp_ass_subscript_6 = mod_consts[75];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 122;
        tmp_ass_subvalue_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_ass_subvalue_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_template == NULL) {
            Py_DECREF(tmp_ass_subvalue_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_7 = var_template;
        tmp_ass_subscript_7 = mod_consts[77];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 123;
        tmp_ass_subvalue_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[78], 0)
        );

        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_template == NULL) {
            Py_DECREF(tmp_ass_subvalue_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_8 = var_template;
        tmp_ass_subscript_8 = mod_consts[79];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 124;
        tmp_ass_subvalue_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[80], 0)
        );

        if (tmp_ass_subvalue_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_template == NULL) {
            Py_DECREF(tmp_ass_subvalue_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_9 = var_template;
        tmp_ass_subscript_9 = mod_consts[81];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        Py_DECREF(tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 115;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_template == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[71]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 125;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_template;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_stmtname);
        tmp_cmp_expr_left_2 = par_stmtname;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_templates == NULL);
        var_templates = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_14 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 128;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[82], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_15 = var_query;
        tmp_args_element_value_3 = mod_consts[83];
        CHECK_OBJECT(par_stmtname);
        tmp_args_element_value_4 = par_stmtname;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_15,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_query);
        tmp_called_instance_16 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 131;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[34]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    loop_start_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_17;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_17 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 132;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[46]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_end_2;
    branch_no_4:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_18;
        if (var_templates == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = var_templates;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[55]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_query == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_18 = var_query;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 133;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_called_instance_20;
            PyObject *tmp_called_instance_21;
            PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_1);
            if (var_query == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_19 = var_query;
            frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 133;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_19,
                mod_consts[47],
                PyTuple_GET_ITEM(mod_consts[57], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_5, 1, tmp_tuple_element_1);
            if (var_query == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_20 = var_query;
            frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 133;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_20,
                mod_consts[47],
                PyTuple_GET_ITEM(mod_consts[72], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_5, 2, tmp_tuple_element_1);
            if (var_query == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 134;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }

            tmp_called_instance_21 = var_query;
            frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 134;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_21,
                mod_consts[47],
                PyTuple_GET_ITEM(mod_consts[59], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_5, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_a35f1240c44ac8a48422764625d92e45->m_frame.f_lineno = 133;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 132;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    if (var_templates == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 135;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_templates;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a35f1240c44ac8a48422764625d92e45, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a35f1240c44ac8a48422764625d92e45->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a35f1240c44ac8a48422764625d92e45, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a35f1240c44ac8a48422764625d92e45,
        type_description_1,
        par_self,
        par_id,
        par_stmtname,
        var_query,
        var_template,
        var_templates
    );


    // Release cached frame if used for exception.
    if (frame_a35f1240c44ac8a48422764625d92e45 == cache_frame_a35f1240c44ac8a48422764625d92e45) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a35f1240c44ac8a48422764625d92e45);
        cache_frame_a35f1240c44ac8a48422764625d92e45 = NULL;
    }

    assertFrameObject(frame_a35f1240c44ac8a48422764625d92e45);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_template);
    var_template = NULL;
    Py_XDECREF(var_templates);
    var_templates = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_template);
    var_template = NULL;
    Py_XDECREF(var_templates);
    var_templates = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_stmtname);
    Py_DECREF(par_stmtname);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_stmtname);
    Py_DECREF(par_stmtname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__8_getMaxTemplateIDFromDB(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_maxtemplateid = NULL;
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_c0ab20bc8abed8263cbc42b9b997e9cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[28];
        assert(var_maxtemplateid == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_maxtemplateid = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb)) {
        Py_XDECREF(cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb = MAKE_FUNCTION_FRAME(codeobj_c0ab20bc8abed8263cbc42b9b997e9cb, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb->m_type_description == NULL);
    frame_c0ab20bc8abed8263cbc42b9b997e9cb = cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c0ab20bc8abed8263cbc42b9b997e9cb);
    assert(Py_REFCNT(frame_c0ab20bc8abed8263cbc42b9b997e9cb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c0ab20bc8abed8263cbc42b9b997e9cb->m_frame.f_lineno = 141;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_c0ab20bc8abed8263cbc42b9b997e9cb->m_frame.f_lineno = 142;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_2;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_query;
        frame_c0ab20bc8abed8263cbc42b9b997e9cb->m_frame.f_lineno = 143;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[46]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_query;
        frame_c0ab20bc8abed8263cbc42b9b997e9cb->m_frame.f_lineno = 144;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[86], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_maxtemplateid;
            var_maxtemplateid = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 143;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_maxtemplateid == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 145;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_maxtemplateid;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c0ab20bc8abed8263cbc42b9b997e9cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c0ab20bc8abed8263cbc42b9b997e9cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0ab20bc8abed8263cbc42b9b997e9cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c0ab20bc8abed8263cbc42b9b997e9cb,
        type_description_1,
        par_self,
        var_maxtemplateid,
        var_query
    );


    // Release cached frame if used for exception.
    if (frame_c0ab20bc8abed8263cbc42b9b997e9cb == cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb);
        cache_frame_c0ab20bc8abed8263cbc42b9b997e9cb = NULL;
    }

    assertFrameObject(frame_c0ab20bc8abed8263cbc42b9b997e9cb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_maxtemplateid);
    var_maxtemplateid = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_maxtemplateid);
    var_maxtemplateid = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__9_getMaxTemplateID(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_681d8d9ea18e46d9ecd8e2ce9308a290;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290)) {
        Py_XDECREF(cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290);

#if _DEBUG_REFCOUNTS
        if (cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290 = MAKE_FUNCTION_FRAME(codeobj_681d8d9ea18e46d9ecd8e2ce9308a290, module_database, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290->m_type_description == NULL);
    frame_681d8d9ea18e46d9ecd8e2ce9308a290 = cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_681d8d9ea18e46d9ecd8e2ce9308a290);
    assert(Py_REFCNT(frame_681d8d9ea18e46d9ecd8e2ce9308a290) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_681d8d9ea18e46d9ecd8e2ce9308a290, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_681d8d9ea18e46d9ecd8e2ce9308a290->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_681d8d9ea18e46d9ecd8e2ce9308a290, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_681d8d9ea18e46d9ecd8e2ce9308a290,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_681d8d9ea18e46d9ecd8e2ce9308a290 == cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290);
        cache_frame_681d8d9ea18e46d9ecd8e2ce9308a290 = NULL;
    }

    assertFrameObject(frame_681d8d9ea18e46d9ecd8e2ce9308a290);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__10_getFileLink(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_filelink = NULL;
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_93cda9e2918da8da1f922df3b107b00f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_93cda9e2918da8da1f922df3b107b00f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_filelink == NULL);
        var_filelink = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_93cda9e2918da8da1f922df3b107b00f)) {
        Py_XDECREF(cache_frame_93cda9e2918da8da1f922df3b107b00f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93cda9e2918da8da1f922df3b107b00f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93cda9e2918da8da1f922df3b107b00f = MAKE_FUNCTION_FRAME(codeobj_93cda9e2918da8da1f922df3b107b00f, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_93cda9e2918da8da1f922df3b107b00f->m_type_description == NULL);
    frame_93cda9e2918da8da1f922df3b107b00f = cache_frame_93cda9e2918da8da1f922df3b107b00f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_93cda9e2918da8da1f922df3b107b00f);
    assert(Py_REFCNT(frame_93cda9e2918da8da1f922df3b107b00f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_93cda9e2918da8da1f922df3b107b00f->m_frame.f_lineno = 152;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_93cda9e2918da8da1f922df3b107b00f->m_frame.f_lineno = 153;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_query);
        tmp_expression_value_2 = var_query;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[89];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_93cda9e2918da8da1f922df3b107b00f->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        frame_93cda9e2918da8da1f922df3b107b00f->m_frame.f_lineno = 155;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[34]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_3;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_query;
        frame_93cda9e2918da8da1f922df3b107b00f->m_frame.f_lineno = 156;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[46]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_called_instance_6;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_query;
        frame_93cda9e2918da8da1f922df3b107b00f->m_frame.f_lineno = 157;
        tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[90], 0)
        );

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_instance_5;
            PyList_SET_ITEM(tmp_ass_subvalue_1, 0, tmp_list_element_1);
            if (var_query == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 157;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }

            tmp_called_instance_5 = var_query;
            frame_93cda9e2918da8da1f922df3b107b00f->m_frame.f_lineno = 157;
            tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_5,
                mod_consts[47],
                PyTuple_GET_ITEM(mod_consts[91], 0)
            );

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_ass_subvalue_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_ass_subvalue_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        if (var_filelink == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_filelink;
        if (var_query == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_query;
        frame_93cda9e2918da8da1f922df3b107b00f->m_frame.f_lineno = 157;
        tmp_ass_subscript_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[47],
            PyTuple_GET_ITEM(mod_consts[93], 0)
        );

        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 156;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_filelink == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 158;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_filelink;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_93cda9e2918da8da1f922df3b107b00f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93cda9e2918da8da1f922df3b107b00f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93cda9e2918da8da1f922df3b107b00f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93cda9e2918da8da1f922df3b107b00f,
        type_description_1,
        par_self,
        var_filelink,
        var_query
    );


    // Release cached frame if used for exception.
    if (frame_93cda9e2918da8da1f922df3b107b00f == cache_frame_93cda9e2918da8da1f922df3b107b00f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_93cda9e2918da8da1f922df3b107b00f);
        cache_frame_93cda9e2918da8da1f922df3b107b00f = NULL;
    }

    assertFrameObject(frame_93cda9e2918da8da1f922df3b107b00f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_filelink);
    var_filelink = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_filelink);
    var_filelink = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__11_initNewProject(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_active = python_pars[2];
    PyObject *par_account_std = python_pars[3];
    PyObject *var_query = NULL;
    PyObject *var_q = NULL;
    PyObject *var_filename = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_93c92ca68b44b255e6331329415dbfa4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_93c92ca68b44b255e6331329415dbfa4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_93c92ca68b44b255e6331329415dbfa4)) {
        Py_XDECREF(cache_frame_93c92ca68b44b255e6331329415dbfa4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93c92ca68b44b255e6331329415dbfa4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93c92ca68b44b255e6331329415dbfa4 = MAKE_FUNCTION_FRAME(codeobj_93c92ca68b44b255e6331329415dbfa4, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_93c92ca68b44b255e6331329415dbfa4->m_type_description == NULL);
    frame_93c92ca68b44b255e6331329415dbfa4 = cache_frame_93c92ca68b44b255e6331329415dbfa4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_93c92ca68b44b255e6331329415dbfa4);
    assert(Py_REFCNT(frame_93c92ca68b44b255e6331329415dbfa4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[43];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_1 = par_name;
        tmp_cmp_expr_right_1 = mod_consts[8];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_2;
        tmp_add_expr_left_1 = mod_consts[94];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert(old != NULL);
            par_name = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 167;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_active);
        tmp_cmp_expr_left_2 = par_active;
        tmp_cmp_expr_right_2 = Py_True;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 171;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_query;
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 176;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[96], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = var_query;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[62]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[29]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_query;
        tmp_args_element_value_3 = mod_consts[97];
        CHECK_OBJECT(par_name);
        tmp_args_element_value_4 = par_name;
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_query;
        tmp_args_element_value_5 = mod_consts[98];
        CHECK_OBJECT(par_active);
        tmp_args_element_value_6 = par_active;
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_query;
        tmp_args_element_value_7 = mod_consts[99];
        CHECK_OBJECT(par_account_std);
        tmp_args_element_value_8 = par_account_std;
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_7;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_query;
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 181;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[34]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[20]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[100]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 184;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 184;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_filename;
            var_filename = tmp_assign_source_7;
            Py_INCREF(var_filename);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[101];
        {
            PyObject *old = var_q;
            var_q = tmp_assign_source_8;
            Py_INCREF(var_q);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_9;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_7 = var_query;
        CHECK_OBJECT(var_q);
        tmp_args_element_value_9 = var_q;
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 187;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[60], tmp_args_element_value_9);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_8 = var_query;
        tmp_args_element_value_10 = mod_consts[102];
        CHECK_OBJECT(var_filename);
        tmp_args_element_value_11 = var_filename;
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_9 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_9 = var_query;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[62]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_12 = mod_consts[103];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[20]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_filename);
        tmp_subscript_value_1 = var_filename;
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_2 = mod_consts[28];
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_13 = var_query;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[62]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_14 = mod_consts[105];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[20]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_filename);
        tmp_subscript_value_3 = var_filename;
        tmp_expression_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_subscript_value_4 = mod_consts[43];
        tmp_args_element_value_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_4, 1);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_18;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_17 = var_query;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[62]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_16 = mod_consts[89];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_18 = par_self;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[29]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 191;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_13;
        if (var_query == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_9 = var_query;
        frame_93c92ca68b44b255e6331329415dbfa4->m_frame.f_lineno = 192;
        tmp_call_result_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[34]);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_13);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 184;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_93c92ca68b44b255e6331329415dbfa4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93c92ca68b44b255e6331329415dbfa4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93c92ca68b44b255e6331329415dbfa4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93c92ca68b44b255e6331329415dbfa4,
        type_description_1,
        par_self,
        par_name,
        par_active,
        par_account_std,
        var_query,
        var_q,
        var_filename
    );


    // Release cached frame if used for exception.
    if (frame_93c92ca68b44b255e6331329415dbfa4 == cache_frame_93c92ca68b44b255e6331329415dbfa4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_93c92ca68b44b255e6331329415dbfa4);
        cache_frame_93c92ca68b44b255e6331329415dbfa4 = NULL;
    }

    assertFrameObject(frame_93c92ca68b44b255e6331329415dbfa4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_name);
    par_name = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_q);
    var_q = NULL;
    Py_XDECREF(var_filename);
    var_filename = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_active);
    Py_DECREF(par_active);
    CHECK_OBJECT(par_account_std);
    Py_DECREF(par_account_std);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_active);
    Py_DECREF(par_active);
    CHECK_OBJECT(par_account_std);
    Py_DECREF(par_account_std);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__12_initNewTemplate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_settings = python_pars[1];
    PyObject *var_query = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_daf0cb56de3c9fdb23f5177b9cb1b472;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472)) {
        Py_XDECREF(cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472);

#if _DEBUG_REFCOUNTS
        if (cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472 = MAKE_FUNCTION_FRAME(codeobj_daf0cb56de3c9fdb23f5177b9cb1b472, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_type_description == NULL);
    frame_daf0cb56de3c9fdb23f5177b9cb1b472 = cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_daf0cb56de3c9fdb23f5177b9cb1b472);
    assert(Py_REFCNT(frame_daf0cb56de3c9fdb23f5177b9cb1b472) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[43];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooN";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooN";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_settings);
        tmp_expression_value_2 = par_settings;
        tmp_subscript_value_1 = mod_consts[106];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[8];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_add_expr_left_1 = mod_consts[71];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_settings);
        tmp_ass_subscribed_1 = par_settings;
        tmp_ass_subscript_1 = mod_consts[106];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 199;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 202;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[107], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_query);
        tmp_expression_value_5 = var_query;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[62]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[31]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 203;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_query);
        tmp_expression_value_7 = var_query;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[62]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[97];
        if (par_settings == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_settings;
        tmp_subscript_value_2 = mod_consts[106];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 204;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_query);
        tmp_expression_value_9 = var_query;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[62]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[99];
        if (par_settings == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_settings;
        tmp_subscript_value_3 = mod_consts[109];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 205;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_query);
        tmp_expression_value_11 = var_query;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[62]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[83];
        if (par_settings == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_settings;
        tmp_subscript_value_4 = mod_consts[110];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 206;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_query);
        tmp_expression_value_13 = var_query;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[62]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[111];
        if (par_settings == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_settings;
        tmp_subscript_value_5 = mod_consts[112];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_5);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 207;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_query);
        tmp_expression_value_15 = var_query;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[62]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[113];
        if (par_settings == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_settings;
        tmp_subscript_value_6 = mod_consts[114];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_6);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 208;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_query);
        tmp_expression_value_17 = var_query;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[62]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[115];
        if (par_settings == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_settings;
        tmp_subscript_value_7 = mod_consts[116];
        tmp_args_element_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_7);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 209;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_query);
        tmp_expression_value_19 = var_query;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[62]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[117];
        if (par_settings == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_settings;
        tmp_subscript_value_8 = mod_consts[118];
        tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_8);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 210;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame.f_lineno = 211;
        tmp_call_result_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[34]);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_daf0cb56de3c9fdb23f5177b9cb1b472, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_daf0cb56de3c9fdb23f5177b9cb1b472->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_daf0cb56de3c9fdb23f5177b9cb1b472, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_daf0cb56de3c9fdb23f5177b9cb1b472,
        type_description_1,
        par_self,
        par_settings,
        var_query,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_daf0cb56de3c9fdb23f5177b9cb1b472 == cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472);
        cache_frame_daf0cb56de3c9fdb23f5177b9cb1b472 = NULL;
    }

    assertFrameObject(frame_daf0cb56de3c9fdb23f5177b9cb1b472);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_settings);
    Py_DECREF(par_settings);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_settings);
    Py_DECREF(par_settings);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__13_updateFileLink(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_filename = python_pars[1];
    PyObject *par_filelink = python_pars[2];
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_3b82c71ea70fefc19fd6f9dc73f8c624;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624)) {
        Py_XDECREF(cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624 = MAKE_FUNCTION_FRAME(codeobj_3b82c71ea70fefc19fd6f9dc73f8c624, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624->m_type_description == NULL);
    frame_3b82c71ea70fefc19fd6f9dc73f8c624 = cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3b82c71ea70fefc19fd6f9dc73f8c624);
    assert(Py_REFCNT(frame_3b82c71ea70fefc19fd6f9dc73f8c624) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_3b82c71ea70fefc19fd6f9dc73f8c624->m_frame.f_lineno = 216;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_3b82c71ea70fefc19fd6f9dc73f8c624->m_frame.f_lineno = 218;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[119], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        tmp_args_element_value_1 = mod_consts[103];
        CHECK_OBJECT(par_filelink);
        tmp_args_element_value_2 = par_filelink;
        frame_3b82c71ea70fefc19fd6f9dc73f8c624->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_3 = var_query;
        tmp_args_element_value_3 = mod_consts[102];
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_4 = par_filename;
        frame_3b82c71ea70fefc19fd6f9dc73f8c624->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_query);
        tmp_expression_value_2 = var_query;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[89];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 221;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_3b82c71ea70fefc19fd6f9dc73f8c624->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_query);
        tmp_called_instance_4 = var_query;
        frame_3b82c71ea70fefc19fd6f9dc73f8c624->m_frame.f_lineno = 222;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[34]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3b82c71ea70fefc19fd6f9dc73f8c624, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b82c71ea70fefc19fd6f9dc73f8c624->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b82c71ea70fefc19fd6f9dc73f8c624, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b82c71ea70fefc19fd6f9dc73f8c624,
        type_description_1,
        par_self,
        par_filename,
        par_filelink,
        var_query,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_3b82c71ea70fefc19fd6f9dc73f8c624 == cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624);
        cache_frame_3b82c71ea70fefc19fd6f9dc73f8c624 = NULL;
    }

    assertFrameObject(frame_3b82c71ea70fefc19fd6f9dc73f8c624);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_filelink);
    Py_DECREF(par_filelink);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    CHECK_OBJECT(par_filelink);
    Py_DECREF(par_filelink);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__14_updateAccountStd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_id = python_pars[1];
    PyObject *par_account_std = python_pars[2];
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_c6a5752f72bd9459eebc3278bceaa0dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c6a5752f72bd9459eebc3278bceaa0dd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c6a5752f72bd9459eebc3278bceaa0dd)) {
        Py_XDECREF(cache_frame_c6a5752f72bd9459eebc3278bceaa0dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6a5752f72bd9459eebc3278bceaa0dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6a5752f72bd9459eebc3278bceaa0dd = MAKE_FUNCTION_FRAME(codeobj_c6a5752f72bd9459eebc3278bceaa0dd, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c6a5752f72bd9459eebc3278bceaa0dd->m_type_description == NULL);
    frame_c6a5752f72bd9459eebc3278bceaa0dd = cache_frame_c6a5752f72bd9459eebc3278bceaa0dd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c6a5752f72bd9459eebc3278bceaa0dd);
    assert(Py_REFCNT(frame_c6a5752f72bd9459eebc3278bceaa0dd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_c6a5752f72bd9459eebc3278bceaa0dd->m_frame.f_lineno = 226;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_c6a5752f72bd9459eebc3278bceaa0dd->m_frame.f_lineno = 228;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[120], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        tmp_args_element_value_1 = mod_consts[99];
        CHECK_OBJECT(par_account_std);
        tmp_args_element_value_2 = par_account_std;
        frame_c6a5752f72bd9459eebc3278bceaa0dd->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_id);
        tmp_cmp_expr_left_1 = par_id;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_query);
        tmp_expression_value_2 = var_query;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 231;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_c6a5752f72bd9459eebc3278bceaa0dd->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_query);
        tmp_called_instance_3 = var_query;
        tmp_args_element_value_5 = mod_consts[63];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_6 = par_id;
        frame_c6a5752f72bd9459eebc3278bceaa0dd->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_query);
        tmp_called_instance_4 = var_query;
        frame_c6a5752f72bd9459eebc3278bceaa0dd->m_frame.f_lineno = 234;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[34]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c6a5752f72bd9459eebc3278bceaa0dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6a5752f72bd9459eebc3278bceaa0dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6a5752f72bd9459eebc3278bceaa0dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6a5752f72bd9459eebc3278bceaa0dd,
        type_description_1,
        par_self,
        par_id,
        par_account_std,
        var_query,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_c6a5752f72bd9459eebc3278bceaa0dd == cache_frame_c6a5752f72bd9459eebc3278bceaa0dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c6a5752f72bd9459eebc3278bceaa0dd);
        cache_frame_c6a5752f72bd9459eebc3278bceaa0dd = NULL;
    }

    assertFrameObject(frame_c6a5752f72bd9459eebc3278bceaa0dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_account_std);
    Py_DECREF(par_account_std);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_account_std);
    Py_DECREF(par_account_std);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__15_updateTemplate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_settings = python_pars[1];
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_1c7f9185229ab7ea73631a345f5b14b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1c7f9185229ab7ea73631a345f5b14b4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1c7f9185229ab7ea73631a345f5b14b4)) {
        Py_XDECREF(cache_frame_1c7f9185229ab7ea73631a345f5b14b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c7f9185229ab7ea73631a345f5b14b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c7f9185229ab7ea73631a345f5b14b4 = MAKE_FUNCTION_FRAME(codeobj_1c7f9185229ab7ea73631a345f5b14b4, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c7f9185229ab7ea73631a345f5b14b4->m_type_description == NULL);
    frame_1c7f9185229ab7ea73631a345f5b14b4 = cache_frame_1c7f9185229ab7ea73631a345f5b14b4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c7f9185229ab7ea73631a345f5b14b4);
    assert(Py_REFCNT(frame_1c7f9185229ab7ea73631a345f5b14b4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 237;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 241;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[121], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_query);
        tmp_expression_value_2 = var_query;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[62]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[63];
        CHECK_OBJECT(par_settings);
        tmp_expression_value_3 = par_settings;
        tmp_subscript_value_1 = mod_consts[122];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 242;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_query);
        tmp_expression_value_4 = var_query;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[62]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[97];
        CHECK_OBJECT(par_settings);
        tmp_expression_value_5 = par_settings;
        tmp_subscript_value_2 = mod_consts[106];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 243;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_query);
        tmp_expression_value_6 = var_query;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[62]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[99];
        CHECK_OBJECT(par_settings);
        tmp_expression_value_7 = par_settings;
        tmp_subscript_value_3 = mod_consts[109];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 244;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_query);
        tmp_expression_value_8 = var_query;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[62]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[83];
        CHECK_OBJECT(par_settings);
        tmp_expression_value_9 = par_settings;
        tmp_subscript_value_4 = mod_consts[110];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 245;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_query);
        tmp_expression_value_10 = var_query;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[62]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[111];
        CHECK_OBJECT(par_settings);
        tmp_expression_value_11 = par_settings;
        tmp_subscript_value_5 = mod_consts[112];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 246;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_query);
        tmp_expression_value_12 = var_query;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[62]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[113];
        CHECK_OBJECT(par_settings);
        tmp_expression_value_13 = par_settings;
        tmp_subscript_value_6 = mod_consts[114];
        tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_6);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 247;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_query);
        tmp_expression_value_14 = var_query;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[62]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[115];
        CHECK_OBJECT(par_settings);
        tmp_expression_value_15 = par_settings;
        tmp_subscript_value_7 = mod_consts[116];
        tmp_args_element_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_7);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 248;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_query);
        tmp_expression_value_16 = var_query;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[62]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[117];
        CHECK_OBJECT(par_settings);
        tmp_expression_value_17 = par_settings;
        tmp_subscript_value_8 = mod_consts[118];
        tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_8);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 249;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame.f_lineno = 250;
        tmp_call_result_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[34]);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c7f9185229ab7ea73631a345f5b14b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c7f9185229ab7ea73631a345f5b14b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c7f9185229ab7ea73631a345f5b14b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c7f9185229ab7ea73631a345f5b14b4,
        type_description_1,
        par_self,
        par_settings,
        var_query,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_1c7f9185229ab7ea73631a345f5b14b4 == cache_frame_1c7f9185229ab7ea73631a345f5b14b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c7f9185229ab7ea73631a345f5b14b4);
        cache_frame_1c7f9185229ab7ea73631a345f5b14b4 = NULL;
    }

    assertFrameObject(frame_1c7f9185229ab7ea73631a345f5b14b4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_settings);
    Py_DECREF(par_settings);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_settings);
    Py_DECREF(par_settings);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__16_switchActiveProject(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_activeid = python_pars[1];
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_423cbea6e370b0f49fdb18a44d8f12fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_423cbea6e370b0f49fdb18a44d8f12fd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_423cbea6e370b0f49fdb18a44d8f12fd)) {
        Py_XDECREF(cache_frame_423cbea6e370b0f49fdb18a44d8f12fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_423cbea6e370b0f49fdb18a44d8f12fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_423cbea6e370b0f49fdb18a44d8f12fd = MAKE_FUNCTION_FRAME(codeobj_423cbea6e370b0f49fdb18a44d8f12fd, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_423cbea6e370b0f49fdb18a44d8f12fd->m_type_description == NULL);
    frame_423cbea6e370b0f49fdb18a44d8f12fd = cache_frame_423cbea6e370b0f49fdb18a44d8f12fd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_423cbea6e370b0f49fdb18a44d8f12fd);
    assert(Py_REFCNT(frame_423cbea6e370b0f49fdb18a44d8f12fd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_423cbea6e370b0f49fdb18a44d8f12fd->m_frame.f_lineno = 253;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_423cbea6e370b0f49fdb18a44d8f12fd->m_frame.f_lineno = 254;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        frame_423cbea6e370b0f49fdb18a44d8f12fd->m_frame.f_lineno = 256;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[123], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_query);
        tmp_called_instance_3 = var_query;
        tmp_args_element_value_1 = mod_consts[63];
        CHECK_OBJECT(par_activeid);
        tmp_args_element_value_2 = par_activeid;
        frame_423cbea6e370b0f49fdb18a44d8f12fd->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_4 = var_query;
        frame_423cbea6e370b0f49fdb18a44d8f12fd->m_frame.f_lineno = 258;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[34]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_activeid);
        tmp_assattr_value_1 = par_activeid;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_423cbea6e370b0f49fdb18a44d8f12fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_423cbea6e370b0f49fdb18a44d8f12fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_423cbea6e370b0f49fdb18a44d8f12fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_423cbea6e370b0f49fdb18a44d8f12fd,
        type_description_1,
        par_self,
        par_activeid,
        var_query,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_423cbea6e370b0f49fdb18a44d8f12fd == cache_frame_423cbea6e370b0f49fdb18a44d8f12fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_423cbea6e370b0f49fdb18a44d8f12fd);
        cache_frame_423cbea6e370b0f49fdb18a44d8f12fd = NULL;
    }

    assertFrameObject(frame_423cbea6e370b0f49fdb18a44d8f12fd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_activeid);
    Py_DECREF(par_activeid);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_activeid);
    Py_DECREF(par_activeid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__17_updateProjectName(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_id = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_ad6f60ef5403c5e76a885cbcf372b3bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf)) {
        Py_XDECREF(cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf = MAKE_FUNCTION_FRAME(codeobj_ad6f60ef5403c5e76a885cbcf372b3bf, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf->m_type_description == NULL);
    frame_ad6f60ef5403c5e76a885cbcf372b3bf = cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad6f60ef5403c5e76a885cbcf372b3bf);
    assert(Py_REFCNT(frame_ad6f60ef5403c5e76a885cbcf372b3bf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_ad6f60ef5403c5e76a885cbcf372b3bf->m_frame.f_lineno = 262;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_ad6f60ef5403c5e76a885cbcf372b3bf->m_frame.f_lineno = 264;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[124], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        tmp_args_element_value_1 = mod_consts[97];
        CHECK_OBJECT(par_name);
        tmp_args_element_value_2 = par_name;
        frame_ad6f60ef5403c5e76a885cbcf372b3bf->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_3 = var_query;
        tmp_args_element_value_3 = mod_consts[63];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_4 = par_id;
        frame_ad6f60ef5403c5e76a885cbcf372b3bf->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_4 = var_query;
        frame_ad6f60ef5403c5e76a885cbcf372b3bf->m_frame.f_lineno = 267;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[34]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad6f60ef5403c5e76a885cbcf372b3bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad6f60ef5403c5e76a885cbcf372b3bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad6f60ef5403c5e76a885cbcf372b3bf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad6f60ef5403c5e76a885cbcf372b3bf,
        type_description_1,
        par_self,
        par_id,
        par_name,
        var_query,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_ad6f60ef5403c5e76a885cbcf372b3bf == cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf);
        cache_frame_ad6f60ef5403c5e76a885cbcf372b3bf = NULL;
    }

    assertFrameObject(frame_ad6f60ef5403c5e76a885cbcf372b3bf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__18_deleteProject(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_id = python_pars[1];
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_903ea2ef080b4b1263e4ea647a249ca2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_903ea2ef080b4b1263e4ea647a249ca2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_903ea2ef080b4b1263e4ea647a249ca2)) {
        Py_XDECREF(cache_frame_903ea2ef080b4b1263e4ea647a249ca2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_903ea2ef080b4b1263e4ea647a249ca2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_903ea2ef080b4b1263e4ea647a249ca2 = MAKE_FUNCTION_FRAME(codeobj_903ea2ef080b4b1263e4ea647a249ca2, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_903ea2ef080b4b1263e4ea647a249ca2->m_type_description == NULL);
    frame_903ea2ef080b4b1263e4ea647a249ca2 = cache_frame_903ea2ef080b4b1263e4ea647a249ca2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_903ea2ef080b4b1263e4ea647a249ca2);
    assert(Py_REFCNT(frame_903ea2ef080b4b1263e4ea647a249ca2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 270;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 272;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[125], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        tmp_args_element_value_1 = mod_consts[63];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_2 = par_id;
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_query);
        tmp_called_instance_3 = var_query;
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 274;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[34]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_4 = var_query;
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 276;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[126], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_5 = var_query;
        tmp_args_element_value_3 = mod_consts[63];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_4 = par_id;
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 277;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_query);
        tmp_called_instance_6 = var_query;
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 278;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[34]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_query);
        tmp_called_instance_7 = var_query;
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 280;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[127], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_query);
        tmp_called_instance_8 = var_query;
        tmp_args_element_value_5 = mod_consts[63];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_6 = par_id;
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_query);
        tmp_called_instance_9 = var_query;
        frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame.f_lineno = 282;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[34]);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_id);
        tmp_cmp_expr_right_1 = par_id;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[28];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_903ea2ef080b4b1263e4ea647a249ca2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_903ea2ef080b4b1263e4ea647a249ca2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_903ea2ef080b4b1263e4ea647a249ca2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_903ea2ef080b4b1263e4ea647a249ca2,
        type_description_1,
        par_self,
        par_id,
        var_query,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_903ea2ef080b4b1263e4ea647a249ca2 == cache_frame_903ea2ef080b4b1263e4ea647a249ca2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_903ea2ef080b4b1263e4ea647a249ca2);
        cache_frame_903ea2ef080b4b1263e4ea647a249ca2 = NULL;
    }

    assertFrameObject(frame_903ea2ef080b4b1263e4ea647a249ca2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_database$$$function__19_deleteTemplate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_id = python_pars[1];
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_dfbde37f4644694c52e5d4b87debbf16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dfbde37f4644694c52e5d4b87debbf16 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dfbde37f4644694c52e5d4b87debbf16)) {
        Py_XDECREF(cache_frame_dfbde37f4644694c52e5d4b87debbf16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dfbde37f4644694c52e5d4b87debbf16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dfbde37f4644694c52e5d4b87debbf16 = MAKE_FUNCTION_FRAME(codeobj_dfbde37f4644694c52e5d4b87debbf16, module_database, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dfbde37f4644694c52e5d4b87debbf16->m_type_description == NULL);
    frame_dfbde37f4644694c52e5d4b87debbf16 = cache_frame_dfbde37f4644694c52e5d4b87debbf16;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dfbde37f4644694c52e5d4b87debbf16);
    assert(Py_REFCNT(frame_dfbde37f4644694c52e5d4b87debbf16) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_dfbde37f4644694c52e5d4b87debbf16->m_frame.f_lineno = 287;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_query);
        tmp_called_instance_1 = var_query;
        frame_dfbde37f4644694c52e5d4b87debbf16->m_frame.f_lineno = 289;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[128], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_query);
        tmp_called_instance_2 = var_query;
        tmp_args_element_value_1 = mod_consts[63];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_2 = par_id;
        frame_dfbde37f4644694c52e5d4b87debbf16->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_query);
        tmp_called_instance_3 = var_query;
        frame_dfbde37f4644694c52e5d4b87debbf16->m_frame.f_lineno = 291;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[34]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_4 = var_query;
        frame_dfbde37f4644694c52e5d4b87debbf16->m_frame.f_lineno = 293;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[60],
            PyTuple_GET_ITEM(mod_consts[129], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_query);
        tmp_called_instance_5 = var_query;
        tmp_args_element_value_3 = mod_consts[63];
        CHECK_OBJECT(par_id);
        tmp_args_element_value_4 = par_id;
        frame_dfbde37f4644694c52e5d4b87debbf16->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_query);
        tmp_called_instance_6 = var_query;
        frame_dfbde37f4644694c52e5d4b87debbf16->m_frame.f_lineno = 295;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[34]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dfbde37f4644694c52e5d4b87debbf16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dfbde37f4644694c52e5d4b87debbf16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dfbde37f4644694c52e5d4b87debbf16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dfbde37f4644694c52e5d4b87debbf16,
        type_description_1,
        par_self,
        par_id,
        var_query,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_dfbde37f4644694c52e5d4b87debbf16 == cache_frame_dfbde37f4644694c52e5d4b87debbf16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dfbde37f4644694c52e5d4b87debbf16);
        cache_frame_dfbde37f4644694c52e5d4b87debbf16 = NULL;
    }

    assertFrameObject(frame_dfbde37f4644694c52e5d4b87debbf16);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_query);
    var_query = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_id);
    Py_DECREF(par_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_database$$$function__10_getFileLink() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__10_getFileLink,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_93cda9e2918da8da1f922df3b107b00f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__11_initNewProject(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__11_initNewProject,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_93c92ca68b44b255e6331329415dbfa4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__12_initNewTemplate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__12_initNewTemplate,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_daf0cb56de3c9fdb23f5177b9cb1b472,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__13_updateFileLink() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__13_updateFileLink,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_3b82c71ea70fefc19fd6f9dc73f8c624,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__14_updateAccountStd(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__14_updateAccountStd,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_c6a5752f72bd9459eebc3278bceaa0dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__15_updateTemplate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__15_updateTemplate,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_1c7f9185229ab7ea73631a345f5b14b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__16_switchActiveProject(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__16_switchActiveProject,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_423cbea6e370b0f49fdb18a44d8f12fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__17_updateProjectName(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__17_updateProjectName,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_ad6f60ef5403c5e76a885cbcf372b3bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__18_deleteProject(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__18_deleteProject,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_903ea2ef080b4b1263e4ea647a249ca2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__19_deleteTemplate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__19_deleteTemplate,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_dfbde37f4644694c52e5d4b87debbf16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__1___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_60517d789fcd8211c23d62377da2e19c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_database,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__2_checkDataBase() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__2_checkDataBase,
        mod_consts[145],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_1cf5fe48b83424e10db7165484d8ea3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__3_getMaxProjectIDFromDB() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__3_getMaxProjectIDFromDB,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_35808089691647f08f36b8b4bf17523d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__4_getActiveProjectIDFromDB() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__4_getActiveProjectIDFromDB,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_947775e7b3d8bf8f4366822b3a7019c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__5_getActiveProjectID() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__5_getActiveProjectID,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_7430f3662c2a2d6aa488e0a58ff9f469,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__6_getProjectFromDB(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__6_getProjectFromDB,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_d71bffa7f7f5bfd52d90236eb41c94f7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__7_getTemplateFromDB(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__7_getTemplateFromDB,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_a35f1240c44ac8a48422764625d92e45,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__8_getMaxTemplateIDFromDB() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__8_getMaxTemplateIDFromDB,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_c0ab20bc8abed8263cbc42b9b997e9cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_database$$$function__9_getMaxTemplateID() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_database$$$function__9_getMaxTemplateID,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_681d8d9ea18e46d9ecd8e2ce9308a290,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_database,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_database[] = {
    impl_database$$$function__1___init__,
    impl_database$$$function__2_checkDataBase,
    impl_database$$$function__3_getMaxProjectIDFromDB,
    impl_database$$$function__4_getActiveProjectIDFromDB,
    impl_database$$$function__5_getActiveProjectID,
    impl_database$$$function__6_getProjectFromDB,
    impl_database$$$function__7_getTemplateFromDB,
    impl_database$$$function__8_getMaxTemplateIDFromDB,
    impl_database$$$function__9_getMaxTemplateID,
    impl_database$$$function__10_getFileLink,
    impl_database$$$function__11_initNewProject,
    impl_database$$$function__12_initNewTemplate,
    impl_database$$$function__13_updateFileLink,
    impl_database$$$function__14_updateAccountStd,
    impl_database$$$function__15_updateTemplate,
    impl_database$$$function__16_switchActiveProject,
    impl_database$$$function__17_updateProjectName,
    impl_database$$$function__18_deleteProject,
    impl_database$$$function__19_deleteTemplate,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_database;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_database) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_database[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_database,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_database(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("database");

    // Store the module for future use.
    module_database = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("database: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("database: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("database: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdatabase\n");

    moduledict_database = MODULE_DICT(module_database);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_database,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_database,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[8]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_database,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_database,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_database,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_database);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_database, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_database, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_database, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_database);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_database, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_83786fd64b03a6311ac2c0c58148b1a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_database$$$class__1_DataBase_6 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_database, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_database, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_2);
    }
    frame_83786fd64b03a6311ac2c0c58148b1a3 = MAKE_MODULE_FRAME(codeobj_83786fd64b03a6311ac2c0c58148b1a3, module_database);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83786fd64b03a6311ac2c0c58148b1a3);
    assert(Py_REFCNT(frame_83786fd64b03a6311ac2c0c58148b1a3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[133], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[134], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_database, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_database, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[137];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_database;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[138];
        tmp_level_value_1 = mod_consts[28];
        frame_83786fd64b03a6311ac2c0c58148b1a3->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_database,
                mod_consts[22],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[22]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_database, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_database,
                mod_consts[32],
                mod_consts[28]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[32]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_database, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_database$$$class__1_DataBase_6 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[140], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[142], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_annotations_1 = DICT_COPY(mod_consts[143]);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_database$$$function__1___init__(tmp_annotations_1, tmp_closure_1);

            tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__2_checkDataBase();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[145], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__3_getMaxProjectIDFromDB();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__4_getActiveProjectIDFromDB();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__5_getActiveProjectID();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[149], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[151];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_database$$$function__6_getProjectFromDB(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[152], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[154];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_database$$$function__7_getTemplateFromDB(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[155], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__8_getMaxTemplateIDFromDB();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__9_getMaxTemplateID();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[158], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__10_getFileLink();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[160], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[162]);


            tmp_dictset_value = MAKE_FUNCTION_database$$$function__11_initNewProject(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__12_initNewTemplate();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[165], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__13_updateFileLink();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[167], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(mod_consts[169]);


            tmp_dictset_value = MAKE_FUNCTION_database$$$function__14_updateAccountStd(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[170], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_database$$$function__15_updateTemplate();

        tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(mod_consts[174]);


            tmp_dictset_value = MAKE_FUNCTION_database$$$function__16_switchActiveProject(tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[175], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[177]);


            tmp_dictset_value = MAKE_FUNCTION_database$$$function__17_updateProjectName(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[180]);


            tmp_dictset_value = MAKE_FUNCTION_database$$$function__18_deleteProject(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[181], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = DICT_COPY(mod_consts[180]);


            tmp_dictset_value = MAKE_FUNCTION_database$$$function__19_deleteTemplate(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_database$$$class__1_DataBase_6, mod_consts[183], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[141];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[185];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_database$$$class__1_DataBase_6;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_83786fd64b03a6311ac2c0c58148b1a3->m_frame.f_lineno = 6;
            tmp_assign_source_11 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto try_except_handler_4;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_11);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_10 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_database$$$class__1_DataBase_6);
        locals_database$$$class__1_DataBase_6 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_database$$$class__1_DataBase_6);
        locals_database$$$class__1_DataBase_6 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 6;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_database, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_10);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        assert(!(tmp_called_value_2 == NULL));
        frame_83786fd64b03a6311ac2c0c58148b1a3->m_frame.f_lineno = 298;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[186]);

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_database, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_12);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83786fd64b03a6311ac2c0c58148b1a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83786fd64b03a6311ac2c0c58148b1a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83786fd64b03a6311ac2c0c58148b1a3, exception_lineno);
    }



    assertFrameObject(frame_83786fd64b03a6311ac2c0c58148b1a3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("database", false);

    Py_INCREF(module_database);
    return module_database;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_database, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("database", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
