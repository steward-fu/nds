/*
 * Ghidra decompilation
 *
 * Function : arm64_store_memory32_arm9
 * Address  : 0018d610
 * Program  : drastic64
 */


ulong arm64_store_memory32_arm9(ulong param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar8;
  long in_x9;
  undefined8 uVar9;
  undefined4 in_w12;
  int iVar10;
  undefined4 in_w13;
  undefined4 uVar11;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 uVar12;
  undefined4 in_w16;
  undefined4 uVar13;
  undefined4 in_w17;
  undefined4 uVar14;
  undefined4 in_w18;
  undefined4 uVar15;
  long unaff_x28;
  undefined8 unaff_x30;
  undefined8 uVar16;
  ulong uVar7;
  
  uVar4 = (uint)param_1;
  uVar6 = uVar4 & 0xfffffffc;
  uVar7 = (ulong)uVar6;
  uVar8 = *(ulong *)(in_x9 + (param_1 >> 0xb & 0x1fffff) * 8);
  lVar1 = uVar8 * 4;
  if ((uVar8 >> 0x3e & 1) == 0) {
    *(int *)(lVar1 + uVar7) = param_2;
    return uVar7;
  }
  if (uVar4 >> 0x18 != 4) {
    if ((long)uVar8 < 0) {
      if (param_2 == *(int *)(lVar1 + uVar7)) {
        return uVar7;
      }
      *(int *)(lVar1 + (ulong)uVar6) = param_2;
      *(uint *)(unaff_x28 + 0x2334) = uVar6;
      *(undefined4 *)(in_x9 + -0xe0) = in_w12;
      *(undefined4 *)(in_x9 + -0xdc) = in_w13;
      *(undefined4 *)(in_x9 + -0xd8) = in_w14;
      *(undefined4 *)(in_x9 + -0xd4) = in_w15;
      *(undefined4 *)(in_x9 + -0xd0) = in_w16;
      *(undefined4 *)(in_x9 + -0xcc) = in_w17;
      *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
      *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
      uVar9 = nzcv;
      *(int *)(unaff_x28 + 0x2354) = (int)uVar9;
      uVar7 = cpu_block_check_allocation32();
      if ((int)uVar7 != 0) {
        uVar5 = cpu_translate_get_pc
                          (*(undefined8 *)(unaff_x28 + 0x2368),*(undefined8 *)(unaff_x28 + 0x2360));
        *(undefined4 *)(unaff_x28 + 0x23bc) = uVar5;
        cpu_block_flush();
        UNRECOVERED_JUMPTABLE = (code *)cpu_block_lookup_base();
        nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
                    /* WARNING: Could not recover jumptable at 0x0018d818. Too many branches */
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
      uVar9 = nzcv;
      *(int *)(unaff_x28 + 0x2354) = (int)uVar9;
      uVar7 = extended_store32();
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
  uVar9 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar9;
  uVar6 = (uVar4 & 0xfffffc) - 0x400;
  if (uVar6 < 0x1fd) {
    if ((int)uVar6 < 0x40) {
      uVar7 = queue_geometry_command_packed(*(undefined8 *)(unaff_x28 + 0x2268),param_2);
      nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
      return uVar7;
    }
    queue_geometry_command(*(undefined8 *)(unaff_x28 + 0x2268),(uVar4 & 0xfffffc) >> 2);
    uVar9 = *(undefined8 *)(unaff_x28 + 0x2360);
    iVar10 = *(int *)(unaff_x28 + 0x22f0);
    uVar11 = *(undefined4 *)(unaff_x28 + 0x22f4);
    uVar5 = *(undefined4 *)(unaff_x28 + 0x22f8);
    uVar12 = *(undefined4 *)(unaff_x28 + 0x22fc);
    uVar13 = *(undefined4 *)(unaff_x28 + 0x2300);
    uVar14 = *(undefined4 *)(unaff_x28 + 0x2304);
    uVar15 = *(undefined4 *)(unaff_x28 + 0x2308);
    uVar16 = *(undefined8 *)(unaff_x28 + 0x2368);
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    uVar6 = *(uint *)(unaff_x28 + 0x22a8);
    if (uVar6 == 0) {
      return (ulong)uVar6;
    }
  }
  else {
    *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
    store_io_register_arm9_32(*(undefined8 *)(unaff_x28 + 0x2260));
    uVar9 = *(undefined8 *)(unaff_x28 + 0x2360);
    iVar10 = *(int *)(unaff_x28 + 0x22f0);
    uVar11 = *(undefined4 *)(unaff_x28 + 0x22f4);
    uVar5 = *(undefined4 *)(unaff_x28 + 0x22f8);
    uVar12 = *(undefined4 *)(unaff_x28 + 0x22fc);
    uVar13 = *(undefined4 *)(unaff_x28 + 0x2300);
    uVar14 = *(undefined4 *)(unaff_x28 + 0x2304);
    uVar15 = *(undefined4 *)(unaff_x28 + 0x2308);
    uVar16 = *(undefined8 *)(unaff_x28 + 0x2368);
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    uVar6 = *(uint *)(unaff_x28 + 0x22a8);
    if (uVar6 == 0) {
      return (ulong)uVar6;
    }
  }
  *(undefined4 *)(unaff_x28 + 0x22a8) = 0;
  *(int *)(unaff_x28 + 0x22f0) = iVar10;
  *(undefined4 *)(unaff_x28 + 0x22f4) = uVar11;
  *(undefined4 *)(unaff_x28 + 0x22f8) = uVar5;
  *(undefined4 *)(unaff_x28 + 0x22fc) = uVar12;
  *(undefined4 *)(unaff_x28 + 0x2300) = uVar13;
  *(undefined4 *)(unaff_x28 + 0x2304) = uVar14;
  *(undefined4 *)(unaff_x28 + 0x2308) = uVar15;
  *(undefined8 *)(unaff_x28 + 0x2368) = uVar16;
  uVar3 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar3;
  if ((uVar6 >> 4 & 1) != 0) {
    uVar9 = cpu_translate_get_pc(uVar16,uVar9);
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    uVar7 = block_halt(uVar9,(ulong)*(uint *)(unaff_x28 + 0x2354));
    return uVar7;
  }
  if (((uVar6 >> 2 & 1) != 0) && (-1 < iVar10)) {
    iVar2 = *(int *)(*(long *)(unaff_x28 + 0x2258) + 0x10);
    *(undefined4 *)(unaff_x28 + 0x22f0) = 0;
    *(int *)(*(long *)(unaff_x28 + 0x2258) + 0x10) = iVar2 - iVar10;
  }
  switch(uVar6 & 3) {
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


