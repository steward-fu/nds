/*
 * Ghidra decompilation
 *
 * Function : lua_typename
 * Address  : 0810e1cc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

char * lua_typename(lua_State *L,int t)

{
  return luaT_typenames_[t + 1];
}


