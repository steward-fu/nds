/*
 * Ghidra decompilation
 *
 * Function : arm64_store_block3
 * Address  : 0018e524
 * Program  : drastic64
 */


void arm64_store_block3(ulong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  long in_x9;
  undefined4 in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  undefined4 in_w16;
  undefined4 in_w17;
  undefined4 in_w18;
  undefined4 unaff_w21;
  long unaff_x28;
  undefined8 unaff_x30;
  
  uVar2 = (uint)param_1 & 0xfffffffc;
  uVar6 = *(ulong *)(in_x9 + (param_1 >> 0xb & 0x1fffff) * 8);
  if ((uVar6 >> 0x3e & 1) == 0) {
    puVar1 = (undefined4 *)(uVar6 * 4 + (ulong)uVar2);
    uVar5 = *(undefined4 *)(in_x9 + -0x11c);
    *puVar1 = *(undefined4 *)(in_x9 + -0x120);
    puVar1[1] = uVar5;
    puVar1[2] = *(undefined4 *)(in_x9 + -0x118);
    return;
  }
  if (-1 < (long)uVar6) {
    *(undefined4 *)(unaff_x28 + 0x2340) = unaff_w21;
    arm64_store_block_extended();
    return;
  }
  puVar1 = (undefined4 *)(uVar6 * 4 + (ulong)uVar2);
  uVar5 = *(undefined4 *)(in_x9 + -0x11c);
  *puVar1 = *(undefined4 *)(in_x9 + -0x120);
  puVar1[1] = uVar5;
  puVar1[2] = *(undefined4 *)(in_x9 + -0x118);
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar3 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar3;
  *(uint *)(unaff_x28 + 0x2334) = uVar2;
  iVar4 = cpu_block_check_allocation_block3();
  if (iVar4 == 0) {
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return;
  }
  uVar5 = cpu_translate_get_pc
                    (*(undefined8 *)(unaff_x28 + 0x2368),*(undefined8 *)(unaff_x28 + 0x2360));
  *(undefined4 *)(unaff_x28 + 0x23bc) = uVar5;
  cpu_block_flush();
  UNRECOVERED_JUMPTABLE = (code *)cpu_block_lookup_base();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
                    /* WARNING: Could not recover jumptable at 0x0018e624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


