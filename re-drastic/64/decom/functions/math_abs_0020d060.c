/*
 * Ghidra decompilation
 *
 * Function : math_abs
 * Address  : 0020d060
 * Program  : drastic64
 */


undefined8 math_abs(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = lua_isinteger(param_1,1);
  if (iVar1 != 0) {
    iVar2 = lua_tointegerx(param_1,1,0);
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    lua_pushinteger(param_1,iVar1);
    return 1;
  }
  fVar3 = (float)luaL_checknumber(param_1,1);
  lua_pushnumber(ABS(fVar3),param_1);
  return 1;
}


