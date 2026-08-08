/*
 * Ghidra decompilation
 *
 * Function : math_type
 * Address  : 0020ce60
 * Program  : drastic64
 */


undefined8 math_type(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 != 3) {
    luaL_checkany();
    lua_pushnil(param_1);
    return 1;
  }
  iVar1 = lua_isinteger(param_1,1);
  if (iVar1 != 0) {
    lua_pushlstring(param_1,"integer",7);
    return 1;
  }
  lua_pushlstring(param_1,"float",5);
  return 1;
}


