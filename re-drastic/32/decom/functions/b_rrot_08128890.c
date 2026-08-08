/*
 * Ghidra decompilation
 *
 * Function : b_rrot
 * Address  : 08128890
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int b_rrot(lua_State *L)

{
  uint uVar1;
  lua_Integer lVar2;
  uint uVar3;
  
  lVar2 = luaL_checkinteger(L,2);
  uVar3 = luaL_checkinteger(L,1);
  uVar1 = 0x20 - (-lVar2 & 0x1fU) & 0x1f;
  lua_pushinteger(L,uVar3 >> uVar1 | uVar3 << 0x20 - uVar1);
  return 1;
}


