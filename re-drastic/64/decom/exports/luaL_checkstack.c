/*
 * Ghidra decompilation
 *
 * Function : luaL_checkstack
 * Address  : 00207220
 * Program  : drastic64
 */


void luaL_checkstack(undefined8 param_1,int param_2,long param_3)

{
  int iVar1;
  
  iVar1 = lua_checkstack(param_1,param_2 + 0x14);
  if (iVar1 != 0) {
    return;
  }
  if (param_3 != 0) {
    luaL_error(param_1,"stack overflow (%s)",param_3);
    return;
  }
  luaL_error(param_1,"stack overflow");
  return;
}


