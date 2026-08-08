/*
 * Ghidra decompilation
 *
 * Function : block_indirect_branch
 * Address  : 080aaec0
 * Program  : drastic
 */


void block_indirect_branch(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 uVar1;
  uint uVar2;
  bool in_OV;
  
  uVar2 = *(uint *)(unaff_r11 + ((param_1 & 0xffc) - 0x2300));
                    /* WARNING: Could not recover jumptable at 0x080aaedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 != param_1) {
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
    *(uint *)(unaff_r11 + -200) = uVar2;
    *(BADSPACEBASE **)(unaff_r11 + -0xd0) = register0x00000054;
    UNRECOVERED_JUMPTABLE =
         (code *)cpu_block_lookup_base((cpu_struct *)(unaff_r11 + -0x2380),param_1);
                    /* WARNING: Could not recover jumptable at 0x080aaf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (**(code **)(unaff_r11 + ((param_1 & 0xffc) - 0x1300)))();
  return;
}


