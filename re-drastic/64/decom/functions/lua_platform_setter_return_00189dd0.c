/*
 * Ghidra decompilation
 *
 * Function : lua_platform_setter_return
 * Address  : 00189dd0
 * Program  : drastic64
 */


undefined8 lua_platform_setter_return(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = luaL_checkinteger(param_1,1);
  *param_2 = uVar1;
  return 0;
}


