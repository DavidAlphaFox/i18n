/* vim: set filetype=cpp shiftwidth=4 tabstop=4 expandtab tw=80: */

/**
 *  =====================================================================
 *    Copyright 2011 Uvarov Michael 
 * 
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 * 
 *  $Id$
 * 
 *  @copyright 2010-2011 Michael Uvarov
 *  @author Michael Uvarov <arcusfelis@gmail.com>
 *  =====================================================================
 */


#include "i18n_nif.h"
#include "i18n_locale.h"



#if I18N_LOCALE
ERL_NIF_TERM locale_name(ErlNifEnv* env, int argc, 
    const ERL_NIF_TERM argv[])
{
    UErrorCode status = U_ZERO_ERROR;

    int32_t /*value_len,*/     key_len; 
    char    value[LOCALE_LEN], key[LOCALE_LEN];

    if (argc != 1)
        return enif_make_badarg(env);

    key_len = enif_get_atom(env, argv[0], (char*) key, 
                    LOCALE_LEN, ERL_NIF_LATIN1);

    if (!key_len) {
        return enif_make_badarg(env);
    }

    
    /*value_len =*/ uloc_getName((const char*) key, /* Locale Id */
        (char *)  value, /* Name */
        (int32_t) LOCALE_LEN,
        &status);
    CHECK(env, status);

    return enif_make_atom(env, value);
}

ERL_NIF_TERM locale_parent(ErlNifEnv* env, int argc, 
    const ERL_NIF_TERM argv[])
{
    UErrorCode status = U_ZERO_ERROR;

    int32_t /*value_len,*/     key_len; 
    char    value[LOCALE_LEN], key[LOCALE_LEN];

    if (argc != 1)
        return enif_make_badarg(env);

    key_len = enif_get_atom(env, argv[0], (char*) key, 
                    LOCALE_LEN, ERL_NIF_LATIN1);

    if (!key_len) {
        return enif_make_badarg(env);
    }

    
    /*value_len =*/ uloc_getParent((const char*) key, /* Locale Id */
        (char *)  value, /* Name */
        (int32_t) LOCALE_LEN,
        &status);
    CHECK(env, status);

    return enif_make_atom(env, value);
}

ERL_NIF_TERM locale_language_tag(ErlNifEnv* env, int argc, 
    const ERL_NIF_TERM argv[])
{
    UErrorCode status = U_ZERO_ERROR;

    int32_t /*value_len,*/     key_len; 
    char    value[LOCALE_LEN], key[LOCALE_LEN];

    if (argc != 1)
        return enif_make_badarg(env);

    key_len = enif_get_atom(env, argv[0], (char*) key, 
                    LOCALE_LEN, ERL_NIF_LATIN1);

    if (!key_len) {
        return enif_make_badarg(env);
    }

    
    /*value_len =*/ uloc_toLanguageTag((const char*) key, /* Locale Id */
        (char *)  value, /* Name */
        (int32_t) LOCALE_LEN,
        FALSE,
        &status);
    CHECK(env, status);

    return enif_make_atom(env, value);
}

ERL_NIF_TERM locale_base_name(ErlNifEnv* env, int argc, 
    const ERL_NIF_TERM argv[])
{
    UErrorCode status = U_ZERO_ERROR;

    int32_t /*value_len,*/     key_len; 
    char    value[LOCALE_LEN], key[LOCALE_LEN];

    if (argc != 1)
        return enif_make_badarg(env);

    key_len = enif_get_atom(env, argv[0], (char*) key, 
                    LOCALE_LEN, ERL_NIF_LATIN1);

    if (!key_len) {
        return enif_make_badarg(env);
    }

    
    /*value_len =*/ uloc_getBaseName((const char*) key, /* Locale Id */
        (char *)  value, /* name */
        (int32_t) LOCALE_LEN,
        &status);
    CHECK(env, status);

    return enif_make_atom(env, value);
}

#endif
