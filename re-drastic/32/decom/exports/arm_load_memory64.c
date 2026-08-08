/*
 * Ghidra decompilation
 *
 * Function : arm_load_memory64
 * Address  : 080ab434
 * Program  : drastic
 */


void arm_load_memory64(int param_1)

{
  undefined4 uVar1;
  int unaff_r11;
  undefined4 in_lr;
  
  *(undefined4 *)(unaff_r11 + -0xd8) = in_lr;
  *(int *)(unaff_r11 + -0x100) = param_1 + 4;
  uVar1 = arm_load_memory32_unsigned();
  *(undefined4 *)(unaff_r11 + -0xfc) = uVar1;
  arm_load_memory32_unsigned(*(undefined4 *)(unaff_r11 + -0x100));
  return;
}


