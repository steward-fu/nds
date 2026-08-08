/*
 * Ghidra decompilation
 *
 * Function : math_ldexp
 * Address  : 0812ae84
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_ldexp(lua_State *L)

{
  lua_Integer __exponent;
  int ep;
  lua_Number __x;
  lua_Number x;
  float n;
  
  __x = luaL_checknumber(L,1);
  __exponent = luaL_checkinteger(L,2);
  n = ldexpf(__x,__exponent);
  lua_pushnumber(L,n);
  return 1;
}


