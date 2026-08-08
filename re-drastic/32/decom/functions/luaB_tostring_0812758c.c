/*
 * Ghidra decompilation
 *
 * Function : luaB_tostring
 * Address  : 0812758c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_tostring(lua_State *L)

{
  luaL_checkany(L,1);
  luaL_tolstring(L,1,(size_t *)0x0);
  return 1;
}


