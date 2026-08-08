/*
 * Ghidra decompilation
 *
 * Function : luaL_unref
 * Address  : 00207d70
 * Program  : drastic64
 */


void luaL_unref(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    return;
  }
  uVar1 = lua_absindex();
  lua_rawgeti(param_1,uVar1,0);
  lua_rawseti(param_1,uVar1,param_3);
  lua_pushinteger(param_1,param_3);
  lua_rawseti(param_1,uVar1,0);
  return;
}


