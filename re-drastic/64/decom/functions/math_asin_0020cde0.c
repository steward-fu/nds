/*
 * Ghidra decompilation
 *
 * Function : math_asin
 * Address  : 0020cde0
 * Program  : drastic64
 */


undefined8 math_asin(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  asinf(__x);
  lua_pushnumber(param_1);
  return 1;
}


