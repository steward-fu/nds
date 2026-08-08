/*
 * Ghidra decompilation
 *
 * Function : math_ceil
 * Address  : 0812b96c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_ceil(lua_State *L)

{
  int iVar1;
  lua_Number __x;
  float n;
  lua_Number d;
  
  iVar1 = lua_isinteger(L,1);
  if (iVar1 == 0) {
    __x = luaL_checknumber(L,1);
    n = ceilf(__x);
    if ((n < -2.147484e+09 != NAN(n)) || (2.147484e+09 <= n)) {
      lua_pushnumber(L,n);
    }
    else {
      lua_pushinteger(L,(int)n);
    }
    return 1;
  }
  lua_settop(L,1);
  return 1;
}


