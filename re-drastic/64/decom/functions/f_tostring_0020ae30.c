/*
 * Ghidra decompilation
 *
 * Function : f_tostring
 * Address  : 0020ae30
 * Program  : drastic64
 */


undefined8 f_tostring(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)luaL_checkudata(param_1,1,"FILE*");
  if (puVar1[1] != 0) {
    lua_pushfstring(param_1,"file (%p)",*puVar1);
    return 1;
  }
  lua_pushlstring(param_1,"file (closed)",0xd);
  return 1;
}


