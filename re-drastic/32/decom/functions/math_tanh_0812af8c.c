/*
 * Ghidra decompilation
 *
 * Function : math_tanh
 * Address  : 0812af8c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_tanh(lua_State *L)

{
  lua_Number __x;
  float n;
  
  __x = luaL_checknumber(L,1);
  n = tanhf(__x);
  lua_pushnumber(L,n);
  return 1;
}


