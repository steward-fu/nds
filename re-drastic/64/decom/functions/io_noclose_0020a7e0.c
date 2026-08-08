/*
 * Ghidra decompilation
 *
 * Function : io_noclose
 * Address  : 0020a7e0
 * Program  : drastic64
 */


undefined8 io_noclose(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = luaL_checkudata(param_1,1,"FILE*");
  *(code **)(lVar1 + 8) = io_noclose;
  lua_pushnil(param_1);
  lua_pushlstring(param_1,"cannot close standard file",0x1a);
  return 2;
}


