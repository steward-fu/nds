/*
 * Ghidra decompilation
 *
 * Function : luaL_checkany
 * Address  : 002072f0
 * Program  : drastic64
 */


void luaL_checkany(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = lua_type();
  if (iVar1 != -1) {
    return;
  }
  luaL_argerror(param_1,param_2,"value expected");
  return;
}


