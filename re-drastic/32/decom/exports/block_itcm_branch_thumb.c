/*
 * Ghidra decompilation
 *
 * Function : block_itcm_branch_thumb
 * Address  : 080aae5c
 * Program  : drastic
 */


void block_itcm_branch_thumb(u32 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int unaff_r11;
  undefined4 in_r12;
  undefined4 uVar1;
  uint uVar2;
  bool in_OV;
  
  uVar2 = (param_1 << 0x11) >> 0x12;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(unaff_r11 + -0x68) + uVar2 * 4);
                    /* WARNING: Could not recover jumptable at 0x080aae6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
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
    UNRECOVERED_JUMPTABLE_00 =
         (code *)cpu_block_lookup_base((cpu_struct *)(unaff_r11 + -0x2380),param_1);
                    /* WARNING: Could not recover jumptable at 0x080aaebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}


