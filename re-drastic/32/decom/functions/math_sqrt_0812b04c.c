/*
 * Ghidra decompilation
 *
 * Function : math_sqrt
 * Address  : 0812b04c
 * Program  : drastic
 */


/* WARNING: Removing unreachable block (ram,0x0812b08c) */
/* WARNING: Unknown calling convention */

int math_sqrt(lua_State *L)

{
  lua_Number lVar1;
  
  lVar1 = luaL_checknumber(L,1);
  lua_pushnumber(L,SQRT(lVar1));
  return 1;
}


