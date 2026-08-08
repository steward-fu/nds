/*
 * Ghidra decompilation
 *
 * Function : math_cosh
 * Address  : 0812afec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_cosh(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = coshf(__x);
  lua_pushnumber(L,n);
  return 1;
}


