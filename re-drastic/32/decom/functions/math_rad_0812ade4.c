/*
 * Ghidra decompilation
 *
 * Function : math_rad
 * Address  : 0812ade4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_rad(lua_State *L)

{
  lua_Number lVar1;
  
  lVar1 = luaL_checknumber(L,1);
  lua_pushnumber(L,lVar1 * 0.01745329);
  return 1;
}


