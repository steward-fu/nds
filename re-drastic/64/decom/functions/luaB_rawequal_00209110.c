/*
 * Ghidra decompilation
 *
 * Function : luaB_rawequal
 * Address  : 00209110
 * Program  : drastic64
 */


undefined8 luaB_rawequal(undefined8 param_1)

{
  undefined4 uVar1;
  
  luaL_checkany(param_1,1);
  luaL_checkany(param_1,2);
  uVar1 = lua_rawequal(param_1,1,2);
  lua_pushboolean(param_1,uVar1);
  return 1;
}


