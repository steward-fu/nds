/*
 * Ghidra decompilation
 *
 * Function : luaopen_table
 * Address  : 08131744
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaopen_table(lua_State *L)

{
  luaL_checkversion_(L,503.0,0x44);
  lua_createtable(L,0,7);
  luaL_setfuncs(L,tab_funcs,0);
  return 1;
}


