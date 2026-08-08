/*
 * Ghidra decompilation
 *
 * Function : math_exp
 * Address  : 0020cd00
 * Program  : drastic64
 */


undefined8 math_exp(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  expf(__x);
  lua_pushnumber(param_1);
  return 1;
}


