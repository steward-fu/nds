/*
 * Ghidra decompilation
 *
 * Function : luaB_type
 * Address  : 00208bd0
 * Program  : drastic64
 */


undefined8 luaB_type(undefined8 param_1)

{
  int iVar1;
  
  luaL_checkany(param_1,1);
  iVar1 = lua_type(param_1,1);
  lua_pushvalue(param_1,-0xf4629 - iVar1);
  return 1;
}


