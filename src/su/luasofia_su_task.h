/* vim: set ts=8 et sw=4 sta ai cin: */
/*
 * @author Paulo Pizarro  <paulo.pizarro@gmail.com>
 * @author Tiago Katcipis <tiagokatcipis@gmail.com>
 *
 * This file is part of Luasofia.
 *
 * Luasofia is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Luasofia is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Luasofia.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __LUASOFIA_SU_TASK_H__
#define __LUASOFIA_SU_TASK_H__

#include <sofia-sip/su_wait.h>

typedef struct luasofia_su_task_s {
    su_task_r task;
    _su_task_r ptask;
    lua_State *L;
} luasofia_su_task_t;

#define SU_TASK_MTABLE "su_task_t"

int luasofia_su_task_register_meta(lua_State *L);

int luasofia_su_task_create(lua_State *L);

int luasofia_su_task_init(lua_State *L, _su_task_r ptask);

#endif //__LUASOFIA_SU_TASK_H_

