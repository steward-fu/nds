/*
 * Ghidra decompilation
 *
 * Function : math_sin
 * Address  : 0812b098
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_sin(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = sinf(__x);
  lua_pushnumber(L,n);
  return 1;
}


