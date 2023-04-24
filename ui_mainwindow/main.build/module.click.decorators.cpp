/* Generated code for Python module 'click.decorators'
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

/* The "module_click$decorators" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_click$decorators;
PyDictObject *moduledict_click$decorators;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[216];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[216];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("click.decorators"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 216; i++) {
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
void checkModuleConstants_click$decorators(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 216; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_14ea2845be8f2e825293bcd1c6939c5b;
static PyCodeObject *codeobj_a988f203720613006b2864e144628c62;
static PyCodeObject *codeobj_32e970163245110cc3804300126107c2;
static PyCodeObject *codeobj_0dda503899f75981c438866c7c5e113f;
static PyCodeObject *codeobj_3accc0c108ad618aff8f4c8038533b5a;
static PyCodeObject *codeobj_8fa8feb3f5e7851fb971322f78a8bf5e;
static PyCodeObject *codeobj_5e90069a8d94cd80515756492959ec0f;
static PyCodeObject *codeobj_5e821c450a2c9c59582e5fa7fda63bae;
static PyCodeObject *codeobj_1cd120dbf3544e58d1aa2b708e43cbfe;
static PyCodeObject *codeobj_d9e47258059bf3f7e3edcf583f85b4d6;
static PyCodeObject *codeobj_dcbf7bdbb0e1470dafa4e44cf26a46e9;
static PyCodeObject *codeobj_3f2b6f34a789cd0e95a703c5846fd611;
static PyCodeObject *codeobj_fc1c993f158b11438b24a78169e7891b;
static PyCodeObject *codeobj_1a364850b213c02ddf95efd3118801f5;
static PyCodeObject *codeobj_7cffb9bea8e0951e6a5e8decbfb4cfcc;
static PyCodeObject *codeobj_0772e4db46d1b182ae26a74af53d593b;
static PyCodeObject *codeobj_137f2b94c16a97522593f8f531eb6723;
static PyCodeObject *codeobj_22f4fa6d8dba6517b5196e4dfa34393f;
static PyCodeObject *codeobj_01b50b05cae412bf61d253cf0d092f8a;
static PyCodeObject *codeobj_cf75ee4e82b9009511f4fe5c7a2b380f;
static PyCodeObject *codeobj_c72565447e509d162e88e736470665df;
static PyCodeObject *codeobj_a5d4b50d2fb560c04a4968c6746f1774;
static PyCodeObject *codeobj_efca697068bffe22e54c606cff91735a;
static PyCodeObject *codeobj_2943e86fe89bd0a59cba29344405e69b;
static PyCodeObject *codeobj_4f62bc20174e754eed2e94523ed0eaf8;
static PyCodeObject *codeobj_4764aabc5161cb97b02dc134969db903;
static PyCodeObject *codeobj_021c51c92038922c132bf025a914e24e;
static PyCodeObject *codeobj_5f1e5180fb7e699e3ed497c1be2db89d;
static PyCodeObject *codeobj_4119ba7dee278e184a02a02af342004e;
static PyCodeObject *codeobj_a612bacd989d37dcb91a688cd7833d8a;
static PyCodeObject *codeobj_ee32ba314cf9e74097ff334cda919995;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[185]); CHECK_OBJECT(module_filename_obj);
    codeobj_14ea2845be8f2e825293bcd1c6939c5b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[186], mod_consts[186], NULL, NULL, 0, 0, 0);
    codeobj_a988f203720613006b2864e144628c62 = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[187], NULL, 2, 0, 0);
    codeobj_32e970163245110cc3804300126107c2 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[188], NULL, 0, 0, 0);
    codeobj_0dda503899f75981c438866c7c5e113f = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[189], NULL, 3, 0, 0);
    codeobj_3accc0c108ad618aff8f4c8038533b5a = MAKE_CODE_OBJECT(module_filename_obj, 482, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[189], NULL, 3, 0, 0);
    codeobj_8fa8feb3f5e7851fb971322f78a8bf5e = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[60], mod_consts[60], mod_consts[190], mod_consts[191], 3, 0, 0);
    codeobj_5e90069a8d94cd80515756492959ec0f = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[192], NULL, 1, 0, 0);
    codeobj_5e821c450a2c9c59582e5fa7fda63bae = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_VARKEYWORDS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[193], NULL, 1, 0, 0);
    codeobj_1cd120dbf3544e58d1aa2b708e43cbfe = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_VARKEYWORDS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[194], NULL, 2, 0, 0);
    codeobj_d9e47258059bf3f7e3edcf583f85b4d6 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[195], NULL, 2, 0, 0);
    codeobj_dcbf7bdbb0e1470dafa4e44cf26a46e9 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[196], NULL, 0, 0, 0);
    codeobj_3f2b6f34a789cd0e95a703c5846fd611 = MAKE_CODE_OBJECT(module_filename_obj, 285, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[13], mod_consts[13], mod_consts[197], mod_consts[198], 1, 0, 0);
    codeobj_fc1c993f158b11438b24a78169e7891b = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[13], mod_consts[13], mod_consts[199], mod_consts[200], 1, 0, 0);
    codeobj_1a364850b213c02ddf95efd3118801f5 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[13], mod_consts[13], mod_consts[201], mod_consts[202], 1, 0, 0);
    codeobj_7cffb9bea8e0951e6a5e8decbfb4cfcc = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[13], mod_consts[13], mod_consts[201], mod_consts[203], 1, 0, 0);
    codeobj_0772e4db46d1b182ae26a74af53d593b = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[13], mod_consts[13], mod_consts[204], mod_consts[198], 1, 0, 0);
    codeobj_137f2b94c16a97522593f8f531eb6723 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[192], NULL, 1, 0, 0);
    codeobj_22f4fa6d8dba6517b5196e4dfa34393f = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_VARKEYWORDS | CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[193], NULL, 1, 0, 0);
    codeobj_01b50b05cae412bf61d253cf0d092f8a = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[205], NULL, 1, 0, 0);
    codeobj_cf75ee4e82b9009511f4fe5c7a2b380f = MAKE_CODE_OBJECT(module_filename_obj, 469, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[184], mod_consts[184], mod_consts[196], NULL, 0, 0, 0);
    codeobj_c72565447e509d162e88e736470665df = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[206], NULL, 2, 0, 0);
    codeobj_a5d4b50d2fb560c04a4968c6746f1774 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[0], mod_consts[0], mod_consts[207], mod_consts[208], 0, 0, 0);
    codeobj_efca697068bffe22e54c606cff91735a = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[0], mod_consts[0], mod_consts[209], mod_consts[210], 0, 0, 0);
    codeobj_2943e86fe89bd0a59cba29344405e69b = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[0], mod_consts[0], mod_consts[211], mod_consts[212], 0, 0, 0);
    codeobj_4f62bc20174e754eed2e94523ed0eaf8 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[0], mod_consts[0], mod_consts[211], mod_consts[212], 0, 0, 0);
    codeobj_4764aabc5161cb97b02dc134969db903 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[188], NULL, 0, 0, 0);
    codeobj_021c51c92038922c132bf025a914e24e = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[201], NULL, 1, 0, 0);
    codeobj_5f1e5180fb7e699e3ed497c1be2db89d = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[213], NULL, 1, 1, 0);
    codeobj_4119ba7dee278e184a02a02af342004e = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[201], NULL, 1, 0, 0);
    codeobj_a612bacd989d37dcb91a688cd7833d8a = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[214], NULL, 0, 0, 0);
    codeobj_ee32ba314cf9e74097ff334cda919995 = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[215], NULL, 1, 3, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__16_complex_call_helper_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__11_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__10_group(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__11_group(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__12__param_memo(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__13_argument(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__13_argument$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__14_option(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__14_option$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__15_confirmation_option(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__15_confirmation_option$$$function__1_callback(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__16_password_option(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__17_version_option(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__17_version_option$$$function__1_callback(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__18_help_option(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__18_help_option$$$function__1_callback(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__1_pass_context(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__1_pass_context$$$function__1_new_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__2_pass_obj(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__2_pass_obj$$$function__1_new_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__3_make_pass_decorator(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator$$$function__1_new_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__4_pass_meta_key(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator$$$function__1_new_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__5_command(PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__6_command(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__7_command(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__8_command(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__8_command$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$decorators$$$function__9_group(PyObject *annotations);


// The module function definitions.
static PyObject *impl_click$decorators$$$function__1_pass_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_new_func = NULL;
    struct Nuitka_FrameObject *frame_021c51c92038922c132bf025a914e24e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_021c51c92038922c132bf025a914e24e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__1_pass_context$$$function__1_new_func(tmp_closure_1);

        assert(var_new_func == NULL);
        var_new_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_021c51c92038922c132bf025a914e24e)) {
        Py_XDECREF(cache_frame_021c51c92038922c132bf025a914e24e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_021c51c92038922c132bf025a914e24e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_021c51c92038922c132bf025a914e24e = MAKE_FUNCTION_FRAME(codeobj_021c51c92038922c132bf025a914e24e, module_click$decorators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_021c51c92038922c132bf025a914e24e->m_type_description == NULL);
    frame_021c51c92038922c132bf025a914e24e = cache_frame_021c51c92038922c132bf025a914e24e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_021c51c92038922c132bf025a914e24e);
    assert(Py_REFCNT(frame_021c51c92038922c132bf025a914e24e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 28;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_func);
        tmp_args_element_value_3 = var_new_func;
        frame_021c51c92038922c132bf025a914e24e->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_f));
        tmp_args_element_value_4 = Nuitka_Cell_GET(par_f);
        frame_021c51c92038922c132bf025a914e24e->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "co";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_021c51c92038922c132bf025a914e24e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_021c51c92038922c132bf025a914e24e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_021c51c92038922c132bf025a914e24e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_021c51c92038922c132bf025a914e24e,
        type_description_1,
        par_f,
        var_new_func
    );


    // Release cached frame if used for exception.
    if (frame_021c51c92038922c132bf025a914e24e == cache_frame_021c51c92038922c132bf025a914e24e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_021c51c92038922c132bf025a914e24e);
        cache_frame_021c51c92038922c132bf025a914e24e = NULL;
    }

    assertFrameObject(frame_021c51c92038922c132bf025a914e24e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_func);
    Py_DECREF(var_new_func);
    var_new_func = NULL;
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

    CHECK_OBJECT(var_new_func);
    Py_DECREF(var_new_func);
    var_new_func = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__1_pass_context$$$function__1_new_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_2943e86fe89bd0a59cba29344405e69b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2943e86fe89bd0a59cba29344405e69b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2943e86fe89bd0a59cba29344405e69b)) {
        Py_XDECREF(cache_frame_2943e86fe89bd0a59cba29344405e69b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2943e86fe89bd0a59cba29344405e69b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2943e86fe89bd0a59cba29344405e69b = MAKE_FUNCTION_FRAME(codeobj_2943e86fe89bd0a59cba29344405e69b, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2943e86fe89bd0a59cba29344405e69b->m_type_description == NULL);
    frame_2943e86fe89bd0a59cba29344405e69b = cache_frame_2943e86fe89bd0a59cba29344405e69b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2943e86fe89bd0a59cba29344405e69b);
    assert(Py_REFCNT(frame_2943e86fe89bd0a59cba29344405e69b) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_2943e86fe89bd0a59cba29344405e69b->m_frame.f_lineno = 26;
        tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_2943e86fe89bd0a59cba29344405e69b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2943e86fe89bd0a59cba29344405e69b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2943e86fe89bd0a59cba29344405e69b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2943e86fe89bd0a59cba29344405e69b,
        type_description_1,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_2943e86fe89bd0a59cba29344405e69b == cache_frame_2943e86fe89bd0a59cba29344405e69b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2943e86fe89bd0a59cba29344405e69b);
        cache_frame_2943e86fe89bd0a59cba29344405e69b = NULL;
    }

    assertFrameObject(frame_2943e86fe89bd0a59cba29344405e69b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__2_pass_obj(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_new_func = NULL;
    struct Nuitka_FrameObject *frame_4119ba7dee278e184a02a02af342004e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4119ba7dee278e184a02a02af342004e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__2_pass_obj$$$function__1_new_func(tmp_closure_1);

        assert(var_new_func == NULL);
        var_new_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_4119ba7dee278e184a02a02af342004e)) {
        Py_XDECREF(cache_frame_4119ba7dee278e184a02a02af342004e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4119ba7dee278e184a02a02af342004e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4119ba7dee278e184a02a02af342004e = MAKE_FUNCTION_FRAME(codeobj_4119ba7dee278e184a02a02af342004e, module_click$decorators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4119ba7dee278e184a02a02af342004e->m_type_description == NULL);
    frame_4119ba7dee278e184a02a02af342004e = cache_frame_4119ba7dee278e184a02a02af342004e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4119ba7dee278e184a02a02af342004e);
    assert(Py_REFCNT(frame_4119ba7dee278e184a02a02af342004e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 40;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_func);
        tmp_args_element_value_3 = var_new_func;
        frame_4119ba7dee278e184a02a02af342004e->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_f));
        tmp_args_element_value_4 = Nuitka_Cell_GET(par_f);
        frame_4119ba7dee278e184a02a02af342004e->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "co";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4119ba7dee278e184a02a02af342004e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4119ba7dee278e184a02a02af342004e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4119ba7dee278e184a02a02af342004e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4119ba7dee278e184a02a02af342004e,
        type_description_1,
        par_f,
        var_new_func
    );


    // Release cached frame if used for exception.
    if (frame_4119ba7dee278e184a02a02af342004e == cache_frame_4119ba7dee278e184a02a02af342004e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4119ba7dee278e184a02a02af342004e);
        cache_frame_4119ba7dee278e184a02a02af342004e = NULL;
    }

    assertFrameObject(frame_4119ba7dee278e184a02a02af342004e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_func);
    Py_DECREF(var_new_func);
    var_new_func = NULL;
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

    CHECK_OBJECT(var_new_func);
    Py_DECREF(var_new_func);
    var_new_func = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__2_pass_obj$$$function__1_new_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_4f62bc20174e754eed2e94523ed0eaf8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4f62bc20174e754eed2e94523ed0eaf8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f62bc20174e754eed2e94523ed0eaf8)) {
        Py_XDECREF(cache_frame_4f62bc20174e754eed2e94523ed0eaf8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f62bc20174e754eed2e94523ed0eaf8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f62bc20174e754eed2e94523ed0eaf8 = MAKE_FUNCTION_FRAME(codeobj_4f62bc20174e754eed2e94523ed0eaf8, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f62bc20174e754eed2e94523ed0eaf8->m_type_description == NULL);
    frame_4f62bc20174e754eed2e94523ed0eaf8 = cache_frame_4f62bc20174e754eed2e94523ed0eaf8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f62bc20174e754eed2e94523ed0eaf8);
    assert(Py_REFCNT(frame_4f62bc20174e754eed2e94523ed0eaf8) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_4f62bc20174e754eed2e94523ed0eaf8->m_frame.f_lineno = 38;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_4f62bc20174e754eed2e94523ed0eaf8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f62bc20174e754eed2e94523ed0eaf8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f62bc20174e754eed2e94523ed0eaf8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f62bc20174e754eed2e94523ed0eaf8,
        type_description_1,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4f62bc20174e754eed2e94523ed0eaf8 == cache_frame_4f62bc20174e754eed2e94523ed0eaf8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f62bc20174e754eed2e94523ed0eaf8);
        cache_frame_4f62bc20174e754eed2e94523ed0eaf8 = NULL;
    }

    assertFrameObject(frame_4f62bc20174e754eed2e94523ed0eaf8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__3_make_pass_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_object_type = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_ensure = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_decorator = NULL;
    struct Nuitka_FrameObject *frame_c72565447e509d162e88e736470665df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c72565447e509d162e88e736470665df = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c72565447e509d162e88e736470665df)) {
        Py_XDECREF(cache_frame_c72565447e509d162e88e736470665df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c72565447e509d162e88e736470665df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c72565447e509d162e88e736470665df = MAKE_FUNCTION_FRAME(codeobj_c72565447e509d162e88e736470665df, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c72565447e509d162e88e736470665df->m_type_description == NULL);
    frame_c72565447e509d162e88e736470665df = cache_frame_c72565447e509d162e88e736470665df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c72565447e509d162e88e736470665df);
    assert(Py_REFCNT(frame_c72565447e509d162e88e736470665df) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "cco";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = par_ensure;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_object_type;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator(tmp_annotations_1, tmp_closure_1);

        assert(var_decorator == NULL);
        var_decorator = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c72565447e509d162e88e736470665df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c72565447e509d162e88e736470665df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c72565447e509d162e88e736470665df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c72565447e509d162e88e736470665df,
        type_description_1,
        par_object_type,
        par_ensure,
        var_decorator
    );


    // Release cached frame if used for exception.
    if (frame_c72565447e509d162e88e736470665df == cache_frame_c72565447e509d162e88e736470665df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c72565447e509d162e88e736470665df);
        cache_frame_c72565447e509d162e88e736470665df = NULL;
    }

    assertFrameObject(frame_c72565447e509d162e88e736470665df);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_decorator);
    tmp_return_value = var_decorator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_decorator);
    Py_DECREF(var_decorator);
    var_decorator = NULL;
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
    CHECK_OBJECT(par_object_type);
    Py_DECREF(par_object_type);
    CHECK_OBJECT(par_ensure);
    Py_DECREF(par_ensure);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_object_type);
    Py_DECREF(par_object_type);
    CHECK_OBJECT(par_ensure);
    Py_DECREF(par_ensure);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_new_func = NULL;
    struct Nuitka_FrameObject *frame_1a364850b213c02ddf95efd3118801f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a364850b213c02ddf95efd3118801f5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_f;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = self->m_closure[1];
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator$$$function__1_new_func(tmp_closure_1);

        assert(var_new_func == NULL);
        var_new_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1a364850b213c02ddf95efd3118801f5)) {
        Py_XDECREF(cache_frame_1a364850b213c02ddf95efd3118801f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a364850b213c02ddf95efd3118801f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a364850b213c02ddf95efd3118801f5 = MAKE_FUNCTION_FRAME(codeobj_1a364850b213c02ddf95efd3118801f5, module_click$decorators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a364850b213c02ddf95efd3118801f5->m_type_description == NULL);
    frame_1a364850b213c02ddf95efd3118801f5 = cache_frame_1a364850b213c02ddf95efd3118801f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a364850b213c02ddf95efd3118801f5);
    assert(Py_REFCNT(frame_1a364850b213c02ddf95efd3118801f5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 86;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_func);
        tmp_args_element_value_3 = var_new_func;
        frame_1a364850b213c02ddf95efd3118801f5->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_f));
        tmp_args_element_value_4 = Nuitka_Cell_GET(par_f);
        frame_1a364850b213c02ddf95efd3118801f5->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "co";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a364850b213c02ddf95efd3118801f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a364850b213c02ddf95efd3118801f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a364850b213c02ddf95efd3118801f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a364850b213c02ddf95efd3118801f5,
        type_description_1,
        par_f,
        var_new_func
    );


    // Release cached frame if used for exception.
    if (frame_1a364850b213c02ddf95efd3118801f5 == cache_frame_1a364850b213c02ddf95efd3118801f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a364850b213c02ddf95efd3118801f5);
        cache_frame_1a364850b213c02ddf95efd3118801f5 = NULL;
    }

    assertFrameObject(frame_1a364850b213c02ddf95efd3118801f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_func);
    Py_DECREF(var_new_func);
    var_new_func = NULL;
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

    CHECK_OBJECT(var_new_func);
    Py_DECREF(var_new_func);
    var_new_func = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator$$$function__1_new_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_ctx = NULL;
    PyObject *var_obj = NULL;
    struct Nuitka_FrameObject *frame_a5d4b50d2fb560c04a4968c6746f1774;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a5d4b50d2fb560c04a4968c6746f1774 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a5d4b50d2fb560c04a4968c6746f1774)) {
        Py_XDECREF(cache_frame_a5d4b50d2fb560c04a4968c6746f1774);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5d4b50d2fb560c04a4968c6746f1774 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5d4b50d2fb560c04a4968c6746f1774 = MAKE_FUNCTION_FRAME(codeobj_a5d4b50d2fb560c04a4968c6746f1774, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5d4b50d2fb560c04a4968c6746f1774->m_type_description == NULL);
    frame_a5d4b50d2fb560c04a4968c6746f1774 = cache_frame_a5d4b50d2fb560c04a4968c6746f1774;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5d4b50d2fb560c04a4968c6746f1774);
    assert(Py_REFCNT(frame_a5d4b50d2fb560c04a4968c6746f1774) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        frame_a5d4b50d2fb560c04a4968c6746f1774->m_frame.f_lineno = 70;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[0]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_1 = var_ctx;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_a5d4b50d2fb560c04a4968c6746f1774->m_frame.f_lineno = 73;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_a5d4b50d2fb560c04a4968c6746f1774->m_frame.f_lineno = 75;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_obj);
        tmp_cmp_expr_left_1 = var_obj;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[21];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[19]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 80;
                type_description_1 = "ooooccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
            tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "ooooccc";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "ooooccc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[23];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "ooooccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[23], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        frame_a5d4b50d2fb560c04a4968c6746f1774->m_frame.f_lineno = 78;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 78;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooccc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (var_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = var_ctx;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[26]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_obj);
        tmp_tuple_element_2 = var_obj;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooccc";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a5d4b50d2fb560c04a4968c6746f1774, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5d4b50d2fb560c04a4968c6746f1774->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5d4b50d2fb560c04a4968c6746f1774, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5d4b50d2fb560c04a4968c6746f1774,
        type_description_1,
        par_args,
        par_kwargs,
        var_ctx,
        var_obj,
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_a5d4b50d2fb560c04a4968c6746f1774 == cache_frame_a5d4b50d2fb560c04a4968c6746f1774) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5d4b50d2fb560c04a4968c6746f1774);
        cache_frame_a5d4b50d2fb560c04a4968c6746f1774 = NULL;
    }

    assertFrameObject(frame_a5d4b50d2fb560c04a4968c6746f1774);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_obj);
    Py_DECREF(var_obj);
    var_obj = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__4_pass_meta_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_key = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_doc_description = python_pars[1];
    PyObject *var_decorator = NULL;
    struct Nuitka_FrameObject *frame_5f1e5180fb7e699e3ed497c1be2db89d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5f1e5180fb7e699e3ed497c1be2db89d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5f1e5180fb7e699e3ed497c1be2db89d)) {
        Py_XDECREF(cache_frame_5f1e5180fb7e699e3ed497c1be2db89d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f1e5180fb7e699e3ed497c1be2db89d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f1e5180fb7e699e3ed497c1be2db89d = MAKE_FUNCTION_FRAME(codeobj_5f1e5180fb7e699e3ed497c1be2db89d, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f1e5180fb7e699e3ed497c1be2db89d->m_type_description == NULL);
    frame_5f1e5180fb7e699e3ed497c1be2db89d = cache_frame_5f1e5180fb7e699e3ed497c1be2db89d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5f1e5180fb7e699e3ed497c1be2db89d);
    assert(Py_REFCNT(frame_5f1e5180fb7e699e3ed497c1be2db89d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "coo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = par_key;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator(tmp_annotations_1, tmp_closure_1);

        assert(var_decorator == NULL);
        var_decorator = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_doc_description);
        tmp_cmp_expr_left_1 = par_doc_description;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[28];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(par_key));
            tmp_operand_value_1 = Nuitka_Cell_GET(par_key);
            tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "coo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[23];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "coo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = PyUnicode_Join(mod_consts[23], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_doc_description;
            assert(old != NULL);
            par_doc_description = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_assattr_target_1;
        tmp_tuple_element_2 = mod_consts[30];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_doc_description);
            tmp_format_value_2 = par_doc_description;
            tmp_format_spec_2 = mod_consts[23];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "coo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assattr_value_1 = PyUnicode_Join(mod_consts[23], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_decorator);
        tmp_assattr_target_1 = var_decorator;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[32], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f1e5180fb7e699e3ed497c1be2db89d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f1e5180fb7e699e3ed497c1be2db89d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f1e5180fb7e699e3ed497c1be2db89d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f1e5180fb7e699e3ed497c1be2db89d,
        type_description_1,
        par_key,
        par_doc_description,
        var_decorator
    );


    // Release cached frame if used for exception.
    if (frame_5f1e5180fb7e699e3ed497c1be2db89d == cache_frame_5f1e5180fb7e699e3ed497c1be2db89d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f1e5180fb7e699e3ed497c1be2db89d);
        cache_frame_5f1e5180fb7e699e3ed497c1be2db89d = NULL;
    }

    assertFrameObject(frame_5f1e5180fb7e699e3ed497c1be2db89d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_decorator);
    tmp_return_value = var_decorator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_doc_description);
    Py_DECREF(par_doc_description);
    par_doc_description = NULL;
    CHECK_OBJECT(var_decorator);
    Py_DECREF(var_decorator);
    var_decorator = NULL;
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

    CHECK_OBJECT(par_doc_description);
    Py_DECREF(par_doc_description);
    par_doc_description = NULL;
    Py_XDECREF(var_decorator);
    var_decorator = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_new_func = NULL;
    struct Nuitka_FrameObject *frame_7cffb9bea8e0951e6a5e8decbfb4cfcc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_f;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator$$$function__1_new_func(tmp_closure_1);

        assert(var_new_func == NULL);
        var_new_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc)) {
        Py_XDECREF(cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc = MAKE_FUNCTION_FRAME(codeobj_7cffb9bea8e0951e6a5e8decbfb4cfcc, module_click$decorators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc->m_type_description == NULL);
    frame_7cffb9bea8e0951e6a5e8decbfb4cfcc = cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7cffb9bea8e0951e6a5e8decbfb4cfcc);
    assert(Py_REFCNT(frame_7cffb9bea8e0951e6a5e8decbfb4cfcc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 112;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_func);
        tmp_args_element_value_3 = var_new_func;
        frame_7cffb9bea8e0951e6a5e8decbfb4cfcc->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_f));
        tmp_args_element_value_4 = Nuitka_Cell_GET(par_f);
        frame_7cffb9bea8e0951e6a5e8decbfb4cfcc->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "co";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7cffb9bea8e0951e6a5e8decbfb4cfcc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7cffb9bea8e0951e6a5e8decbfb4cfcc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7cffb9bea8e0951e6a5e8decbfb4cfcc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7cffb9bea8e0951e6a5e8decbfb4cfcc,
        type_description_1,
        par_f,
        var_new_func
    );


    // Release cached frame if used for exception.
    if (frame_7cffb9bea8e0951e6a5e8decbfb4cfcc == cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc);
        cache_frame_7cffb9bea8e0951e6a5e8decbfb4cfcc = NULL;
    }

    assertFrameObject(frame_7cffb9bea8e0951e6a5e8decbfb4cfcc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_func);
    Py_DECREF(var_new_func);
    var_new_func = NULL;
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

    CHECK_OBJECT(var_new_func);
    Py_DECREF(var_new_func);
    var_new_func = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator$$$function__1_new_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_ctx = NULL;
    PyObject *var_obj = NULL;
    struct Nuitka_FrameObject *frame_efca697068bffe22e54c606cff91735a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_efca697068bffe22e54c606cff91735a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_efca697068bffe22e54c606cff91735a)) {
        Py_XDECREF(cache_frame_efca697068bffe22e54c606cff91735a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_efca697068bffe22e54c606cff91735a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_efca697068bffe22e54c606cff91735a = MAKE_FUNCTION_FRAME(codeobj_efca697068bffe22e54c606cff91735a, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_efca697068bffe22e54c606cff91735a->m_type_description == NULL);
    frame_efca697068bffe22e54c606cff91735a = cache_frame_efca697068bffe22e54c606cff91735a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_efca697068bffe22e54c606cff91735a);
    assert(Py_REFCNT(frame_efca697068bffe22e54c606cff91735a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_efca697068bffe22e54c606cff91735a->m_frame.f_lineno = 108;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_2 = var_ctx;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_expression_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[36]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_2;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        CHECK_OBJECT(var_ctx);
        tmp_expression_value_3 = var_ctx;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_obj);
        tmp_tuple_element_1 = var_obj;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooocc";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_efca697068bffe22e54c606cff91735a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_efca697068bffe22e54c606cff91735a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_efca697068bffe22e54c606cff91735a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_efca697068bffe22e54c606cff91735a,
        type_description_1,
        par_args,
        par_kwargs,
        var_ctx,
        var_obj,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_efca697068bffe22e54c606cff91735a == cache_frame_efca697068bffe22e54c606cff91735a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_efca697068bffe22e54c606cff91735a);
        cache_frame_efca697068bffe22e54c606cff91735a = NULL;
    }

    assertFrameObject(frame_efca697068bffe22e54c606cff91735a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ctx);
    Py_DECREF(var_ctx);
    var_ctx = NULL;
    CHECK_OBJECT(var_obj);
    Py_DECREF(var_obj);
    var_obj = NULL;
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

    Py_XDECREF(var_ctx);
    var_ctx = NULL;
    Py_XDECREF(var_obj);
    var_obj = NULL;
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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__8_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_attrs = Nuitka_Cell_New1(python_pars[2]);
    PyObject *var_func = NULL;
    PyObject *var_decorator = NULL;
    struct Nuitka_FrameObject *frame_d9e47258059bf3f7e3edcf583f85b4d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d9e47258059bf3f7e3edcf583f85b4d6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_func == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_func = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_d9e47258059bf3f7e3edcf583f85b4d6)) {
        Py_XDECREF(cache_frame_d9e47258059bf3f7e3edcf583f85b4d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9e47258059bf3f7e3edcf583f85b4d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9e47258059bf3f7e3edcf583f85b4d6 = MAKE_FUNCTION_FRAME(codeobj_d9e47258059bf3f7e3edcf583f85b4d6, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9e47258059bf3f7e3edcf583f85b4d6->m_type_description == NULL);
    frame_d9e47258059bf3f7e3edcf583f85b4d6 = cache_frame_d9e47258059bf3f7e3edcf583f85b4d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d9e47258059bf3f7e3edcf583f85b4d6);
    assert(Py_REFCNT(frame_d9e47258059bf3f7e3edcf583f85b4d6) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[37]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(Nuitka_Cell_GET(par_name));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_name);
        frame_d9e47258059bf3f7e3edcf583f85b4d6->m_frame.f_lineno = 187;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 187;
            type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_name));
        tmp_assign_source_2 = Nuitka_Cell_GET(par_name);
        {
            PyObject *old = var_func;
            assert(old != NULL);
            var_func = tmp_assign_source_2;
            Py_INCREF(var_func);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        {
            PyObject *old = Nuitka_Cell_GET(par_name);
            PyCell_SET(par_name, tmp_assign_source_3);
            Py_INCREF(tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_cls);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[38];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 190;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_attrs));
        tmp_operand_value_2 = Nuitka_Cell_GET(par_attrs);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[39];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 191;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    branch_no_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(par_cls) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_cls);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_assign_source_4 == NULL)) {
            tmp_assign_source_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_cls);
            PyCell_SET(par_cls, tmp_assign_source_4);
            Py_INCREF(tmp_assign_source_4);
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        struct Nuitka_CellObject *tmp_closure_1[3];
        tmp_dict_key_1 = mod_consts[7];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Py_Ellipsis;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_3 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_1 = "cccoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "cccoo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = par_attrs;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_cls;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_name;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_5 = MAKE_FUNCTION_click$decorators$$$function__8_command$$$function__1_decorator(tmp_annotations_1, tmp_closure_1);

        assert(var_decorator == NULL);
        var_decorator = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_func);
        tmp_cmp_expr_left_3 = var_func;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_decorator);
        tmp_called_value_2 = var_decorator;
        CHECK_OBJECT(var_func);
        tmp_args_element_value_2 = var_func;
        frame_d9e47258059bf3f7e3edcf583f85b4d6->m_frame.f_lineno = 224;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9e47258059bf3f7e3edcf583f85b4d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9e47258059bf3f7e3edcf583f85b4d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9e47258059bf3f7e3edcf583f85b4d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9e47258059bf3f7e3edcf583f85b4d6,
        type_description_1,
        par_name,
        par_cls,
        par_attrs,
        var_func,
        var_decorator
    );


    // Release cached frame if used for exception.
    if (frame_d9e47258059bf3f7e3edcf583f85b4d6 == cache_frame_d9e47258059bf3f7e3edcf583f85b4d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9e47258059bf3f7e3edcf583f85b4d6);
        cache_frame_d9e47258059bf3f7e3edcf583f85b4d6 = NULL;
    }

    assertFrameObject(frame_d9e47258059bf3f7e3edcf583f85b4d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_decorator);
    tmp_return_value = var_decorator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    par_cls = NULL;
    CHECK_OBJECT(var_func);
    Py_DECREF(var_func);
    var_func = NULL;
    CHECK_OBJECT(var_decorator);
    Py_DECREF(var_decorator);
    var_decorator = NULL;
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

    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_decorator);
    var_decorator = NULL;
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
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__8_command$$$function__1_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    PyObject *var_attr_params = NULL;
    PyObject *var_params = NULL;
    PyObject *var_decorator_params = NULL;
    PyObject *var_cmd = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_fc1c993f158b11438b24a78169e7891b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fc1c993f158b11438b24a78169e7891b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fc1c993f158b11438b24a78169e7891b)) {
        Py_XDECREF(cache_frame_fc1c993f158b11438b24a78169e7891b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc1c993f158b11438b24a78169e7891b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc1c993f158b11438b24a78169e7891b = MAKE_FUNCTION_FRAME(codeobj_fc1c993f158b11438b24a78169e7891b, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc1c993f158b11438b24a78169e7891b->m_type_description == NULL);
    frame_fc1c993f158b11438b24a78169e7891b = cache_frame_fc1c993f158b11438b24a78169e7891b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc1c993f158b11438b24a78169e7891b);
    assert(Py_REFCNT(frame_fc1c993f158b11438b24a78169e7891b) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_f);
        tmp_isinstance_inst_1 = par_f;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[46];
        frame_fc1c993f158b11438b24a78169e7891b->m_frame.f_lineno = 198;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 198;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooccc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        frame_fc1c993f158b11438b24a78169e7891b->m_frame.f_lineno = 200;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[49]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_attr_params == NULL);
        var_attr_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_attr_params);
        tmp_cmp_expr_left_1 = var_attr_params;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_attr_params);
        tmp_assign_source_2 = var_attr_params;
        Py_INCREF(tmp_assign_source_2);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        condexpr_end_1:;
        assert(var_params == NULL);
        var_params = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_f);
        tmp_expression_value_2 = par_f;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[50]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooccc";
            goto try_except_handler_2;
        }
        assert(var_decorator_params == NULL);
        var_decorator_params = tmp_assign_source_4;
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

    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_5;
    }
    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_fc1c993f158b11438b24a78169e7891b, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_fc1c993f158b11438b24a78169e7891b, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 203;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fc1c993f158b11438b24a78169e7891b->m_frame) frame_fc1c993f158b11438b24a78169e7891b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooccc";
    goto try_except_handler_3;
    branch_no_2:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_attrdel_target_1;
        CHECK_OBJECT(par_f);
        tmp_attrdel_target_1 = par_f;
        tmp_res = PyObject_DelAttr(tmp_attrdel_target_1, mod_consts[50]);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_params);
        tmp_expression_value_3 = var_params;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[51]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = (PyObject *)&PyReversed_Type;
        if (var_decorator_params == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_decorator_params;
        frame_fc1c993f158b11438b24a78169e7891b->m_frame.f_lineno = 209;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 209;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        frame_fc1c993f158b11438b24a78169e7891b->m_frame.f_lineno = 209;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[53]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        frame_fc1c993f158b11438b24a78169e7891b->m_frame.f_lineno = 211;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[54]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_f);
        tmp_expression_value_5 = par_f;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[32]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_ass_subscript_1 = mod_consts[55];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dict_key_1 = mod_consts[56];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_or_left_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_f);
        tmp_expression_value_8 = par_f;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[22]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[57]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        frame_fc1c993f158b11438b24a78169e7891b->m_frame.f_lineno = 215;
        tmp_expression_value_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[58]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        frame_fc1c993f158b11438b24a78169e7891b->m_frame.f_lineno = 215;
        tmp_or_right_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[59]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_dict_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[60];
        CHECK_OBJECT(par_f);
        tmp_dict_value_1 = par_f;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[61];
        if (var_params == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooccc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_params;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_6 = impl___main__$$$function__16_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_cmd == NULL);
        var_cmd = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_f);
        tmp_expression_value_9 = par_f;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[32]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cmd);
        tmp_assattr_target_1 = var_cmd;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[32], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooccc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc1c993f158b11438b24a78169e7891b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc1c993f158b11438b24a78169e7891b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc1c993f158b11438b24a78169e7891b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc1c993f158b11438b24a78169e7891b,
        type_description_1,
        par_f,
        var_attr_params,
        var_params,
        var_decorator_params,
        var_cmd,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_fc1c993f158b11438b24a78169e7891b == cache_frame_fc1c993f158b11438b24a78169e7891b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc1c993f158b11438b24a78169e7891b);
        cache_frame_fc1c993f158b11438b24a78169e7891b = NULL;
    }

    assertFrameObject(frame_fc1c993f158b11438b24a78169e7891b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_cmd);
    tmp_return_value = var_cmd;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_attr_params);
    Py_DECREF(var_attr_params);
    var_attr_params = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_decorator_params);
    var_decorator_params = NULL;
    CHECK_OBJECT(var_cmd);
    Py_DECREF(var_cmd);
    var_cmd = NULL;
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

    Py_XDECREF(var_attr_params);
    var_attr_params = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_decorator_params);
    var_decorator_params = NULL;
    Py_XDECREF(var_cmd);
    var_cmd = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__11_group(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_attrs = python_pars[1];
    PyObject *var_grp = NULL;
    struct Nuitka_FrameObject *frame_01b50b05cae412bf61d253cf0d092f8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_01b50b05cae412bf61d253cf0d092f8a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_01b50b05cae412bf61d253cf0d092f8a)) {
        Py_XDECREF(cache_frame_01b50b05cae412bf61d253cf0d092f8a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01b50b05cae412bf61d253cf0d092f8a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01b50b05cae412bf61d253cf0d092f8a = MAKE_FUNCTION_FRAME(codeobj_01b50b05cae412bf61d253cf0d092f8a, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01b50b05cae412bf61d253cf0d092f8a->m_type_description == NULL);
    frame_01b50b05cae412bf61d253cf0d092f8a = cache_frame_01b50b05cae412bf61d253cf0d092f8a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_01b50b05cae412bf61d253cf0d092f8a);
    assert(Py_REFCNT(frame_01b50b05cae412bf61d253cf0d092f8a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        CHECK_OBJECT(par_attrs);
        tmp_dict_arg_value_1 = par_attrs;
        tmp_key_value_1 = mod_consts[40];
        tmp_cmp_expr_left_1 = DICT_GET_ITEM0(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            tmp_cmp_expr_left_1 = Py_None;
        }
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[62]);

    if (unlikely(tmp_dictset_value == NULL)) {
        tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
    }

    if (tmp_dictset_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 255;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    CHECK_OBJECT(par_attrs);
    tmp_dictset_dict = par_attrs;
    tmp_dictset_key = mod_consts[40];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[37]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_01b50b05cae412bf61d253cf0d092f8a->m_frame.f_lineno = 257;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_attrs == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = par_attrs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_args_element_value_3 = impl___main__$$$function__4_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_01b50b05cae412bf61d253cf0d092f8a->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_grp == NULL);
        var_grp = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_grp);
        tmp_called_value_3 = var_grp;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_4 = par_name;
        frame_01b50b05cae412bf61d253cf0d092f8a->m_frame.f_lineno = 259;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 261;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dircall_arg1_2 == NULL)) {
            tmp_dircall_arg1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 261;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
        if (par_attrs == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_dircall_arg2_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = par_attrs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_1};
            tmp_args_element_value_6 = impl___main__$$$function__5_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 261;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_01b50b05cae412bf61d253cf0d092f8a->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01b50b05cae412bf61d253cf0d092f8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01b50b05cae412bf61d253cf0d092f8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01b50b05cae412bf61d253cf0d092f8a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01b50b05cae412bf61d253cf0d092f8a,
        type_description_1,
        par_name,
        par_attrs,
        var_grp
    );


    // Release cached frame if used for exception.
    if (frame_01b50b05cae412bf61d253cf0d092f8a == cache_frame_01b50b05cae412bf61d253cf0d092f8a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01b50b05cae412bf61d253cf0d092f8a);
        cache_frame_01b50b05cae412bf61d253cf0d092f8a = NULL;
    }

    assertFrameObject(frame_01b50b05cae412bf61d253cf0d092f8a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_grp);
    var_grp = NULL;
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

    Py_XDECREF(var_grp);
    var_grp = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__12__param_memo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    PyObject *par_param = python_pars[1];
    struct Nuitka_FrameObject *frame_a988f203720613006b2864e144628c62;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a988f203720613006b2864e144628c62 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a988f203720613006b2864e144628c62)) {
        Py_XDECREF(cache_frame_a988f203720613006b2864e144628c62);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a988f203720613006b2864e144628c62 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a988f203720613006b2864e144628c62 = MAKE_FUNCTION_FRAME(codeobj_a988f203720613006b2864e144628c62, module_click$decorators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a988f203720613006b2864e144628c62->m_type_description == NULL);
    frame_a988f203720613006b2864e144628c62 = cache_frame_a988f203720613006b2864e144628c62;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a988f203720613006b2864e144628c62);
    assert(Py_REFCNT(frame_a988f203720613006b2864e144628c62) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_f);
        tmp_isinstance_inst_1 = par_f;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_f);
        tmp_expression_value_2 = par_f;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[61]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_param);
        tmp_args_element_value_1 = par_param;
        frame_a988f203720613006b2864e144628c62->m_frame.f_lineno = 266;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_f);
        tmp_expression_value_3 = par_f;
        tmp_attribute_value_1 = mod_consts[50];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_3, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oo";
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
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_f);
        tmp_assattr_target_1 = par_f;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[50], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        if (par_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_f;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[50]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[65]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_param);
        tmp_args_element_value_2 = par_param;
        frame_a988f203720613006b2864e144628c62->m_frame.f_lineno = 271;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a988f203720613006b2864e144628c62, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a988f203720613006b2864e144628c62->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a988f203720613006b2864e144628c62, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a988f203720613006b2864e144628c62,
        type_description_1,
        par_f,
        par_param
    );


    // Release cached frame if used for exception.
    if (frame_a988f203720613006b2864e144628c62 == cache_frame_a988f203720613006b2864e144628c62) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a988f203720613006b2864e144628c62);
        cache_frame_a988f203720613006b2864e144628c62 = NULL;
    }

    assertFrameObject(frame_a988f203720613006b2864e144628c62);

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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__13_argument(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_param_decls = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_attrs = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_decorator = NULL;
    struct Nuitka_FrameObject *frame_32e970163245110cc3804300126107c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_32e970163245110cc3804300126107c2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_32e970163245110cc3804300126107c2)) {
        Py_XDECREF(cache_frame_32e970163245110cc3804300126107c2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32e970163245110cc3804300126107c2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32e970163245110cc3804300126107c2 = MAKE_FUNCTION_FRAME(codeobj_32e970163245110cc3804300126107c2, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32e970163245110cc3804300126107c2->m_type_description == NULL);
    frame_32e970163245110cc3804300126107c2 = cache_frame_32e970163245110cc3804300126107c2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32e970163245110cc3804300126107c2);
    assert(Py_REFCNT(frame_32e970163245110cc3804300126107c2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "cco";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = par_attrs;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_param_decls;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__13_argument$$$function__1_decorator(tmp_annotations_1, tmp_closure_1);

        assert(var_decorator == NULL);
        var_decorator = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_32e970163245110cc3804300126107c2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32e970163245110cc3804300126107c2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32e970163245110cc3804300126107c2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32e970163245110cc3804300126107c2,
        type_description_1,
        par_param_decls,
        par_attrs,
        var_decorator
    );


    // Release cached frame if used for exception.
    if (frame_32e970163245110cc3804300126107c2 == cache_frame_32e970163245110cc3804300126107c2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32e970163245110cc3804300126107c2);
        cache_frame_32e970163245110cc3804300126107c2 = NULL;
    }

    assertFrameObject(frame_32e970163245110cc3804300126107c2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_decorator);
    tmp_return_value = var_decorator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_decorator);
    Py_DECREF(var_decorator);
    var_decorator = NULL;
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
    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__13_argument$$$function__1_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    PyObject *var_ArgumentClass = NULL;
    struct Nuitka_FrameObject *frame_3f2b6f34a789cd0e95a703c5846fd611;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3f2b6f34a789cd0e95a703c5846fd611 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3f2b6f34a789cd0e95a703c5846fd611)) {
        Py_XDECREF(cache_frame_3f2b6f34a789cd0e95a703c5846fd611);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f2b6f34a789cd0e95a703c5846fd611 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f2b6f34a789cd0e95a703c5846fd611 = MAKE_FUNCTION_FRAME(codeobj_3f2b6f34a789cd0e95a703c5846fd611, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3f2b6f34a789cd0e95a703c5846fd611->m_type_description == NULL);
    frame_3f2b6f34a789cd0e95a703c5846fd611 = cache_frame_3f2b6f34a789cd0e95a703c5846fd611;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3f2b6f34a789cd0e95a703c5846fd611);
    assert(Py_REFCNT(frame_3f2b6f34a789cd0e95a703c5846fd611) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 286;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        frame_3f2b6f34a789cd0e95a703c5846fd611->m_frame.f_lineno = 286;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[69]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 286;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_or_right_value_1 == NULL)) {
            tmp_or_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_ArgumentClass == NULL);
        var_ArgumentClass = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_value_1 = par_f;
        CHECK_OBJECT(var_ArgumentClass);
        tmp_dircall_arg1_1 = var_ArgumentClass;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 287;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 287;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_2 = impl___main__$$$function__5_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        frame_3f2b6f34a789cd0e95a703c5846fd611->m_frame.f_lineno = 287;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3f2b6f34a789cd0e95a703c5846fd611, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f2b6f34a789cd0e95a703c5846fd611->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f2b6f34a789cd0e95a703c5846fd611, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f2b6f34a789cd0e95a703c5846fd611,
        type_description_1,
        par_f,
        var_ArgumentClass,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_3f2b6f34a789cd0e95a703c5846fd611 == cache_frame_3f2b6f34a789cd0e95a703c5846fd611) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3f2b6f34a789cd0e95a703c5846fd611);
        cache_frame_3f2b6f34a789cd0e95a703c5846fd611 = NULL;
    }

    assertFrameObject(frame_3f2b6f34a789cd0e95a703c5846fd611);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_f);
    tmp_return_value = par_f;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ArgumentClass);
    Py_DECREF(var_ArgumentClass);
    var_ArgumentClass = NULL;
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

    Py_XDECREF(var_ArgumentClass);
    var_ArgumentClass = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__14_option(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_param_decls = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_attrs = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_decorator = NULL;
    struct Nuitka_FrameObject *frame_4764aabc5161cb97b02dc134969db903;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4764aabc5161cb97b02dc134969db903 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4764aabc5161cb97b02dc134969db903)) {
        Py_XDECREF(cache_frame_4764aabc5161cb97b02dc134969db903);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4764aabc5161cb97b02dc134969db903 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4764aabc5161cb97b02dc134969db903 = MAKE_FUNCTION_FRAME(codeobj_4764aabc5161cb97b02dc134969db903, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4764aabc5161cb97b02dc134969db903->m_type_description == NULL);
    frame_4764aabc5161cb97b02dc134969db903 = cache_frame_4764aabc5161cb97b02dc134969db903;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4764aabc5161cb97b02dc134969db903);
    assert(Py_REFCNT(frame_4764aabc5161cb97b02dc134969db903) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "cco";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = par_attrs;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_param_decls;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__14_option$$$function__1_decorator(tmp_annotations_1, tmp_closure_1);

        assert(var_decorator == NULL);
        var_decorator = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4764aabc5161cb97b02dc134969db903, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4764aabc5161cb97b02dc134969db903->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4764aabc5161cb97b02dc134969db903, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4764aabc5161cb97b02dc134969db903,
        type_description_1,
        par_param_decls,
        par_attrs,
        var_decorator
    );


    // Release cached frame if used for exception.
    if (frame_4764aabc5161cb97b02dc134969db903 == cache_frame_4764aabc5161cb97b02dc134969db903) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4764aabc5161cb97b02dc134969db903);
        cache_frame_4764aabc5161cb97b02dc134969db903 = NULL;
    }

    assertFrameObject(frame_4764aabc5161cb97b02dc134969db903);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_decorator);
    tmp_return_value = var_decorator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_decorator);
    Py_DECREF(var_decorator);
    var_decorator = NULL;
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
    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    CHECK_OBJECT(par_attrs);
    Py_DECREF(par_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__14_option$$$function__1_decorator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    PyObject *var_option_attrs = NULL;
    PyObject *var_OptionClass = NULL;
    struct Nuitka_FrameObject *frame_0772e4db46d1b182ae26a74af53d593b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0772e4db46d1b182ae26a74af53d593b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0772e4db46d1b182ae26a74af53d593b)) {
        Py_XDECREF(cache_frame_0772e4db46d1b182ae26a74af53d593b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0772e4db46d1b182ae26a74af53d593b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0772e4db46d1b182ae26a74af53d593b = MAKE_FUNCTION_FRAME(codeobj_0772e4db46d1b182ae26a74af53d593b, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0772e4db46d1b182ae26a74af53d593b->m_type_description == NULL);
    frame_0772e4db46d1b182ae26a74af53d593b = cache_frame_0772e4db46d1b182ae26a74af53d593b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0772e4db46d1b182ae26a74af53d593b);
    assert(Py_REFCNT(frame_0772e4db46d1b182ae26a74af53d593b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 306;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[75]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_0772e4db46d1b182ae26a74af53d593b->m_frame.f_lineno = 306;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        assert(var_option_attrs == NULL);
        var_option_attrs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_option_attrs);
        tmp_expression_value_2 = var_option_attrs;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_0772e4db46d1b182ae26a74af53d593b->m_frame.f_lineno = 307;
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[69]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 307;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_or_right_value_1 == NULL)) {
            tmp_or_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_OptionClass == NULL);
        var_OptionClass = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_value_1 = par_f;
        CHECK_OBJECT(var_OptionClass);
        tmp_dircall_arg1_1 = var_OptionClass;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 308;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_option_attrs);
        tmp_dircall_arg3_1 = var_option_attrs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_2 = impl___main__$$$function__5_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        frame_0772e4db46d1b182ae26a74af53d593b->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0772e4db46d1b182ae26a74af53d593b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0772e4db46d1b182ae26a74af53d593b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0772e4db46d1b182ae26a74af53d593b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0772e4db46d1b182ae26a74af53d593b,
        type_description_1,
        par_f,
        var_option_attrs,
        var_OptionClass,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_0772e4db46d1b182ae26a74af53d593b == cache_frame_0772e4db46d1b182ae26a74af53d593b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0772e4db46d1b182ae26a74af53d593b);
        cache_frame_0772e4db46d1b182ae26a74af53d593b = NULL;
    }

    assertFrameObject(frame_0772e4db46d1b182ae26a74af53d593b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_f);
    tmp_return_value = par_f;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_option_attrs);
    Py_DECREF(var_option_attrs);
    var_option_attrs = NULL;
    CHECK_OBJECT(var_OptionClass);
    Py_DECREF(var_OptionClass);
    var_OptionClass = NULL;
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

    Py_XDECREF(var_option_attrs);
    var_option_attrs = NULL;
    Py_XDECREF(var_OptionClass);
    var_OptionClass = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__15_confirmation_option(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_param_decls = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_callback = NULL;
    struct Nuitka_FrameObject *frame_dcbf7bdbb0e1470dafa4e44cf26a46e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9)) {
        Py_XDECREF(cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9 = MAKE_FUNCTION_FRAME(codeobj_dcbf7bdbb0e1470dafa4e44cf26a46e9, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9->m_type_description == NULL);
    frame_dcbf7bdbb0e1470dafa4e44cf26a46e9 = cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dcbf7bdbb0e1470dafa4e44cf26a46e9);
    assert(Py_REFCNT(frame_dcbf7bdbb0e1470dafa4e44cf26a46e9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[25];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[78];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[80];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__15_confirmation_option$$$function__1_callback(tmp_annotations_1);

        assert(var_callback == NULL);
        var_callback = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_param_decls);
        tmp_operand_value_1 = par_param_decls;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[82];
        {
            PyObject *old = par_param_decls;
            assert(old != NULL);
            par_param_decls = tmp_assign_source_2;
            Py_INCREF(par_param_decls);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[83];
        tmp_default_value_1 = Py_True;
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_1 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[60];
        CHECK_OBJECT(var_callback);
        tmp_args_element_value_2 = var_callback;
        frame_dcbf7bdbb0e1470dafa4e44cf26a46e9->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_2 = par_kwargs;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[84]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_dcbf7bdbb0e1470dafa4e44cf26a46e9->m_frame.f_lineno = 332;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[85]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_3 = par_kwargs;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[84]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_dcbf7bdbb0e1470dafa4e44cf26a46e9->m_frame.f_lineno = 333;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[86]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_4 = par_kwargs;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[84]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_dcbf7bdbb0e1470dafa4e44cf26a46e9->m_frame.f_lineno = 334;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[87]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_param_decls);
        tmp_dircall_arg2_1 = par_param_decls;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dcbf7bdbb0e1470dafa4e44cf26a46e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dcbf7bdbb0e1470dafa4e44cf26a46e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dcbf7bdbb0e1470dafa4e44cf26a46e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dcbf7bdbb0e1470dafa4e44cf26a46e9,
        type_description_1,
        par_param_decls,
        par_kwargs,
        var_callback
    );


    // Release cached frame if used for exception.
    if (frame_dcbf7bdbb0e1470dafa4e44cf26a46e9 == cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9);
        cache_frame_dcbf7bdbb0e1470dafa4e44cf26a46e9 = NULL;
    }

    assertFrameObject(frame_dcbf7bdbb0e1470dafa4e44cf26a46e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    par_param_decls = NULL;
    CHECK_OBJECT(var_callback);
    Py_DECREF(var_callback);
    var_callback = NULL;
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

    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    par_param_decls = NULL;
    Py_XDECREF(var_callback);
    var_callback = NULL;
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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__15_confirmation_option$$$function__1_callback(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *par_param = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_0dda503899f75981c438866c7c5e113f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0dda503899f75981c438866c7c5e113f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0dda503899f75981c438866c7c5e113f)) {
        Py_XDECREF(cache_frame_0dda503899f75981c438866c7c5e113f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0dda503899f75981c438866c7c5e113f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0dda503899f75981c438866c7c5e113f = MAKE_FUNCTION_FRAME(codeobj_0dda503899f75981c438866c7c5e113f, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0dda503899f75981c438866c7c5e113f->m_type_description == NULL);
    frame_0dda503899f75981c438866c7c5e113f = cache_frame_0dda503899f75981c438866c7c5e113f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0dda503899f75981c438866c7c5e113f);
    assert(Py_REFCNT(frame_0dda503899f75981c438866c7c5e113f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_value);
        tmp_operand_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
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
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_ctx);
        tmp_called_instance_1 = par_ctx;
        frame_0dda503899f75981c438866c7c5e113f->m_frame.f_lineno = 325;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[90]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0dda503899f75981c438866c7c5e113f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0dda503899f75981c438866c7c5e113f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0dda503899f75981c438866c7c5e113f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0dda503899f75981c438866c7c5e113f,
        type_description_1,
        par_ctx,
        par_param,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0dda503899f75981c438866c7c5e113f == cache_frame_0dda503899f75981c438866c7c5e113f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0dda503899f75981c438866c7c5e113f);
        cache_frame_0dda503899f75981c438866c7c5e113f = NULL;
    }

    assertFrameObject(frame_0dda503899f75981c438866c7c5e113f);

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
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__16_password_option(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_param_decls = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_a612bacd989d37dcb91a688cd7833d8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a612bacd989d37dcb91a688cd7833d8a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_param_decls);
        tmp_operand_value_1 = par_param_decls;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[91];
        {
            PyObject *old = par_param_decls;
            assert(old != NULL);
            par_param_decls = tmp_assign_source_1;
            Py_INCREF(par_param_decls);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[92];
        tmp_default_value_1 = Py_True;
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a612bacd989d37dcb91a688cd7833d8a)) {
        Py_XDECREF(cache_frame_a612bacd989d37dcb91a688cd7833d8a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a612bacd989d37dcb91a688cd7833d8a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a612bacd989d37dcb91a688cd7833d8a = MAKE_FUNCTION_FRAME(codeobj_a612bacd989d37dcb91a688cd7833d8a, module_click$decorators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a612bacd989d37dcb91a688cd7833d8a->m_type_description == NULL);
    frame_a612bacd989d37dcb91a688cd7833d8a = cache_frame_a612bacd989d37dcb91a688cd7833d8a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a612bacd989d37dcb91a688cd7833d8a);
    assert(Py_REFCNT(frame_a612bacd989d37dcb91a688cd7833d8a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_1 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a612bacd989d37dcb91a688cd7833d8a->m_frame.f_lineno = 350;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[93]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_2 = par_kwargs;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[84]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a612bacd989d37dcb91a688cd7833d8a->m_frame.f_lineno = 351;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[94]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_param_decls);
        tmp_dircall_arg2_1 = par_param_decls;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a612bacd989d37dcb91a688cd7833d8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a612bacd989d37dcb91a688cd7833d8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a612bacd989d37dcb91a688cd7833d8a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a612bacd989d37dcb91a688cd7833d8a,
        type_description_1,
        par_param_decls,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_a612bacd989d37dcb91a688cd7833d8a == cache_frame_a612bacd989d37dcb91a688cd7833d8a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a612bacd989d37dcb91a688cd7833d8a);
        cache_frame_a612bacd989d37dcb91a688cd7833d8a = NULL;
    }

    assertFrameObject(frame_a612bacd989d37dcb91a688cd7833d8a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    par_param_decls = NULL;
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

    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    par_param_decls = NULL;
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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__17_version_option(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_version = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_package_name = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_prog_name = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_message = Nuitka_Cell_New1(python_pars[3]);
    PyObject *par_param_decls = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_frame = NULL;
    PyObject *var_f_back = NULL;
    PyObject *var_f_globals = NULL;
    PyObject *var_callback = NULL;
    struct Nuitka_FrameObject *frame_ee32ba314cf9e74097ff334cda919995;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ee32ba314cf9e74097ff334cda919995 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ee32ba314cf9e74097ff334cda919995)) {
        Py_XDECREF(cache_frame_ee32ba314cf9e74097ff334cda919995);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee32ba314cf9e74097ff334cda919995 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee32ba314cf9e74097ff334cda919995 = MAKE_FUNCTION_FRAME(codeobj_ee32ba314cf9e74097ff334cda919995, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee32ba314cf9e74097ff334cda919995->m_type_description == NULL);
    frame_ee32ba314cf9e74097ff334cda919995 = cache_frame_ee32ba314cf9e74097ff334cda919995;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ee32ba314cf9e74097ff334cda919995);
    assert(Py_REFCNT(frame_ee32ba314cf9e74097ff334cda919995) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_message));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_message);
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        frame_ee32ba314cf9e74097ff334cda919995->m_frame.f_lineno = 400;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[97]);

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_message);
            PyCell_SET(par_message, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (Nuitka_Cell_GET(par_version) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(par_version);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(par_package_name) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(par_package_name);
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        frame_ee32ba314cf9e74097ff334cda919995->m_frame.f_lineno = 403;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[101]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frame == NULL);
        var_frame = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_frame);
        tmp_cmp_expr_left_4 = var_frame;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_1 = var_frame;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[102]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_3 = Py_None;
        Py_INCREF(tmp_assign_source_3);
        condexpr_end_1:;
        assert(var_f_back == NULL);
        var_f_back = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_f_back);
        tmp_cmp_expr_left_5 = var_f_back;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(var_f_back);
        tmp_expression_value_2 = var_f_back;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[103]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_4 = Py_None;
        Py_INCREF(tmp_assign_source_4);
        condexpr_end_2:;
        assert(var_f_globals == NULL);
        var_f_globals = tmp_assign_source_4;
    }
    CHECK_OBJECT(var_frame);
    Py_DECREF(var_frame);
    var_frame = NULL;

    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_f_globals);
        tmp_cmp_expr_left_6 = var_f_globals;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_f_globals);
        tmp_expression_value_3 = var_f_globals;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[53]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        frame_ee32ba314cf9e74097ff334cda919995->m_frame.f_lineno = 411;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[104]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_package_name);
            PyCell_SET(par_package_name, tmp_assign_source_5);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(Nuitka_Cell_GET(par_package_name));
        tmp_cmp_expr_left_7 = Nuitka_Cell_GET(par_package_name);
        tmp_cmp_expr_right_7 = mod_consts[105];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_f_globals);
        tmp_expression_value_4 = var_f_globals;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[53]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        frame_ee32ba314cf9e74097ff334cda919995->m_frame.f_lineno = 414;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[106]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_package_name);
            PyCell_SET(par_package_name, tmp_assign_source_6);
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(par_package_name) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(par_package_name));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(par_package_name) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(par_package_name);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[107]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        frame_ee32ba314cf9e74097ff334cda919995->m_frame.f_lineno = 417;
        tmp_expression_value_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[108]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[109];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_package_name);
            PyCell_SET(par_package_name, tmp_assign_source_7);
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[4];
        tmp_dict_key_1 = mod_consts[25];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[78];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ccccoooooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[80];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = par_message;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_package_name;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_prog_name;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_version;
        Py_INCREF(tmp_closure_1[3]);

        tmp_assign_source_8 = MAKE_FUNCTION_click$decorators$$$function__17_version_option$$$function__1_callback(tmp_annotations_1, tmp_closure_1);

        assert(var_callback == NULL);
        var_callback = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_param_decls);
        tmp_operand_value_1 = par_param_decls;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[111];
        {
            PyObject *old = par_param_decls;
            assert(old != NULL);
            par_param_decls = tmp_assign_source_9;
            Py_INCREF(par_param_decls);
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[83];
        tmp_default_value_1 = Py_True;
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_7 = par_kwargs;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[84]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        frame_ee32ba314cf9e74097ff334cda919995->m_frame.f_lineno = 462;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_5, mod_consts[85]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_8 = par_kwargs;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[84]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        frame_ee32ba314cf9e74097ff334cda919995->m_frame.f_lineno = 463;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_6, mod_consts[112]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_8;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_9 = par_kwargs;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[84]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[55];
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 464;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        frame_ee32ba314cf9e74097ff334cda919995->m_frame.f_lineno = 464;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[113]);

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 464;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        frame_ee32ba314cf9e74097ff334cda919995->m_frame.f_lineno = 464;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_callback);
        tmp_ass_subvalue_1 = var_callback;
        CHECK_OBJECT(par_kwargs);
        tmp_ass_subscribed_1 = par_kwargs;
        tmp_ass_subscript_1 = mod_consts[60];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ccccoooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_param_decls);
        tmp_dircall_arg2_1 = par_param_decls;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ccccoooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee32ba314cf9e74097ff334cda919995, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee32ba314cf9e74097ff334cda919995->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee32ba314cf9e74097ff334cda919995, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee32ba314cf9e74097ff334cda919995,
        type_description_1,
        par_version,
        par_package_name,
        par_prog_name,
        par_message,
        par_param_decls,
        par_kwargs,
        var_frame,
        var_f_back,
        var_f_globals,
        var_callback
    );


    // Release cached frame if used for exception.
    if (frame_ee32ba314cf9e74097ff334cda919995 == cache_frame_ee32ba314cf9e74097ff334cda919995) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee32ba314cf9e74097ff334cda919995);
        cache_frame_ee32ba314cf9e74097ff334cda919995 = NULL;
    }

    assertFrameObject(frame_ee32ba314cf9e74097ff334cda919995);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    par_version = NULL;
    CHECK_OBJECT(par_package_name);
    Py_DECREF(par_package_name);
    par_package_name = NULL;
    CHECK_OBJECT(par_prog_name);
    Py_DECREF(par_prog_name);
    par_prog_name = NULL;
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    par_message = NULL;
    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    par_param_decls = NULL;
    Py_XDECREF(var_f_back);
    var_f_back = NULL;
    Py_XDECREF(var_f_globals);
    var_f_globals = NULL;
    CHECK_OBJECT(var_callback);
    Py_DECREF(var_callback);
    var_callback = NULL;
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

    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    par_version = NULL;
    CHECK_OBJECT(par_package_name);
    Py_DECREF(par_package_name);
    par_package_name = NULL;
    CHECK_OBJECT(par_prog_name);
    Py_DECREF(par_prog_name);
    par_prog_name = NULL;
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    par_message = NULL;
    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    par_param_decls = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_f_back);
    var_f_back = NULL;
    Py_XDECREF(var_f_globals);
    var_f_globals = NULL;
    Py_XDECREF(var_callback);
    var_callback = NULL;
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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__17_version_option$$$function__1_callback(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *par_param = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_metadata = NULL;
    struct Nuitka_FrameObject *frame_8fa8feb3f5e7851fb971322f78a8bf5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_importlib_metadata_version_function;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e)) {
        Py_XDECREF(cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e = MAKE_FUNCTION_FRAME(codeobj_8fa8feb3f5e7851fb971322f78a8bf5e, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_type_description == NULL);
    frame_8fa8feb3f5e7851fb971322f78a8bf5e = cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8fa8feb3f5e7851fb971322f78a8bf5e);
    assert(Py_REFCNT(frame_8fa8feb3f5e7851fb971322f78a8bf5e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_value);
        tmp_operand_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_1 = par_ctx;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[115]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 420;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 426;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        if (par_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_ctx;
        frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame.f_lineno = 427;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[117]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[118]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(self->m_closure[2]);
            PyCell_SET(self->m_closure[2], tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = IMPORT_HARD_IMPORTLIB__METADATA();
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_metadata == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_metadata = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_distribution_name_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }

        tmp_distribution_name_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
            tmp_importlib_metadata_version_function = LOOKUP_ATTRIBUTE(hard_module, mod_consts[98]);
        }
        assert(!(tmp_importlib_metadata_version_function == NULL));
        frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame.f_lineno = 439;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_importlib_metadata_version_function, tmp_distribution_name_value_1);
        Py_DECREF(tmp_importlib_metadata_version_function);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooocccc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = Nuitka_Cell_GET(self->m_closure[3]);
            PyCell_SET(self->m_closure[3], tmp_assign_source_3);
            Py_XDECREF(old);
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_8fa8feb3f5e7851fb971322f78a8bf5e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_8fa8feb3f5e7851fb971322f78a8bf5e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB__METADATA();
            tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[119]);
        }
        assert(!(tmp_cmp_expr_right_4 == NULL));
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooocccc";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_raise_cause_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "oooocccc";
            goto try_except_handler_3;
        }

        tmp_operand_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooocccc";
            goto try_except_handler_3;
        }
        tmp_format_spec_1 = mod_consts[23];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooocccc";
            goto try_except_handler_3;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[120];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[23], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooocccc";
            goto try_except_handler_3;
        }
        frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame.f_lineno = 441;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        tmp_raise_cause_1 = Py_None;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 444;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "oooocccc";
        goto try_except_handler_3;
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 438;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame) frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooocccc";
    goto try_except_handler_3;
    branch_end_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_5 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[121];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[99]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 448;
                type_description_1 = "oooocccc";
                goto tuple_build_exception_1;
            }

            tmp_operand_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooocccc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[23];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooocccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[122];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[23], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame.f_lineno = 447;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 447;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooocccc";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = (PyObject *)&PyUnicode_Type;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_mod_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_mod_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[125];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_mod_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_mod_expr_right_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[126];
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "oooocccc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[98];
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "oooocccc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_mod_expr_left_1);
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        if (par_ctx == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 454;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_ctx;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[127]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 454;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame.f_lineno = 451;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (par_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_ctx;
        frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame.f_lineno = 456;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[129]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8fa8feb3f5e7851fb971322f78a8bf5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8fa8feb3f5e7851fb971322f78a8bf5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fa8feb3f5e7851fb971322f78a8bf5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8fa8feb3f5e7851fb971322f78a8bf5e,
        type_description_1,
        par_ctx,
        par_param,
        par_value,
        var_metadata,
        self->m_closure[2],
        self->m_closure[3],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8fa8feb3f5e7851fb971322f78a8bf5e == cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e);
        cache_frame_8fa8feb3f5e7851fb971322f78a8bf5e = NULL;
    }

    assertFrameObject(frame_8fa8feb3f5e7851fb971322f78a8bf5e);

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
    Py_XDECREF(var_metadata);
    var_metadata = NULL;
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

    Py_XDECREF(var_metadata);
    var_metadata = NULL;
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
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__18_help_option(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_param_decls = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_callback = NULL;
    struct Nuitka_FrameObject *frame_cf75ee4e82b9009511f4fe5c7a2b380f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f)) {
        Py_XDECREF(cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f = MAKE_FUNCTION_FRAME(codeobj_cf75ee4e82b9009511f4fe5c7a2b380f, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f->m_type_description == NULL);
    frame_cf75ee4e82b9009511f4fe5c7a2b380f = cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf75ee4e82b9009511f4fe5c7a2b380f);
    assert(Py_REFCNT(frame_cf75ee4e82b9009511f4fe5c7a2b380f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[25];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[78];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[80];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_1 = MAKE_FUNCTION_click$decorators$$$function__18_help_option$$$function__1_callback(tmp_annotations_1);

        assert(var_callback == NULL);
        var_callback = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_param_decls);
        tmp_operand_value_1 = par_param_decls;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[131];
        {
            PyObject *old = par_param_decls;
            assert(old != NULL);
            par_param_decls = tmp_assign_source_2;
            Py_INCREF(par_param_decls);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[83];
        tmp_default_value_1 = Py_True;
        tmp_capi_result_1 = DICT_SETDEFAULT3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_capi_result_1 == NULL));
        Py_DECREF(tmp_capi_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_1 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cf75ee4e82b9009511f4fe5c7a2b380f->m_frame.f_lineno = 493;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[85]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_2 = par_kwargs;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[84]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cf75ee4e82b9009511f4fe5c7a2b380f->m_frame.f_lineno = 494;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[112]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_3 = par_kwargs;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[84]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[55];
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 495;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cf75ee4e82b9009511f4fe5c7a2b380f->m_frame.f_lineno = 495;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[132]);

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 495;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_cf75ee4e82b9009511f4fe5c7a2b380f->m_frame.f_lineno = 495;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_callback);
        tmp_ass_subvalue_1 = var_callback;
        CHECK_OBJECT(par_kwargs);
        tmp_ass_subscribed_1 = par_kwargs;
        tmp_ass_subscript_1 = mod_consts[60];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_param_decls);
        tmp_dircall_arg2_1 = par_param_decls;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__11_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf75ee4e82b9009511f4fe5c7a2b380f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf75ee4e82b9009511f4fe5c7a2b380f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf75ee4e82b9009511f4fe5c7a2b380f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf75ee4e82b9009511f4fe5c7a2b380f,
        type_description_1,
        par_param_decls,
        par_kwargs,
        var_callback
    );


    // Release cached frame if used for exception.
    if (frame_cf75ee4e82b9009511f4fe5c7a2b380f == cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f);
        cache_frame_cf75ee4e82b9009511f4fe5c7a2b380f = NULL;
    }

    assertFrameObject(frame_cf75ee4e82b9009511f4fe5c7a2b380f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    par_param_decls = NULL;
    CHECK_OBJECT(var_callback);
    Py_DECREF(var_callback);
    var_callback = NULL;
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

    CHECK_OBJECT(par_param_decls);
    Py_DECREF(par_param_decls);
    par_param_decls = NULL;
    Py_XDECREF(var_callback);
    var_callback = NULL;
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
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$decorators$$$function__18_help_option$$$function__1_callback(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *par_param = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_3accc0c108ad618aff8f4c8038533b5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3accc0c108ad618aff8f4c8038533b5a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3accc0c108ad618aff8f4c8038533b5a)) {
        Py_XDECREF(cache_frame_3accc0c108ad618aff8f4c8038533b5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3accc0c108ad618aff8f4c8038533b5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3accc0c108ad618aff8f4c8038533b5a = MAKE_FUNCTION_FRAME(codeobj_3accc0c108ad618aff8f4c8038533b5a, module_click$decorators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3accc0c108ad618aff8f4c8038533b5a->m_type_description == NULL);
    frame_3accc0c108ad618aff8f4c8038533b5a = cache_frame_3accc0c108ad618aff8f4c8038533b5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3accc0c108ad618aff8f4c8038533b5a);
    assert(Py_REFCNT(frame_3accc0c108ad618aff8f4c8038533b5a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_value);
        tmp_operand_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_ctx);
        tmp_expression_value_1 = par_ctx;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[115]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 483;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_ctx;
        frame_3accc0c108ad618aff8f4c8038533b5a->m_frame.f_lineno = 486;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[134]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_ctx == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 486;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_ctx;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[127]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 486;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3accc0c108ad618aff8f4c8038533b5a->m_frame.f_lineno = 486;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (par_ctx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_ctx;
        frame_3accc0c108ad618aff8f4c8038533b5a->m_frame.f_lineno = 487;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[129]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_3accc0c108ad618aff8f4c8038533b5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3accc0c108ad618aff8f4c8038533b5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3accc0c108ad618aff8f4c8038533b5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3accc0c108ad618aff8f4c8038533b5a,
        type_description_1,
        par_ctx,
        par_param,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_3accc0c108ad618aff8f4c8038533b5a == cache_frame_3accc0c108ad618aff8f4c8038533b5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3accc0c108ad618aff8f4c8038533b5a);
        cache_frame_3accc0c108ad618aff8f4c8038533b5a = NULL;
    }

    assertFrameObject(frame_3accc0c108ad618aff8f4c8038533b5a);

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
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_param);
    Py_DECREF(par_param);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__10_group(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22f4fa6d8dba6517b5196e4dfa34393f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__11_group(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__11_group,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_01b50b05cae412bf61d253cf0d092f8a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__12__param_memo(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__12__param_memo,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a988f203720613006b2864e144628c62,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__13_argument(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__13_argument,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_32e970163245110cc3804300126107c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__13_argument$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__13_argument$$$function__1_decorator,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_3f2b6f34a789cd0e95a703c5846fd611,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__14_option(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__14_option,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4764aabc5161cb97b02dc134969db903,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__14_option$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__14_option$$$function__1_decorator,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_0772e4db46d1b182ae26a74af53d593b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__15_confirmation_option(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__15_confirmation_option,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dcbf7bdbb0e1470dafa4e44cf26a46e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__15_confirmation_option$$$function__1_callback(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__15_confirmation_option$$$function__1_callback,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_0dda503899f75981c438866c7c5e113f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__16_password_option(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__16_password_option,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a612bacd989d37dcb91a688cd7833d8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__17_version_option(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__17_version_option,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee32ba314cf9e74097ff334cda919995,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_click$decorators,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__17_version_option$$$function__1_callback(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__17_version_option$$$function__1_callback,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_8fa8feb3f5e7851fb971322f78a8bf5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__18_help_option(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__18_help_option,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf75ee4e82b9009511f4fe5c7a2b380f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[133],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__18_help_option$$$function__1_callback(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__18_help_option$$$function__1_callback,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_3accc0c108ad618aff8f4c8038533b5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__1_pass_context(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__1_pass_context,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_021c51c92038922c132bf025a914e24e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__1_pass_context$$$function__1_new_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__1_pass_context$$$function__1_new_func,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[1],
#endif
        codeobj_2943e86fe89bd0a59cba29344405e69b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_click$decorators,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__2_pass_obj(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__2_pass_obj,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4119ba7dee278e184a02a02af342004e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__2_pass_obj$$$function__1_new_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__2_pass_obj$$$function__1_new_func,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        codeobj_4f62bc20174e754eed2e94523ed0eaf8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_click$decorators,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__3_make_pass_decorator(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__3_make_pass_decorator,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c72565447e509d162e88e736470665df,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[14],
#endif
        codeobj_1a364850b213c02ddf95efd3118801f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator$$$function__1_new_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator$$$function__1_new_func,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[16],
#endif
        codeobj_a5d4b50d2fb560c04a4968c6746f1774,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_click$decorators,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__4_pass_meta_key(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__4_pass_meta_key,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f1e5180fb7e699e3ed497c1be2db89d,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_click$decorators,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_7cffb9bea8e0951e6a5e8decbfb4cfcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator$$$function__1_new_func(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator$$$function__1_new_func,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_efca697068bffe22e54c606cff91735a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_click$decorators,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__5_command(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e90069a8d94cd80515756492959ec0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__6_command(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e821c450a2c9c59582e5fa7fda63bae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__7_command(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1cd120dbf3544e58d1aa2b708e43cbfe,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__8_command(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__8_command,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d9e47258059bf3f7e3edcf583f85b4d6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__8_command$$$function__1_decorator(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$decorators$$$function__8_command$$$function__1_decorator,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_fc1c993f158b11438b24a78169e7891b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$decorators$$$function__9_group(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_137f2b94c16a97522593f8f531eb6723,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$decorators,
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

function_impl_code functable_click$decorators[] = {
    impl_click$decorators$$$function__1_pass_context$$$function__1_new_func,
    impl_click$decorators$$$function__2_pass_obj$$$function__1_new_func,
    impl_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator,
    impl_click$decorators$$$function__3_make_pass_decorator$$$function__1_decorator$$$function__1_new_func,
    impl_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator,
    impl_click$decorators$$$function__4_pass_meta_key$$$function__1_decorator$$$function__1_new_func,
    impl_click$decorators$$$function__8_command$$$function__1_decorator,
    impl_click$decorators$$$function__13_argument$$$function__1_decorator,
    impl_click$decorators$$$function__14_option$$$function__1_decorator,
    impl_click$decorators$$$function__15_confirmation_option$$$function__1_callback,
    impl_click$decorators$$$function__17_version_option$$$function__1_callback,
    impl_click$decorators$$$function__18_help_option$$$function__1_callback,
    impl_click$decorators$$$function__1_pass_context,
    impl_click$decorators$$$function__2_pass_obj,
    impl_click$decorators$$$function__3_make_pass_decorator,
    impl_click$decorators$$$function__4_pass_meta_key,
    NULL,
    NULL,
    NULL,
    impl_click$decorators$$$function__8_command,
    NULL,
    NULL,
    impl_click$decorators$$$function__11_group,
    impl_click$decorators$$$function__12__param_memo,
    impl_click$decorators$$$function__13_argument,
    impl_click$decorators$$$function__14_option,
    impl_click$decorators$$$function__15_confirmation_option,
    impl_click$decorators$$$function__16_password_option,
    impl_click$decorators$$$function__17_version_option,
    impl_click$decorators$$$function__18_help_option,
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

    function_impl_code *current = functable_click$decorators;
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

    if (offset > sizeof(functable_click$decorators) || offset < 0) {
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
        functable_click$decorators[offset],
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
        module_click$decorators,
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
PyObject *modulecode_click$decorators(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("click.decorators");

    // Store the module for future use.
    module_click$decorators = module;

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
        PRINT_STRING("click.decorators: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("click.decorators: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("click.decorators: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initclick$decorators\n");

    moduledict_click$decorators = MODULE_DICT(module_click$decorators);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_click$decorators,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_click$decorators,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[23]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_click$decorators,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_click$decorators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_click$decorators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_click$decorators);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_click$decorators, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_click$decorators, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_click$decorators, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_click$decorators);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_14ea2845be8f2e825293bcd1c6939c5b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_2);
    }
    frame_14ea2845be8f2e825293bcd1c6939c5b = MAKE_MODULE_FRAME(codeobj_14ea2845be8f2e825293bcd1c6939c5b, module_click$decorators);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_14ea2845be8f2e825293bcd1c6939c5b);
    assert(Py_REFCNT(frame_14ea2845be8f2e825293bcd1c6939c5b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[137], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[138], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[100];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[109];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPES();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_click$decorators,
                mod_consts[2],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[2]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[141];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[142];
        tmp_level_value_2 = mod_consts[109];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_click$decorators,
                mod_consts[141],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[141]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[143];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[144];
        tmp_level_value_3 = mod_consts[145];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_click$decorators,
                mod_consts[70],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[143];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[146];
        tmp_level_value_4 = mod_consts[145];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_click$decorators,
                mod_consts[41],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[143];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[147];
        tmp_level_value_5 = mod_consts[145];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 9;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_click$decorators,
                mod_consts[77],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[143];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[148];
        tmp_level_value_6 = mod_consts[145];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 10;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_click$decorators,
                mod_consts[62],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[143];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[149];
        tmp_level_value_7 = mod_consts[145];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 11;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_click$decorators,
                mod_consts[76],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[143];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[150];
        tmp_level_value_8 = mod_consts[145];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 12;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_click$decorators,
                mod_consts[79],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[151];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[152];
        tmp_level_value_9 = mod_consts[145];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 13;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_click$decorators,
                mod_consts[8],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[153];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_click$decorators;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[154];
        tmp_level_value_10 = mod_consts[145];
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 14;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_click$decorators,
                mod_consts[123],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[123]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[155]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[42]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Py_Ellipsis;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_4 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[43]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 16;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[156], kw_values, mod_consts[157]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[155]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[158]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[42]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_expression_value_6);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = Py_Ellipsis;
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_3);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[43]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_expression_value_6);
        Py_DECREF(tmp_expression_value_8);
        Py_DECREF(tmp_subscript_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_8);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_expression_value_6);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_expression_value_6);
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_6);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 17;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_2, mod_consts[159], kw_values, mod_consts[157]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[7];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[12];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_19 = MAKE_FUNCTION_click$decorators$$$function__1_pass_context(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[7];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[12];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_20 = MAKE_FUNCTION_click$decorators$$$function__2_pass_obj(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_11;
        tmp_defaults_1 = mod_consts[162];
        tmp_dict_key_3 = mod_consts[19];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_11 == NULL));
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[163]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[17];
        tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[12];
        tmp_dict_value_3 = mod_consts[164];
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_21 = MAKE_FUNCTION_click$decorators$$$function__3_make_pass_decorator(tmp_defaults_1, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[166]);
        tmp_dict_key_4 = mod_consts[36];
        tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_4 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[167];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_13 == NULL));
            tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[168]);
            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[12];
            tmp_dict_value_4 = mod_consts[164];
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_22 = MAKE_FUNCTION_click$decorators$$$function__4_pass_meta_key(tmp_kw_defaults_1, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_0_3;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_14 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[155]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 124;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[170], kw_values, mod_consts[157]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_15 == NULL));
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[172]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = mod_consts[173];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_17 == NULL));
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[42]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = Py_Ellipsis;
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[43]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_expression_value_16);
        Py_DECREF(tmp_subscript_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_16);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[12];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_args_element_value_1 = MAKE_FUNCTION_click$decorators$$$function__5_command(tmp_annotations_5);

        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 127;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_6;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_19 == NULL));
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[172]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[174];
        tmp_dict_key_6 = mod_consts[56];
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_21 == NULL));
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[168]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_tuple_element_5;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[47];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_22 == NULL));
            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[43]);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[12];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_24 == NULL));
            tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[42]);
            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_5;
            }
            tmp_tuple_element_5 = Py_Ellipsis;
            tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_5);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_7);
            goto dict_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_2 = MAKE_FUNCTION_click$decorators$$$function__6_command(tmp_defaults_2, tmp_annotations_6);

        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 134;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_8;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_25 == NULL));
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[172]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = mod_consts[175];
        tmp_dict_key_7 = mod_consts[56];
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_27 == NULL));
        tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[168]);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_tuple_element_6;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[40];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_29 == NULL));
            tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[163]);
            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[171]);

            if (unlikely(tmp_subscript_value_9 == NULL)) {
                tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
            }

            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_28);

                exception_lineno = 145;

                goto dict_build_exception_6;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[47];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_30 == NULL));
            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[43]);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[12];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_32 == NULL));
            tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[42]);
            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_6;
            }
            tmp_tuple_element_6 = Py_Ellipsis;
            tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[171]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_6);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_10);
            goto dict_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_31);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_annotations_7);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_value_3 = MAKE_FUNCTION_click$decorators$$$function__7_command(tmp_defaults_3, tmp_annotations_7);

        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 142;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_7;
        tmp_defaults_4 = mod_consts[176];
        tmp_dict_key_8 = mod_consts[56];
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_34 == NULL));
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[158]);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_tuple_element_8;
            PyTuple_SET_ITEM0(tmp_subscript_value_11, 0, tmp_tuple_element_7);
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_36 == NULL));
            tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[42]);
            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_8 = Py_Ellipsis;
            tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_37;
                PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_8);
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                assert(!(tmp_expression_value_37 == NULL));
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[43]);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 152;

                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_12);
            goto tuple_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_11, 2, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_expression_value_33);
        Py_DECREF(tmp_subscript_value_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_33);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_tuple_element_9;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[40];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_39 == NULL));
            tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[168]);
            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_7;
            }
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_41 == NULL));
            tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[163]);
            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_38);

                exception_lineno = 153;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_subscript_value_14 == NULL)) {
                tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_subscript_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_expression_value_40);

                exception_lineno = 153;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_subscript_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_38);

                exception_lineno = 153;

                goto dict_build_exception_7;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[47];
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_42 == NULL));
            tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[43]);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[12];
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_44 == NULL));
            tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[158]);
            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_7;
            }
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_43);

                exception_lineno = 155;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_45;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_tuple_element_10;
                PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_9);
                tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_expression_value_46 == NULL)) {
                    tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                assert(!(tmp_expression_value_46 == NULL));
                tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[42]);
                if (tmp_expression_value_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;

                    goto tuple_build_exception_9;
                }
                tmp_tuple_element_10 = Py_Ellipsis;
                tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_16, 0, tmp_tuple_element_10);
                tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[41]);

                if (unlikely(tmp_tuple_element_10 == NULL)) {
                    tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
                }

                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;

                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_10);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_16);
                goto tuple_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;

                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_15);
            goto dict_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_8);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_27 = MAKE_FUNCTION_click$decorators$$$function__8_command(tmp_defaults_4, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_tuple_element_11;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_47 == NULL));
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[172]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_9 = mod_consts[173];
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_49 == NULL));
        tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[42]);
        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = Py_Ellipsis;
        tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_50;
            PyTuple_SET_ITEM0(tmp_subscript_value_17, 0, tmp_tuple_element_11);
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_50 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[43]);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_expression_value_48);
        Py_DECREF(tmp_subscript_value_17);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_48);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[12];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto dict_build_exception_8;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;


        tmp_args_element_value_4 = MAKE_FUNCTION_click$decorators$$$function__9_group(tmp_annotations_9);

        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 229;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_defaults_5;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_18;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_51 == NULL));
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[172]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = mod_consts[174];
        tmp_dict_key_10 = mod_consts[56];
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_53 == NULL));
        tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[168]);
        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_list_element_1;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[47];
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_54 == NULL));
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[43]);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[12];
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_56 == NULL));
            tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[42]);
            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_9;
            }
            tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_list_element_1 == NULL)) {
                tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
            }

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_55);

                exception_lineno = 240;

                goto dict_build_exception_9;
            }
            tmp_tuple_element_12 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_tuple_element_12, 0, tmp_list_element_1);
            tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_19, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_12);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_expression_value_55);
            Py_DECREF(tmp_subscript_value_19);
            goto dict_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_55);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        Py_INCREF(tmp_defaults_5);


        tmp_args_element_value_5 = MAKE_FUNCTION_click$decorators$$$function__10_group(tmp_defaults_5, tmp_annotations_10);

        frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame.f_lineno = 236;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_6;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_tuple_element_13;
        tmp_defaults_6 = mod_consts[174];
        tmp_dict_key_11 = mod_consts[56];
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_58 == NULL));
        tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[158]);
        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_13 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_tuple_element_14;
            PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_13);
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_60 == NULL));
            tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[42]);
            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_13;
            }
            tmp_tuple_element_14 = Py_Ellipsis;
            tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_61;
                PyTuple_SET_ITEM0(tmp_subscript_value_21, 0, tmp_tuple_element_14);
                tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_expression_value_61 == NULL)) {
                    tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                assert(!(tmp_expression_value_61 == NULL));
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[43]);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;

                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_21, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_expression_value_59);
            Py_DECREF(tmp_subscript_value_21);
            goto tuple_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_59);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_20, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_20, 2, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_expression_value_57);
        Py_DECREF(tmp_subscript_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_20);
        Py_DECREF(tmp_expression_value_57);
        Py_DECREF(tmp_subscript_value_20);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_62;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_tuple_element_15;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[47];
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_62 == NULL));
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[43]);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[12];
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_64 == NULL));
            tmp_expression_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[158]);
            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_10;
            }
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_63);

                exception_lineno = 246;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_65;
                PyObject *tmp_expression_value_66;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_list_element_2;
                PyTuple_SET_ITEM0(tmp_subscript_value_22, 0, tmp_tuple_element_15);
                tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

                if (unlikely(tmp_expression_value_66 == NULL)) {
                    tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
                }

                assert(!(tmp_expression_value_66 == NULL));
                tmp_expression_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[42]);
                if (tmp_expression_value_65 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;

                    goto tuple_build_exception_15;
                }
                tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[5]);

                if (unlikely(tmp_list_element_2 == NULL)) {
                    tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                }

                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_65);

                    exception_lineno = 246;

                    goto tuple_build_exception_15;
                }
                tmp_tuple_element_16 = MAKE_LIST_EMPTY(1);
                PyList_SET_ITEM0(tmp_tuple_element_16, 0, tmp_list_element_2);
                tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_23, 0, tmp_tuple_element_16);
                tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[62]);

                if (unlikely(tmp_tuple_element_16 == NULL)) {
                    tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                }

                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;

                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_23, 1, tmp_tuple_element_16);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_23);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;

                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_expression_value_63);
            Py_DECREF(tmp_subscript_value_22);
            goto dict_build_exception_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_63);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_30 = MAKE_FUNCTION_click$decorators$$$function__11_group(tmp_defaults_6, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_dict_key_12 = mod_consts[7];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[78];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[12];
        tmp_dict_value_12 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;


        tmp_assign_source_31 = MAKE_FUNCTION_click$decorators$$$function__12__param_memo(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_dict_key_13 = mod_consts[72];
        tmp_dict_value_13 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_13 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_67;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_list_element_3;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[47];
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_67 == NULL));
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[43]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[12];
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_69 == NULL));
            tmp_expression_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[42]);
            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_12;
            }
            tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_list_element_3 == NULL)) {
                tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_68);

                exception_lineno = 274;

                goto dict_build_exception_12;
            }
            tmp_tuple_element_17 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_tuple_element_17, 0, tmp_list_element_3);
            tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_24, 1, tmp_tuple_element_17);
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_expression_value_68);
            Py_DECREF(tmp_subscript_value_24);
            goto dict_build_exception_12;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_68);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_annotations_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_assign_source_32 = MAKE_FUNCTION_click$decorators$$$function__13_argument(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_dict_key_14 = mod_consts[72];
        tmp_dict_value_14 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_14 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_list_element_4;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[47];
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_70 == NULL));
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[43]);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[12];
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_72 == NULL));
            tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[42]);
            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto dict_build_exception_13;
            }
            tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_list_element_4 == NULL)) {
                tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_71);

                exception_lineno = 293;

                goto dict_build_exception_13;
            }
            tmp_tuple_element_18 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_tuple_element_18, 0, tmp_list_element_4);
            tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_25, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_25, 1, tmp_tuple_element_18);
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_expression_value_71);
            Py_DECREF(tmp_subscript_value_25);
            goto dict_build_exception_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_71);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;


        tmp_assign_source_33 = MAKE_FUNCTION_click$decorators$$$function__14_option(tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_dict_key_15 = mod_consts[72];
        tmp_dict_value_15 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_15 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_list_element_5;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[179];
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_73 == NULL));
            tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[43]);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[12];
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_75 == NULL));
            tmp_expression_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[42]);
            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto dict_build_exception_14;
            }
            tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_list_element_5 == NULL)) {
                tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_list_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_74);

                exception_lineno = 314;

                goto dict_build_exception_14;
            }
            tmp_tuple_element_19 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_tuple_element_19, 0, tmp_list_element_5);
            tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_26, 1, tmp_tuple_element_19);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_expression_value_74);
            Py_DECREF(tmp_subscript_value_26);
            goto dict_build_exception_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_74);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_annotations_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;


        tmp_assign_source_34 = MAKE_FUNCTION_click$decorators$$$function__15_confirmation_option(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        tmp_dict_key_16 = mod_consts[72];
        tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_16 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_76;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_list_element_6;
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[179];
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_76 == NULL));
            tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[43]);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[12];
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_78 == NULL));
            tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[42]);
            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto dict_build_exception_15;
            }
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_77);

                exception_lineno = 338;

                goto dict_build_exception_15;
            }
            tmp_tuple_element_20 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_tuple_element_20, 0, tmp_list_element_6);
            tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_27, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_27, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_expression_value_77);
            Py_DECREF(tmp_subscript_value_27);
            goto dict_build_exception_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_77, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_77);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;

                goto dict_build_exception_15;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_15;
        // Exception handling pass through code for dict_build:
        dict_build_exception_15:;
        Py_DECREF(tmp_annotations_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_15:;


        tmp_assign_source_35 = MAKE_FUNCTION_click$decorators$$$function__16_password_option(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_7;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_subscript_value_28;
        tmp_defaults_7 = mod_consts[174];
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[182]);
        tmp_dict_key_17 = mod_consts[98];
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_expression_value_80 == NULL));
        tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[168]);
        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_28);
        Py_DECREF(tmp_expression_value_79);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_81;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_list_element_7;
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[99];
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_82 == NULL));
            tmp_expression_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[168]);
            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_29 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_81);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[116];
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_84 == NULL));
            tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[168]);
            if (tmp_expression_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_30 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_30);
            Py_DECREF(tmp_expression_value_83);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[124];
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_86 == NULL));
            tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[168]);
            if (tmp_expression_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;

                goto dict_build_exception_16;
            }
            tmp_subscript_value_31 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_85);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[72];
            tmp_dict_value_17 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[179];
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_87 == NULL));
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[43]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[12];
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_89 == NULL));
            tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[42]);
            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto dict_build_exception_16;
            }
            tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_list_element_7 == NULL)) {
                tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_88);

                exception_lineno = 362;

                goto dict_build_exception_16;
            }
            tmp_tuple_element_21 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_tuple_element_21, 0, tmp_list_element_7);
            tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_32, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_32, 1, tmp_tuple_element_21);
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_expression_value_88);
            Py_DECREF(tmp_subscript_value_32);
            goto dict_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_32);
            Py_DECREF(tmp_expression_value_88);
            Py_DECREF(tmp_subscript_value_32);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto dict_build_exception_16;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_16;
        // Exception handling pass through code for dict_build:
        dict_build_exception_16:;
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_17);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_16:;
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_36 = MAKE_FUNCTION_click$decorators$$$function__17_version_option(tmp_defaults_7, tmp_kw_defaults_2, tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        tmp_dict_key_18 = mod_consts[72];
        tmp_dict_value_18 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_18 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_list_element_8;
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[179];
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_90 == NULL));
            tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[43]);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[12];
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            assert(!(tmp_expression_value_92 == NULL));
            tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[42]);
            if (tmp_expression_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto dict_build_exception_17;
            }
            tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_list_element_8 == NULL)) {
                tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_list_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_91);

                exception_lineno = 469;

                goto dict_build_exception_17;
            }
            tmp_tuple_element_22 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_tuple_element_22, 0, tmp_list_element_8);
            tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_33, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_33, 1, tmp_tuple_element_22);
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_expression_value_91);
            Py_DECREF(tmp_subscript_value_33);
            goto dict_build_exception_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_91);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto dict_build_exception_17;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_17;
        // Exception handling pass through code for dict_build:
        dict_build_exception_17:;
        Py_DECREF(tmp_annotations_18);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_17:;


        tmp_assign_source_37 = MAKE_FUNCTION_click$decorators$$$function__18_help_option(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_click$decorators, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_37);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14ea2845be8f2e825293bcd1c6939c5b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14ea2845be8f2e825293bcd1c6939c5b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14ea2845be8f2e825293bcd1c6939c5b, exception_lineno);
    }



    assertFrameObject(frame_14ea2845be8f2e825293bcd1c6939c5b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("click.decorators", false);

    Py_INCREF(module_click$decorators);
    return module_click$decorators;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$decorators, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("click$decorators", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
