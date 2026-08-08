/*
 * Ghidra decompilation
 *
 * Function : luaopen_utf8
 * Address  : 081321e8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaopen_utf8(lua_State *L)

{
  luaL_checkversion_(L,503.0,0x44);
  lua_createtable(L,0,6);
  luaL_setfuncs(L,funcs,0);
  lua_pushlstring(L,"[",0xe);
  lua_setfield(L,-2,"charpattern");
  return 1;
}


