/*
 * Ghidra decompilation
 *
 * Function : b_lrot
 * Address  : 0020a440
 * Program  : drastic64
 */


undefined8 b_lrot(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = luaL_checkinteger(param_1,2);
  uVar2 = luaL_checkinteger(param_1,1);
  lua_pushinteger(param_1,uVar2 >> (-iVar1 & 0x1fU) | uVar2 << 0x20 - (-iVar1 & 0x1fU));
  return 1;
}


