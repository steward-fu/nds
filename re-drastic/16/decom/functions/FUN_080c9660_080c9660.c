/*
 * Ghidra decompilation
 *
 * Function : FUN_080c9660
 * Address  : 080c9660
 * Program  : drastic16
 */


void FUN_080c9660(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_1 + 100) = uVar1 + 1;
  uVar1 = uVar1 & 3;
  *(undefined4 *)(param_1 + (uVar1 + 0x14) * 4 + 4) = param_3;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + (uVar1 + 0x14) * 4 + 4);
  *(uint *)(param_1 + 0x68) = param_2;
  uVar1 = *(uint *)(param_1 + 0x4c40);
  *(uint *)(param_1 + 0x4c40) = uVar1 - param_2;
  *(uint *)(param_1 + 0x4c44) = *(int *)(param_1 + 0x4c44) - (uint)(uVar1 < param_2);
  FUN_080d4be0(param_1,param_2,param_3);
  return;
}


