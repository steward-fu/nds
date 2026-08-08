/*
 * Ghidra decompilation
 *
 * Function : math_ult
 * Address  : 0020ccb0
 * Program  : drastic64
 */


undefined8 math_ult(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = luaL_checkinteger(param_1,1);
  uVar2 = luaL_checkinteger(param_1,2);
  lua_pushboolean(param_1,uVar1 < uVar2);
  return 1;
}


