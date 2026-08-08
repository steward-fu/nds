/*
 * Ghidra decompilation
 *
 * Function : arm64_store_memory8_arm7
 * Address  : 0018d81c
 * Program  : drastic64
 */


ulong arm64_store_memory8_arm7(ulong param_1,char param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
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
  undefined8 uVar8;
  
  uVar7 = *(ulong *)(in_x9 + (param_1 >> 0xb & 0x1fffff) * 8);
  lVar1 = uVar7 * 4;
  if ((uVar7 >> 0x3e & 1) == 0) {
    *(char *)(lVar1 + (param_1 & 0xffffffff)) = param_2;
    return param_1;
  }
  if (((uint)(param_1 >> 0x18) & 0xff) != 4) {
    if ((long)uVar7 < 0) {
      if (param_2 == *(char *)(lVar1 + (param_1 & 0xffffffff))) {
        return param_1;
      }
      *(char *)(lVar1 + (param_1 & 0xffffffff)) = param_2;
      *(uint *)(unaff_x28 + 0x2334) = (uint)param_1;
      *(undefined4 *)(in_x9 + -0xe0) = in_w12;
      *(undefined4 *)(in_x9 + -0xdc) = in_w13;
      *(undefined4 *)(in_x9 + -0xd8) = in_w14;
      *(undefined4 *)(in_x9 + -0xd4) = in_w15;
      *(undefined4 *)(in_x9 + -0xd0) = in_w16;
      *(undefined4 *)(in_x9 + -0xcc) = in_w17;
      *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
      *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
      uVar8 = nzcv;
      *(int *)(unaff_x28 + 0x2354) = (int)uVar8;
      uVar7 = cpu_block_check_allocation8();
      if ((int)uVar7 != 0) {
        uVar6 = cpu_translate_get_pc
                          (*(undefined8 *)(unaff_x28 + 0x2368),*(undefined8 *)(unaff_x28 + 0x2360));
        *(undefined4 *)(unaff_x28 + 0x23bc) = uVar6;
        cpu_block_flush();
        UNRECOVERED_JUMPTABLE = (code *)cpu_block_lookup_base();
        nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
                    /* WARNING: Could not recover jumptable at 0x0018d998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,(ulong)*(uint *)(unaff_x28 + 0x2354))
        ;
        return uVar7;
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
      uVar8 = nzcv;
      *(int *)(unaff_x28 + 0x2354) = (int)uVar8;
      uVar7 = extended_store8();
    }
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return uVar7;
  }
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar8 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar8;
  *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
  store_io_register_arm7_8(*(undefined8 *)(unaff_x28 + 0x2260),(uint)param_1 & 0xffffff,param_2);
  iVar2 = *(int *)(unaff_x28 + 0x22f0);
  uVar8 = *(undefined8 *)(unaff_x28 + 0x2368);
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  uVar3 = *(uint *)(unaff_x28 + 0x22a8);
  if (uVar3 == 0) {
    return (ulong)uVar3;
  }
  *(undefined4 *)(unaff_x28 + 0x22a8) = 0;
  *(int *)(unaff_x28 + 0x22f0) = iVar2;
  *(undefined4 *)(unaff_x28 + 0x22f4) = *(undefined4 *)(unaff_x28 + 0x22f4);
  *(undefined4 *)(unaff_x28 + 0x22f8) = *(undefined4 *)(unaff_x28 + 0x22f8);
  *(undefined4 *)(unaff_x28 + 0x22fc) = *(undefined4 *)(unaff_x28 + 0x22fc);
  *(undefined4 *)(unaff_x28 + 0x2300) = *(undefined4 *)(unaff_x28 + 0x2300);
  *(undefined4 *)(unaff_x28 + 0x2304) = *(undefined4 *)(unaff_x28 + 0x2304);
  *(undefined4 *)(unaff_x28 + 0x2308) = *(undefined4 *)(unaff_x28 + 0x2308);
  *(undefined8 *)(unaff_x28 + 0x2368) = uVar8;
  uVar5 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar5;
  if ((uVar3 >> 4 & 1) != 0) {
    uVar8 = cpu_translate_get_pc(uVar8,*(undefined8 *)(unaff_x28 + 0x2360));
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    uVar7 = block_halt(uVar8,(ulong)*(uint *)(unaff_x28 + 0x2354));
    return uVar7;
  }
  if (((uVar3 >> 2 & 1) != 0) && (-1 < iVar2)) {
    iVar4 = *(int *)(*(long *)(unaff_x28 + 0x2258) + 0x10);
    *(undefined4 *)(unaff_x28 + 0x22f0) = 0;
    *(int *)(*(long *)(unaff_x28 + 0x2258) + 0x10) = iVar4 - iVar2;
  }
  switch(uVar3 & 3) {
  case 0:
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return (ulong)*(uint *)(unaff_x28 + 0x2354);
  case 1:
    uVar7 = cpu_alerts_dma_modified_code();
    return uVar7;
  case 2:
    uVar7 = cpu_alerts_check_interrupts();
    return uVar7;
  case 3:
    uVar7 = cpu_alerts_dma_modified_code_and_check_interrupts();
    return uVar7;
  }
}


