/*
 * Ghidra decompilation
 *
 * Function : ipairsaux_raw
 * Address  : 00208d40
 * Program  : drastic64
 */


char ipairsaux_raw(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = luaL_checkinteger(param_1,2);
  luaL_checktype(param_1,1,5);
  lua_pushinteger(param_1,iVar1 + 1);
  iVar1 = lua_rawgeti(param_1,1,iVar1 + 1);
  return (iVar1 != 0) + '\x01';
}


