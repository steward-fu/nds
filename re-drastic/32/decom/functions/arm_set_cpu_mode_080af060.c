/*
 * Ghidra decompilation
 *
 * Function : arm_set_cpu_mode
 * Address  : 080af060
 * Program  : drastic
 */


void arm_set_cpu_mode(undefined4 param_1,arm_cpu_mode_enum param_2,undefined4 param_3,
                     undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 uVar1;
  undefined4 in_lr;
  bool in_OV;
  
  *(undefined4 *)(unaff_r11 + -0x54) = param_3;
  *(undefined4 *)(unaff_r11 + -0x50) = param_4;
  *(undefined4 *)(unaff_r11 + -0x4c) = unaff_r4;
  *(undefined4 *)(unaff_r11 + -0x48) = unaff_r5;
  *(undefined4 *)(unaff_r11 + -0x44) = unaff_r6;
  *(undefined4 *)(unaff_r11 + -0x40) = unaff_r7;
  *(undefined4 *)(unaff_r11 + -0x3c) = unaff_r8;
  *(undefined4 *)(unaff_r11 + -0x24) = unaff_r9;
  *(undefined4 *)(unaff_r11 + -0x20) = in_r12;
  *(BADSPACEBASE **)(unaff_r11 + -0x1c) = register0x00000054;
  if (in_OV) {
    uVar1 = 0x10000000;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(unaff_r11 + -0xc4) = uVar1;
  *(undefined4 *)(unaff_r11 + -200) = in_lr;
  *(BADSPACEBASE **)(unaff_r11 + -0xd0) = register0x00000054;
  execute_arm_set_cpu_mode((cpu_struct *)(unaff_r11 + -0x2380),param_2);
  return;
}


