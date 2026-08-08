/*
 * Ghidra decompilation
 *
 * Function : math_ldexp
 * Address  : 0020c610
 * Program  : drastic64
 */


undefined8 math_ldexp(undefined8 param_1)

{
  int __exponent;
  float __x;
  
  __x = (float)luaL_checknumber(param_1,1);
  __exponent = luaL_checkinteger(param_1,2);
  ldexpf(__x,__exponent);
  lua_pushnumber(param_1);
  return 1;
}


