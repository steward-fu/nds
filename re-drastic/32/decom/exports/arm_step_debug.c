/*
 * Ghidra decompilation
 *
 * Function : arm_step_debug
 * Address  : 080af0e4
 * Program  : drastic
 */


void arm_step_debug(u32 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  *(undefined4 *)(unaff_r11 + -0x13c) = param_2;
  *(undefined4 *)(unaff_r11 + -0x138) = param_3;
  *(uint *)(unaff_r11 + -0xc4) =
       (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  *(undefined4 *)(unaff_r11 + -0x134) = param_4;
  *(undefined4 *)(unaff_r11 + -0x130) = unaff_r4;
  *(undefined4 *)(unaff_r11 + -300) = unaff_r5;
  *(undefined4 *)(unaff_r11 + -0x128) = unaff_r6;
  *(undefined4 *)(unaff_r11 + -0x124) = unaff_r7;
  *(undefined4 *)(unaff_r11 + -0x120) = unaff_r8;
  *(undefined4 *)(unaff_r11 + -0x11c) = unaff_r9;
  *(undefined4 *)(unaff_r11 + -0x118) = unaff_r10;
  *(undefined4 *)(unaff_r11 + -0x110) = in_r12;
  *(BADSPACEBASE **)(unaff_r11 + -0x10c) = register0x00000054;
  *(undefined4 *)(unaff_r11 + -200) = in_lr;
  step_debug_arm_metadata(param_1,(cpu_struct *)(unaff_r11 + -0x2380));
  return;
}


