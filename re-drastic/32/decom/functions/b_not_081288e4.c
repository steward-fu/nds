/*
 * Ghidra decompilation
 *
 * Function : b_not
 * Address  : 081288e4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_not(lua_State *L)

{
  uint uVar1;
  
  uVar1 = luaL_checkinteger(L,1);
  lua_pushinteger(L,~uVar1);
  return 1;
}


