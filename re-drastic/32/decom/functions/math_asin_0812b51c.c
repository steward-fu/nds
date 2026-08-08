/*
 * Ghidra decompilation
 *
 * Function : math_asin
 * Address  : 0812b51c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_asin(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = asinf(__x);
  lua_pushnumber(L,n);
  return 1;
}


