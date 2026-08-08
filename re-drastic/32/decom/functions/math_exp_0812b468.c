/*
 * Ghidra decompilation
 *
 * Function : math_exp
 * Address  : 0812b468
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_exp(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = expf(__x);
  lua_pushnumber(L,n);
  return 1;
}


