/*
 * Ghidra decompilation
 *
 * Function : arm_msr_cpsr_low
 * Address  : 080aebf0
 * Program  : drastic
 */


void arm_msr_cpsr_low(byte param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_OV;
  
  bVar1 = *(byte *)(unaff_r11 + -0x58);
  *(byte *)(unaff_r11 + -0x58) = param_1;
  if (((param_1 ^ bVar1) & 0x1f) == 0) {
    if ((param_1 & 0x80) != 0) {
      return;
    }
    if (in_OV) {
      uVar2 = 0x10000000;
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(unaff_r11 + -0xc4) = uVar2;
    *(undefined4 *)(unaff_r11 + -0x140) = param_3;
  }
  else {
    if (in_OV) {
      uVar2 = 0x10000000;
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(unaff_r11 + -0xc4) = uVar2;
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
    *(undefined4 *)(unaff_r11 + -200) = in_lr;
    *(BADSPACEBASE **)(unaff_r11 + -0xd0) = register0x00000054;
    execute_arm_set_cpu_mode_from_cpsr((cpu_struct *)(unaff_r11 + -0x2380));
    in_lr = *(undefined4 *)(unaff_r11 + -200);
    param_4 = *(undefined4 *)(unaff_r11 + -0x50);
    unaff_r4 = *(undefined4 *)(unaff_r11 + -0x4c);
    unaff_r5 = *(undefined4 *)(unaff_r11 + -0x48);
    unaff_r6 = *(undefined4 *)(unaff_r11 + -0x44);
    unaff_r7 = *(undefined4 *)(unaff_r11 + -0x40);
    unaff_r8 = *(undefined4 *)(unaff_r11 + -0x3c);
    unaff_r9 = *(undefined4 *)(unaff_r11 + -0x24);
    in_r12 = *(undefined4 *)(unaff_r11 + -0x20);
    register0x00000054 = *(BADSPACEBASE **)(unaff_r11 + -0x1c);
    *(undefined4 *)(unaff_r11 + -0x140) = *(undefined4 *)(unaff_r11 + -0x54);
  }
  if (*(int *)(unaff_r11 + -0x280) != 0) {
    if ((*(uint *)(unaff_r11 + -0x58) & 0x80) == 0) {
      *(uint *)(unaff_r11 + -0x58) =
           *(uint *)(unaff_r11 + -0x80) & 0xf0000000 | *(uint *)(unaff_r11 + -0x58) & 0xfffffff;
      *(undefined4 *)(unaff_r11 + -0x54) = *(undefined4 *)(unaff_r11 + -0x140);
      *(undefined4 *)(unaff_r11 + -0x50) = param_4;
      *(undefined4 *)(unaff_r11 + -0x4c) = unaff_r4;
      *(undefined4 *)(unaff_r11 + -0x48) = unaff_r5;
      *(undefined4 *)(unaff_r11 + -0x44) = unaff_r6;
      *(undefined4 *)(unaff_r11 + -0x40) = unaff_r7;
      *(undefined4 *)(unaff_r11 + -0x3c) = unaff_r8;
      *(undefined4 *)(unaff_r11 + -0x24) = unaff_r9;
      *(undefined4 *)(unaff_r11 + -0x20) = in_r12;
      *(BADSPACEBASE **)(unaff_r11 + -0x1c) = register0x00000054;
      *(undefined4 *)(unaff_r11 + -200) = in_lr;
      *(BADSPACEBASE **)(unaff_r11 + -0xd0) = register0x00000054;
      uVar2 = cpu_translate_get_pc(in_lr);
      *(undefined4 *)(unaff_r11 + -0x5c) = uVar2;
      *(undefined4 *)(unaff_r11 + -200) = *(undefined4 *)(unaff_r11 + -200);
      *(undefined4 *)(unaff_r11 + -0xd0) = *(undefined4 *)(unaff_r11 + -0xd0);
      execute_arm_raise_interrupt((cpu_struct *)(unaff_r11 + -0x2380));
                    /* WARNING: Could not recover jumptable at 0x080ac468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_r11 + -100))();
      return;
    }
    return;
  }
  return;
}


