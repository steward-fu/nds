/*
 * Ghidra decompilation
 *
 * Function : math_randomseed
 * Address  : 0812b0c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int math_randomseed(lua_State *L)

{
  lua_Number lVar1;
  
  lVar1 = luaL_checknumber(L,1);
  srandom((int)lVar1);
  rand();
  return 0;
}


