/*
 * Ghidra decompilation
 *
 * Function : math_log10
 * Address  : 0020c5d0
 * Program  : drastic64
 */


undefined8 math_log10(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  log10f(__x);
  lua_pushnumber(param_1);
  return 1;
}


