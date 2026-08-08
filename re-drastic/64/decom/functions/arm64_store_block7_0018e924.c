/*
 * Ghidra decompilation
 *
 * Function : arm64_store_block7
 * Address  : 0018e924
 * Program  : drastic64
 */


void arm64_store_block7(ulong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  undefined8 uVar6;
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
  uVar5 = *(ulong *)(in_x9 + (param_1 >> 0xb & 0x1fffff) * 8);
  if ((uVar5 >> 0x3e & 1) == 0) {
    puVar1 = (undefined8 *)(uVar5 * 4 + (ulong)uVar2);
    uVar6 = *(undefined8 *)(in_x9 + -0x118);
    *puVar1 = *(undefined8 *)(in_x9 + -0x120);
    puVar1[1] = uVar6;
    uVar4 = *(undefined4 *)(in_x9 + -0x10c);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(in_x9 + -0x110);
    *(undefined4 *)((long)puVar1 + 0x14) = uVar4;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(in_x9 + -0x108);
    return;
  }
  if (-1 < (long)uVar5) {
    *(undefined4 *)(unaff_x28 + 0x2340) = unaff_w21;
    arm64_store_block_extended();
    return;
  }
  puVar1 = (undefined8 *)(uVar5 * 4 + (ulong)uVar2);
  uVar6 = *(undefined8 *)(in_x9 + -0x118);
  *puVar1 = *(undefined8 *)(in_x9 + -0x120);
  puVar1[1] = uVar6;
  uVar4 = *(undefined4 *)(in_x9 + -0x10c);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(in_x9 + -0x110);
  *(undefined4 *)((long)puVar1 + 0x14) = uVar4;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(in_x9 + -0x108);
  *(undefined4 *)(in_x9 + -0xe0) = in_w12;
  *(undefined4 *)(in_x9 + -0xdc) = in_w13;
  *(undefined4 *)(in_x9 + -0xd8) = in_w14;
  *(undefined4 *)(in_x9 + -0xd4) = in_w15;
  *(undefined4 *)(in_x9 + -0xd0) = in_w16;
  *(undefined4 *)(in_x9 + -0xcc) = in_w17;
  *(undefined4 *)(unaff_x28 + 0x2308) = in_w18;
  *(undefined8 *)(unaff_x28 + 0x2368) = unaff_x30;
  uVar6 = nzcv;
  *(int *)(unaff_x28 + 0x2354) = (int)uVar6;
  *(uint *)(unaff_x28 + 0x2334) = uVar2;
  iVar3 = cpu_block_check_allocation_block7();
  if (iVar3 == 0) {
    nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
    return;
  }
  uVar4 = cpu_translate_get_pc
                    (*(undefined8 *)(unaff_x28 + 0x2368),*(undefined8 *)(unaff_x28 + 0x2360));
  *(undefined4 *)(unaff_x28 + 0x23bc) = uVar4;
  cpu_block_flush();
  UNRECOVERED_JUMPTABLE = (code *)cpu_block_lookup_base();
  nzcv = (ulong)*(uint *)(unaff_x28 + 0x2354);
                    /* WARNING: Could not recover jumptable at 0x0018ea34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


