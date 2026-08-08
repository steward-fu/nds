/*
 * Ghidra decompilation
 *
 * Function : math_sinh
 * Address  : 0020c770
 * Program  : drastic64
 */


undefined8 math_sinh(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  sinhf(__x);
  lua_pushnumber(param_1);
  return 1;
}


