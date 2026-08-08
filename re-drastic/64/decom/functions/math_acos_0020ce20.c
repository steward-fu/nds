/*
 * Ghidra decompilation
 *
 * Function : math_acos
 * Address  : 0020ce20
 * Program  : drastic64
 */


undefined8 math_acos(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  acosf(__x);
  lua_pushnumber(param_1);
  return 1;
}


