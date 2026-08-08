/*
 * Ghidra decompilation
 *
 * Function : arm_update_coprocessor_itcm_control
 * Address  : 080af00c
 * Program  : drastic
 */


void arm_update_coprocessor_itcm_control
               (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  coprocessor_struct *coprocessor;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 uVar1;
  undefined4 in_lr;
  bool in_OV;
  
  *(undefined4 *)(unaff_r11 + -0x140) = param_3;
  *(undefined4 *)(unaff_r11 + -0x13c) = param_4;
  *(undefined4 *)(unaff_r11 + -0x138) = in_r12;
  if (in_OV) {
    uVar1 = 0x10000000;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(unaff_r11 + -0xc4) = uVar1;
  coprocessor = *(coprocessor_struct **)(unaff_r11 + -0x7c);
  coprocessor->itcm_control = param_2 & 0x3e;
  *(undefined4 *)(unaff_r11 + -200) = in_lr;
  *(BADSPACEBASE **)(unaff_r11 + -0xd0) = register0x00000054;
  update_coprocessor_itcm_control(coprocessor);
  return;
}


