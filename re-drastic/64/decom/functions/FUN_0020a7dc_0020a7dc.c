/*
 * Ghidra decompilation
 *
 * Function : FUN_0020a7dc
 * Address  : 0020a7dc
 * Program  : drastic64
 */


undefined8 FUN_0020a7dc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = luaL_checkudata(param_1,1,"FILE*");
  *(code **)(lVar1 + 8) = io_noclose;
  lua_pushnil(param_1);
  lua_pushlstring(param_1,"cannot close standard file",0x1a);
  return 2;
}


