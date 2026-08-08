/*
 * Ghidra decompilation
 *
 * Function : io_type
 * Address  : 0020ad90
 * Program  : drastic64
 */


undefined8 io_type(undefined8 param_1)

{
  long lVar1;
  
  luaL_checkany(param_1,1);
  lVar1 = luaL_testudata(param_1,1,"FILE*");
  if (lVar1 == 0) {
    lua_pushnil(param_1);
    return 1;
  }
  if (*(long *)(lVar1 + 8) != 0) {
    lua_pushlstring(param_1,"file",4);
    return 1;
  }
  lua_pushlstring(param_1,"closed file",0xb);
  return 1;
}


