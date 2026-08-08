/*
 * Ghidra decompilation
 *
 * Function : FUN_0020905c
 * Address  : 0020905c
 * Program  : drastic64
 */


undefined8 FUN_0020905c(undefined8 param_1)

{
  luaL_checktype(param_1,1,5);
  luaL_checkany(param_1,2);
  lua_settop(param_1,2);
  lua_rawget(param_1,1);
  return 1;
}


