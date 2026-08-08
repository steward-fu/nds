/*
 * Ghidra decompilation
 *
 * Function : math_fmod
 * Address  : 0020d0e0
 * Program  : drastic64
 */


undefined8 math_fmod(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float __x;
  float __y;
  
  iVar2 = lua_isinteger(param_1,1);
  if ((iVar2 == 0) || (iVar2 = lua_isinteger(param_1,2), iVar2 == 0)) {
    __x = (float)luaL_checknumber(param_1,1);
    __y = (float)luaL_checknumber(param_1,2);
    fmodf(__x,__y);
    lua_pushnumber(param_1);
  }
  else {
    iVar2 = lua_tointegerx(param_1,2,0);
    if (iVar2 + 1U < 2) {
      if (iVar2 == 0) {
        luaL_argerror(param_1,2,&DAT_00227b30);
      }
      lua_pushinteger(param_1,0);
    }
    else {
      iVar3 = lua_tointegerx(param_1,1,0);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = iVar3 / iVar2;
      }
      lua_pushinteger(param_1,iVar3 - iVar1 * iVar2);
    }
  }
  return 1;
}


