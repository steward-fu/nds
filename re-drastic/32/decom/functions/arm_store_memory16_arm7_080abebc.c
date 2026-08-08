/*
 * Ghidra decompilation
 *
 * Function : arm_store_memory16_arm7
 * Address  : 080abebc
 * Program  : drastic
 */


void arm_store_memory16_arm7(uint param_1,u16 param_2,u32 param_3,u32 param_4)

{
  int iVar1;
  uint uVar2;
  memory_struct *memory;
  code *UNRECOVERED_JUMPTABLE;
  u32 unaff_r4;
  u32 unaff_r5;
  u32 unaff_r6;
  u32 unaff_r7;
  u32 unaff_r8;
  u32 unaff_r9;
  u32 unaff_r10;
  u32 uVar3;
  memory_interface_struct *unaff_r11;
  u32 in_r12;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uVar8;
  u32 uVar9;
  u32 uVar10;
  u32 uVar11;
  u32 uVar12;
  u32 uVar13;
  u32 uVar14;
  u32 uVar15;
  u32 in_lr;
  u32 uVar16;
  bool in_OV;
  bool bVar17;
  undefined8 uVar18;
  
  unaff_r11[-1].page_allocation_bitmap_coarse[0x30] = param_3;
  uVar2 = param_1 & 0xfffffffe;
  if (!(bool)((byte)(unaff_r11->page_table[param_1 >> 0xb] >> 0x1e) & 1)) {
    *(u16 *)(uVar2 + unaff_r11->page_table[param_1 >> 0xb] * 4) = param_2;
    return;
  }
  unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = param_4;
  if (((param_1 & 0xfb000000) != 0) || ((param_1 & 0x4000000) == 0)) {
    iVar1 = unaff_r11->page_table[param_1 >> 0xb] * 4;
    if ((unaff_r11->page_table[param_1 >> 0xb] >> 0x1e & 2) == 0) {
      unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = in_r12;
      if (in_OV) {
        uVar4 = 0x10000000;
      }
      else {
        uVar4 = 0;
      }
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar4;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = in_lr;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = (u32)register0x00000054;
      extended_store16(unaff_r11,uVar2,param_2);
    }
    else if (param_2 != *(u16 *)(uVar2 + iVar1)) {
      *(u16 *)(uVar2 + iVar1) = param_2;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x41] = uVar2;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = in_r12;
      if (in_OV) {
        uVar4 = 0x10000000;
      }
      else {
        uVar4 = 0;
      }
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar4;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = in_lr;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = (u32)register0x00000054;
      uVar4 = cpu_block_check_allocation16
                        ((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),uVar2);
      uVar7 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
      uVar3 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
      uVar2 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4f];
      if ((uVar4 & 1) != 0) {
        unaff_r11[-1].page_allocation_bitmap_coarse[0x32] =
             unaff_r11[-1].page_allocation_bitmap_coarse[0x32];
        if ((uVar2 >> 0x1c & 1) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0x10000000;
        }
        unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar4;
        unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar3;
        unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar7;
        uVar4 = cpu_translate_get_pc(uVar3);
        uVar8 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
        uVar3 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
        unaff_r11[-1].page_allocation_bitmap_coarse[0x69] = uVar4;
        uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x41];
        unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar3;
        unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar8;
        cpu_block_flush((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),uVar4);
        uVar9 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
        uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x69];
        unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] =
             unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
        unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar9;
        UNRECOVERED_JUMPTABLE =
             (code *)cpu_block_lookup_base
                               ((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),
                                uVar4);
                    /* WARNING: Could not recover jumptable at 0x080ac09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    return;
  }
  unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = in_r12;
  if (in_OV) {
    uVar4 = 0x10000000;
  }
  else {
    uVar4 = 0;
  }
  unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar4;
  memory = (memory_struct *)unaff_r11[-1].page_allocation_bitmap_coarse[99];
  unaff_r11[-1].page_allocation_bitmap_coarse[0x7b] = unaff_r10;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = in_lr;
  unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = (u32)register0x00000054;
  store_io_register_arm7_16(memory,param_1 & 0xfffffe,param_2);
  uVar6 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
  uVar16 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
  uVar3 = unaff_r11[-1].page_allocation_bitmap_coarse[0x7b];
  bVar17 = (unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] >> 0x1c & 1) != 0;
  uVar5 = unaff_r11[-1].page_allocation_bitmap_coarse[0x32];
  uVar2 = unaff_r11[-1].page_allocation_bitmap_coarse[0x7f];
  uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x31];
  if ((uVar2 & 0xff) == 0) {
    return;
  }
  unaff_r11[-1].page_allocation_bitmap_coarse[0x7f] = 0;
  if ((uVar2 & 0x10) != 0) {
    unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = uVar5;
    if (bVar17) {
      uVar4 = 0x10000000;
    }
    else {
      uVar4 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar16;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar6;
    uVar18 = cpu_translate_get_pc(uVar16);
    block_halt((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),
               unaff_r11[-1].page_allocation_bitmap_coarse[0x30],
               unaff_r11[-1].page_allocation_bitmap_coarse[0x31]);
    return;
  }
  if (((uVar2 & 4) != 0) && (-1 < (int)uVar3)) {
    *(u32 *)(unaff_r11[-1].page_allocation_bitmap_coarse[0x62] + 0x10) =
         *(int *)(unaff_r11[-1].page_allocation_bitmap_coarse[0x62] + 0x10) - uVar3;
  }
  switch(uVar2 & 3) {
  case 0:
    return;
  case 1:
    unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = uVar5;
    if (bVar17) {
      uVar4 = 0x10000000;
    }
    else {
      uVar4 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar16;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar6;
    uVar4 = cpu_translate_get_pc(uVar16);
    uVar10 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar3 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x69] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar3;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar10;
    cpu_block_flush((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),0xffffffff);
    uVar11 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x69];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] =
         unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar11;
    UNRECOVERED_JUMPTABLE =
         (code *)cpu_block_lookup_base
                           ((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),uVar4)
    ;
                    /* WARNING: Could not recover jumptable at 0x080ac39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 3:
    unaff_r11[-1].page_allocation_bitmap_coarse[0x31] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x32] = uVar5;
    if (bVar17) {
      uVar4 = 0x10000000;
    }
    else {
      uVar4 = 0;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4f] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar16;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar6;
    uVar4 = cpu_translate_get_pc(uVar16);
    uVar13 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar3 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x69] = uVar4;
    if ((unaff_r11[-1].page_allocation_bitmap_fine[0xfe0] != 0) &&
       ((unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] & 0x80) == 0)) {
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] =
           unaff_r11[-1].page_allocation_bitmap_coarse[0x60] & 0xf0000000 |
           unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] & 0xfffffff;
      uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x31];
      uVar5 = unaff_r11[-1].page_allocation_bitmap_coarse[0x32];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6b] =
           unaff_r11[-1].page_allocation_bitmap_coarse[0x30];
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6c] = uVar4;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6d] = unaff_r4;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6e] = unaff_r5;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x6f] = unaff_r6;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x70] = unaff_r7;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x71] = unaff_r8;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x77] = unaff_r9;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x78] = uVar5;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x79] = uVar13;
      unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar3;
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
      (*(code *)unaff_r11[-1].page_allocation_bitmap_coarse[0x67])();
      return;
    }
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar3;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar13;
    cpu_block_flush((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),0xffffffff);
    uVar15 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar4 = unaff_r11[-1].page_allocation_bitmap_coarse[0x69];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] =
         unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar15;
    UNRECOVERED_JUMPTABLE =
         (code *)cpu_block_lookup_base
                           ((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0),uVar4)
    ;
                    /* WARNING: Could not recover jumptable at 0x080ac5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (unaff_r11[-1].page_allocation_bitmap_fine[0xfe0] == 0) {
    return;
  }
  if ((unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] & 0x80) == 0) {
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] =
         unaff_r11[-1].page_allocation_bitmap_coarse[0x60] & 0xf0000000 |
         unaff_r11[-1].page_allocation_bitmap_coarse[0x6a] & 0xfffffff;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6b] =
         unaff_r11[-1].page_allocation_bitmap_coarse[0x30];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6c] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6d] = unaff_r4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6e] = unaff_r5;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x6f] = unaff_r6;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x70] = unaff_r7;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x71] = unaff_r8;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x77] = unaff_r9;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x78] = uVar5;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x79] = uVar6;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar16;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar6;
    uVar4 = cpu_translate_get_pc(uVar16);
    uVar12 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4c];
    uVar3 = unaff_r11[-1].page_allocation_bitmap_coarse[0x4e];
    unaff_r11[-1].page_allocation_bitmap_coarse[0x69] = uVar4;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4e] = uVar3;
    unaff_r11[-1].page_allocation_bitmap_coarse[0x4c] = uVar12;
    execute_arm_raise_interrupt((cpu_struct *)(unaff_r11[-1].page_allocation_bitmap_fine + 0x7a0));
                    /* WARNING: Could not recover jumptable at 0x080ac468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_r11[-1].page_allocation_bitmap_coarse[0x67])();
    return;
  }
  return;
}


