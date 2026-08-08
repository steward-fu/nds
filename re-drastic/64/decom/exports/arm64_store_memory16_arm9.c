/*
 * Ghidra decompilation
 *
 * Function : arm64_store_memory16_arm9
 * Address  : 0018d48c
 * Program  : drastic64
 */


ulong arm64_store_memory16_arm9(ulong param_1,short param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar9;
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
  undefined8 uVar10;
  ulong uVar8;
  
  uVar6 = (uint)param_1;
  uVar2 = uVar6 & 0xfffffffe;
  uVar8 = (ulong)uVar2;
  uVar9 = *(ulong *)(in_x9 + (param_1 >> 0xb & 0x1fffff) * 8);
  lVar1 = uVar9 * 4;
  if ((uVar9 >> 0x3e & 1) == 0) {
    *(short *)(lVar1 + uVar8) = param_2;
    return uVar8;
  }
  if (uVar6 >> 0x18 != 4) {
    if ((long)uVar9 < 0) {
      if (param_2 == *(short *)(lVar1 + uVar8)) {
        return uVar8;
      }
      *(short *)(lVar1 + (ulong)uVar2) = param_2;
      *(uint *)(unaff_x28 + 0x2334) = uVar2;
      *(undefined4 *)(in_x9 + -0xe0) = in_w12;
      *(undefined4 *)(in_x9 + -0xdc) = in_w13;
      *(undefined4 *)(in_x9 + -0xd8) = in_w14;
      *(undefined4 *)(in_x9 + -0xd4) = in_w15;
      *(undefined4 *)(in_x9 + -0xd0) = in_w16;
      *(undefined4 *)(in_x9 + -0xcc) = in_w17;
      *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
      *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
      uVar10 = nzcv;
      *(int *)(unaff_x28 + 0x2354) = (int)uVar10;
      uVar8 = cpu_block_check_allocation16();
      if ((int)uVar8 != 0) {
        uVar7 = cpu_translate_get_pc
                          (*(undefined8 *)(unaff_x28 + 0x2368),*(undefined8 *)(unaff_x28 + 0x2360));
        *(undefined4 *)(unaff_x28 + 0x23bc) = uVar7;
        cpu_block_flush();
        UNRECOVERED_JUMPTABLE = (code *)cpu_block_lookup_base();
        nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
                    /* WARNING: Could not recover jumptable at 0x0018d60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,(ulong)*(uint *)(unaff_x28 + 0x2354))
        ;
        return uVar8;
      }
    }
    else {
      *(undefined4 *)(in_x9 + -0xe0) = in_w12;
      *(undefined4 *)(in_x9 + -0xdc) = in_w13;
      *(undefined4 *)(in_x9 + -0xd8) = in_w14;
      *(undefined4 *)(in_x9 + -0xd4) = in_w15;
      *(undefined4 *)(in_x9 + -0xd0) = in_w16;
      *(undefined4 *)(in_x9 + -0xcc) = in_w17;
      *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
      *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
      uVar10 = nzcv;
      *(int *)(unaff_x28 + 0x2354) = (int)uVar10;
      uVar8 = extended_store16();
    }
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return uVar8;
  }
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar10 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar10;
  *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
  store_io_register_arm9_16(*(undefined8 *)(unaff_x28 + 0x2260),uVar6 & 0xfffffe,param_2);
  iVar3 = *(int *)(unaff_x28 + 0x22f0);
  uVar10 = *(undefined8 *)(unaff_x28 + 0x2368);
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  uVar2 = *(uint *)(unaff_x28 + 0x22a8);
  if (uVar2 == 0) {
    return (ulong)uVar2;
  }
  *(undefined4 *)(unaff_x28 + 0x22a8) = 0;
  *(int *)(unaff_x28 + 0x22f0) = iVar3;
  *(undefined4 *)(unaff_x28 + 0x22f4) = *(undefined4 *)(unaff_x28 + 0x22f4);
  *(undefined4 *)(unaff_x28 + 0x22f8) = *(undefined4 *)(unaff_x28 + 0x22f8);
  *(undefined4 *)(unaff_x28 + 0x22fc) = *(undefined4 *)(unaff_x28 + 0x22fc);
  *(undefined4 *)(unaff_x28 + 0x2300) = *(undefined4 *)(unaff_x28 + 0x2300);
  *(undefined4 *)(unaff_x28 + 0x2304) = *(undefined4 *)(unaff_x28 + 0x2304);
  *(undefined4 *)(unaff_x28 + 0x2308) = *(undefined4 *)(unaff_x28 + 0x2308);
  *(undefined8 *)(unaff_x28 + 0x2368) = uVar10;
  uVar5 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar5;
  if ((uVar2 >> 4 & 1) != 0) {
    uVar10 = cpu_translate_get_pc(uVar10,*(undefined8 *)(unaff_x28 + 0x2360));
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    uVar8 = block_halt(uVar10,(ulong)*(uint *)(unaff_x28 + 0x2354));
    return uVar8;
  }
  if (((uVar2 >> 2 & 1) != 0) && (-1 < iVar3)) {
    iVar4 = *(int *)(*(long *)(unaff_x28 + 0x2258) + 0x10);
    *(undefined4 *)(unaff_x28 + 0x22f0) = 0;
    *(int *)(*(long *)(unaff_x28 + 0x2258) + 0x10) = iVar4 - iVar3;
  }
  switch(uVar2 & 3) {
  case 0:
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return (ulong)*(uint *)(unaff_x28 + 0x2354);
  case 1:
    uVar8 = cpu_alerts_dma_modified_code();
    return uVar8;
  case 2:
    uVar8 = cpu_alerts_check_interrupts();
    return uVar8;
  case 3:
    uVar8 = cpu_alerts_dma_modified_code_and_check_interrupts();
    return uVar8;
  }
}


