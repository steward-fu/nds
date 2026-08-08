/*
 * Ghidra decompilation
 *
 * Function : math_acos
 * Address  : 0812b54c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_acos(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = acosf(__x);
  lua_pushnumber(L,n);
  return 1;
}


