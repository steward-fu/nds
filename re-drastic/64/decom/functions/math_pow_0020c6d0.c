/*
 * Ghidra decompilation
 *
 * Function : math_pow
 * Address  : 0020c6d0
 * Program  : drastic64
 */


undefined8 math_pow(undefined8 param_1)

{
  float __x;
  float __y;
  
  __x = (float)luaL_checknumber(param_1,1);
  __y = (float)luaL_checknumber(param_1,2);
  powf(__x,__y);
  lua_pushnumber(param_1);
  return 1;
}


