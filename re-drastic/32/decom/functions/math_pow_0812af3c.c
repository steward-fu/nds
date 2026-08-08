/*
 * Ghidra decompilation
 *
 * Function : math_pow
 * Address  : 0812af3c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_pow(lua_State *L)

{
  lua_Number __x;
  lua_Number x;
  lua_Number __y;
  lua_Number y;
  float n;
  
  __x = luaL_checknumber(L,1);
  __y = luaL_checknumber(L,2);
  n = powf(__x,__y);
  lua_pushnumber(L,n);
  return 1;
}


