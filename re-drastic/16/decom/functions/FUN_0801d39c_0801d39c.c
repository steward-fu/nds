/*
 * Ghidra decompilation
 *
 * Function : FUN_0801d39c
 * Address  : 0801d39c
 * Program  : drastic16
 */


void FUN_0801d39c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0x200 << ((uint)(*(int *)(param_1 + 0x14) << 0x1a) >> 0x1b);
  if (uVar1 < 0x1000) {
    uVar1 = 0x1000;
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  FUN_0800cbc4(*(undefined4 *)(param_1 + 4));
  return;
}


