/*
 * Ghidra decompilation
 *
 * Function : math_cos
 * Address  : 0020cd40
 * Program  : drastic64
 */


undefined8 math_cos(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  cosf(__x);
  lua_pushnumber(param_1);
  return 1;
}


