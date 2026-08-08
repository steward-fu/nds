/*
 * Ghidra decompilation
 *
 * Function : luaB_rawlen
 * Address  : 002090b0
 * Program  : drastic64
 */


undefined8 luaB_rawlen(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = lua_type(param_1,1);
  if (1 < iVar1 - 4U) {
    luaL_argerror(param_1,1,"table or string expected");
  }
  uVar2 = lua_rawlen(param_1,1);
  lua_pushinteger(param_1,uVar2);
  return 1;
}


