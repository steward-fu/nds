/*
 * Ghidra decompilation
 *
 * Function : gmatch
 * Address  : 0020da40
 * Program  : drastic64
 */


undefined8 gmatch(undefined8 param_1)

{
  luaL_checklstring(param_1,1,0);
  luaL_checklstring(param_1,2,0);
  lua_settop(param_1,2);
  lua_pushinteger(param_1,0);
  lua_pushcclosure(param_1,gmatch_aux,3);
  return 1;
}


