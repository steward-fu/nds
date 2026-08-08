/*
 * Ghidra decompilation
 *
 * Function : block_indirect_branch
 * Address  : 0018cb3c
 * Program  : drastic64
 */


void block_indirect_branch(uint param_1)

{
  undefined8 uVar1;
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
  undefined auVar2 [16];
  
  if (*(uint *)(unaff_x28 + (ulong)((param_1 & 0xffc) + 0x80)) == param_1) {
                    /* WARNING: Could not recover jumptable at 0x0018cb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(in_x11 + (ulong)*(uint *)(unaff_x28 + (ulong)((param_1 & 0xffc) + 0x1080))))();
    return;
  }
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  uVar1 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar1;
  auVar2 = cpu_block_lookup_base();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
                    /* WARNING: Could not recover jumptable at 0x0018cba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*auVar2._0_8_)(auVar2._0_8_,auVar2._8_8_,(ulong)*(uint *)(unaff_x28 + 0x2354));
  return;
}


