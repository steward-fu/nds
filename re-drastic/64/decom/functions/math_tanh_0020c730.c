/*
 * Ghidra decompilation
 *
 * Function : math_tanh
 * Address  : 0020c730
 * Program  : drastic64
 */


undefined8 math_tanh(undefined8 param_1)

{
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  tanhf(__x);
  lua_pushnumber(param_1);
  return 1;
}


