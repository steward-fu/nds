/*
 * Ghidra decompilation
 *
 * Function : math_sinh
 * Address  : 0812afbc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_sinh(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = sinhf(__x);
  lua_pushnumber(L,n);
  return 1;
}


