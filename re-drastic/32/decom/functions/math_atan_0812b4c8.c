/*
 * Ghidra decompilation
 *
 * Function : math_atan
 * Address  : 0812b4c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_atan(lua_State *L)

{
  lua_Number __y;
  lua_Number y;
  lua_Number __x;
  lua_Number x;
  float n;
  
  __y = luaL_checknumber(L,1);
  __x = luaL_optnumber(L,2,1.0);
  n = atan2f(__y,__x);
  lua_pushnumber(L,n);
  return 1;
}


