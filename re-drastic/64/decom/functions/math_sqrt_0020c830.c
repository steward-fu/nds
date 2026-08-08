/*
 * Ghidra decompilation
 *
 * Function : math_sqrt
 * Address  : 0020c830
 * Program  : drastic64
 */


undefined8 math_sqrt(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  if (__x < 0.0) {
    sqrtf(__x);
  }
  lua_pushnumber(SQRT(__x),param_1);
  return 1;
}


