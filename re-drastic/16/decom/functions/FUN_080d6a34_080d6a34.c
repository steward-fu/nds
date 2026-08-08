/*
 * Ghidra decompilation
 *
 * Function : FUN_080d6a34
 * Address  : 080d6a34
 * Program  : drastic16
 */


void FUN_080d6a34(int param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_r1;
  undefined4 extraout_r1_00;
  
  __aeabi_uidivmod(*(int *)(param_1 + 0x188) + 1,0x20);
  if (extraout_r1 == *(int *)(param_1 + 0x18c)) {
    FUN_080d6afc(param_1);
  }
  *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x188) + 0x11) * 8) = param_2;
  *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x188) + 0x11) * 8 + 4) = param_3;
  __aeabi_uidivmod(*(int *)(param_1 + 0x188) + 1,0x20);
  *(undefined4 *)(param_1 + 0x188) = extraout_r1_00;
  return;
}


