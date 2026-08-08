/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_direct_link
 * Address  : 080afdbc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_direct_link(cpu_translate_struct *cpu_translate,u32 condition)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  u32 uVar4;
  u32 *puVar5;
  cpu_block_struct *cpu_block;
  uint uVar6;
  u32 *puVar7;
  cpu_branch_target_struct *current_branch_target;
  cpu_branch_target_struct *pcVar8;
  byte bVar9;
  code *pcVar10;
  u8 *target_block;
  uint uVar11;
  uint uVar12;
  u32 *puVar13;
  u32 fresh_allocation;
  int local_2c;
  
  pcVar8 = cpu_translate->current_branch_target;
  bVar1 = cpu_translate->cpu_block->block_flags;
  pcVar10 = (code *)pcVar8->translated_block;
  local_2c = __stack_chk_guard;
  bVar9 = bVar1 & 4;
  if ((bVar1 & 4) != 0) {
    bVar9 = cpu_translate->cpu_block->branch_targets == pcVar8;
  }
  uVar6 = cpu_translate->flags_cached;
  uVar12 = (uint)cpu_translate->current_instruction->live_flags;
  uVar11 = uVar6 & uVar12;
  puVar7 = (u32 *)(uVar11 & 0xfffffffe);
  if (((uint)puVar7 & cpu_translate->flags_dirty) != 0) {
    uVar4 = cpu_translate_allocate_reg(cpu_translate,(u32)&fresh_allocation,uVar6,puVar7);
    if ((uVar12 & 0xfffffffe & ~(uVar6 & 0xfffffffe)) == 0) {
      puVar5 = cpu_translate->translation_ptr + 1;
      *cpu_translate->translation_ptr = uVar4 << 0xc | 0xe3a00000;
      cpu_translate->translation_ptr = puVar5;
    }
    else {
      puVar13 = cpu_translate->translation_ptr;
      puVar5 = puVar13 + 2;
      *puVar13 = uVar4 << 0xc | 0xe51b0080;
      puVar13[1] = (uint)puVar7 | 0xe3c00200 | uVar4 << 0xc | uVar4 << 0x10;
      cpu_translate->translation_ptr = puVar5;
    }
    uVar6 = uVar4 << 0xc;
    puVar7 = puVar5;
    if ((uVar11 & 2) != 0) {
      puVar7 = puVar5 + 1;
      *puVar5 = uVar4 << 0x10 | 0x23800202 | uVar6;
      cpu_translate->translation_ptr = puVar7;
    }
    puVar5 = puVar7;
    if ((uVar11 & 4) != 0) {
      puVar5 = puVar7 + 1;
      *puVar7 = uVar4 << 0x10 | 0x3800204 | uVar6;
      cpu_translate->translation_ptr = puVar5;
    }
    puVar7 = puVar5;
    if ((uVar11 & 8) != 0) {
      puVar7 = puVar5 + 1;
      *puVar5 = uVar4 << 0x10 | 0x43800208 | uVar6;
    }
    uVar2 = (cpu_translate->reg_alloc).locked_regs;
    *puVar7 = uVar6 | 0xe50b0080;
    cpu_translate->translation_ptr = puVar7 + 1;
    (cpu_translate->reg_alloc).locked_regs = uVar2 & ~(ushort)(1 << (uVar4 & 0xff));
  }
  cpu_translate->flags_cached = 1;
  cpu_translate->flags_dirty = 0;
  if ((pcVar10 != (code *)0x0) && ((pcVar8->flags & 1) != 0)) {
    pcVar10 = pcVar10 + 8;
  }
  uVar6 = condition << 0x1c;
  if (bVar9 != 0) {
    puVar7 = cpu_translate->translation_ptr;
    *puVar7 = uVar6 | 0x3e0a000;
    cpu_translate->translation_ptr = puVar7 + 1;
  }
  cpu_translate_normalize_reg_allocation(cpu_translate);
  uVar11 = pcVar8->flags;
  if ((uVar11 & 2) == 0) {
    puVar5 = cpu_translate->translation_ptr;
  }
  else {
    puVar7 = cpu_translate->translation_ptr;
    puVar5 = puVar7 + 1;
    *puVar7 = pcVar8->target_pc & 0xfff | 0xe3000000 | ((pcVar8->target_pc << 0x10) >> 0x1c) << 0x10
    ;
    uVar12 = pcVar8->target_pc;
    cpu_translate->translation_ptr = puVar5;
    if ((uVar12 & 0xffff0000) != 0) {
      puVar5 = puVar7 + 2;
      puVar7[1] = (uVar12 << 4) >> 0x14 | (uVar12 >> 0x1c) << 0x10 | 0xe3400000;
      uVar12 = pcVar8->target_pc;
      cpu_translate->translation_ptr = puVar5;
    }
    uVar11 = pcVar8->flags;
    if ((uVar12 & 1) == 0) {
      pcVar10 = block_itcm_branch_arm;
    }
    else {
      pcVar10 = block_itcm_branch_thumb;
    }
  }
  if ((uVar11 & 4) == 0) {
    *puVar5 = ((int)pcVar10 - (int)puVar5 >> 2) - 2U & 0xffffff | uVar6 | 0xa000000;
    cpu_translate->translation_ptr = puVar5 + 1;
    if (((pcVar10 == (code *)0x0) && ((pcVar8->flags & 2) == 0)) &&
       (pcVar8->internal_link_offset == 0)) {
      pcVar8->delayed_target->backpatch_ptr = puVar5;
    }
  }
  else {
    *puVar5 = pcVar8->target_pc & 0xfff | 0xe3000000 | ((pcVar8->target_pc << 0x10) >> 0x1c) << 0x10
    ;
    uVar11 = pcVar8->target_pc;
    cpu_translate->translation_ptr = puVar5 + 1;
    puVar7 = puVar5 + 1;
    if ((uVar11 & 0xffff0000) != 0) {
      puVar5[1] = (uVar11 << 4) >> 0x14 | (uVar11 >> 0x1c) << 0x10 | 0xe3400000;
      puVar7 = puVar5 + 2;
    }
    puVar5 = puVar7;
    *puVar5 = ((int)block_indirect_branch - (int)puVar5 >> 2) - 2U & 0xffffff | uVar6 | 0xa000000;
    cpu_translate->translation_ptr = puVar5 + 1;
  }
  pcVar8->backpatch_ptr = puVar5;
  iVar3 = __stack_chk_guard;
  cpu_translate->current_branch_target = pcVar8 + 1;
  if (local_2c == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


