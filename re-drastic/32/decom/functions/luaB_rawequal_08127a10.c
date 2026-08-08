/*
 * Ghidra decompilation
 *
 * Function : luaB_rawequal
 * Address  : 08127a10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_rawequal(lua_State *L)

{
  int b;
  
  luaL_checkany(L,1);
  luaL_checkany(L,2);
  b = lua_rawequal(L,1,2);
  lua_pushboolean(L,b);
  return 1;
}


