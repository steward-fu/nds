/*
 * Ghidra decompilation
 *
 * Function : arm64_store_block_extended
 * Address  : 0018e2ac
 * Program  : drastic64
 */


ulong arm64_store_block_extended(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_x9;
  undefined4 in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 in_w16;
  undefined4 in_w17;
  undefined4 in_w18;
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  undefined4 *puVar6;
  int unaff_w21;
  long unaff_x28;
  undefined8 unaff_x30;
  undefined8 uVar7;
  
  *(undefined4 *)(unaff_x28 + 0x2290) = in_w12;
  *(undefined4 *)(unaff_x28 + 0x2334) = unaff_w19;
  *(undefined8 *)(unaff_x28 + 0x2338) = unaff_x20;
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar7 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar7;
  puVar6 = (undefined4 *)(in_x9 + -0x120);
  do {
    extended_store32(unaff_x28 + 0x23d0,param_1,*puVar6);
    unaff_w21 = unaff_w21 + -1;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 4;
  } while (unaff_w21 != 0);
  iVar1 = *(int *)(unaff_x28 + 0x22f0);
  uVar7 = *(undefined8 *)(unaff_x28 + 0x2368);
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
  uVar3 = *(uint *)(unaff_x28 + 0x22a8);
  if (uVar3 == 0) {
    return (ulong)uVar3;
  }
  *(undefined4 *)(unaff_x28 + 0x22a8) = 0;
  *(int *)(unaff_x28 + 0x22f0) = iVar1;
  *(undefined4 *)(unaff_x28 + 0x22f4) = *(undefined4 *)(unaff_x28 + 0x22f4);
  *(undefined4 *)(unaff_x28 + 0x22f8) = *(undefined4 *)(unaff_x28 + 0x22f8);
  *(undefined4 *)(unaff_x28 + 0x22fc) = *(undefined4 *)(unaff_x28 + 0x22fc);
  *(undefined4 *)(unaff_x28 + 0x2300) = *(undefined4 *)(unaff_x28 + 0x2300);
  *(undefined4 *)(unaff_x28 + 0x2304) = *(undefined4 *)(unaff_x28 + 0x2304);
  *(undefined4 *)(unaff_x28 + 0x2308) = *(undefined4 *)(unaff_x28 + 0x2308);
  *(undefined8 *)(unaff_x28 + 0x2368) = uVar7;
  uVar4 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    uVar7 = cpu_translate_get_pc(uVar7,*(undefined8 *)(unaff_x28 + 0x2360));
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    uVar5 = block_halt(uVar7,(ulong)*(uint *)(unaff_x28 + 0x2354));
    return uVar5;
  }
  if (((uVar3 >> 2 & 1) != 0) && (-1 < iVar1)) {
    iVar2 = *(int *)(*(long *)(unaff_x28 + 0x2258) + 0x10);
    *(undefined4 *)(unaff_x28 + 0x22f0) = 0;
    *(int *)(*(long *)(unaff_x28 + 0x2258) + 0x10) = iVar2 - iVar1;
  }
  switch(uVar3 & 3) {
  case 0:
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return (ulong)*(uint *)(unaff_x28 + 0x2354);
  case 1:
    uVar5 = cpu_alerts_dma_modified_code();
    return uVar5;
  case 2:
    uVar5 = cpu_alerts_check_interrupts();
    return uVar5;
  case 3:
    uVar5 = cpu_alerts_dma_modified_code_and_check_interrupts();
    return uVar5;
  }
}


