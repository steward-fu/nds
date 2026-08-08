/*
 * Ghidra decompilation
 *
 * Function : FUN_0809f9fc
 * Address  : 0809f9fc
 * Program  : drastic16
 */


void FUN_0809f9fc(int param_1)

{
  if (*(uint *)(param_1 + 0x58) < 0x10) {
    *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x58) + 6) * 4) = *(undefined4 *)(param_1 + 0x10);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  }
  return;
}


