/*
 * Ghidra decompilation
 *
 * Function : math_modf
 * Address  : 0020cf00
 * Program  : drastic64
 */


undefined8 math_modf(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = lua_isinteger(param_1,1);
  if (iVar1 == 0) {
    fVar2 = (float)luaL_checknumber(param_1,1);
    fVar4 = (float)(int)fVar2;
    if ((fVar4 < -2.147484e+09) || (2.147484e+09 <= fVar4)) {
      lua_pushnumber(fVar4,param_1);
    }
    else {
      lua_pushinteger(param_1,(int)fVar4);
    }
    fVar3 = 0.0;
    if (fVar2 != fVar4) {
      fVar3 = fVar2 - fVar4;
    }
    lua_pushnumber(fVar3,param_1);
    return 2;
  }
  lua_settop(param_1,1);
  lua_pushnumber(0,param_1);
  return 2;
}


