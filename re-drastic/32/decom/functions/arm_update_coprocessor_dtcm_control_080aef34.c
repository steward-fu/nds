/*
 * Ghidra decompilation
 *
 * Function : arm_update_coprocessor_dtcm_control
 * Address  : 080aef34
 * Program  : drastic
 */


void arm_update_coprocessor_dtcm_control
               (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  coprocessor_struct *coprocessor;
  u32 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 uVar2;
  undefined4 in_lr;
  bool in_OV;
  
  *(undefined4 *)(unaff_r11 + -0x140) = param_3;
  *(undefined4 *)(unaff_r11 + -0x13c) = param_4;
  *(undefined4 *)(unaff_r11 + -0x138) = in_r12;
  if (in_OV) {
    uVar2 = 0x10000000;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(unaff_r11 + -0xc4) = uVar2;
  coprocessor = *(coprocessor_struct **)(unaff_r11 + -0x7c);
  coprocessor->dtcm_control = param_2 & 0xfffff03e;
  *(undefined4 *)(unaff_r11 + -200) = in_lr;
  *(BADSPACEBASE **)(unaff_r11 + -0xd0) = register0x00000054;
  uVar1 = update_coprocessor_dtcm_control(coprocessor);
  uVar2 = *(undefined4 *)(unaff_r11 + -200);
  if (uVar1 != 0) {
    *(undefined4 *)(unaff_r11 + -200) = uVar2;
    *(undefined4 *)(unaff_r11 + -0xd0) = *(undefined4 *)(unaff_r11 + -0xd0);
    uVar2 = cpu_translate_get_pc(uVar2);
    *(undefined4 *)(unaff_r11 + -0x5c) = uVar2;
    *(undefined4 *)(unaff_r11 + -200) = *(undefined4 *)(unaff_r11 + -200);
    *(undefined4 *)(unaff_r11 + -0xd0) = *(undefined4 *)(unaff_r11 + -0xd0);
    cpu_block_flush((cpu_struct *)(unaff_r11 + -0x2380),0xffffffff);
    *(undefined4 *)(unaff_r11 + -200) = *(undefined4 *)(unaff_r11 + -200);
    *(undefined4 *)(unaff_r11 + -0xd0) = *(undefined4 *)(unaff_r11 + -0xd0);
    UNRECOVERED_JUMPTABLE =
         (code *)cpu_block_lookup_base
                           ((cpu_struct *)(unaff_r11 + -0x2380),*(u32 *)(unaff_r11 + -0x5c));
                    /* WARNING: Could not recover jumptable at 0x080af008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


