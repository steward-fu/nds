/*
 * Ghidra decompilation
 *
 * Function : ipairsaux
 * Address  : 00209440
 * Program  : drastic64
 */


char ipairsaux(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = luaL_checkinteger(param_1,2);
  lua_pushinteger(param_1,iVar1 + 1);
  iVar1 = lua_geti(param_1,1,iVar1 + 1);
  return (iVar1 != 0) + '\x01';
}


