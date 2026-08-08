/*
 * Ghidra decompilation
 *
 * Function : b_lrot
 * Address  : 08128be4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_lrot(lua_State *L)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = luaL_checkinteger(L,2);
  uVar2 = luaL_checkinteger(L,1);
  uVar1 = 0x20 - (uVar1 & 0x1f) & 0x1f;
  lua_pushinteger(L,uVar2 >> uVar1 | uVar2 << 0x20 - uVar1);
  return 1;
}


