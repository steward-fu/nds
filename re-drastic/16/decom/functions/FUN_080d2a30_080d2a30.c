/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2a30
 * Address  : 080d2a30
 * Program  : drastic16
 */


void FUN_080d2a30(int param_1,undefined4 *param_2,int param_3)

{
  *param_2 = *(undefined4 *)(param_1 + (param_3 + 0x2e) * 4);
  *(undefined4 **)(param_1 + (param_3 + 0x2e) * 4) = param_2;
  return;
}


