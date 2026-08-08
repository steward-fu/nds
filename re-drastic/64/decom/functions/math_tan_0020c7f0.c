/*
 * Ghidra decompilation
 *
 * Function : math_tan
 * Address  : 0020c7f0
 * Program  : drastic64
 */


undefined8 math_tan(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  tanf(__x);
  lua_pushnumber(param_1);
  return 1;
}


