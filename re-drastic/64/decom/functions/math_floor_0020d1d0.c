/*
 * Ghidra decompilation
 *
 * Function : math_floor
 * Address  : 0020d1d0
 * Program  : drastic64
 */


undefined8 math_floor(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = lua_isinteger(param_1,1);
  if (iVar1 != 0) {
    lua_settop(param_1,1);
    return 1;
  }
  fVar2 = (float)luaL_checknumber(param_1,1);
  fVar2 = (float)(int)fVar2;
  if ((-2.147484e+09 <= fVar2) && (fVar2 < 2.147484e+09)) {
    lua_pushinteger(param_1,(int)fVar2);
    return 1;
  }
  lua_pushnumber(param_1);
  return 1;
}


