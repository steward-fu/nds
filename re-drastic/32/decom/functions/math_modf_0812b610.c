/*
 * Ghidra decompilation
 *
 * Function : math_modf
 * Address  : 0812b610
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_modf(lua_State *L)

{
  int iVar1;
  lua_Number lVar2;
  lua_Number n;
  lua_Number ip;
  
  iVar1 = lua_isinteger(L,1);
  if (iVar1 == 0) {
    lVar2 = luaL_checknumber(L,1);
    if (lVar2 < 0.0) {
      ip = ceilf(lVar2);
    }
    else {
      ip = floorf(lVar2);
    }
    if ((ip < -2.147484e+09 != NAN(ip)) || (2.147484e+09 <= ip)) {
      lua_pushnumber(L,ip);
    }
    else {
      lua_pushinteger(L,(int)ip);
    }
    if (ip == lVar2) {
      lVar2 = 0.0;
    }
    else {
      lVar2 = lVar2 - ip;
    }
    lua_pushnumber(L,lVar2);
  }
  else {
    lua_settop(L,1);
    lua_pushnumber(L,0.0);
  }
  return 2;
}


