/*
 * Ghidra decompilation
 *
 * Function : b_not
 * Address  : 0020a0a0
 * Program  : drastic64
 */


undefined8 b_not(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = luaL_checkinteger(param_1,1);
  lua_pushinteger(param_1,~uVar1);
  return 1;
}


