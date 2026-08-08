/*
 * Ghidra decompilation
 *
 * Function : luaB_rawlen
 * Address  : 081279b4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int luaB_rawlen(lua_State *L)

{
  int iVar1;
  int t;
  size_t n;
  
  iVar1 = lua_type(L,1);
  t = iVar1 + -4;
  if (1 < (uint)t) {
    luaL_argerror(L,1,"table or string expected");
  }
  n = lua_rawlen(L,1);
  lua_pushinteger(L,n);
  return 1;
}


