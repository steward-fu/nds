/*
 * Ghidra decompilation
 *
 * Function : luaB_rawset
 * Address  : 00209000
 * Program  : drastic64
 */


undefined8 luaB_rawset(undefined8 param_1)

{
  luaL_checktype(param_1,1,5);
  luaL_checkany(param_1,2);
  luaL_checkany(param_1,3);
  lua_settop(param_1,3);
  lua_rawset(param_1,1);
  return 1;
}


