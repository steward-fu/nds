/*
 * Ghidra decompilation
 *
 * Function : math_log
 * Address  : 0020cbe0
 * Program  : drastic64
 */


undefined8 math_log(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)luaL_checknumber(param_1,1);
  iVar1 = lua_type(param_1,2);
  if (iVar1 < 1) {
    logf(fVar2);
    lua_pushnumber(param_1);
    return 1;
  }
  fVar3 = (float)luaL_checknumber(param_1,2);
  if (fVar3 != 10.0) {
    fVar2 = logf(fVar2);
    fVar3 = logf(fVar3);
    lua_pushnumber(fVar2 / fVar3,param_1);
    return 1;
  }
  log10f(fVar2);
  lua_pushnumber(param_1);
  return 1;
}


