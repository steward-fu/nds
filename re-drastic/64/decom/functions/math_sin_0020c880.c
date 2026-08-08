/*
 * Ghidra decompilation
 *
 * Function : math_sin
 * Address  : 0020c880
 * Program  : drastic64
 */


undefined8 math_sin(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  sinf(__x);
  lua_pushnumber(param_1);
  return 1;
}


