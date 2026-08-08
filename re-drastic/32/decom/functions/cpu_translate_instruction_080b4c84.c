/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_instruction
 * Address  : 080b4c84
 * Program  : drastic
 */


/* WARNING: Variable defined which should be unmapped: condition_1 */
/* WARNING: Unknown calling convention */
/* Local variable lr_reg:u32[r0:4] conflicts with parameter, skipped.
   Local variable lr_reg_1:u32[r0:4] conflicts with parameter, skipped.
   Local variable native_lr:u32[r0:4] conflicts with parameter, skipped. */

void cpu_translate_instruction(cpu_translate_struct *cpu_translate)

{
  u8 uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  u32 uVar5;
  uint uVar6;
  u32 uVar7;
  u32 native_rm_1;
  u32 uVar8;
  u32 native_rs_1;
  u32 uVar9;
  u32 native_rd_lo;
  u32 native_rd_hi;
  u32 mapped_reg;
  u32 mapped_reg_16;
  u32 native_src_reg;
  u32 dest_1;
  u32 i;
  u32 native_rs_2;
  u32 native_rd_lo_1;
  u32 native_rd_hi_1;
  u32 mapped_reg_11;
  u32 mapped_reg_6;
  u32 native_rm_3;
  u32 native_rd_2;
  u32 mapped_reg_13;
  u32 mapped_reg_17;
  u32 sign_extend;
  u32 native_rs_3;
  u32 native_rd_3;
  u32 native_rs_4;
  u32 native_rd_5;
  u32 native_rn_1;
  u32 native_rd_4;
  u32 native_rd_1;
  u32 native_rm_6;
  u32 native_rn_3;
  u32 native_rd_7;
  u32 native_rn;
  u32 native_rd;
  u32 native_rn_2;
  u32 native_rd_6;
  u32 mapped_reg_15;
  u32 mapped_reg_4;
  cpu_translate_struct *pcVar10;
  u32 *ptr_u32;
  u32 rd_lo;
  u32 *puVar11;
  uint uVar12;
  int iVar13;
  u32 load_store;
  u32 offset_high;
  u32 mapped_reg_14;
  u8 *puVar14;
  u32 mapped_reg_8;
  u32 condition_5;
  u32 rm;
  u8 *emulated_reg_maps_to_2;
  u8 *emulated_reg_maps_to_3;
  u32 load_store_1;
  u8 *emulated_reg_maps_to_1;
  u8 *emulated_reg_maps_to;
  u32 condition_9;
  u32 rm_1;
  u32 *puVar15;
  u32 imm;
  u32 byte_count;
  u32 byte_access;
  u32 mapped_reg_1;
  u32 mapped_reg_2;
  u32 mapped_reg_3;
  u32 mapped_reg_5;
  u32 mapped_reg_9;
  u32 mapped_reg_10;
  uint uVar16;
  u32 set_flags;
  u32 rd_1;
  u32 opcode_translated;
  u32 mapped_reg_18;
  u32 mapped_reg_19;
  u32 *puVar17;
  u32 halfword_access;
  u32 set_flags_1;
  u32 mapped_reg_12;
  u32 mapped_reg_7;
  u32 rd_3;
  u32 x;
  u32 y_1;
  u32 rd;
  uint uVar18;
  u32 flags_cached;
  u32 condition_2;
  u32 pc_delta;
  u32 condition_3;
  u32 *ptr_u32_1;
  cpu_instruction_struct *pcVar19;
  u32 condition_6;
  u32 native_rm;
  void *store_memory_function_1;
  uint uVar20;
  int iVar21;
  u32 translation_ptr_delta;
  u32 *puVar22;
  u32 *pc_storage_ptr_1;
  cpu_instruction_struct *pcVar23;
  cpu_instruction_struct *current_instruction;
  u32 *opcode;
  uint uVar24;
  cpu_struct *pcVar25;
  cpu_struct *cpu;
  u32 register_list;
  u32 current_pc;
  u32 offset;
  u32 rd_hi;
  u32 register_list_1;
  u32 condition_4;
  u32 rn_1;
  u32 pc_delta_1;
  u32 native_rm_4;
  u32 native_rm_5;
  u32 condition;
  u32 rn_2;
  u32 needed_flags;
  u32 rn;
  u32 offset_low;
  u32 *pc_storage_ptr;
  uint uVar26;
  void *store_memory_function;
  u32 translation_ptr_delta_1;
  u32 condition_7;
  u32 condition_8;
  u32 *ptr_u32_2;
  u32 rn_mask;
  int iVar27;
  u32 op;
  uint uVar28;
  u32 rd_2;
  u32 y;
  u32 dest;
  uint uVar29;
  cpu_translate_register_allocation_struct *pcVar30;
  u32 **ppuVar31;
  u32 **ppuVar32;
  u32 *puVar33;
  u32 rot;
  bool bVar34;
  u32 condition_1;
  u32 native_rm_2;
  u32 writeback;
  u32 *local_f8;
  uint local_f4;
  u32 local_f0;
  uint local_ec;
  u32 fresh_allocation;
  u32 uncached_registers [2];
  cpu_translate_register_allocation_struct saved_reg_alloc;
  
  iVar4 = __stack_chk_guard;
  uVar18 = cpu_translate->flags_cached;
  pcVar23 = cpu_translate->current_instruction;
  pcVar25 = cpu_translate->current_cpu;
  puVar15 = (u32 *)(uint)pcVar23->source_dest_flags;
  uVar20 = pcVar23->opcode;
  uVar12 = (uint)puVar15 & 0xf & ~uVar18;
  if (uVar12 != 0) {
    uVar5 = cpu_translate_allocate_reg(cpu_translate,(u32)&fresh_allocation,uVar12,puVar15);
    uVar12 = uVar5 << 0xc;
    puVar33 = cpu_translate->translation_ptr;
    uVar18 = ((uint)puVar15 & 0xf | (uint)pcVar23->live_flags) & uVar18;
    *puVar33 = uVar12 | 0xe51b0080;
    cpu_translate->translation_ptr = puVar33 + 1;
    puVar15 = puVar33 + 1;
    if (uVar18 != 0) {
      uVar6 = uVar5 << 0x10;
      puVar15 = puVar33 + 2;
      puVar33[1] = uVar18 | 0xe3c00200 | uVar12 | uVar6;
      cpu_translate->translation_ptr = puVar15;
      if ((uVar18 & 1) != 0) {
        puVar15 = puVar33 + 3;
        puVar33[2] = uVar12 | uVar6 | 0x63800201;
        cpu_translate->translation_ptr = puVar15;
      }
      puVar33 = puVar15;
      if ((uVar18 & 2) != 0) {
        puVar33 = puVar15 + 1;
        *puVar15 = uVar12 | uVar6 | 0x23800202;
        cpu_translate->translation_ptr = puVar33;
      }
      puVar11 = puVar33;
      if ((uVar18 & 4) != 0) {
        puVar11 = puVar33 + 1;
        *puVar33 = uVar12 | uVar6 | 0x3800204;
        cpu_translate->translation_ptr = puVar11;
      }
      puVar15 = puVar11;
      if ((uVar18 & 8) != 0) {
        puVar15 = puVar11 + 1;
        *puVar11 = uVar12 | uVar6 | 0x43800208;
      }
    }
    uVar3 = (cpu_translate->reg_alloc).locked_regs;
    *puVar15 = uVar5 | 0xe128f000;
    cpu_translate->translation_ptr = puVar15 + 1;
    uVar18 = 0xf;
    (cpu_translate->reg_alloc).locked_regs = uVar3 & ~(ushort)(1 << (uVar5 & 0xff));
    cpu_translate->flags_cached = 0xf;
    puVar15 = (u32 *)(uint)pcVar23->source_dest_flags;
  }
  uVar12 = (uVar20 << 4) >> 0x1d;
  uVar5 = uVar12 - 1;
  uVar6 = cpu_translate->flags_dirty | (uint)puVar15 >> 4;
  cpu_translate->flags_dirty = uVar6;
  switch(uVar5) {
  case 0:
    if (((uVar20 << 7) >> 0x1e != 2) || ((uVar20 & 0x100000) != 0)) {
LAB_080b539c:
      cpu_translate_alu_op(cpu_translate,uVar20);
      uVar18 = cpu_translate->flags_cached;
      goto LAB_080b4e34;
    }
    if ((uVar20 << 0x10) >> 0x1c == 0xf) {
      uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
      if (((uVar12 < 0xfd) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar12] = 0xff,
          (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
        uVar18 = (uVar12 + 0x3fffffeb) * 4;
        if ((int)uVar18 < 0) {
          uVar18 = (uVar12 + 0x3fffffeb) * -4;
          uVar12 = 0;
        }
        else {
          uVar12 = 0x800000;
        }
        puVar15 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar12 | 0xe50b0000 | uVar18;
      }
      else {
        puVar15 = cpu_translate->translation_ptr;
      }
      uVar3 = (cpu_translate->reg_alloc).locked_regs;
      (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
      (cpu_translate->reg_alloc).locked_regs = uVar3 | 1;
      *puVar15 = uVar20 & 0xff | 0xe3a00000 | ((uVar20 << 0x14) >> 0x1c) << 8;
      cpu_translate->translation_ptr = puVar15 + 1;
      cpu_translate_msr_op(cpu_translate,uVar20);
      uVar18 = cpu_translate->flags_cached;
      goto LAB_080b4e34;
    }
    break;
  case 1:
  case 2:
    uVar12 = (uVar20 << 0xb) >> 0x1f;
    uVar16 = (uVar20 << 9) >> 0x1f;
    if ((uVar20 & 0x2000000) == 0) {
      cpu_translate_memory_op(cpu_translate,uVar20,uVar12,uVar16,0,0,0,uVar20 & 0xfff);
      uVar18 = cpu_translate->flags_cached;
      goto LAB_080b4e34;
    }
    if ((uVar20 & 0x10) == 0) {
      cpu_translate_memory_op(cpu_translate,uVar20,uVar12,uVar16,0,0,2,0);
      uVar18 = cpu_translate->flags_cached;
      goto LAB_080b4e34;
    }
    if (cpu_translate->thumb_mode != '\0') {
      if ((uVar20 & 0x10000) != 0) {
        uVar12 = ((uVar20 << 0x10) >> 0x15) << 1;
        uVar16 = uVar12 >> 8;
        uVar12 = uVar12 & 0xff;
        uVar29 = (uint)cpu_translate->current_instruction->live_flags;
        uVar28 = uVar18 & uVar29;
        uVar26 = uVar28 & 0xfffffffe;
        if ((uVar6 & uVar26) != 0) {
          uVar5 = cpu_translate_allocate_reg
                            (cpu_translate,(u32)&fresh_allocation,uVar26,&fresh_allocation);
          if ((uVar29 & 0xfffffffe & ~(uVar18 & 0xfffffffe)) == 0) {
            puVar15 = cpu_translate->translation_ptr + 1;
            *cpu_translate->translation_ptr = uVar5 << 0xc | 0xe3a00000;
            cpu_translate->translation_ptr = puVar15;
          }
          else {
            puVar33 = cpu_translate->translation_ptr;
            puVar15 = puVar33 + 2;
            *puVar33 = uVar5 << 0xc | 0xe51b0080;
            puVar33[1] = uVar26 | 0xe3c00200 | uVar5 << 0xc | uVar5 << 0x10;
            cpu_translate->translation_ptr = puVar15;
          }
          uVar18 = uVar5 << 0xc;
          puVar33 = puVar15;
          if ((uVar28 & 2) != 0) {
            puVar33 = puVar15 + 1;
            *puVar15 = uVar5 << 0x10 | 0x23800202 | uVar18;
            cpu_translate->translation_ptr = puVar33;
          }
          puVar15 = puVar33;
          if ((uVar28 & 4) != 0) {
            puVar15 = puVar33 + 1;
            *puVar33 = uVar5 << 0x10 | 0x3800204 | uVar18;
            cpu_translate->translation_ptr = puVar15;
          }
          puVar33 = puVar15;
          if ((uVar28 & 8) != 0) {
            puVar33 = puVar15 + 1;
            *puVar15 = uVar5 << 0x10 | 0x43800208 | uVar18;
          }
          uVar3 = (cpu_translate->reg_alloc).locked_regs;
          *puVar33 = uVar18 | 0xe50b0080;
          cpu_translate->translation_ptr = puVar33 + 1;
          (cpu_translate->reg_alloc).locked_regs = uVar3 & ~(ushort)(1 << (uVar5 & 0xff));
        }
        uVar6 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
        uVar18 = 0;
        uVar26 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[0xe];
        cpu_translate->flags_cached = 1;
        cpu_translate->flags_dirty = 0;
        if (((uVar6 < 0xfd) &&
            ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar6] = 0xff,
            (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
           (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar6 & 1U) != 0)) {
          puVar15 = cpu_translate->translation_ptr;
          uVar28 = (uVar6 + 0x3fffffeb) * 4;
          if ((int)uVar28 < 0) {
            uVar28 = (uVar6 + 0x3fffffeb) * -4;
          }
          else {
            uVar18 = 0x800000;
          }
          *puVar15 = uVar18 | 0xe50b0000 | uVar28;
          cpu_translate->translation_ptr = puVar15 + 1;
        }
        uVar3 = (cpu_translate->reg_alloc).locked_regs;
        (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
        (cpu_translate->reg_alloc).locked_regs = uVar3 | 1;
        if (uVar26 == 0xff) {
          puVar15 = cpu_translate->translation_ptr;
          *puVar15 = 0xe51b001c;
          cpu_translate->translation_ptr = puVar15 + 1;
        }
        else if (uVar26 != 0) {
          puVar15 = cpu_translate->translation_ptr;
          *puVar15 = uVar26 | 0xe1a00000;
          cpu_translate->translation_ptr = puVar15 + 1;
        }
        uVar18 = cpu_translate->current_pc;
        uVar5 = cpu_translate_allocate_reg(cpu_translate,0xe,0,&fresh_allocation);
        (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
        puVar15 = cpu_translate->translation_ptr;
        puVar33 = puVar15 + 1;
        *puVar15 = uVar18 & 0xfff | 0xe3000001 | ((uVar18 << 0x10) >> 0x1c) << 0x10 | uVar5 << 0xc;
        cpu_translate->translation_ptr = puVar33;
        if ((uVar18 & 0xffff0000) != 0) {
          puVar33 = puVar15 + 2;
          puVar15[1] = (uVar18 << 4) >> 0x14 | (uVar18 >> 0x1c) << 0x10 | 0xe3400000 | uVar5 << 0xc;
          cpu_translate->translation_ptr = puVar33;
        }
        puVar15 = puVar33;
        if (uVar12 != 0) {
          puVar15 = puVar33 + 1;
          *puVar33 = uVar12 | 0xe2800000;
          cpu_translate->translation_ptr = puVar15;
        }
        puVar33 = puVar15;
        if (uVar16 != 0) {
          puVar33 = puVar15 + 1;
          *puVar15 = uVar16 | 0xe2800c00;
          cpu_translate->translation_ptr = puVar33;
        }
        if ((uVar20 & 0x20000) == 0) {
          uVar5 = 0xe3c00003;
        }
        else {
          uVar5 = 0xe3800001;
        }
        *puVar33 = uVar5;
        cpu_translate->translation_ptr = puVar33 + 1;
        cpu_translate_normalize_reg_allocation(cpu_translate);
        puVar15 = cpu_translate->translation_ptr;
        *puVar15 = ((int)block_indirect_branch - (int)puVar15 >> 2) - 2U & 0xffffff | 0xea000000;
        uVar18 = cpu_translate->flags_cached;
        cpu_translate->translation_ptr = puVar15 + 1;
        goto LAB_080b4e34;
      }
      uVar5 = cpu_translate_allocate_reg(cpu_translate,0xe,0,&fresh_allocation);
      iVar21 = ((int)(uVar20 << 0x10) >> 0x15) * 0x1000;
      (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
      puVar15 = cpu_translate->translation_ptr;
      pcVar19 = cpu_translate->current_instruction;
      uVar12 = iVar21 + pcVar19->next_pc;
      *puVar15 = uVar12 & 0xfff | 0xe3000000 | (uVar12 * 0x10000 >> 0x1c) << 0x10 | uVar5 << 0xc;
      uVar7 = pcVar19->next_pc;
      cpu_translate->translation_ptr = puVar15 + 1;
      uVar12 = iVar21 + uVar7;
      if ((uVar12 & 0xffff0000) != 0) {
        puVar15[1] = uVar12 * 0x10 >> 0x14 | (uVar12 >> 0x1c) << 0x10 | 0xe3400000 | uVar5 << 0xc;
        uVar18 = cpu_translate->flags_cached;
        cpu_translate->translation_ptr = puVar15 + 2;
        goto LAB_080b4e34;
      }
      goto LAB_080b53dc;
    }
    break;
  case 3:
    uVar16 = uVar20 & 0xffff;
    uVar28 = (uVar20 << 0xc) >> 0x1c;
    uVar29 = 1;
    local_f4 = (uVar20 << 10) >> 0x1f;
    uVar26 = 1 << uVar28;
    iVar13 = (uint)bit_count[uVar20 & 0xff] + (uint)bit_count[uVar16 >> 8];
    iVar21 = iVar13 * 4;
    if ((iVar13 == 1) && ((uVar20 & 0x400000) == 0)) {
      if ((uVar20 & 0x200000) == 0) {
        if ((uVar20 & 0x1000000) == 0) {
          uVar12 = 0;
        }
        else if ((uVar20 & 0x800000) != 0) goto LAB_080b5f30;
LAB_080b6a68:
        opcode_translated = uVar20 & 0xf01f0000 | 0x4000000 | (0x1f - LZCOUNT(uVar16)) * 0x1000;
      }
      else {
        uVar29 = (uVar20 << 7) >> 0x1f;
        if ((uVar20 & 0x800000) == 0) goto LAB_080b6a68;
LAB_080b5f30:
        opcode_translated = uVar20 & 0xf01f0000 | 0x4800000 | (0x1f - LZCOUNT(uVar16)) * 0x1000;
      }
      if (uVar29 != 0) {
        opcode_translated = opcode_translated | uVar20 & 0x200000 | 0x1000000;
      }
      cpu_translate_memory_op
                (cpu_translate,opcode_translated | uVar12,(uVar20 << 0xb) >> 0x1f,0,0,0,0,uVar12);
      uVar18 = cpu_translate->flags_cached;
      goto LAB_080b4e34;
    }
    writeback = uVar20 & 0x400000;
    uVar12 = (uint)cpu_translate->current_instruction->live_flags;
    puVar15 = (u32 *)(uVar18 & uVar12);
    if ((uVar6 & (uint)puVar15 & 0xfffffffe) != 0) {
      uVar5 = cpu_translate_allocate_reg(cpu_translate,(u32)&fresh_allocation,uVar12,puVar15);
      if ((uVar12 & 0xfffffffe & ~(uVar18 & 0xfffffffe)) == 0) {
        puVar33 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar5 << 0xc | 0xe3a00000;
        cpu_translate->translation_ptr = puVar33;
      }
      else {
        puVar11 = cpu_translate->translation_ptr;
        puVar33 = puVar11 + 2;
        *puVar11 = uVar5 << 0xc | 0xe51b0080;
        puVar11[1] = (uint)puVar15 & 0xfffffffe | 0xe3c00200 | uVar5 << 0xc | uVar5 << 0x10;
        cpu_translate->translation_ptr = puVar33;
      }
      uVar12 = uVar5 << 0xc;
      puVar11 = puVar33;
      if (((uint)puVar15 & 2) != 0) {
        puVar11 = puVar33 + 1;
        *puVar33 = uVar5 << 0x10 | 0x23800202 | uVar12;
        cpu_translate->translation_ptr = puVar11;
      }
      puVar33 = puVar11;
      if (((uint)puVar15 & 4) != 0) {
        puVar33 = puVar11 + 1;
        *puVar11 = uVar5 << 0x10 | 0x3800204 | uVar12;
        cpu_translate->translation_ptr = puVar33;
      }
      puVar11 = puVar33;
      if (((uint)puVar15 & 8) != 0) {
        puVar11 = puVar33 + 1;
        *puVar33 = uVar5 << 0x10 | 0x43800208 | uVar12;
      }
      uVar3 = (cpu_translate->reg_alloc).locked_regs;
      *puVar11 = uVar12 | 0xe50b0080;
      cpu_translate->translation_ptr = puVar11 + 1;
      (cpu_translate->reg_alloc).locked_regs = uVar3 & ~(ushort)(1 << (uVar5 & 0xff));
    }
    cpu_translate->flags_cached = 1;
    cpu_translate->flags_dirty = 0;
    if (uVar20 >> 0x1c < 0xe) {
      memcpy(&saved_reg_alloc,&cpu_translate->reg_alloc,0xa0);
      local_f8 = cpu_translate->translation_ptr;
      *local_f8 = 0xfffffffeU - ((int)local_f8 >> 2) & 0xffffff | (uVar20 >> 0x1c ^ 1) << 0x1c |
                  0xa000000;
      cpu_translate->translation_ptr = local_f8 + 1;
    }
    else {
      local_f8 = (u32 *)0x0;
    }
    cpu_translate_load_reg_fixed(cpu_translate,uVar28,0);
    local_f0 = writeback;
    if (writeback != 0) {
      if ((uVar20 & 0x108000) == 0x108000) {
        local_f0 = 0;
      }
      else {
        puVar15 = cpu_translate->translation_ptr;
        *puVar15 = 0xe50b00fc;
        puVar15[1] = 0xe51b0284;
        puVar15[2] = 0xe50b0100;
        puVar15[3] = 0xe3a01000;
        cpu_translate->translation_ptr = puVar15 + 4;
        local_f0 = 1;
        cpu_translate_normalize_reg_allocation(cpu_translate);
        puVar15 = cpu_translate->translation_ptr;
        puVar15[1] = 0xe51b00fc;
        *puVar15 = ((int)arm_set_cpu_mode - (int)puVar15 >> 2) - 2U & 0xffffff | 0xeb000000;
        cpu_translate->translation_ptr = puVar15 + 2;
      }
    }
    if ((uVar16 & uVar26) == 0) {
      uVar12 = (uVar20 << 7) >> 0x1e;
      if (uVar12 == 2) goto LAB_080b5998;
      if (uVar12 == 3) {
        local_ec = 4;
LAB_080b613c:
        puVar15 = cpu_translate->translation_ptr;
        *puVar15 = local_ec | 0xe2800000;
        cpu_translate->translation_ptr = puVar15 + 1;
      }
      else {
        if (uVar12 == 0) goto LAB_080b60f8;
        local_ec = 0;
      }
LAB_080b5480:
      if ((uVar20 & 0x100000) != 0) {
LAB_080b5488:
        if (local_f4 == 0) goto LAB_080b5494;
        if (uVar28 == 0xf) {
          uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
          if (((uVar12 < 0xfd) &&
              ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar12] = 0xff,
              (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
             (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0))
          {
            uVar18 = (uVar12 + 0x3fffffeb) * 4;
            bVar34 = (int)uVar18 < 0;
            if (bVar34) {
              uVar18 = (uVar12 + 0x3fffffeb) * -4;
            }
            puVar15 = cpu_translate->translation_ptr + 1;
            *cpu_translate->translation_ptr = uVar18 | (uint)!bVar34 << 0x17 | 0xe50b0000;
            cpu_translate->translation_ptr = puVar15;
          }
          else {
            puVar15 = cpu_translate->translation_ptr;
          }
          uVar12 = 0;
          (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
        }
        else {
          uVar5 = cpu_translate_allocate_reg(cpu_translate,uVar28,0,&fresh_allocation);
          uVar12 = uVar5 << 0xc;
          (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
          puVar15 = cpu_translate->translation_ptr;
        }
        if ((uVar20 & 0x800000) == 0) {
          local_ec = -(local_ec + iVar21);
        }
        else {
          local_ec = iVar21 - local_ec;
        }
        if ((int)local_ec < 0) {
          *puVar15 = -local_ec | uVar12 | 0xe2400000;
          cpu_translate->translation_ptr = puVar15 + 1;
        }
        else {
          *puVar15 = local_ec | uVar12 | 0xe2800000;
          cpu_translate->translation_ptr = puVar15 + 1;
        }
        goto LAB_080b54a0;
      }
      if (uVar16 != 0) goto LAB_080b5920;
LAB_080b5c28:
      if (local_f4 != 0) {
        if (uVar28 == 0xf) {
          uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
          if (((uVar12 < 0xfd) &&
              ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar12] = 0xff,
              (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
             (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0))
          {
            uVar18 = (uVar12 + 0x3fffffeb) * 4;
            bVar34 = (int)uVar18 < 0;
            if (bVar34) {
              uVar18 = (uVar12 + 0x3fffffeb) * -4;
            }
            puVar15 = cpu_translate->translation_ptr + 1;
            *cpu_translate->translation_ptr = uVar18 | (uint)!bVar34 << 0x17 | 0xe50b0000;
            cpu_translate->translation_ptr = puVar15;
          }
          else {
            puVar15 = cpu_translate->translation_ptr;
          }
          uVar12 = 0;
          (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
        }
        else {
          uVar5 = cpu_translate_allocate_reg(cpu_translate,uVar28,0,&fresh_allocation);
          uVar12 = uVar5 << 0xc;
          (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
          puVar15 = cpu_translate->translation_ptr;
        }
        if ((uVar20 & 0x800000) == 0) {
          local_ec = -(local_ec + iVar21);
        }
        else {
          local_ec = iVar21 - local_ec;
        }
        if ((int)local_ec < 0) {
          local_ec = -local_ec;
          uVar12 = uVar12 | 0xe2400000;
        }
        else {
          uVar12 = uVar12 | 0xe2800000;
        }
        *puVar15 = local_ec | uVar12;
        cpu_translate->translation_ptr = puVar15 + 1;
      }
      uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[1].mapped_reg;
      if (((uVar12 < 0xfd) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar12] = 0xff,
          (cpu_translate->reg_alloc).native_regs[1].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
        puVar15 = cpu_translate->translation_ptr;
        uVar18 = (uVar12 + 0x3fffffeb) * 4;
        if ((int)uVar18 < 0) {
          uVar20 = 0;
          uVar18 = (uVar12 + 0x3fffffeb) * -4;
        }
        else {
          uVar20 = 0x800000;
        }
        *puVar15 = uVar20 | 0xe50b1000 | uVar18;
        cpu_translate->translation_ptr = puVar15 + 1;
      }
      uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
      (cpu_translate->reg_alloc).native_regs[1].mapped_reg = 0xfd;
      if (((uVar12 < 0xfd) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar12] = 0xff,
          (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
        uVar18 = (uVar12 + 0x3fffffeb) * 4;
        if ((int)uVar18 < 0) {
          uVar20 = 0;
          uVar18 = (uVar12 + 0x3fffffeb) * -4;
        }
        else {
          uVar20 = 0x800000;
        }
        puVar15 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar20 | 0xe50be000 | uVar18;
      }
      else {
        puVar15 = cpu_translate->translation_ptr;
      }
      bVar2 = cpu_translate->cpu_type;
      puVar33 = cpu_translate->pc_metadata_ptr;
      puVar17 = cpu_translate->current_pc_metadata_ptr;
      (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xfd;
      puVar11 = cpu_translate->translation_ptr_code_base;
      *puVar15 = ((int)arm_store_block_unrolled[bVar2 - 1][iVar13 + 0xf] - (int)puVar15 >> 2) - 2U &
                 0xffffff | 0xeb000000;
      cpu_translate->translation_ptr = puVar15 + 1;
      uVar12 = (int)(puVar15 + 1) - (int)puVar11 >> 2;
      uVar18 = cpu_translate->current_pc - cpu_translate->base_pc;
      if (cpu_translate->pc_metadata_count <= (uint)((int)puVar17 - (int)puVar33 >> 2)) {
        __printf_chk(1,"FATAL: went past metadata storage of %d for block @ %p (%x)\n",
                     cpu_translate->pc_metadata_count,puVar11,cpu_translate->current_pc);
      }
      if (0xffff < uVar18) {
        __printf_chk(1,"FATAL: pc_delta in stored PC metadata is %x\n",uVar18);
      }
      if (0xffff < uVar12) {
        __printf_chk(1,"FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar12);
      }
      puVar15 = cpu_translate->current_pc_metadata_ptr;
      *puVar17 = uVar18 | uVar12 << 0x10;
      cpu_translate->current_pc_metadata_ptr = puVar15 + 1;
      if (local_f0 != 0) {
        cpu_translate_normalize_reg_allocation(cpu_translate);
        puVar15 = cpu_translate->translation_ptr;
        *puVar15 = 0xe51b1100;
        puVar15[1] = ((int)arm_set_cpu_mode - (int)(puVar15 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
        cpu_translate->translation_ptr = puVar15 + 2;
      }
    }
    else {
      if ((uVar20 & 0x100000) == 0) {
        uVar12 = (uVar20 << 7) >> 0x1e;
        if (uVar12 == 2) goto LAB_080b5998;
        if (uVar12 == 3) goto LAB_080b612c;
        if (uVar12 == 0) goto LAB_080b60f8;
        local_ec = 0;
LAB_080b5920:
        iVar27 = 0;
        uVar5 = 0;
        do {
          if ((uVar16 & 1) != 0) {
            uVar7 = cpu_translate_allocate_src_reg(cpu_translate,uVar5,0);
            native_src_reg = uVar7 << 0xc | 0xe50b0000;
            uVar12 = iVar27 - 0xc0;
            puVar15 = cpu_translate->translation_ptr;
            if ((int)uVar12 < 0) {
              uVar18 = 0;
              uVar12 = -uVar12;
            }
            else {
              uVar18 = 0x800000;
            }
            iVar27 = iVar27 + 4;
            *puVar15 = uVar12 | native_src_reg | uVar18;
            cpu_translate->translation_ptr = puVar15 + 1;
          }
          uVar16 = uVar16 >> 1;
          uVar5 = uVar5 + 1;
        } while (uVar16 != 0);
        goto LAB_080b5c28;
      }
      if (((uVar16 & ~uVar26) == 0) || (uVar26 != (-uVar26 & uVar16))) {
        uVar12 = (uVar20 << 7) >> 0x1e;
        if (uVar12 == 2) goto LAB_080b5998;
        if (uVar12 == 3) goto LAB_080b612c;
        if (uVar12 == 0) goto LAB_080b60f8;
        local_ec = 0;
        goto LAB_080b5488;
      }
      uVar12 = (uVar20 << 7) >> 0x1e;
      if (uVar12 == 2) {
        local_f4 = 0;
LAB_080b5998:
        local_ec = iVar13 * -4;
LAB_080b59a4:
        if (local_ec != 0) {
          if (-1 < (int)local_ec) goto LAB_080b613c;
          puVar15 = cpu_translate->translation_ptr;
          *puVar15 = -local_ec | 0xe2400000;
          cpu_translate->translation_ptr = puVar15 + 1;
        }
        goto LAB_080b5480;
      }
      if (uVar12 == 3) {
        local_f4 = 0;
LAB_080b612c:
        local_ec = 4;
        goto LAB_080b613c;
      }
      if (uVar12 == 0) {
        local_f4 = 0;
LAB_080b60f8:
        local_ec = iVar13 * -4 + 4;
        goto LAB_080b59a4;
      }
LAB_080b5494:
      uVar28 = 0xff;
LAB_080b54a0:
      puVar14 = (cpu_translate->reg_alloc).emulated_reg_maps_to;
      uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[1].mapped_reg;
      if (((uVar12 < 0xfd) &&
          (puVar14[uVar12] = 0xff, (cpu_translate->reg_alloc).native_regs[1].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
        puVar15 = cpu_translate->translation_ptr;
        uVar18 = (uVar12 + 0x3fffffeb) * 4;
        if ((int)uVar18 < 0) {
          uVar6 = 0;
          uVar18 = (uVar12 + 0x3fffffeb) * -4;
        }
        else {
          uVar6 = 0x800000;
        }
        *puVar15 = uVar6 | 0xe50b1000 | uVar18;
        cpu_translate->translation_ptr = puVar15 + 1;
      }
      uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
      (cpu_translate->reg_alloc).native_regs[1].mapped_reg = 0xfd;
      if (((uVar12 < 0xfd) &&
          (puVar14[uVar12] = 0xff, (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
        uVar18 = (uVar12 + 0x3fffffeb) * 4;
        if ((int)uVar18 < 0) {
          uVar6 = 0;
          uVar18 = (uVar12 + 0x3fffffeb) * -4;
        }
        else {
          uVar6 = 0x800000;
        }
        puVar15 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar6 | 0xe50be000 | uVar18;
        cpu_translate->translation_ptr = puVar15;
      }
      else {
        puVar15 = cpu_translate->translation_ptr;
      }
      uVar1 = cpu_translate->cpu_type;
      (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xfd;
      if ((uVar1 == '\x01') && (cpu_translate->memory_map_offset == 0)) {
        iVar21 = *(int *)(&DAT_081616fc + iVar21);
        *puVar15 = 0xe31003ff;
        puVar15[1] = (iVar21 - (int)(puVar15 + 1) >> 2) - 2U & 0xffffff | 0x1b000000;
        cpu_translate->translation_ptr = puVar15 + 2;
      }
      else {
        *puVar15 = (*(int *)(&DAT_081616fc + iVar21) - (int)puVar15 >> 2) - 2U & 0xffffff |
                   0xeb000000;
        cpu_translate->translation_ptr = puVar15 + 1;
      }
      uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
      if (((uVar12 < 0xfd) &&
          (puVar14[uVar12] = 0xff, (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
        puVar15 = cpu_translate->translation_ptr;
        uVar18 = (uVar12 + 0x3fffffeb) * 4;
        if ((int)uVar18 < 0) {
          uVar6 = 0;
          uVar18 = (uVar12 + 0x3fffffeb) * -4;
        }
        else {
          uVar6 = 0x800000;
        }
        *puVar15 = uVar6 | 0xe50b0000 | uVar18;
        cpu_translate->translation_ptr = puVar15 + 1;
      }
      uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[1].mapped_reg;
      uVar3 = (cpu_translate->reg_alloc).locked_regs;
      (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
      (cpu_translate->reg_alloc).locked_regs = uVar3 | 1;
      if (((uVar12 < 0xfd) &&
          (puVar14[uVar12] = 0xff, (cpu_translate->reg_alloc).native_regs[1].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
        puVar15 = cpu_translate->translation_ptr;
        uVar18 = (uVar12 + 0x3fffffeb) * 4;
        if ((int)uVar18 < 0) {
          uVar6 = 0;
          uVar18 = (uVar12 + 0x3fffffeb) * -4;
        }
        else {
          uVar6 = 0x800000;
        }
        *puVar15 = uVar6 | 0xe50b1000 | uVar18;
        cpu_translate->translation_ptr = puVar15 + 1;
      }
      uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
      (cpu_translate->reg_alloc).native_regs[1].mapped_reg = 0xff;
      if (((uVar12 < 0xfd) &&
          (puVar14[uVar12] = 0xff, (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
        puVar15 = cpu_translate->translation_ptr;
        uVar18 = (uVar12 + 0x3fffffeb) * 4;
        if ((int)uVar18 < 0) {
          uVar6 = 0;
          uVar18 = (uVar12 + 0x3fffffeb) * -4;
        }
        else {
          uVar6 = 0x800000;
        }
        *puVar15 = uVar6 | 0xe50be000 | uVar18;
        cpu_translate->translation_ptr = puVar15 + 1;
      }
      uVar12 = uVar20 & 0x7fff;
      (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xff;
      if (uVar12 != 0) {
        uVar16 = 0;
        uVar18 = 0;
        uVar26 = 0;
        uVar6 = 0xffffffff;
        do {
          uVar29 = uVar6;
          if ((uVar12 & 1) != 0) {
            uVar29 = (uint)*puVar14;
            if (uVar29 == 0xff || uVar26 == uVar28) {
              if (uVar16 != 0) {
                puVar15 = cpu_translate->translation_ptr;
                *puVar15 = uVar16 | 0xe8b00000;
                cpu_translate->translation_ptr = puVar15 + 1;
              }
              uVar6 = uVar18;
              if (uVar18 != 1) {
                uVar6 = 1;
              }
              uncached_registers[uVar18] = uVar26;
              if (uVar18 != 1) {
                uVar16 = 0;
                uVar18 = uVar6;
              }
              else {
                puVar15 = cpu_translate->translation_ptr;
                puVar33 = puVar15 + 1;
                *puVar15 = 0xe8b04002;
                cpu_translate->translation_ptr = puVar33;
                if (uVar28 != uncached_registers[0]) {
                  uVar18 = (uncached_registers[0] + 0x3fffffeb) * 4;
                  if ((int)uVar18 < 0) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = 0x800000;
                  }
                  if ((int)uVar18 < 0) {
                    uVar18 = (uncached_registers[0] + 0x3fffffeb) * -4;
                  }
                  puVar33 = puVar15 + 2;
                  puVar15[1] = uVar6 | 0xe50b1000 | uVar18;
                  cpu_translate->translation_ptr = puVar33;
                }
                if (uVar28 == uncached_registers[1]) {
                  uVar18 = 0;
                  uVar16 = 0;
                }
                else {
                  uVar18 = (uncached_registers[1] + 0x3fffffeb) * 4;
                  if ((int)uVar18 < 0) {
                    uVar6 = 0;
                    uVar18 = (uncached_registers[1] + 0x3fffffeb) * -4;
                  }
                  else {
                    uVar6 = 0x800000;
                  }
                  uVar16 = 0;
                  *puVar33 = uVar6 | 0xe50be000 | uVar18;
                  cpu_translate->translation_ptr = puVar33 + 1;
                  uVar18 = uVar16;
                }
              }
            }
            else {
              if (uVar18 != 0) {
                puVar15 = cpu_translate->translation_ptr;
                *puVar15 = 0xe8b00002;
                cpu_translate->translation_ptr = puVar15 + 1;
                if (uVar28 != uncached_registers[0]) {
                  uVar18 = (uncached_registers[0] + 0x3fffffeb) * 4;
                  if ((int)uVar18 < 0) {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = 0x800000;
                  }
                  if ((int)uVar18 < 0) {
                    uVar18 = (uncached_registers[0] + 0x3fffffeb) * -4;
                  }
                  puVar15[1] = uVar24 | 0xe50b1000 | uVar18;
                  cpu_translate->translation_ptr = puVar15 + 2;
                }
              }
              if ((uVar29 <= uVar6) && (uVar16 != 0)) {
                puVar15 = cpu_translate->translation_ptr;
                uVar18 = uVar16 | 0xe8b00000;
                uVar16 = 0;
                *puVar15 = uVar18;
                cpu_translate->translation_ptr = puVar15 + 1;
              }
              uVar18 = 0;
              uVar16 = uVar16 | 1 << uVar29;
            }
          }
          uVar12 = uVar12 >> 1;
          uVar26 = uVar26 + 1;
          puVar14 = puVar14 + 1;
          uVar6 = uVar29;
        } while (uVar12 != 0);
        if (uVar16 == 0) {
          if (uVar18 != 0) {
            puVar15 = cpu_translate->translation_ptr;
            uVar12 = (uncached_registers[0] + 0x3fffffeb) * 4;
            *puVar15 = 0xe8b00002;
            if ((int)uVar12 < 0) {
              uVar12 = (uncached_registers[0] + 0x3fffffeb) * -4;
              uVar18 = 0;
            }
            else {
              uVar18 = 0x800000;
            }
            puVar15[1] = uVar18 | 0xe50b1000 | uVar12;
            cpu_translate->translation_ptr = puVar15 + 2;
          }
        }
        else {
          puVar15 = cpu_translate->translation_ptr;
          *puVar15 = uVar16 | 0xe8b00000;
          cpu_translate->translation_ptr = puVar15 + 1;
        }
      }
      if (local_f0 != 0) {
        cpu_translate_normalize_reg_allocation(cpu_translate);
        puVar15 = cpu_translate->translation_ptr;
        *puVar15 = 0xe51b1100;
        puVar15[1] = ((int)arm_set_cpu_mode - (int)(puVar15 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
        cpu_translate->translation_ptr = puVar15 + 2;
      }
      if ((uVar20 & 0x8000) != 0) {
        puVar15 = cpu_translate->translation_ptr;
        *puVar15 = 0xe5900000;
        cpu_translate->translation_ptr = puVar15 + 1;
        if (writeback == 0) {
          if (cpu_translate->cpu_type != '\x01') {
            if (cpu_translate->thumb_mode == '\0') {
              puVar15[1] = 0xe3c00003;
              cpu_translate->translation_ptr = puVar15 + 2;
            }
            else if (cpu_translate->thumb_mode == '\x01') {
              puVar15[1] = 0xe3800001;
              cpu_translate->translation_ptr = puVar15 + 2;
            }
          }
          cpu_translate_normalize_reg_allocation(cpu_translate);
          puVar15 = cpu_translate->translation_ptr;
          *puVar15 = ((int)block_indirect_branch - (int)puVar15 >> 2) - 2U & 0xffffff | 0xea000000;
          cpu_translate->translation_ptr = puVar15 + 1;
        }
        else {
          puVar15[1] = ((int)arm_spsr_restore - (int)(puVar15 + 1) >> 2) - 2U & 0xffffff |
                       0xea000000;
          cpu_translate->translation_ptr = puVar15 + 2;
        }
      }
    }
    if (local_f8 != (u32 *)0x0) {
      pcVar30 = &saved_reg_alloc;
      uVar12 = 0;
      pcVar10 = cpu_translate;
      do {
        uVar18 = (uint)(pcVar10->reg_alloc).native_regs[0].mapped_reg;
        bVar2 = pcVar30->native_regs[0].mapped_reg;
        uVar20 = (uint)bVar2;
        if (uVar18 != uVar20) {
          iVar21 = uVar20 - uVar18;
          uVar6 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar20];
          if (iVar21 != 0) {
            iVar21 = 1;
          }
          if (0xfc < uVar18) {
            iVar21 = 0;
          }
          if (((iVar21 != 0) &&
              ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar18] = 0xff,
              (pcVar10->reg_alloc).native_regs[0].dirty != '\0')) &&
             (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar18 & 1U) != 0))
          {
            uVar16 = (uVar18 + 0x3fffffeb) * 4;
            if ((int)uVar16 < 0) {
              uVar26 = 0;
            }
            else {
              uVar26 = 0x800000;
            }
            puVar15 = cpu_translate->translation_ptr;
            if ((int)uVar16 < 0) {
              uVar16 = (uVar18 + 0x3fffffeb) * -4;
            }
            *puVar15 = uVar16 | uVar12 << 0xc | 0xe50b0000 | uVar26;
            cpu_translate->translation_ptr = puVar15 + 1;
          }
          if (uVar20 < 0xfd) {
            (cpu_translate->reg_alloc).emulated_reg_maps_to[uVar20] = (u8)uVar12;
          }
          (pcVar10->reg_alloc).native_regs[0].mapped_reg = bVar2;
          if (uVar20 < 0xfd) {
            if (uVar6 < 0xfd) {
              if (uVar12 != uVar6) {
                puVar15 = cpu_translate->translation_ptr;
                *puVar15 = uVar12 << 0xc | 0xe1a00000 | uVar6;
                cpu_translate->translation_ptr = puVar15 + 1;
              }
            }
            else {
              puVar15 = cpu_translate->translation_ptr;
              uVar18 = (uVar20 - 0x15) * 4;
              if ((int)uVar18 < 0) {
                uVar6 = 0;
                uVar18 = (uVar20 - 0x15) * -4;
              }
              else {
                uVar6 = 0x800000;
              }
              *puVar15 = uVar18 | uVar12 << 0xc | 0xe51b0000 | uVar6;
              cpu_translate->translation_ptr = puVar15 + 1;
            }
          }
        }
        uVar12 = uVar12 + 1;
        pcVar10 = (cpu_translate_struct *)(pcVar10->translation_stub_buffer + 2);
        pcVar30 = (cpu_translate_register_allocation_struct *)(pcVar30->native_regs + 1);
      } while (uVar12 != 0xf);
      *local_f8 = ((int)cpu_translate->translation_ptr - (int)local_f8 >> 2) - 2U & 0xffffff |
                  *local_f8 & 0xff000000;
    }
LAB_080b53dc:
    uVar18 = cpu_translate->flags_cached;
    goto LAB_080b4e34;
  case 4:
    uVar12 = uVar20 >> 0x1c;
    uVar18 = cpu_translate->current_pc;
    if (cpu_translate->thumb_mode != '\0') {
      uVar18 = uVar18 | 1;
    }
    if (uVar12 == 0xf) {
      uVar5 = cpu_translate_allocate_reg(cpu_translate,0xe,0,&fresh_allocation);
      (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
      puVar15 = cpu_translate->translation_ptr;
      bVar34 = (uVar18 & 0xffff0000) == 0;
      if (bVar34) {
        uVar12 = 0xe;
      }
      *puVar15 = uVar18 & 0xfff | 0xe3000000 | ((uVar18 << 0x10) >> 0x1c) << 0x10 | uVar5 << 0xc;
      cpu_translate->translation_ptr = puVar15 + 1;
      if (!bVar34) {
        uVar12 = 0xe;
        puVar15[1] = (uVar18 << 4) >> 0x14 | (uVar18 >> 0x1c) << 0x10 | 0xe3400000 | uVar5 << 0xc;
        cpu_translate->translation_ptr = puVar15 + 2;
      }
    }
    else if ((uVar20 & 0x1000000) != 0) {
      cpu_translate_set_lr(cpu_translate,uVar18,uVar12);
    }
    cpu_translate_direct_link(cpu_translate,uVar12);
    uVar18 = cpu_translate->flags_cached;
    goto LAB_080b4e34;
  case 5:
    if (cpu_translate->current_cpu->coprocessor != (coprocessor_struct *)0x0) goto LAB_080b4e34;
    break;
  case 6:
    if ((uVar20 & 0x1000000) != 0) {
      cpu_translate_raise_exception(cpu_translate,2,3,uVar20 >> 0x1c);
      uVar18 = cpu_translate->flags_cached;
      goto LAB_080b4e34;
    }
    if (pcVar25->coprocessor != (coprocessor_struct *)0x0) {
      if ((uVar20 & 0x10) == 0) goto LAB_080b4e34;
      cpu_translate_coprocessor_register_transfer_op(cpu_translate,uVar20);
      goto LAB_080b53dc;
    }
    break;
  default:
    if ((uVar20 & 0x90) == 0x90) {
      if ((uVar20 >> 5 & 3) != 0) {
        uVar7 = (uVar20 << 0xb) >> 0x1f;
        uVar5 = (uVar7 ^ 1) & uVar20 >> 6;
        uVar12 = uVar20 >> 5 & 1;
        if (uVar5 != 0) {
          uVar7 = uVar12 ^ 1;
          if ((uVar20 & 0x1000) != 0) break;
          uVar5 = 1;
        }
        if ((uVar20 & 0x400000) == 0) {
          cpu_translate_memory_op(cpu_translate,uVar20,uVar7,1,uVar12,uVar5,1,0);
          uVar18 = cpu_translate->flags_cached;
        }
        else {
          cpu_translate_memory_op
                    (cpu_translate,uVar20,uVar7,1,uVar12,uVar5,0,uVar20 >> 4 & 0xf0 | uVar20 & 0xf);
          uVar18 = cpu_translate->flags_cached;
        }
        goto LAB_080b4e34;
      }
      uVar12 = uVar20 >> 0x15;
      uVar16 = uVar12 & 0xf;
      if (uVar16 < 8) {
        if ((uVar20 & 0x800000) != 0) {
          uVar7 = cpu_translate_allocate_src_reg(cpu_translate,uVar20 & 0xf,uVar5);
          uVar8 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0x14) >> 0x1c,uVar5);
          uVar18 = (uVar20 << 0x10) >> 0x1c;
          uVar6 = (uVar20 << 0xc) >> 0x1c;
          if ((uVar12 & 1) == 0) {
            uVar9 = cpu_translate_allocate_dest_reg(cpu_translate,uVar18,1,uVar20 >> 0x1c);
            native_rd_hi_1 = cpu_translate_allocate_dest_reg(cpu_translate,uVar6,1,uVar20 >> 0x1c);
          }
          else {
            uVar9 = cpu_translate_allocate_src_reg(cpu_translate,uVar18,uVar5);
            native_rd_hi_1 = cpu_translate_allocate_src_reg(cpu_translate,uVar6,uVar5);
            (cpu_translate->reg_alloc).native_regs[uVar9].dirty = '\x01';
            (cpu_translate->reg_alloc).native_regs[native_rd_hi_1].dirty = '\x01';
          }
          puVar15 = cpu_translate->translation_ptr;
          *puVar15 = uVar20 & 0xf0000000 | 0x90 | (uVar12 & 7) << 0x15 |
                     ((uVar20 << 0xb) >> 0x1f) << 0x14 | uVar7 | uVar8 << 8 | native_rd_hi_1 << 0x10
                     | uVar9 << 0xc;
          uVar18 = cpu_translate->flags_cached;
          cpu_translate->translation_ptr = puVar15 + 1;
          goto LAB_080b4e34;
        }
        uVar7 = cpu_translate_allocate_src_reg(cpu_translate,uVar20 & 0xf,uVar5);
        uVar18 = (uVar20 << 0xc) >> 0x1c;
        uVar8 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0x14) >> 0x1c,uVar5);
        uVar12 = (uVar20 << 0xb) >> 0x1f;
        if ((uVar20 & 0x200000) == 0) {
          uVar5 = cpu_translate_allocate_dest_reg(cpu_translate,uVar18,1,uVar20 >> 0x1c);
          puVar15 = cpu_translate->translation_ptr;
          *puVar15 = uVar20 & 0xf0000000 | 0x90 | uVar12 << 0x14 | uVar7 | uVar8 << 8 |
                     uVar5 << 0x10;
          uVar18 = cpu_translate->flags_cached;
          cpu_translate->translation_ptr = puVar15 + 1;
          goto LAB_080b4e34;
        }
        uVar9 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0x10) >> 0x1c,uVar5);
        uVar5 = cpu_translate_allocate_dest_reg(cpu_translate,uVar18,1,uVar20 >> 0x1c);
        puVar15 = cpu_translate->translation_ptr;
        uVar12 = uVar20 & 0xf0000000 | 0x200090 | uVar12 << 0x14 | uVar7 | uVar8 << 8;
LAB_080b6cb4:
        *puVar15 = uVar12 | uVar5 << 0x10 | uVar9 << 0xc;
        uVar18 = cpu_translate->flags_cached;
        cpu_translate->translation_ptr = puVar15 + 1;
        goto LAB_080b4e34;
      }
      if (uVar16 == 8) {
        uVar16 = (uVar20 << 0xc) >> 0x1c;
        condition_9 = uVar20 & 0xf;
        uVar12 = (uVar20 << 0x10) >> 0x1c;
        uVar28 = (uint)cpu_translate->current_instruction->live_flags;
        uVar26 = uVar28 & uVar18;
        puVar15 = (u32 *)(uVar26 & 0xfffffffe);
        if ((uVar6 & (uint)puVar15) != 0) {
          uVar5 = cpu_translate_allocate_reg
                            (cpu_translate,(u32)&fresh_allocation,condition_9,puVar15);
          if ((uVar28 & 0xfffffffe & ~(uVar18 & 0xfffffffe)) == 0) {
            ppuVar31 = (u32 **)(cpu_translate->translation_ptr + 1);
            *cpu_translate->translation_ptr = uVar5 << 0xc | 0xe3a00000;
            cpu_translate->translation_ptr = (u32 *)ppuVar31;
          }
          else {
            puVar33 = cpu_translate->translation_ptr;
            ppuVar31 = (u32 **)(puVar33 + 2);
            *puVar33 = uVar5 << 0xc | 0xe51b0080;
            puVar33[1] = (uint)puVar15 | 0xe3c00200 | uVar5 << 0xc | uVar5 << 0x10;
            cpu_translate->translation_ptr = (u32 *)ppuVar31;
          }
          uVar18 = uVar5 << 0xc;
          ppuVar32 = ppuVar31;
          if ((uVar26 & 2) != 0) {
            ppuVar32 = ppuVar31 + 1;
            *ppuVar31 = (u32 *)(uVar18 | uVar5 << 0x10 | 0x23800202);
            cpu_translate->translation_ptr = (u32 *)ppuVar32;
          }
          ppuVar31 = ppuVar32;
          if ((uVar26 & 4) != 0) {
            ppuVar31 = ppuVar32 + 1;
            *ppuVar32 = (u32 *)(uVar18 | uVar5 << 0x10 | 0x3800204);
            cpu_translate->translation_ptr = (u32 *)ppuVar31;
          }
          ppuVar32 = ppuVar31;
          if ((uVar26 & 8) != 0) {
            ppuVar32 = ppuVar31 + 1;
            *ppuVar31 = (u32 *)(uVar18 | uVar5 << 0x10 | 0x43800208);
            cpu_translate->translation_ptr = (u32 *)ppuVar32;
          }
          uVar3 = (cpu_translate->reg_alloc).locked_regs;
          puVar15 = (u32 *)(uVar18 | 0xe50b0080);
          *ppuVar32 = puVar15;
          cpu_translate->translation_ptr = (u32 *)(ppuVar32 + 1);
          (cpu_translate->reg_alloc).locked_regs = uVar3 & ~(ushort)(1 << (uVar5 & 0xff));
        }
        cpu_translate->flags_cached = 1;
        cpu_translate->flags_dirty = 0;
        cpu_translate_load_reg_fixed(cpu_translate,uVar16,0);
        cpu_translate_map_reg(cpu_translate,1,0,(u32)puVar15);
        cpu_translate_map_reg(cpu_translate,0xe,0,(u32)puVar15);
        puVar11 = cpu_translate->translation_ptr;
        puVar15 = (u32 *)0x0;
        puVar33 = puVar11;
        if (uVar20 >> 0x1c < 0xe) {
          puVar33 = puVar11 + 1;
          *puVar11 = 0xfffffffeU - ((int)puVar11 >> 2) & 0xffffff | (uVar20 >> 0x1c ^ 1) << 0x1c |
                     0xa000000;
          cpu_translate->translation_ptr = puVar33;
          puVar15 = puVar11;
        }
        *puVar33 = ((int)arm_load_memory32_unsigned - (int)puVar33 >> 2) - 2U & 0xffffff |
                   0xeb000000;
        cpu_translate->translation_ptr = puVar33 + 1;
        store_memory_function_1 = arm_store_memory32_arm7;
        if (cpu_translate->cpu_type == '\x01') {
          store_memory_function_1 = arm_store_memory32_arm9;
        }
        if (condition_9 == uVar12 || uVar16 == uVar12) {
          puVar33[1] = 0xe50b0100;
          cpu_translate->translation_ptr = puVar33 + 2;
          cpu_translate_load_reg_fixed(cpu_translate,uVar16,0);
          cpu_translate_load_reg_fixed(cpu_translate,condition_9,1);
          puVar33 = cpu_translate->translation_ptr;
          *puVar33 = ((int)store_memory_function_1 - (int)puVar33 >> 2) - 2U & 0xffffff | 0xeb000000
          ;
          cpu_translate->translation_ptr = puVar33 + 1;
          cpu_translate_store_pc_metadata(cpu_translate,cpu_translate->current_pc);
          puVar33 = cpu_translate->translation_ptr;
          uVar3 = (cpu_translate->reg_alloc).locked_regs;
          *puVar33 = 0xe51b0100;
          (cpu_translate->reg_alloc).locked_regs = uVar3 & 0xfffd;
          cpu_translate->translation_ptr = puVar33 + 1;
          uVar18 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar12];
          if (uVar18 == 0xff) {
            puVar33[1] = uVar12 * -4 + 0x54 | 0xe50b0000;
            cpu_translate->translation_ptr = puVar33 + 2;
          }
          else {
            puVar33[1] = uVar18 << 0xc | 0xe1a00000;
            cpu_translate->translation_ptr = puVar33 + 2;
          }
        }
        else {
          uVar18 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar12];
          if (uVar18 == 0xff) {
            uVar18 = (uVar12 + 0x3fffffeb) * 4;
            bVar34 = -1 < (int)uVar18;
            if (!bVar34) {
              uVar18 = (uVar12 + 0x3fffffeb) * -4;
            }
            puVar33[1] = uVar18 | (uint)bVar34 << 0x17 | 0xe50b0000;
            cpu_translate->translation_ptr = puVar33 + 2;
          }
          else {
            puVar33[1] = uVar18 << 0xc | 0xe1a00000;
            cpu_translate->translation_ptr = puVar33 + 2;
          }
          cpu_translate_load_reg_fixed(cpu_translate,uVar16,0);
          cpu_translate_load_reg_fixed(cpu_translate,condition_9,1);
          puVar33 = cpu_translate->translation_ptr;
          *puVar33 = ((int)store_memory_function_1 - (int)puVar33 >> 2) - 2U & 0xffffff | 0xeb000000
          ;
          cpu_translate->translation_ptr = puVar33 + 1;
          cpu_translate_store_pc_metadata(cpu_translate,cpu_translate->current_pc);
        }
        if (puVar15 != (u32 *)0x0) {
          *puVar15 = ((int)cpu_translate->translation_ptr - (int)puVar15 >> 2) - 2U & 0xffffff |
                     *puVar15 & 0xff000000;
          uVar18 = cpu_translate->flags_cached;
          goto LAB_080b4e34;
        }
      }
      else {
        if (uVar16 != 10) break;
        uVar12 = uVar20 >> 0x1c;
        uVar16 = (uVar20 << 0xc) >> 0x1c;
        condition_5 = uVar20 & 0xf;
        uVar20 = (uVar20 << 0x10) >> 0x1c;
        uVar28 = (uint)cpu_translate->current_instruction->live_flags;
        uVar26 = uVar28 & uVar18;
        puVar15 = (u32 *)(uVar26 & 0xfffffffe);
        if ((uVar6 & (uint)puVar15) != 0) {
          uVar5 = cpu_translate_allocate_reg
                            (cpu_translate,(u32)&fresh_allocation,condition_5,puVar15);
          if ((uVar28 & 0xfffffffe & ~(uVar18 & 0xfffffffe)) == 0) {
            puVar33 = cpu_translate->translation_ptr + 1;
            *cpu_translate->translation_ptr = uVar5 << 0xc | 0xe3a00000;
            cpu_translate->translation_ptr = puVar33;
          }
          else {
            puVar11 = cpu_translate->translation_ptr;
            puVar33 = puVar11 + 2;
            *puVar11 = uVar5 << 0xc | 0xe51b0080;
            puVar11[1] = (uint)puVar15 | 0xe3c00200 | uVar5 << 0xc | uVar5 << 0x10;
            cpu_translate->translation_ptr = puVar33;
          }
          uVar18 = uVar5 << 0xc;
          puVar15 = puVar33;
          if ((uVar26 & 2) != 0) {
            puVar15 = puVar33 + 1;
            *puVar33 = uVar18 | uVar5 << 0x10 | 0x23800202;
            cpu_translate->translation_ptr = puVar15;
          }
          puVar33 = puVar15;
          if ((uVar26 & 4) != 0) {
            puVar33 = puVar15 + 1;
            *puVar15 = uVar18 | uVar5 << 0x10 | 0x3800204;
            cpu_translate->translation_ptr = puVar33;
          }
          puVar15 = puVar33;
          if ((uVar26 & 8) != 0) {
            puVar15 = puVar33 + 1;
            *puVar33 = uVar18 | uVar5 << 0x10 | 0x43800208;
            cpu_translate->translation_ptr = puVar15;
          }
          uVar3 = (cpu_translate->reg_alloc).locked_regs;
          *puVar15 = uVar18 | 0xe50b0080;
          cpu_translate->translation_ptr = puVar15 + 1;
          (cpu_translate->reg_alloc).locked_regs = uVar3 & ~(ushort)(1 << (uVar5 & 0xff));
        }
        puVar15 = (u32 *)0x1;
        cpu_translate->flags_cached = 1;
        cpu_translate->flags_dirty = 0;
        cpu_translate_load_reg_fixed(cpu_translate,uVar16,0);
        uVar18 = (uint)(cpu_translate->reg_alloc).native_regs[1].mapped_reg;
        if (((uVar18 < 0xfd) &&
            ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar18] = 0xff,
            (cpu_translate->reg_alloc).native_regs[1].dirty != '\0')) &&
           (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar18 & 1U) != 0)) {
          puVar33 = cpu_translate->translation_ptr;
          uVar6 = (uVar18 + 0x3fffffeb) * 4;
          bVar34 = -1 < (int)uVar6;
          if (!bVar34) {
            uVar6 = (uVar18 + 0x3fffffeb) * -4;
          }
          puVar15 = (u32 *)(uint)bVar34;
          *puVar33 = uVar6 | (int)puVar15 << 0x17 | 0xe50b1000;
          cpu_translate->translation_ptr = puVar33 + 1;
        }
        uVar18 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
        (cpu_translate->reg_alloc).native_regs[1].mapped_reg = 0xfd;
        if (((uVar18 < 0xfd) &&
            ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar18] = 0xff,
            (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
           (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar18 & 1U) != 0)) {
          uVar6 = (uVar18 + 0x3fffffeb) * 4;
          bVar34 = (int)uVar6 < 0;
          if (bVar34) {
            uVar6 = (uVar18 + 0x3fffffeb) * -4;
          }
          puVar33 = cpu_translate->translation_ptr + 1;
          *cpu_translate->translation_ptr = uVar6 | (uint)!bVar34 << 0x17 | 0xe50be000;
          cpu_translate->translation_ptr = puVar33;
        }
        else {
          puVar33 = cpu_translate->translation_ptr;
        }
        if (0xd < uVar12) {
          puVar15 = (u32 *)0x0;
        }
        (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xfd;
        puVar11 = puVar33;
        if (uVar12 < 0xe) {
          puVar11 = puVar33 + 1;
          *puVar33 = 0xfffffffeU - ((int)puVar33 >> 2) & 0xffffff | (uVar12 ^ 1) << 0x1c | 0xa000000
          ;
          puVar15 = puVar33;
        }
        *puVar11 = ((int)arm_load_memory8_unsigned - (int)puVar11 >> 2) - 2U & 0xffffff | 0xeb000000
        ;
        cpu_translate->translation_ptr = puVar11 + 1;
        store_memory_function = arm_store_memory8_arm7;
        if (cpu_translate->cpu_type == '\x01') {
          store_memory_function = arm_store_memory8_arm9;
        }
        if (condition_5 == uVar20 || uVar16 == uVar20) {
          puVar11[1] = 0xe50b0100;
          cpu_translate->translation_ptr = puVar11 + 2;
          cpu_translate_load_reg_fixed(cpu_translate,uVar16,0);
          cpu_translate_load_reg_fixed(cpu_translate,condition_5,1);
          puVar33 = cpu_translate->translation_ptr;
          *puVar33 = ((int)store_memory_function - (int)puVar33 >> 2) - 2U & 0xffffff | 0xeb000000;
          cpu_translate->translation_ptr = puVar33 + 1;
          cpu_translate_store_pc_metadata(cpu_translate,cpu_translate->current_pc);
          puVar33 = cpu_translate->translation_ptr;
          uVar3 = (cpu_translate->reg_alloc).locked_regs;
          *puVar33 = 0xe51b0100;
          (cpu_translate->reg_alloc).locked_regs = uVar3 & 0xfffd;
          cpu_translate->translation_ptr = puVar33 + 1;
          uVar12 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar20];
          if (uVar12 == 0xff) {
            puVar33[1] = uVar20 * -4 + 0x54 | 0xe50b0000;
            cpu_translate->translation_ptr = puVar33 + 2;
          }
          else {
            puVar33[1] = uVar12 << 0xc | 0xe1a00000;
            cpu_translate->translation_ptr = puVar33 + 2;
          }
        }
        else {
          uVar12 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar20];
          if (uVar12 == 0xff) {
            uVar12 = (uVar20 + 0x3fffffeb) * 4;
            bVar34 = -1 < (int)uVar12;
            if (!bVar34) {
              uVar12 = (uVar20 + 0x3fffffeb) * -4;
            }
            puVar11[1] = uVar12 | (uint)bVar34 << 0x17 | 0xe50b0000;
            cpu_translate->translation_ptr = puVar11 + 2;
          }
          else {
            puVar11[1] = uVar12 << 0xc | 0xe1a00000;
            cpu_translate->translation_ptr = puVar11 + 2;
          }
          cpu_translate_load_reg_fixed(cpu_translate,uVar16,0);
          cpu_translate_load_reg_fixed(cpu_translate,condition_5,1);
          puVar11 = cpu_translate->translation_ptr;
          puVar33 = cpu_translate->pc_metadata_ptr;
          puVar22 = cpu_translate->current_pc_metadata_ptr;
          puVar17 = cpu_translate->translation_ptr_code_base;
          *puVar11 = ((int)store_memory_function - (int)puVar11 >> 2) - 2U & 0xffffff | 0xeb000000;
          uVar12 = (int)(puVar11 + 1) - (int)puVar17 >> 2;
          cpu_translate->translation_ptr = puVar11 + 1;
          uVar18 = cpu_translate->current_pc - cpu_translate->base_pc;
          if (cpu_translate->pc_metadata_count <= (uint)((int)puVar22 - (int)puVar33 >> 2)) {
            __printf_chk(1,"FATAL: went past metadata storage of %d for block @ %p (%x)\n",
                         cpu_translate->pc_metadata_count,puVar17,cpu_translate->current_pc);
          }
          if (0xffff < uVar18) {
            __printf_chk(1,"FATAL: pc_delta in stored PC metadata is %x\n",uVar18);
          }
          if (0xffff < uVar12) {
            __printf_chk(1,"FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar12);
          }
          puVar33 = cpu_translate->current_pc_metadata_ptr;
          *puVar22 = uVar18 | uVar12 << 0x10;
          cpu_translate->current_pc_metadata_ptr = puVar33 + 1;
        }
        if (puVar15 != (u32 *)0x0) {
          *puVar15 = ((int)cpu_translate->translation_ptr - (int)puVar15 >> 2) - 2U & 0xffffff |
                     *puVar15 & 0xff000000;
          uVar18 = cpu_translate->flags_cached;
          goto LAB_080b4e34;
        }
      }
      goto LAB_080b53dc;
    }
    if (((uVar20 << 7) >> 0x1e != 2) || ((uVar20 & 0x100000) != 0)) goto LAB_080b539c;
    if ((uVar20 & 0x80) == 0) {
      uVar5 = uVar20 & 0x10;
      if (uVar5 == 0) {
        if ((uVar20 & 0x200000) == 0) {
          cpu_translate_mrs_op(cpu_translate,uVar20);
          uVar18 = cpu_translate->flags_cached;
        }
        else {
          cpu_translate_load_reg_fixed(cpu_translate,uVar20 & 0xf,0);
          cpu_translate_msr_op(cpu_translate,uVar20);
          uVar18 = cpu_translate->flags_cached;
        }
        goto LAB_080b4e34;
      }
      uVar12 = (uVar20 << 0x19) >> 0x1e;
      if (uVar12 == 2) {
        if (pcVar25->type == '\x01') {
          uVar7 = cpu_translate_allocate_src_reg(cpu_translate,uVar20 & 0xf,uVar5);
          uVar5 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0xc) >> 0x1c,uVar5);
          uVar8 = cpu_translate_allocate_dest_reg
                            (cpu_translate,(uVar20 << 0x10) >> 0x1c,1,uVar20 >> 0x1c);
          puVar15 = cpu_translate->translation_ptr;
          *puVar15 = uVar20 & 0x700000 | uVar20 & 0xf0000000 | 0x1000050 | uVar7 | uVar8 << 0xc |
                     uVar5 << 0x10;
          uVar18 = cpu_translate->flags_cached;
          cpu_translate->translation_ptr = puVar15 + 1;
          goto LAB_080b4e34;
        }
      }
      else {
        if (uVar12 != 3) {
          if (uVar12 == 1) {
            if (pcVar25->type != '\x01') break;
          }
          else if ((uVar20 & 0x400000) != 0) {
            if (pcVar25->type == '\x01') {
              uVar5 = cpu_translate_allocate_src_reg(cpu_translate,uVar20 & 0xf,uVar5);
              uVar7 = cpu_translate_allocate_dest_reg
                                (cpu_translate,(uVar20 << 0x10) >> 0x1c,1,uVar20 >> 0x1c);
              puVar15 = cpu_translate->translation_ptr;
              *puVar15 = uVar20 & 0xf0000000 | 0x16f0f10 | uVar5 | uVar7 << 0xc;
              uVar18 = cpu_translate->flags_cached;
              cpu_translate->translation_ptr = puVar15 + 1;
            }
            goto LAB_080b4e34;
          }
          cpu_translate_bx_op(cpu_translate,uVar20);
          uVar18 = cpu_translate->flags_cached;
          goto LAB_080b4e34;
        }
        if ((pcVar25->type == '\x01') && (uVar20 >> 0x1c == 0xe)) {
          cpu_translate_raise_exception(cpu_translate,3,4,0xe);
          uVar18 = cpu_translate->flags_cached;
          goto LAB_080b4e34;
        }
      }
    }
    else if (pcVar25->type == '\x01') {
      uVar18 = (uVar20 << 9) >> 0x1e;
      uVar12 = uVar20 & 0xf;
      if (uVar18 != 1) {
        if (uVar18 == 2) {
          uVar7 = cpu_translate_allocate_src_reg(cpu_translate,uVar12,uVar5);
          uVar8 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0x14) >> 0x1c,uVar5);
          uVar9 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0x10) >> 0x1c,uVar5);
          uVar5 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0xc) >> 0x1c,uVar5);
          (cpu_translate->reg_alloc).native_regs[uVar9].dirty = '\x01';
          (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
          puVar15 = cpu_translate->translation_ptr;
          *puVar15 = uVar20 & 0x60 | uVar20 & 0xf0000000 | 0x1400080 | uVar7 | uVar5 << 0x10 |
                     uVar8 << 8 | uVar9 << 0xc;
          uVar18 = cpu_translate->flags_cached;
          cpu_translate->translation_ptr = puVar15 + 1;
        }
        else {
          uVar7 = cpu_translate_allocate_src_reg(cpu_translate,uVar12,uVar5);
          uVar12 = (uVar20 << 0xc) >> 0x1c;
          uVar8 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0x14) >> 0x1c,uVar5);
          uVar18 = (uVar20 << 0x1a) >> 0x1f;
          x = uVar20 << 0x19;
          x = x >> 0x1f;
          if ((uVar20 & 0x200000) == 0) {
            uVar5 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0x10) >> 0x1c,uVar5);
            uVar9 = cpu_translate_allocate_dest_reg(cpu_translate,uVar12,1,uVar20 >> 0x1c);
            puVar15 = cpu_translate->translation_ptr;
            *puVar15 = uVar20 & 0xf0000000 | 0x1000080 | uVar18 << 5 | x << 6 | uVar7 | uVar8 << 8 |
                       uVar9 << 0x10 | uVar5 << 0xc;
            uVar18 = cpu_translate->flags_cached;
            cpu_translate->translation_ptr = puVar15 + 1;
          }
          else {
            uVar5 = cpu_translate_allocate_dest_reg(cpu_translate,uVar12,1,uVar20 >> 0x1c);
            puVar15 = cpu_translate->translation_ptr;
            *puVar15 = uVar20 & 0xf0000000 | 0x1600080 | uVar18 << 5 | x << 6 | uVar7 | uVar8 << 8 |
                       uVar5 << 0x10;
            uVar18 = cpu_translate->flags_cached;
            cpu_translate->translation_ptr = puVar15 + 1;
          }
        }
        goto LAB_080b4e34;
      }
      uVar7 = cpu_translate_allocate_src_reg(cpu_translate,uVar12,uVar5);
      uVar12 = (uVar20 << 0xc) >> 0x1c;
      uVar18 = (uVar20 << 0x19) >> 0x1f;
      uVar8 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0x14) >> 0x1c,uVar5);
      if ((uVar20 & 0x20) != 0) {
        uVar5 = cpu_translate_allocate_dest_reg(cpu_translate,uVar12,1,uVar20 >> 0x1c);
        puVar15 = cpu_translate->translation_ptr;
        *puVar15 = uVar20 & 0xf0000000 | 0x12000a0 | uVar18 << 6 | uVar7 | uVar8 << 8 |
                   uVar5 << 0x10;
        uVar18 = cpu_translate->flags_cached;
        cpu_translate->translation_ptr = puVar15 + 1;
        goto LAB_080b4e34;
      }
      uVar9 = cpu_translate_allocate_src_reg(cpu_translate,(uVar20 << 0x10) >> 0x1c,uVar5);
      uVar5 = cpu_translate_allocate_dest_reg(cpu_translate,uVar12,1,uVar20 >> 0x1c);
      puVar15 = cpu_translate->translation_ptr;
      uVar12 = uVar20 & 0xf0000000 | 0x1200080 | uVar18 << 6 | uVar7 | uVar8 << 8;
      goto LAB_080b6cb4;
    }
  }
  cpu_translate_raise_exception(cpu_translate,1,5,0xe);
  uVar18 = cpu_translate->flags_cached;
LAB_080b4e34:
  bVar34 = iVar4 == __stack_chk_guard;
  cpu_translate->flags_cached = uVar18 | pcVar23->source_dest_flags >> 4;
  if (bVar34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


