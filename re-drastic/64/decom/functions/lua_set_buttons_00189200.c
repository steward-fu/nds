/*
 * Ghidra decompilation
 *
 * Function : lua_set_buttons
 * Address  : 00189200
 * Program  : drastic64
 */


undefined8 lua_set_buttons(undefined8 param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = luaL_checkinteger(param_1,1);
  lVar2 = DAT_004ec3e0;
  puVar1 = (uint *)(DAT_004ec3e0 + 0x80010);
  *(byte *)(DAT_004ec3e0 + 0x8001c) = (byte)(uVar3 >> 0x1f);
  *(uint *)(lVar2 + 0x80010) = *puVar1 & 0xfffdf000 | uVar3 & 0x20fff;
  return 0;
}


