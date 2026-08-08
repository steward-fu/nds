/*
 * Ghidra decompilation
 *
 * Function : iter_codes
 * Address  : 00212be0
 * Program  : drastic64
 */


undefined8 iter_codes(undefined8 param_1)

{
  luaL_checklstring(param_1,1,0);
  lua_pushcclosure(param_1,iter_aux,0);
  lua_pushvalue(param_1,1);
  lua_pushinteger(param_1,0);
  return 3;
}


