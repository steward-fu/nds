/*
 * Ghidra decompilation
 *
 * Function : rumble_pack_store
 * Address  : 0016f000
 * Program  : drastic64
 */


void rumble_pack_store(long *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 1 & 1;
  if (*(byte *)(param_1 + 1) != uVar1) {
    *(char *)((long)param_1 + 9) = (char)*(undefined4 *)(*param_1 + 0x4b8);
  }
  *(char *)(param_1 + 1) = (char)uVar1;
  return;
}


