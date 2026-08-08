/*
 * Ghidra decompilation
 *
 * Function : arm_store_block6_arm9
 * Address  : 080ad6cc
 * Program  : drastic
 */


u32 * arm_store_block6_arm9(uint param_1,undefined4 param_2,u32 param_3,u32 param_4)

{
  u32 *puVar1;
  uint address;
  u32 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  u32 uVar4;
  u32 unaff_r4;
  u32 uVar5;
  u32 unaff_r5;
  int iVar6;
  u32 uVar7;
  u32 uVar8;
  u32 unaff_r6;
  u32 unaff_r7;
  u32 unaff_r8;
  u32 unaff_r9;
  u32 unaff_r10;
  memory_interface_struct *unaff_r11;
  u32 uVar9;
  u32 in_r12;
  u32 uVar10;
  u32 uVar11;
  u32 uVar12;
  u32 uVar13;
  u32 uVar14;
  u32 uVar15;
  u32 uVar16;
  u32 uVar17;
  u32 uVar18;
  u32 uVar19;
  u32 uVar20;
  u32 in_lr;
  bool bVar21;
  bool in_OV;
  undefined8 uVar22;
  
  unaff_r11[-1].page_allocation_bitmap_coarse[0x30] = param_3;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = unaff_r4;
  address = param_1 & 0xfffffffc;
  puVar1 = unaff_r11[-1].page_allocation_bitmap_coarse + 0x50;
  if (!(bool)((byte)(unaff_r11->page_table[param_1 >> 0xb] >> 0x1e) & 1)) {
    puVar2 = (u32 *)(address + unaff_r11->page_table[param_1 >> 0xb] * 4);
    *puVar2 = *puVar1;
    puVar2[1] = unaff_r11[-1].page_allocation_bitmap_coarse[0x51];
    puVar2[2] = unaff_r11[-1].page_allocation_bitmap_coarse[0x52];
    puVar2[3] = unaff_r11[-1].page_allocation_bitmap_coarse[0x53];
    puVar2[4] = unaff_r11[-1].page_allocation_bitmap_coarse[0x54];
    puVar2[5] = unaff_r11[-1].page_allocation_bitmap_coarse[0x55];
    return puVar2 + 6;
  }
  uVar3 = unaff_r11->page_table[param_1 >> 0xb];
  if ((uVar3 >> 0x1e & 2) != 0) {
    unaff_r11[-1].page_allocation_bitmap_coarse[0x42] = address;
    puVar2 = (u32 *)(address + uVar3 * 4);
    *puVar2 = *puVar1;
    puVar2[1] = unaff_r11[-1].page_allocation_bitmap_coarse[0x51];
    puVar2[2] = unaff_r11[-1].page_allocation_bitmap_coarse[0x52];
    puVar2[3] = unaff_r11[-1].page_allocation_bitmap_coarse[0x53];
    puVar2[4] = unaff_r11[-1].page_allocation_bitmap_coarse[0x54];
    puVar2[5] = unaff_r11[-1].page_allocation_bitmap_coarse[0x55];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = param_4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x33] = in_r12;
    if (in_OV) {
      uVar7 = 0x10000000;
    }
    else {
      uVar7 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar7;
    uVar7 = unaff_r11[-1].page_allocation_bitmap_coarse[0x42];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = in_lr;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = (u32)register0x00000054;
    puVar1 = (u32 *)cpu_block_check_allocation_block6
                              ((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),
                               uVar7);
    uVar17 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar7 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    if (((uint)puVar1 & 1) != 0) {
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar7;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar17;
      uVar7 = cpu_translate_get_pc(uVar7);
      uVar18 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
      uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x69] = uVar7;
      uVar7 = unaff_r11[-1].page_allocation_bitmap_coarse[0x42];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar4;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar18;
      cpu_block_flush((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),uVar7);
      uVar19 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
      uVar7 = unaff_r11[-1].page_allocation_bitmap_coarse[0x69];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] =
           unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar19;
      UNRECOVERED_JUMPTABLE =
           (code *)cpu_block_lookup_base
                             ((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),
                              uVar7);
                    /* WARNING: Could not recover jumptable at 0x080ad864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (u32 *)(*UNRECOVERED_JUMPTABLE)();
      return puVar1;
    }
    return puVar1;
  }
  unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = param_4;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x33] = unaff_r5;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x34] = unaff_r6;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x35] = in_r12;
  iVar6 = 6;
  if (in_OV) {
    uVar7 = 0x10000000;
  }
  else {
    uVar7 = 0;
  }
  unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar7;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x7b] = unaff_r10;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = in_lr;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = (u32)register0x00000054;
  do {
    extended_store32(unaff_r11,address,*puVar1);
    iVar6 = iVar6 + -1;
    puVar1 = puVar1 + 1;
    address = address + 4;
  } while (iVar6 != 0);
  uVar16 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
  bVar21 = (unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] >> 0x1c & 1) != 0;
  uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x31];
  uVar7 = unaff_r11[-1].page_allocation_bitmap_coarse[0x32];
  uVar5 = unaff_r11[-1].page_allocation_bitmap_coarse[0x33];
  uVar8 = unaff_r11[-1].page_allocation_bitmap_coarse[0x34];
  uVar9 = unaff_r11[-1].page_allocation_bitmap_coarse[0x35];
  puVar1 = (u32 *)unaff_r11[-1].page_allocation_bitmap_coarse[0x7f];
  uVar20 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
  if (((uint)puVar1 & 0xff) == 0) {
    return puVar1;
  }
  unaff_r11[-1].page_allocation_bitmap_coarse[0x7f] = 0;
  if (((uint)puVar1 & 0x10) != 0) {
    unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = uVar7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = uVar9;
    if (bVar21) {
      uVar7 = 0x10000000;
    }
    else {
      uVar7 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar20;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar16;
    uVar22 = cpu_translate_get_pc(uVar20);
    puVar1 = (u32 *)block_halt((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),
                               unaff_r11[-1].page_allocation_bitmap_coarse[0x30],
                               unaff_r11[-1].page_allocation_bitmap_coarse[0x31]);
    return puVar1;
  }
  if ((((uint)puVar1 & 4) != 0) && (-1 < (int)unaff_r10)) {
    *(u32 *)(unaff_r11[-1].page_allocation_bitmap_coarse[0x62] + 0x10) =
         *(int *)(unaff_r11[-1].page_allocation_bitmap_coarse[0x62] + 0x10) - unaff_r10;
  }
  switch((u32 *)((uint)puVar1 & 3)) {
  case (u32 *)0x0:
    return (u32 *)((uint)puVar1 & 3);
  case (u32 *)0x1:
    unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = uVar7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = uVar9;
    if (bVar21) {
      uVar7 = 0x10000000;
    }
    else {
      uVar7 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar20;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar16;
    uVar7 = cpu_translate_get_pc(uVar20);
    uVar10 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x69] = uVar7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar10;
    cpu_block_flush((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),0xffffffff);
    uVar11 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar7 = unaff_r11[-1].page_allocation_bitmap_coarse[0x69];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] =
         unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar11;
    UNRECOVERED_JUMPTABLE =
         (code *)cpu_block_lookup_base
                           ((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),uVar7)
    ;
                    /* WARNING: Could not recover jumptable at 0x080ac39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (u32 *)(*UNRECOVERED_JUMPTABLE)();
    return puVar1;
  case (u32 *)0x3:
    unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = uVar7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = uVar9;
    if (bVar21) {
      uVar7 = 0x10000000;
    }
    else {
      uVar7 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar20;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar16;
    uVar7 = cpu_translate_get_pc(uVar20);
    uVar13 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar9 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x69] = uVar7;
    if ((unaff_r11[-1].page_allocation_bitmap_fine[0xfe0] != 0) &&
       ((unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] & 0x80) == 0)) {
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] =
           unaff_r11[-1].page_allocation_bitmap_coarse[0x60] & 0xf0000000 |
           unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] & 0xfffffff;
      uVar7 = unaff_r11[-1].page_allocation_bitmap_coarse[0x31];
      uVar20 = unaff_r11[-1].page_allocation_bitmap_coarse[0x32];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6b] =
           unaff_r11[-1].page_allocation_bitmap_coarse[0x30];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6c] = uVar7;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6d] = uVar4;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6e] = uVar5;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6f] = uVar8;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x70] = unaff_r7;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x71] = unaff_r8;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x77] = unaff_r9;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x78] = uVar20;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x79] = uVar13;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar9;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar13;
      execute_arm_raise_interrupt((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0))
      ;
      uVar14 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] =
           unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar14;
      cpu_block_flush((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x080ac568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (u32 *)(*(code *)unaff_r11[-1].page_allocation_bitmap_coarse[0x67])();
      return puVar1;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar9;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar13;
    cpu_block_flush((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),0xffffffff);
    uVar15 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar7 = unaff_r11[-1].page_allocation_bitmap_coarse[0x69];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] =
         unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar15;
    UNRECOVERED_JUMPTABLE =
         (code *)cpu_block_lookup_base
                           ((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),uVar7)
    ;
                    /* WARNING: Could not recover jumptable at 0x080ac5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (u32 *)(*UNRECOVERED_JUMPTABLE)();
    return puVar1;
  }
  if ((u32 *)unaff_r11[-1].page_allocation_bitmap_fine[0xfe0] == (u32 *)0x0) {
    return (u32 *)0x0;
  }
  if ((unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] & 0x80) == 0) {
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] =
         unaff_r11[-1].page_allocation_bitmap_coarse[0x60] & 0xf0000000 |
         unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] & 0xfffffff;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6b] =
         unaff_r11[-1].page_allocation_bitmap_coarse[0x30];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6c] = uVar7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6d] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6e] = uVar5;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6f] = uVar8;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x70] = unaff_r7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x71] = unaff_r8;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x77] = unaff_r9;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x78] = uVar9;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x79] = uVar16;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar20;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar16;
    uVar7 = cpu_translate_get_pc(uVar20);
    uVar12 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x69] = uVar7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar12;
    execute_arm_raise_interrupt((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0));
                    /* WARNING: Could not recover jumptable at 0x080ac468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (u32 *)(*(code *)unaff_r11[-1].page_allocation_bitmap_coarse[0x67])();
    return puVar1;
  }
  return (u32 *)unaff_r11[-1].page_allocation_bitmap_fine[0xfe0];
}


