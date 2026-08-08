/*
 * Ghidra decompilation
 *
 * Function : FUN_0805d7f8
 * Address  : 0805d7f8
 * Program  : drastic16
 */


void FUN_0805d7f8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x40c) + *(int *)(param_1 + 0x404)) = param_2;
  *(undefined4 *)(param_1 + 0x414) = 0x3c;
  *(uint *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 4U & *(uint *)(param_1 + 0x408);
  return;
}


