/*
 * Ghidra decompilation
 *
 * Function : math_random
 * Address  : 0020c8f0
 * Program  : drastic64
 */


undefined8 math_random(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = random();
  iVar1 = lua_gettop(param_1);
  if (iVar1 == 1) {
    iVar2 = luaL_checkinteger(param_1,1);
    iVar1 = 1;
    if (iVar2 < 1) {
      luaL_argerror(param_1,1,"interval is empty");
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 0) {
        uVar4 = luaL_error(param_1,"wrong number of arguments");
        return uVar4;
      }
      lua_pushnumber((float)lVar3 * 4.656613e-10,param_1);
      return 1;
    }
    iVar1 = luaL_checkinteger(param_1,1);
    iVar2 = luaL_checkinteger(param_1,2);
    if (iVar2 < iVar1) {
      luaL_argerror(param_1,1,"interval is empty");
    }
    if ((iVar1 < 0) && (iVar1 + 0x7fffffff < iVar2)) {
      luaL_argerror(param_1,1,"interval too large");
    }
  }
  lua_pushinteger(param_1,(int)(((float)(iVar2 - iVar1) + 1.0) * (float)lVar3 * 4.656613e-10) +
                          iVar1);
  return 1;
}


