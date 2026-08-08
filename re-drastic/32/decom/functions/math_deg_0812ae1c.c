/*
 * Ghidra decompilation
 *
 * Function : math_deg
 * Address  : 0812ae1c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_deg(lua_State *L)

{
  lua_Number lVar1;
  
  lVar1 = luaL_checknumber(L,1);
  lua_pushnumber(L,lVar1 * 57.29578);
  return 1;
}


