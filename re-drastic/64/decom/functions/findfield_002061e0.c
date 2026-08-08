/*
 * Ghidra decompilation
 *
 * Function : findfield
 * Address  : 002061e0
 * Program  : drastic64
 */


undefined8 findfield(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushnil(param_1);
    while (iVar1 = lua_next(param_1,0xfffffffe), iVar1 != 0) {
      iVar1 = lua_type(param_1,0xfffffffe);
      if (iVar1 == 4) {
        iVar1 = lua_rawequal(param_1,param_2,0xffffffff);
        if (iVar1 != 0) {
          lua_settop(param_1,0xfffffffe);
          return 1;
        }
        iVar1 = findfield(param_1,param_2,param_3 + -1);
        if (iVar1 != 0) {
          lua_rotate(param_1,0xfffffffe,0xffffffff);
          lua_settop(param_1,0xfffffffe);
          lua_pushlstring(param_1,".",1);
          lua_rotate(param_1,0xfffffffe,1);
          lua_concat(param_1,3);
          return 1;
        }
      }
      lua_settop(param_1,0xfffffffe);
    }
  }
  return 0;
}


