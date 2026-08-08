/*
 * Ghidra decompilation
 *
 * Function : FUN_080b6608
 * Address  : 080b6608
 * Program  : drastic16
 */


void FUN_080b6608(int param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x2c) = param_2;
  }
  if (param_3 != 0) {
    *(int *)(param_1 + 0x30) = param_3;
  }
  *(undefined4 *)(param_1 + 0x2050) = 0xffffffff;
  return;
}


