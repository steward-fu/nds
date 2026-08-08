/*
 * Ghidra decompilation
 *
 * Function : luaB_rawget
 * Address  : 08127968
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_rawget(lua_State *L)

{
  luaL_checktype(L,1,5);
  luaL_checkany(L,2);
  lua_settop(L,2);
  lua_rawget(L,1);
  return 1;
}


