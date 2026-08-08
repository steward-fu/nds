/*
 * Ghidra decompilation
 *
 * Function : lua_get_buttons
 * Address  : 00189160
 * Program  : drastic64
 */


undefined8 lua_get_buttons(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(DAT_004ec3e0 + 0x80010) & 0x20fff;
  uVar2 = uVar1 | 0x80000000;
  if (*(char *)(DAT_004ec3e0 + 0x8001c) == '\0') {
    uVar2 = uVar1;
  }
  lua_pushinteger(param_1,uVar2);
  return 1;
}


