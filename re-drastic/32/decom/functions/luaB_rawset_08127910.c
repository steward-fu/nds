/*
 * Ghidra decompilation
 *
 * Function : luaB_rawset
 * Address  : 08127910
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_rawset(lua_State *L)

{
  luaL_checktype(L,1,5);
  luaL_checkany(L,2);
  luaL_checkany(L,3);
  lua_settop(L,3);
  lua_rawset(L,1);
  return 1;
}


