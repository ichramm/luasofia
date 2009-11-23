/* vim: set ts=8 et sw=4 sta ai cin: */
#ifndef __LUASOFIA_WEAK_TABLE_H__
#define __LUASOFIA_WEAK_TABLE_H__

void luasofia_weak_table_create(lua_State *L);

void luasofia_weak_table_set(lua_State *L, void* key);

void luasofia_weak_table_get(lua_State *L, void* key);

void luasofia_weak_table_remove(lua_State *L, void* key);

#endif //__LUASOFIA_WEAK_TABLE

