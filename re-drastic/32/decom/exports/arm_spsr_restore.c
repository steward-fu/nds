/*
 * Ghidra decompilation
 *
 * Function : arm_spsr_restore
 * Address  : 080aecf4
 * Program  : drastic
 */


void arm_spsr_restore(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  uint uVar2;
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
  bool bVar3;
  
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
  uVar2 = *(uint *)(unaff_r11 + -0x2a0 + *(int *)(unaff_r11 + -0x284) * 4);
  bVar3 = (uVar2 & 0x20) != 0;
  if (bVar3) {
    uVar2 = uVar2 & 0xffffffdf;
  }
  *(uint *)(unaff_r11 + -0x58) = uVar2;
  *(uint *)(unaff_r11 + -0x80) = uVar2;
  if (bVar3) {
    param_1 = param_1 | 1;
  }
  *(uint *)(unaff_r11 + -0x5c) = param_1;
  *(undefined4 *)(unaff_r11 + -200) = in_lr;
  *(BADSPACEBASE **)(unaff_r11 + -0xd0) = register0x00000054;
  execute_arm_set_cpu_mode_from_cpsr((cpu_struct *)(unaff_r11 + -0x2380));
  if ((*(int *)(unaff_r11 + -0x280) != 0) && ((*(uint *)(unaff_r11 + -0x58) & 0x80) == 0)) {
    *(undefined4 *)(unaff_r11 + -200) = *(undefined4 *)(unaff_r11 + -200);
    *(undefined4 *)(unaff_r11 + -0xd0) = *(undefined4 *)(unaff_r11 + -0xd0);
    execute_arm_raise_interrupt((cpu_struct *)(unaff_r11 + -0x2380));
                    /* WARNING: Could not recover jumptable at 0x080aedd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r11 + -100))
              (*(code **)(unaff_r11 + -100),*(undefined4 *)(unaff_r11 + -0xc4),
               *(undefined4 *)(unaff_r11 + -0x54),*(undefined4 *)(unaff_r11 + -0x50));
    return;
  }
  *(undefined4 *)(unaff_r11 + -200) = *(undefined4 *)(unaff_r11 + -200);
  *(undefined4 *)(unaff_r11 + -0xd0) = *(undefined4 *)(unaff_r11 + -0xd0);
  UNRECOVERED_JUMPTABLE =
       (code *)cpu_block_lookup_base
                         ((cpu_struct *)(unaff_r11 + -0x2380),*(u32 *)(unaff_r11 + -0x5c));
                    /* WARNING: Could not recover jumptable at 0x080aee28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (UNRECOVERED_JUMPTABLE,*(undefined4 *)(unaff_r11 + -0xc4),
             *(undefined4 *)(unaff_r11 + -0x54),*(undefined4 *)(unaff_r11 + -0x50));
  return;
}


