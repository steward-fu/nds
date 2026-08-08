/*
 * Ghidra decompilation
 *
 * Function : math_log10
 * Address  : 0812ae54
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_log10(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = log10f(__x);
  lua_pushnumber(L,n);
  return 1;
}


