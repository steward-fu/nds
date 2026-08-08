/*
 * Ghidra decompilation
 *
 * Function : menu_update_username
 * Address  : 0017d5f0
 * Program  : drastic64
 */


void menu_update_username(long param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = (uint)*(byte *)(param_1 + 0x58);
  puVar1[1] = (uint)*(byte *)(param_1 + 0x59);
  puVar1[2] = (uint)*(byte *)(param_1 + 0x5a);
  puVar1[3] = (uint)*(byte *)(param_1 + 0x5b);
  puVar1[4] = (uint)*(byte *)(param_1 + 0x5c);
  puVar1[5] = (uint)*(byte *)(param_1 + 0x5d);
  puVar1[6] = (uint)*(byte *)(param_1 + 0x5e);
  puVar1[7] = (uint)*(byte *)(param_1 + 0x5f);
  puVar1[8] = (uint)*(byte *)(param_1 + 0x60);
  puVar1[9] = (uint)*(byte *)(param_1 + 0x61);
  puVar1[10] = (uint)*(byte *)(param_1 + 0x62);
  return;
}


