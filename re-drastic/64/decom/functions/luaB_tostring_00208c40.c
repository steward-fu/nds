/*
 * Ghidra decompilation
 *
 * Function : luaB_tostring
 * Address  : 00208c40
 * Program  : drastic64
 */


undefined8 luaB_tostring(undefined8 param_1)

{
  luaL_checkany(param_1,1);
  luaL_tolstring(param_1,1,0);
  return 1;
}


