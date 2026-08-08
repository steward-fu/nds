/*
 * Ghidra decompilation
 *
 * Function : luaB_rawget
 * Address  : 00209060
 * Program  : drastic64
 */


undefined8 luaB_rawget(undefined8 param_1)

{
  luaL_checktype(param_1,1,5);
  luaL_checkany(param_1,2);
  lua_settop(param_1,2);
  lua_rawget(param_1,1);
  return 1;
}


