/*
 * Ghidra decompilation
 *
 * Function : arm64_update_coprocessor_dtcm_control
 * Address  : 0018f73c
 * Program  : drastic64
 */


ulong arm64_update_coprocessor_dtcm_control(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  long in_x9;
  undefined4 in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 in_w16;
  undefined4 in_w17;
  undefined4 in_w18;
  long unaff_x28;
  undefined8 unaff_x30;
  
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar1 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar1;
  *(uint *)(*(long *)(unaff_x28 + 0x2250) + 0x18) = param_2 & 0xfffff03e;
  iVar3 = update_coprocessor_dtcm_control();
  if (iVar3 == 0) {
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return (ulong)*(uint *)(unaff_x28 + 0x2354);
  }
  uVar2 = cpu_translate_get_pc
                    (*(undefined8 *)(unaff_x28 + 0x2368),*(undefined8 *)(unaff_x28 + 0x2360));
  *(undefined4 *)(unaff_x28 + 0x23bc) = uVar2;
  cpu_block_flush();
  UNRECOVERED_JUMPTABLE = (code *)cpu_block_lookup_base();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
                    /* WARNING: Could not recover jumptable at 0x0018f738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,(ulong)*(uint *)(unaff_x28 + 0x2354));
  return uVar4;
}


