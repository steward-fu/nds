/*
 * Ghidra decompilation
 *
 * Function : lua_platform_fsetter_return
 * Address  : 00189e20
 * Program  : drastic64
 */


undefined8 lua_platform_fsetter_return(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = luaL_checknumber(param_1,1);
  *param_2 = uVar1;
  return 0;
}


