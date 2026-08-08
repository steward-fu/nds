/*
 * Ghidra decompilation
 *
 * Function : FUN_080bdf18
 * Address  : 080bdf18
 * Program  : drastic16
 */


void FUN_080bdf18(int param_1)

{
  *(uint *)(param_1 + 0xf0) = param_1 + (-param_1 & 0x3fU);
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf0) + 0x80;
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf4) + 0x20;
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xf8) + 8;
  return;
}


