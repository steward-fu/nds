/*
 * Ghidra decompilation
 *
 * Function : math_log
 * Address  : 0812b380
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_log(lua_State *L)

{
  int iVar1;
  lua_Number __x;
  lua_Number x;
  lua_Number __x_00;
  lua_Number base;
  float fVar2;
  float fVar3;
  lua_Number res;
  
  __x = luaL_checknumber(L,1);
  iVar1 = lua_type(L,2);
  if (iVar1 < 1) {
    res = logf(__x);
  }
  else {
    __x_00 = luaL_checknumber(L,2);
    if (__x_00 == 10.0) {
      res = log10f(__x);
    }
    else {
      fVar2 = logf(__x);
      fVar3 = logf(__x_00);
      res = fVar2 / fVar3;
    }
  }
  lua_pushnumber(L,res);
  return 1;
}


