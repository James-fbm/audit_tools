/* Generated code for Python module 'templatecreatedialog'
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

/* The "module_templatecreatedialog" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_templatecreatedialog;
PyDictObject *moduledict_templatecreatedialog;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[137];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[137];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("templatecreatedialog"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 137; i++) {
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
void checkModuleConstants_templatecreatedialog(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 137; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5346b8adbb0a6007d77313935fd07607;
static PyCodeObject *codeobj_2f2a7e4cb225f341894093d5f5e39b10;
static PyCodeObject *codeobj_4a7d872b2454bce2fda0fdf40665e395;
static PyCodeObject *codeobj_52a83e0c65512c4a0b80a93c60fecb4e;
static PyCodeObject *codeobj_14fd912e1b3103cb1e26533ff9554222;
static PyCodeObject *codeobj_c54db12292326d53d91124730d9bbce7;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[129]); CHECK_OBJECT(module_filename_obj);
    codeobj_5346b8adbb0a6007d77313935fd07607 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[130], mod_consts[130], NULL, NULL, 0, 0, 0);
    codeobj_2f2a7e4cb225f341894093d5f5e39b10 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[131], NULL, 0, 0, 0);
    codeobj_4a7d872b2454bce2fda0fdf40665e395 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[132], mod_consts[131], 2, 0, 0);
    codeobj_52a83e0c65512c4a0b80a93c60fecb4e = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[133], NULL, 1, 0, 0);
    codeobj_14fd912e1b3103cb1e26533ff9554222 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[134], NULL, 2, 0, 0);
    codeobj_c54db12292326d53d91124730d9bbce7 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[135], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_templatecreatedialog$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_templatecreatedialog$$$function__2_init();


static PyObject *MAKE_FUNCTION_templatecreatedialog$$$function__3_getSettings();


static PyObject *MAKE_FUNCTION_templatecreatedialog$$$function__4_setCells();


// The module function definitions.
static PyObject *impl_templatecreatedialog$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *var_layout = NULL;
    PyObject *var_buttons = NULL;
    struct Nuitka_FrameObject *frame_4a7d872b2454bce2fda0fdf40665e395;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4a7d872b2454bce2fda0fdf40665e395 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4a7d872b2454bce2fda0fdf40665e395)) {
        Py_XDECREF(cache_frame_4a7d872b2454bce2fda0fdf40665e395);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a7d872b2454bce2fda0fdf40665e395 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a7d872b2454bce2fda0fdf40665e395 = MAKE_FUNCTION_FRAME(codeobj_4a7d872b2454bce2fda0fdf40665e395, module_templatecreatedialog, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a7d872b2454bce2fda0fdf40665e395->m_type_description == NULL);
    frame_4a7d872b2454bce2fda0fdf40665e395 = cache_frame_4a7d872b2454bce2fda0fdf40665e395;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a7d872b2454bce2fda0fdf40665e395);
    assert(Py_REFCNT(frame_4a7d872b2454bce2fda0fdf40665e395) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 14;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_templatecreatedialog, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_1 = par_parent;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 14;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 15;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[2],
            PyTuple_GET_ITEM(mod_consts[3], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_1 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 18;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_2 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 19;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_assattr_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[9]);
        }

        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[11];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_2 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 21;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

            tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[12], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_4 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 22;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_assattr_value_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[13], kw_values, mod_consts[9]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[14], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = mod_consts[15];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_3 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 25;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_3};

            tmp_assattr_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[16], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_assattr_target_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = mod_consts[17];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_4 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 26;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_4};

            tmp_assattr_value_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[18], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_assattr_target_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = mod_consts[19];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_5 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 29;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_5};

            tmp_assattr_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[20], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_assattr_target_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = mod_consts[22];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_6 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 30;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_6};

            tmp_assattr_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[23], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 32;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[26]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 34;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 34;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 34;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 34;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 34;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 34;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[23]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[31]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[32]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 35;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 35;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_12;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_9 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 37;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};

            tmp_assattr_value_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, kw_values, mod_consts[9]);
        }

        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[34], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[34]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[35]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 38;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[36]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 38;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 38;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[34]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[37]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 39;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[38]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 39;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 39;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_assattr_target_10;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = mod_consts[39];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_7 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 41;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_7};

            tmp_assattr_value_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[40], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_16;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_assattr_target_11;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_11 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 42;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_11};

            tmp_assattr_value_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, kw_values, mod_consts[9]);
        }

        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[41], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_called_value_17;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_assattr_target_12;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = mod_consts[42];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_8 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 43;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_8};

            tmp_assattr_value_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[43], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_called_value_18;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_assattr_target_13;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_13 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 44;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_13};

            tmp_assattr_value_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, kw_values, mod_consts[9]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[44], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_19;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_assattr_target_14;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_14 = mod_consts[45];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_9 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 45;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_9};

            tmp_assattr_value_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[46], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_called_value_20;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_assattr_target_15;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_15 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 46;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_15};

            tmp_assattr_value_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, kw_values, mod_consts[9]);
        }

        if (tmp_assattr_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[47], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_called_value_21;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_assattr_target_16;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_16 = mod_consts[48];
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_1_10 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 47;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_10};

            tmp_assattr_value_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, kw_values, mod_consts[6]);
        }

        if (tmp_assattr_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[49], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_called_value_22;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_assattr_target_17;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_17 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 48;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_17};

            tmp_assattr_value_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, kw_values, mod_consts[9]);
        }

        if (tmp_assattr_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[50], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 51;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_23);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_layout == NULL);
        var_layout = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_layout);
        tmp_expression_value_15 = var_layout;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[52]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[7]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 52;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[10]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 52;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_layout);
        tmp_expression_value_18 = var_layout;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[52]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[12]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 53;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[14]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 53;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(var_layout);
        tmp_expression_value_21 = var_layout;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[52]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[16]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 54;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[18]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 54;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(var_layout);
        tmp_expression_value_24 = var_layout;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[52]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[20]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 55;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[23]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 55;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(var_layout);
        tmp_expression_value_27 = var_layout;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[52]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[34]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 56;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 56;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(var_layout);
        tmp_expression_value_29 = var_layout;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[52]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_30 = par_self;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[40]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 57;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_31 = par_self;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[41]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_16);

            exception_lineno = 57;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(var_layout);
        tmp_expression_value_32 = var_layout;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[52]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_33 = par_self;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[43]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 58;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_34 = par_self;
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[44]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 58;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(var_layout);
        tmp_expression_value_35 = var_layout;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[52]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_36 = par_self;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[46]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 59;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_37 = par_self;
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[47]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_20);

            exception_lineno = 59;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(var_layout);
        tmp_expression_value_38 = var_layout;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[52]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_39 = par_self;
        tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[49]);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_40 = par_self;
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[50]);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_32, call_args);
        }

        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[54]);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[55]);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[56]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_24);

            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_26 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_33, call_args);
        }

        Py_DECREF(tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_buttons == NULL);
        var_buttons = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(var_buttons);
        tmp_expression_value_45 = var_buttons;
        tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[57]);
        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[31]);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_46 = par_self;
        tmp_args_element_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[58]);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 65;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 65;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_49;
        CHECK_OBJECT(var_buttons);
        tmp_expression_value_48 = var_buttons;
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[59]);
        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[31]);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_49 = par_self;
        tmp_args_element_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[60]);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 66;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_29;
        CHECK_OBJECT(var_layout);
        tmp_called_instance_4 = var_layout;
        CHECK_OBJECT(var_buttons);
        tmp_args_element_value_29 = var_buttons;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 67;
        tmp_call_result_19 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[61], tmp_args_element_value_29);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(var_layout);
        tmp_called_instance_5 = var_layout;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 69;
        tmp_call_result_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[62],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_30;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(var_layout);
        tmp_args_element_value_30 = var_layout;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 70;
        tmp_call_result_21 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[64], tmp_args_element_value_30);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 71;
        tmp_call_result_22 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_7,
            mod_consts[65],
            &PyTuple_GET_ITEM(mod_consts[66], 0)
        );

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        CHECK_OBJECT(var_layout);
        tmp_args_element_value_31 = var_layout;
        frame_4a7d872b2454bce2fda0fdf40665e395->m_frame.f_lineno = 74;
        tmp_call_result_23 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[64], tmp_args_element_value_31);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4a7d872b2454bce2fda0fdf40665e395, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a7d872b2454bce2fda0fdf40665e395->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a7d872b2454bce2fda0fdf40665e395, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a7d872b2454bce2fda0fdf40665e395,
        type_description_1,
        par_self,
        par_parent,
        var_layout,
        var_buttons,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4a7d872b2454bce2fda0fdf40665e395 == cache_frame_4a7d872b2454bce2fda0fdf40665e395) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a7d872b2454bce2fda0fdf40665e395);
        cache_frame_4a7d872b2454bce2fda0fdf40665e395 = NULL;
    }

    assertFrameObject(frame_4a7d872b2454bce2fda0fdf40665e395);

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
    CHECK_OBJECT(var_layout);
    Py_DECREF(var_layout);
    var_layout = NULL;
    CHECK_OBJECT(var_buttons);
    Py_DECREF(var_buttons);
    var_buttons = NULL;
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

    Py_XDECREF(var_layout);
    var_layout = NULL;
    Py_XDECREF(var_buttons);
    var_buttons = NULL;
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
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_templatecreatedialog$$$function__2_init(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_stmt = python_pars[1];
    struct Nuitka_FrameObject *frame_14fd912e1b3103cb1e26533ff9554222;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_14fd912e1b3103cb1e26533ff9554222 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_14fd912e1b3103cb1e26533ff9554222)) {
        Py_XDECREF(cache_frame_14fd912e1b3103cb1e26533ff9554222);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14fd912e1b3103cb1e26533ff9554222 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14fd912e1b3103cb1e26533ff9554222 = MAKE_FUNCTION_FRAME(codeobj_14fd912e1b3103cb1e26533ff9554222, module_templatecreatedialog, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_14fd912e1b3103cb1e26533ff9554222->m_type_description == NULL);
    frame_14fd912e1b3103cb1e26533ff9554222 = cache_frame_14fd912e1b3103cb1e26533ff9554222;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_14fd912e1b3103cb1e26533ff9554222);
    assert(Py_REFCNT(frame_14fd912e1b3103cb1e26533ff9554222) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[69]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_14fd912e1b3103cb1e26533ff9554222->m_frame.f_lineno = 77;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[71]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[72];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_14fd912e1b3103cb1e26533ff9554222->m_frame.f_lineno = 77;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stmt);
        tmp_args_element_value_2 = par_stmt;
        frame_14fd912e1b3103cb1e26533ff9554222->m_frame.f_lineno = 78;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[67], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14fd912e1b3103cb1e26533ff9554222, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14fd912e1b3103cb1e26533ff9554222->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14fd912e1b3103cb1e26533ff9554222, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14fd912e1b3103cb1e26533ff9554222,
        type_description_1,
        par_self,
        par_stmt
    );


    // Release cached frame if used for exception.
    if (frame_14fd912e1b3103cb1e26533ff9554222 == cache_frame_14fd912e1b3103cb1e26533ff9554222) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_14fd912e1b3103cb1e26533ff9554222);
        cache_frame_14fd912e1b3103cb1e26533ff9554222 = NULL;
    }

    assertFrameObject(frame_14fd912e1b3103cb1e26533ff9554222);

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
    CHECK_OBJECT(par_stmt);
    Py_DECREF(par_stmt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_stmt);
    Py_DECREF(par_stmt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_templatecreatedialog$$$function__3_getSettings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_52a83e0c65512c4a0b80a93c60fecb4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_52a83e0c65512c4a0b80a93c60fecb4e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_52a83e0c65512c4a0b80a93c60fecb4e)) {
        Py_XDECREF(cache_frame_52a83e0c65512c4a0b80a93c60fecb4e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52a83e0c65512c4a0b80a93c60fecb4e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52a83e0c65512c4a0b80a93c60fecb4e = MAKE_FUNCTION_FRAME(codeobj_52a83e0c65512c4a0b80a93c60fecb4e, module_templatecreatedialog, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_52a83e0c65512c4a0b80a93c60fecb4e->m_type_description == NULL);
    frame_52a83e0c65512c4a0b80a93c60fecb4e = cache_frame_52a83e0c65512c4a0b80a93c60fecb4e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_52a83e0c65512c4a0b80a93c60fecb4e);
    assert(Py_REFCNT(frame_52a83e0c65512c4a0b80a93c60fecb4e) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[73];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_52a83e0c65512c4a0b80a93c60fecb4e->m_frame.f_lineno = 82;
        tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[74]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_expression_value_7;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[75];
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            frame_52a83e0c65512c4a0b80a93c60fecb4e->m_frame.f_lineno = 83;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[74]);
            Py_DECREF(tmp_called_instance_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[76];
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            frame_52a83e0c65512c4a0b80a93c60fecb4e->m_frame.f_lineno = 84;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[74]);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[77];
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[41]);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            frame_52a83e0c65512c4a0b80a93c60fecb4e->m_frame.f_lineno = 85;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[74]);
            Py_DECREF(tmp_called_instance_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[78];
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[44]);
            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            frame_52a83e0c65512c4a0b80a93c60fecb4e->m_frame.f_lineno = 86;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[74]);
            Py_DECREF(tmp_called_instance_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[79];
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[47]);
            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            frame_52a83e0c65512c4a0b80a93c60fecb4e->m_frame.f_lineno = 87;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[74]);
            Py_DECREF(tmp_called_instance_6);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[80];
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[50]);
            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            frame_52a83e0c65512c4a0b80a93c60fecb4e->m_frame.f_lineno = 88;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[74]);
            Py_DECREF(tmp_called_instance_7);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_52a83e0c65512c4a0b80a93c60fecb4e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52a83e0c65512c4a0b80a93c60fecb4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52a83e0c65512c4a0b80a93c60fecb4e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52a83e0c65512c4a0b80a93c60fecb4e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_52a83e0c65512c4a0b80a93c60fecb4e == cache_frame_52a83e0c65512c4a0b80a93c60fecb4e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_52a83e0c65512c4a0b80a93c60fecb4e);
        cache_frame_52a83e0c65512c4a0b80a93c60fecb4e = NULL;
    }

    assertFrameObject(frame_52a83e0c65512c4a0b80a93c60fecb4e);

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


static PyObject *impl_templatecreatedialog$$$function__4_setCells(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_parent_dir = NULL;
    PyObject *var_file_path = NULL;
    struct Nuitka_FrameObject *frame_c54db12292326d53d91124730d9bbce7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c54db12292326d53d91124730d9bbce7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c54db12292326d53d91124730d9bbce7)) {
        Py_XDECREF(cache_frame_c54db12292326d53d91124730d9bbce7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c54db12292326d53d91124730d9bbce7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c54db12292326d53d91124730d9bbce7 = MAKE_FUNCTION_FRAME(codeobj_c54db12292326d53d91124730d9bbce7, module_templatecreatedialog, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c54db12292326d53d91124730d9bbce7->m_type_description == NULL);
    frame_c54db12292326d53d91124730d9bbce7 = cache_frame_c54db12292326d53d91124730d9bbce7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c54db12292326d53d91124730d9bbce7);
    assert(Py_REFCNT(frame_c54db12292326d53d91124730d9bbce7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[81]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[82]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_c54db12292326d53d91124730d9bbce7->m_frame.f_lineno = 93;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[84]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[85];
        frame_c54db12292326d53d91124730d9bbce7->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c54db12292326d53d91124730d9bbce7->m_frame.f_lineno = 93;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_parent_dir == NULL);
        var_parent_dir = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_3 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[82]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_parent_dir);
        tmp_args_element_value_4 = var_parent_dir;
        tmp_args_element_value_5 = mod_consts[86];
        tmp_args_element_value_6 = mod_consts[87];
        frame_c54db12292326d53d91124730d9bbce7->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_file_path == NULL);
        var_file_path = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_file_path);
        tmp_args_element_value_7 = var_file_path;
        frame_c54db12292326d53d91124730d9bbce7->m_frame.f_lineno = 95;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[88], tmp_args_element_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c54db12292326d53d91124730d9bbce7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c54db12292326d53d91124730d9bbce7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c54db12292326d53d91124730d9bbce7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c54db12292326d53d91124730d9bbce7,
        type_description_1,
        par_self,
        var_parent_dir,
        var_file_path
    );


    // Release cached frame if used for exception.
    if (frame_c54db12292326d53d91124730d9bbce7 == cache_frame_c54db12292326d53d91124730d9bbce7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c54db12292326d53d91124730d9bbce7);
        cache_frame_c54db12292326d53d91124730d9bbce7 = NULL;
    }

    assertFrameObject(frame_c54db12292326d53d91124730d9bbce7);

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
    CHECK_OBJECT(var_parent_dir);
    Py_DECREF(var_parent_dir);
    var_parent_dir = NULL;
    CHECK_OBJECT(var_file_path);
    Py_DECREF(var_file_path);
    var_file_path = NULL;
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

    Py_XDECREF(var_parent_dir);
    var_parent_dir = NULL;
    Py_XDECREF(var_file_path);
    var_file_path = NULL;
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



static PyObject *MAKE_FUNCTION_templatecreatedialog$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_templatecreatedialog$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_4a7d872b2454bce2fda0fdf40665e395,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_templatecreatedialog,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_templatecreatedialog$$$function__2_init() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_templatecreatedialog$$$function__2_init,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_14fd912e1b3103cb1e26533ff9554222,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_templatecreatedialog,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_templatecreatedialog$$$function__3_getSettings() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_templatecreatedialog$$$function__3_getSettings,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_52a83e0c65512c4a0b80a93c60fecb4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_templatecreatedialog,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_templatecreatedialog$$$function__4_setCells() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_templatecreatedialog$$$function__4_setCells,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_c54db12292326d53d91124730d9bbce7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_templatecreatedialog,
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

function_impl_code functable_templatecreatedialog[] = {
    impl_templatecreatedialog$$$function__1___init__,
    impl_templatecreatedialog$$$function__2_init,
    impl_templatecreatedialog$$$function__3_getSettings,
    impl_templatecreatedialog$$$function__4_setCells,
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

    function_impl_code *current = functable_templatecreatedialog;
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

    if (offset > sizeof(functable_templatecreatedialog) || offset < 0) {
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
        functable_templatecreatedialog[offset],
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
        module_templatecreatedialog,
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
PyObject *modulecode_templatecreatedialog(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("templatecreatedialog");

    // Store the module for future use.
    module_templatecreatedialog = module;

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
        PRINT_STRING("templatecreatedialog: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("templatecreatedialog: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("templatecreatedialog: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittemplatecreatedialog\n");

    moduledict_templatecreatedialog = MODULE_DICT(module_templatecreatedialog);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_templatecreatedialog,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_templatecreatedialog,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[136]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_templatecreatedialog,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_templatecreatedialog,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_templatecreatedialog,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_templatecreatedialog);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_templatecreatedialog, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_templatecreatedialog, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_templatecreatedialog, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_templatecreatedialog);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_5346b8adbb0a6007d77313935fd07607;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_2f2a7e4cb225f341894093d5f5e39b10_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_2);
    }
    frame_5346b8adbb0a6007d77313935fd07607 = MAKE_MODULE_FRAME(codeobj_5346b8adbb0a6007d77313935fd07607, module_templatecreatedialog);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5346b8adbb0a6007d77313935fd07607);
    assert(Py_REFCNT(frame_5346b8adbb0a6007d77313935fd07607) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[92], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[93], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[95],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[95]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[97];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_templatecreatedialog;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[96];
        frame_5346b8adbb0a6007d77313935fd07607->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[98];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_templatecreatedialog;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[99];
        tmp_level_value_2 = mod_consts[96];
        frame_5346b8adbb0a6007d77313935fd07607->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[28],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[28]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[100],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[100]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[101];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_templatecreatedialog;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[102];
        tmp_level_value_3 = mod_consts[96];
        frame_5346b8adbb0a6007d77313935fd07607->m_frame.f_lineno = 6;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[27],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[103];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_templatecreatedialog;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[104];
        tmp_level_value_4 = mod_consts[96];
        frame_5346b8adbb0a6007d77313935fd07607->m_frame.f_lineno = 7;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[105],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[105]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[106],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[106]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[53],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[53]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[51],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[51]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[107],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[107]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[4],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[4]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[8],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[8]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[33],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[33]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[21],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[21]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[108],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[108]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_21);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[109];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_templatecreatedialog;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[110];
        tmp_level_value_5 = mod_consts[96];
        frame_5346b8adbb0a6007d77313935fd07607->m_frame.f_lineno = 9;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_templatecreatedialog,
                mod_consts[68],
                mod_consts[96]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_22);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_assign_source_23 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_23, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_24 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[96];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_26 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[111]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[111]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[112];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_5346b8adbb0a6007d77313935fd07607->m_frame.f_lineno = 12;
        tmp_assign_source_27 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[113]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[114];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[115];
        tmp_getattr_default_1 = mod_consts[116];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[115]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 12;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyObject_SetItem(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12, mod_consts[119], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        frame_2f2a7e4cb225f341894093d5f5e39b10_2 = MAKE_CLASS_FRAME(codeobj_2f2a7e4cb225f341894093d5f5e39b10, module_templatecreatedialog, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2f2a7e4cb225f341894093d5f5e39b10_2);
        assert(Py_REFCNT(frame_2f2a7e4cb225f341894093d5f5e39b10_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[120];
            tmp_dict_key_1 = mod_consts[121];
            tmp_expression_value_6 = PyObject_GetItem(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12, mod_consts[95]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[95]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 13;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12, mod_consts[106]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[106]);

                    if (unlikely(tmp_subscript_value_2 == NULL)) {
                        tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
                    }

                    if (tmp_subscript_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_6);

                        exception_lineno = 13;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_6);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_templatecreatedialog$$$function__1___init__(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_templatecreatedialog$$$function__2_init();

        tmp_res = PyObject_SetItem(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12, mod_consts[123], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_templatecreatedialog$$$function__3_getSettings();

        tmp_res = PyObject_SetItem(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12, mod_consts[125], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_templatecreatedialog$$$function__4_setCells();

        tmp_res = PyObject_SetItem(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12, mod_consts[32], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2f2a7e4cb225f341894093d5f5e39b10_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2f2a7e4cb225f341894093d5f5e39b10_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2f2a7e4cb225f341894093d5f5e39b10_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2f2a7e4cb225f341894093d5f5e39b10_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_2f2a7e4cb225f341894093d5f5e39b10_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[112];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_5346b8adbb0a6007d77313935fd07607->m_frame.f_lineno = 12;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_5;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_30);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_29 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12);
        locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12);
        locals_templatecreatedialog$$$class__1_TemplateCreateDialog_12 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_templatecreatedialog, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_29);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5346b8adbb0a6007d77313935fd07607, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5346b8adbb0a6007d77313935fd07607->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5346b8adbb0a6007d77313935fd07607, exception_lineno);
    }



    assertFrameObject(frame_5346b8adbb0a6007d77313935fd07607);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("templatecreatedialog", false);

    Py_INCREF(module_templatecreatedialog);
    return module_templatecreatedialog;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_templatecreatedialog, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("templatecreatedialog", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
