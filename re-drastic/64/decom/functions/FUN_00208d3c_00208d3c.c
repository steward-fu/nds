/*
 * Ghidra decompilation
 *
 * Function : FUN_00208d3c
 * Address  : 00208d3c
 * Program  : drastic64
 */


char FUN_00208d3c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = luaL_checkinteger(param_1,2);
  luaL_checktype(param_1,1,5);
  lua_pushinteger(param_1,iVar1 + 1);
  iVar1 = lua_rawgeti(param_1,1,iVar1 + 1);
  return (iVar1 != 0) + '\x01';
}


