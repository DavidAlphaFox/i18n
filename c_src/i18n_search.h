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
 *  @author Michael Uvarov <freeakk@gmail.com>
 *  =====================================================================
 */


#include "i18n_nif.h"


#if I18N_SEARCH

NIF_EXPORT(search_open)
NIF_EXPORT(search_index)
NIF_EXPORT(search_match_all)
NIF_EXPORT(search_match)
NIF_EXPORT(search_test)


int i18n_search_load(ErlNifEnv *, void **, 
    ERL_NIF_TERM);

/* Define into i18n_collation */
extern ErlNifResourceType* collator_type;

#if I18N_INFO
ERL_NIF_TERM i18n_search_info(ErlNifEnv *env);
#endif

#endif
