/*
 * Ghidra decompilation
 *
 * Function : math_tan
 * Address  : 0812b01c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_tan(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = tanf(__x);
  lua_pushnumber(L,n);
  return 1;
}


