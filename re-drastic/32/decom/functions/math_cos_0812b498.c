/*
 * Ghidra decompilation
 *
 * Function : math_cos
 * Address  : 0812b498
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_cos(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = cosf(__x);
  lua_pushnumber(L,n);
  return 1;
}


