/*
 * Ghidra decompilation
 *
 * Function : block_itcm_branch_thumb
 * Address  : 0018cb24
 * Program  : drastic64
 */


void block_itcm_branch_thumb(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long in_x9;
  long in_x11;
  undefined4 in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 in_w16;
  undefined4 in_w17;
  undefined4 in_w18;
  long unaff_x28;
  undefined auVar3 [16];
  
  uVar1 = *(uint *)(*(long *)(unaff_x28 + 0x2278) + (ulong)(param_1 >> 1 & 0x3fff) * 4);
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0018cb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(in_x11 + (ulong)uVar1))();
    return;
  }
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  uVar2 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar2;
  auVar3 = cpu_block_lookup_base();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
                    /* WARNING: Could not recover jumptable at 0x0018cba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*auVar3._0_8_)(auVar3._0_8_,auVar3._8_8_,(ulong)*(uint *)(unaff_x28 + 0x2354));
  return;
}


