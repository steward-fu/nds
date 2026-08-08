/*
 * Ghidra decompilation
 *
 * Function : FUN_0805d7d4
 * Address  : 0805d7d4
 * Program  : drastic16
 */


undefined4 FUN_0805d7d4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x40c) + *(int *)(param_1 + 0x404));
  *(uint *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 4U & *(uint *)(param_1 + 0x408);
  return uVar1;
}


