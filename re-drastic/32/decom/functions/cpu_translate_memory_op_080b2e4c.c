/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_memory_op
 * Address  : 080b2e4c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable address_reg:u32[r0:4] conflicts with parameter, skipped.
   Local variable branch_offset:u32[r2:4] conflicts with parameter, skipped. */

void cpu_translate_memory_op
               (cpu_translate_struct *cpu_translate,u32 opcode,u32 load_store,u32 byte_access,
               u32 halfword_access,u32 doubleword_access,u32 operand_type,u32 operand_value)

{
  ushort uVar1;
  u8 uVar2;
  byte bVar3;
  u16 uVar4;
  uint uVar5;
  u32 rn;
  u32 native_rd;
  u32 mapped_reg;
  u8 *puVar6;
  u32 native_rn;
  u32 native_rd_1;
  u32 mapped_reg_1;
  u32 mapped_reg_3;
  u32 dest_4;
  u32 constant_value;
  uint uVar7;
  u8 *emulated_reg_maps_to;
  u32 uVar8;
  translation_cache_struct *ptVar9;
  uint uVar10;
  u32 memory_map_offset_value;
  void *pvVar11;
  u32 *puVar12;
  int iVar13;
  cpu_instruction_struct *pcVar14;
  code *pcVar15;
  s32 _imm_1;
  uint uVar16;
  u32 mapped_reg_4;
  uint uVar17;
  u32 rd;
  u32 mapped_reg_5;
  u32 mapped_reg_6;
  s32 _imm;
  int iVar18;
  u32 mapped_reg_7;
  code *pcVar19;
  void *store_memory_function;
  u32 dest_2;
  u32 dest_3;
  u32 mapped_reg_2;
  u32 condition;
  u32 condition_1;
  s32 relocation_delta;
  u32 translation_ptr_delta;
  void *store_memory_function_1;
  u32 condition_2;
  u32 dest;
  u32 dest_1;
  u32 *puVar20;
  u32 *pc_storage_ptr;
  cpu_struct *cpu_00;
  cpu_struct *cpu;
  u32 pc_delta;
  u32 uVar21;
  u32 pc_relative_address;
  u32 *puVar22;
  u32 *ptr_u32_1;
  u32 *ptr_u32;
  u32 *puVar23;
  u32 *puVar24;
  u32 memory_map_offset_shift;
  bool bVar25;
  bool bVar26;
  s32 _imm_6;
  u32 rd_2;
  s32 _imm_4;
  code *local_4c;
  void *load_memory_function_u8;
  void *load_memory_function_s16;
  void *load_memory_function_u16;
  void *load_memory_function_u32;
  code *local_38;
  code *local_34;
  u32 fresh_allocation;
  int local_2c;
  
  uVar10 = opcode >> 0x1c;
  uVar5 = (opcode << 0xc) >> 0x1c;
  uVar17 = (opcode << 0x10) >> 0x1c;
  local_2c = __stack_chk_guard;
  if (uVar10 == 0xf) goto LAB_080b34ec;
  uVar8 = load_store;
  if (load_store != 0) {
    uVar8 = 1;
  }
  if (uVar5 == 0xf) {
    uVar7 = uVar8 & 1;
  }
  else {
    uVar7 = 0;
  }
  uVar16 = (uint)(doubleword_access == 0);
  if (((uVar16 & uVar7) == 0) || ((opcode & 0x1200000) != 0x1000000 || operand_type != 0)) {
    uVar7 = uVar16;
    if (uVar5 != 0xd) {
      uVar7 = 0;
    }
    if (uVar7 != 0) {
      if (cpu_translate->cpu_type != '\x01') goto LAB_080b30c4;
      if ((cpu_translate->current_cpu->coprocessor->dtcm_in_mapped_memory == '\0') ||
         (cpu_translate->memory_map_offset != 0)) goto LAB_080b3520;
      uVar21 = cpu_translate_allocate_src_reg(cpu_translate,0xd,uVar8);
      if (operand_type == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = cpu_translate_allocate_src_reg(cpu_translate,opcode & 0xf,uVar8);
      }
      uVar17 = (opcode << 0x10) >> 0x1c;
      if (load_store == 0) {
        native_rd_1 = cpu_translate_allocate_src_reg(cpu_translate,uVar17,uVar8);
      }
      else {
        native_rd_1 = cpu_translate_allocate_dest_reg(cpu_translate,uVar17,1,uVar10);
      }
      if ((opcode & 0x1000000) == 0) {
        iVar18 = 0;
LAB_080b3fe0:
        (cpu_translate->reg_alloc).native_regs[uVar21].dirty = '\x01';
      }
      else {
        if ((opcode & 0x200000) != 0) {
          iVar18 = 9;
          goto LAB_080b3fe0;
        }
        iVar18 = 8;
      }
      if ((halfword_access == 0) && (byte_access != 0)) {
        iVar13 = 2;
        load_memory_function_u8 = (void *)byte_access;
      }
      else {
        if (_imm_6 == 0) {
          iVar13 = 1;
        }
        else {
          iVar13 = 3;
        }
        load_memory_function_u8 = (void *)0x0;
      }
      uVar10 = opcode & 0x800000;
      if (uVar10 == 0) {
        operand_value = -operand_value;
      }
      if (operand_type == 1) {
        uVar10 = uVar10 | load_store << 0x14;
        if ((halfword_access == 0) && (load_memory_function_u8 == (void *)0x0 || _imm_6 == 0)) {
          uVar10 = uVar10 | 0x6000000;
          puVar22 = cpu_translate->translation_ptr;
LAB_080b3aa4:
          *puVar22 = uVar10 | opcode & 0xf0000000 | uVar21 << 0x10 | uVar5 | native_rd_1 << 0xc |
                     iVar18 << 0x15 | (int)load_memory_function_u8 << 0x16;
          cpu_translate->translation_ptr = puVar22 + 1;
        }
        else {
          puVar22 = cpu_translate->translation_ptr;
          *puVar22 = uVar10 | 0x90 | opcode & 0xf0000000 | uVar21 << 0x10 | uVar5 |
                     native_rd_1 << 0xc | iVar18 << 0x15 | iVar13 << 5;
          cpu_translate->translation_ptr = puVar22 + 1;
        }
      }
      else if (operand_type == 0) {
        if ((halfword_access == 0) && (load_memory_function_u8 == (void *)0x0 || _imm_6 == 0)) {
          puVar22 = cpu_translate->translation_ptr;
          if ((int)operand_value < 0) {
            operand_value = -operand_value;
            uVar10 = 0;
          }
          else {
            uVar10 = 0x800000;
          }
          *puVar22 = operand_value |
                     load_store << 0x14 | 0x4000000 | opcode & 0xf0000000 | uVar21 << 0x10 |
                     native_rd_1 << 0xc | iVar18 << 0x15 | (int)load_memory_function_u8 << 0x16 |
                     uVar10;
          cpu_translate->translation_ptr = puVar22 + 1;
        }
        else {
          puVar22 = cpu_translate->translation_ptr;
          bVar26 = (int)operand_value < 0;
          if (bVar26) {
            operand_value = -operand_value;
          }
          uVar10 = 0;
          if (!bVar26) {
            uVar10 = 0x800000;
          }
          *puVar22 = load_store << 0x14 | 0x400090 | opcode & 0xf0000000 | uVar21 << 0x10 |
                     native_rd_1 << 0xc | iVar18 << 0x15 | iVar13 << 5 | uVar10 |
                     operand_value & 0xf | ((int)operand_value >> 4) << 8;
          cpu_translate->translation_ptr = puVar22 + 1;
        }
      }
      else if (operand_type == 2) {
        puVar22 = cpu_translate->translation_ptr;
        uVar10 = uVar10 | load_store << 0x14 | 0x6000000 | opcode & 0x60 | opcode & 0xf80;
        goto LAB_080b3aa4;
      }
      if (load_store != 0) {
        uVar8 = (u32)(short)cpu_translate->current_instruction->dest_registers;
        if ((int)uVar8 < 0) {
          uVar5 = (uint)cpu_translate->current_instruction->live_flags;
          uVar17 = cpu_translate->flags_cached;
          uVar10 = uVar17 & uVar5;
          if ((uVar10 & 0xfffffffe & (uint)(u32 *)cpu_translate->flags_dirty) != 0) {
            uVar8 = cpu_translate_allocate_reg
                              (cpu_translate,(u32)&fresh_allocation,uVar8,
                               (u32 *)cpu_translate->flags_dirty);
            if ((uVar5 & 0xfffffffe & ~(uVar17 & 0xfffffffe)) == 0) {
              puVar22 = cpu_translate->translation_ptr + 1;
              *cpu_translate->translation_ptr = uVar8 << 0xc | 0xe3a00000;
              cpu_translate->translation_ptr = puVar22;
            }
            else {
              puVar24 = cpu_translate->translation_ptr;
              puVar22 = puVar24 + 2;
              *puVar24 = uVar8 << 0xc | 0xe51b0080;
              puVar24[1] = uVar10 & 0xfffffffe | 0xe3c00200 | uVar8 << 0xc | uVar8 << 0x10;
              cpu_translate->translation_ptr = puVar22;
            }
            uVar5 = uVar8 << 0xc;
            puVar24 = puVar22;
            if ((uVar10 & 2) != 0) {
              puVar24 = puVar22 + 1;
              *puVar22 = uVar8 << 0x10 | 0x23800202 | uVar5;
              cpu_translate->translation_ptr = puVar24;
            }
            puVar22 = puVar24;
            if ((uVar10 & 4) != 0) {
              puVar22 = puVar24 + 1;
              *puVar24 = uVar8 << 0x10 | 0x3800204 | uVar5;
              cpu_translate->translation_ptr = puVar22;
            }
            puVar24 = puVar22;
            if ((uVar10 & 8) != 0) {
              puVar24 = puVar22 + 1;
              *puVar22 = uVar8 << 0x10 | 0x43800208 | uVar5;
            }
            uVar1 = (cpu_translate->reg_alloc).locked_regs;
            *puVar24 = uVar5 | 0xe50b0080;
            cpu_translate->translation_ptr = puVar24 + 1;
            (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar8 & 0xff));
          }
          cpu_translate->flags_cached = 1;
          cpu_translate->flags_dirty = 0;
          cpu_translate_normalize_reg_allocation(cpu_translate);
          puVar22 = cpu_translate->translation_ptr;
          *puVar22 = ((int)block_indirect_branch - (int)puVar22 >> 2) - 2U & 0xffffff | 0xa000000 |
                     opcode & 0xf0000000;
          cpu_translate->translation_ptr = puVar22 + 1;
        }
      }
      goto LAB_080b34ec;
    }
    if (cpu_translate->cpu_type == '\x01') {
LAB_080b3520:
      if (operand_type == 0) {
        uVar7 = uVar8 & 1;
      }
      else {
        uVar7 = 0;
      }
      if (((uVar16 & uVar7) == 0) || ((opcode & 0x1200000) != 0x1000000)) goto LAB_080b30c4;
      local_4c = (code *)operand_value;
      if (halfword_access == 0) {
        if ((byte_access != 0) || ((operand_value & 3) == 0)) goto LAB_080b3560;
        goto LAB_080b30c4;
      }
      if ((operand_value & 1) != 0) goto LAB_080b30c4;
LAB_080b3560:
      if ((opcode & 0x800000) == 0) {
        local_4c = (code *)-operand_value;
      }
      load_memory_function_u16 =
           (void *)(uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5];
      bVar26 = (void *)0xfe < load_memory_function_u16;
      if (load_memory_function_u16 != (void *)0xff) {
        bVar26 = load_memory_function_u16 != (void *)0x0;
      }
      if ((!bVar26 ||
           (load_memory_function_u16 == (void *)0xff || load_memory_function_u16 == (void *)0x1)) ||
         (load_memory_function_u16 == (void *)0xe)) goto LAB_080b30c4;
      bVar3 = (cpu_translate->reg_alloc).emulated_reg_maps_to[(opcode << 0x10) >> 0x1c];
      bVar26 = 0xfe < bVar3;
      if (bVar3 != 0xff) {
        bVar26 = bVar3 != 0;
      }
      if ((!bVar26 || (bVar3 == 0xff || bVar3 == 1)) || (bVar3 == 0xe)) goto LAB_080b30c4;
      uVar5 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
      if (uVar5 < 0xfd) {
        (cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5] = 0xff;
        pcVar14 = cpu_translate->current_instruction;
        if (((cpu_translate->reg_alloc).native_regs[0].dirty != '\0') &&
           (((int)(uint)pcVar14->live_registers >> uVar5 & 1U) != 0)) {
          puVar22 = cpu_translate->translation_ptr;
          uVar7 = (uVar5 + 0x3fffffeb) * 4;
          if ((int)uVar7 < 0) {
            uVar16 = 0;
            uVar7 = (uVar5 + 0x3fffffeb) * -4;
          }
          else {
            uVar16 = 0x800000;
          }
          *puVar22 = uVar16 | 0xe50b0000 | uVar7;
          cpu_translate->translation_ptr = puVar22 + 1;
        }
      }
      else {
        pcVar14 = cpu_translate->current_instruction;
      }
      bVar26 = true;
      (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
    }
    else {
LAB_080b30c4:
      bVar26 = false;
      cpu_translate_setup_memory_address(cpu_translate,opcode,operand_type,operand_value,uVar10);
      pcVar14 = cpu_translate->current_instruction;
      local_4c = (code *)0x0;
      load_memory_function_u16 = (void *)0x0;
    }
    bVar3 = pcVar14->live_flags;
    puVar22 = (u32 *)cpu_translate->flags_cached;
    uVar7 = (uint)puVar22 & (uint)bVar3;
    uVar5 = uVar7 & 0xfffffffe;
    if ((uVar5 & cpu_translate->flags_dirty) != 0) {
      uVar8 = cpu_translate_allocate_reg(cpu_translate,(u32)&fresh_allocation,uVar5,puVar22);
      if ((bVar3 & 0xfffffffe & ~((uint)puVar22 & 0xfffffffe)) == 0) {
        puVar22 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar8 << 0xc | 0xe3a00000;
        cpu_translate->translation_ptr = puVar22;
      }
      else {
        puVar24 = cpu_translate->translation_ptr;
        puVar22 = puVar24 + 2;
        *puVar24 = uVar8 << 0xc | 0xe51b0080;
        puVar24[1] = uVar5 | 0xe3c00200 | uVar8 << 0xc | uVar8 << 0x10;
        cpu_translate->translation_ptr = puVar22;
      }
      uVar5 = uVar8 << 0xc;
      puVar24 = puVar22;
      if ((uVar7 & 2) != 0) {
        puVar24 = puVar22 + 1;
        *puVar22 = uVar8 << 0x10 | 0x23800202 | uVar5;
        cpu_translate->translation_ptr = puVar24;
      }
      puVar22 = puVar24;
      if ((uVar7 & 4) != 0) {
        puVar22 = puVar24 + 1;
        *puVar24 = uVar8 << 0x10 | 0x3800204 | uVar5;
        cpu_translate->translation_ptr = puVar22;
      }
      puVar24 = puVar22;
      if ((uVar7 & 8) != 0) {
        puVar24 = puVar22 + 1;
        *puVar22 = uVar8 << 0x10 | 0x43800208 | uVar5;
      }
      uVar1 = (cpu_translate->reg_alloc).locked_regs;
      *puVar24 = uVar5 | 0xe50b0080;
      cpu_translate->translation_ptr = puVar24 + 1;
      (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar8 & 0xff));
    }
    uVar7 = (uint)(cpu_translate->reg_alloc).native_regs[1].mapped_reg;
    uVar5 = 0;
    cpu_translate->flags_cached = 1;
    cpu_translate->flags_dirty = 0;
    if (((uVar7 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar7] = 0xff,
        (cpu_translate->reg_alloc).native_regs[1].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar7 & 1U) != 0)) {
      puVar22 = cpu_translate->translation_ptr;
      uVar16 = (uVar7 + 0x3fffffeb) * 4;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar7 + 0x3fffffeb) * -4;
      }
      else {
        uVar5 = 0x800000;
      }
      *puVar22 = uVar5 | 0xe50b1000 | uVar16;
      cpu_translate->translation_ptr = puVar22 + 1;
    }
    uVar5 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
    (cpu_translate->reg_alloc).native_regs[1].mapped_reg = 0xfd;
    if (((uVar5 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5] = 0xff,
        (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar5 & 1U) != 0)) {
      puVar22 = cpu_translate->translation_ptr;
      uVar7 = (uVar5 + 0x3fffffeb) * 4;
      if ((int)uVar7 < 0) {
        uVar16 = 0;
        uVar7 = (uVar5 + 0x3fffffeb) * -4;
      }
      else {
        uVar16 = 0x800000;
      }
      *puVar22 = uVar16 | 0xe50be000 | uVar7;
      cpu_translate->translation_ptr = puVar22 + 1;
    }
    (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xfd;
    if (load_store == 0) {
      cpu_translate_normalize_reg_allocation(cpu_translate);
    }
    if (uVar10 == 0xe) {
      puVar22 = (u32 *)0x0;
    }
    else {
      puVar22 = cpu_translate->translation_ptr;
      *puVar22 = 0xfffffffeU - ((int)puVar22 >> 2) & 0xffffff | 0xa000000 | (uVar10 ^ 1) << 0x1c;
      cpu_translate->translation_ptr = puVar22 + 1;
    }
    if (load_store == 0) {
      cpu_translate_load_reg_fixed(cpu_translate,uVar17,1);
      if (doubleword_access == 0) {
        if (halfword_access == 0) {
          uVar2 = cpu_translate->cpu_type;
          if (byte_access == 0) {
            puVar24 = cpu_translate->translation_ptr;
            pcVar19 = arm_store_memory32_arm7;
            pcVar15 = arm_store_memory32_arm9;
          }
          else {
            puVar24 = cpu_translate->translation_ptr;
            pcVar19 = arm_store_memory8_arm7;
            pcVar15 = arm_store_memory8_arm9;
          }
        }
        else {
          uVar2 = cpu_translate->cpu_type;
          puVar24 = cpu_translate->translation_ptr;
          pcVar19 = arm_store_memory16_arm7;
          pcVar15 = arm_store_memory16_arm9;
        }
        store_memory_function = pcVar19;
        if (uVar2 == '\x01') {
          store_memory_function = pcVar15;
        }
        store_memory_function = (void *)((int)store_memory_function - (int)puVar24);
      }
      else {
        puVar24 = cpu_translate->translation_ptr;
        store_memory_function_1 = arm_store_memory32_arm7;
        if (cpu_translate->cpu_type == '\x01') {
          store_memory_function_1 = arm_store_memory32_arm9;
        }
        *puVar24 = 0xe50b0100;
        puVar24[2] = 0xe51b0100;
        puVar24[3] = 0xe2800004;
        puVar24[1] = ((int)store_memory_function_1 - (int)(puVar24 + 1) >> 2) - 2U & 0xffffff |
                     0xeb000000;
        cpu_translate->translation_ptr = puVar24 + 4;
        cpu_translate_load_reg_fixed(cpu_translate,uVar17 + 1,1);
        puVar24 = cpu_translate->translation_ptr;
        store_memory_function = (void *)((int)store_memory_function_1 - (int)puVar24);
      }
      puVar20 = cpu_translate->pc_metadata_ptr;
      puVar23 = cpu_translate->current_pc_metadata_ptr;
      *puVar24 = ((int)store_memory_function >> 2) - 2U & 0xffffff | 0xeb000000;
      cpu_translate->translation_ptr = puVar24 + 1;
      uVar10 = (int)(puVar24 + 1) - (int)cpu_translate->translation_ptr_code_base >> 2;
      uVar5 = cpu_translate->current_pc - cpu_translate->base_pc;
      if (cpu_translate->pc_metadata_count <= (uint)((int)puVar23 - (int)puVar20 >> 2)) {
        __printf_chk(1,"FATAL: went past metadata storage of %d for block @ %p (%x)\n",
                     cpu_translate->pc_metadata_count,cpu_translate->translation_ptr_code_base,
                     cpu_translate->current_pc);
      }
      if (0xffff < uVar5) {
        __printf_chk(1,"FATAL: pc_delta in stored PC metadata is %x\n",uVar5);
      }
      if (0xffff < uVar10) {
        __printf_chk(1,"FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar10);
      }
      puVar24 = cpu_translate->current_pc_metadata_ptr;
      *puVar23 = uVar5 | uVar10 << 0x10;
      cpu_translate->current_pc_metadata_ptr = puVar24 + 1;
    }
    else {
      if (doubleword_access == 0) {
        uVar5 = (opcode << 0x10) >> 0x1c;
        if (uVar10 == 0xe) {
          if (uVar5 == 0xf) {
            uVar5 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
            if (((uVar5 < 0xfd) &&
                ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5] = 0xff,
                (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
               (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar5 & 1U) != 0))
            {
              puVar24 = cpu_translate->translation_ptr;
              uVar7 = (uVar5 + 0x3fffffeb) * 4;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar5 + 0x3fffffeb) * -4;
                uVar5 = 0;
              }
              else {
                uVar5 = 0x800000;
              }
              *puVar24 = uVar5 | 0xe50b0000 | uVar7;
              cpu_translate->translation_ptr = puVar24 + 1;
            }
            (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
            load_memory_function_s16 = (void *)0x0;
          }
          else {
            load_memory_function_s16 =
                 (void *)cpu_translate_allocate_reg
                                   (cpu_translate,(opcode << 0x10) >> 0x1c,0,&fresh_allocation);
            (cpu_translate->reg_alloc).native_regs[(int)load_memory_function_s16].dirty = '\x01';
          }
        }
        else {
          load_memory_function_s16 =
               (void *)(uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5];
          if (load_memory_function_s16 == (void *)0xff) {
            load_memory_function_s16 = (void *)0x0;
          }
        }
        if (cpu_translate->cpu_type != '\x01') {
          puVar24 = (u32 *)0x0;
          goto LAB_080b35e8;
        }
        uVar5 = cpu_translate->memory_map_offset_value;
        uVar8 = cpu_translate->memory_map_offset_shift;
        if (halfword_access == 0) {
          puVar24 = cpu_translate->translation_ptr;
          uVar7 = (int)load_memory_function_u16 << 0x10;
          if (byte_access == 0) {
            puVar20 = puVar24 + 2;
            *puVar24 = uVar7 | 0xe31003ff;
            puVar24[1] = 0xfffffffeU - ((int)(puVar24 + 1) >> 2) & 0xffffff | 0x1a000000;
            cpu_translate->translation_ptr = puVar20;
            if (uVar5 != 0) {
              puVar20 = puVar24 + 3;
              uVar5 = uVar5 | 0xe2800000 | uVar8 << 8 | uVar7;
              uVar7 = (int)load_memory_function_s16 << 0x10;
              puVar24[2] = uVar5 | (int)load_memory_function_s16 << 0xc;
            }
            dest_2 = (int)load_memory_function_s16 << 0xc | uVar7 | 0xe5100000;
            if ((int)local_4c < 0) {
              uVar5 = 0;
              local_4c = (code *)-(int)local_4c;
            }
            else {
              uVar5 = 0x800000;
            }
          }
          else {
            puVar20 = puVar24 + 2;
            puVar23 = puVar24 + 1;
            *puVar24 = uVar7 | 0xe310033f;
            puVar24[1] = 0xfffffffeU - ((int)puVar23 >> 2) & 0xffffff | 0x1a000000;
            cpu_translate->translation_ptr = puVar20;
            if (uVar5 != 0) {
              puVar20 = puVar24 + 3;
              uVar5 = uVar5 | 0xe2800000 | uVar8 << 8 | uVar7;
              uVar7 = (int)load_memory_function_s16 << 0x10;
              puVar24[2] = uVar5 | (int)load_memory_function_s16 << 0xc;
              cpu_translate->translation_ptr = puVar20;
            }
            if (_imm_6 != 0) {
              bVar25 = (int)local_4c < 0;
              uVar5 = (uint)local_4c;
              if (bVar25) {
                uVar5 = -(int)local_4c;
              }
              uVar16 = uVar5;
              if (!bVar25) {
                uVar5 = 0x800000;
                uVar16 = (uint)local_4c;
              }
              local_4c = (code *)uVar16;
              if (bVar25) {
                uVar5 = 0;
              }
              uVar5 = (int)load_memory_function_s16 << 0xc | uVar7 | 0xe15000d0 | uVar5;
              goto LAB_080b32c0;
            }
            if ((int)local_4c < 0) {
              uVar16 = -(int)local_4c;
            }
            else {
              uVar16 = 0x800000;
            }
            dest_2 = (int)load_memory_function_s16 << 0xc | uVar7 | 0xe5500000;
            uVar5 = uVar16;
            if ((int)local_4c < 0) {
              uVar5 = 0;
              local_4c = (code *)uVar16;
            }
          }
          puVar23 = puVar24 + 1;
          dest_2 = dest_2 | uVar5;
          puVar12 = puVar20 + 1;
          *puVar20 = (uint)local_4c | dest_2;
          cpu_translate->translation_ptr = puVar12;
        }
        else {
          puVar24 = cpu_translate->translation_ptr;
          uVar7 = (int)load_memory_function_u16 << 0x10;
          puVar20 = puVar24 + 2;
          puVar23 = puVar24 + 1;
          *puVar24 = uVar7 | 0xe310037f;
          puVar24[1] = 0xfffffffeU - ((int)puVar23 >> 2) & 0xffffff | 0x1a000000;
          cpu_translate->translation_ptr = puVar20;
          if (uVar5 == 0) {
            pvVar11 = (void *)0x0;
          }
          else {
            puVar20 = puVar24 + 3;
            uVar5 = uVar5 | 0xe2800000 | uVar8 << 8 | uVar7;
            uVar7 = (int)load_memory_function_s16 << 0x10;
            puVar24[2] = uVar5 | (int)load_memory_function_s16 << 0xc;
            cpu_translate->translation_ptr = puVar20;
            pvVar11 = load_memory_function_s16;
          }
          if (_imm_6 == 0) {
            if ((int)local_4c < 0) {
              local_4c = (code *)-(int)local_4c;
              uVar5 = 0;
            }
            else {
              uVar5 = 0x800000;
            }
            puVar12 = puVar20 + 1;
            *puVar20 = (int)load_memory_function_s16 << 0xc | uVar7 | 0xe15000b0 | uVar5 |
                       (uint)local_4c & 0xf | ((int)local_4c >> 4) << 8;
            cpu_translate->translation_ptr = puVar12;
          }
          else {
            bVar25 = (int)local_4c < 0;
            uVar5 = (uint)local_4c;
            if (bVar25) {
              uVar5 = -(int)local_4c;
            }
            if (bVar25) {
              pvVar11 = (void *)0x0;
              local_4c = (code *)uVar5;
            }
            if (!bVar25) {
              pvVar11 = (void *)0x800000;
            }
            uVar5 = (int)load_memory_function_s16 << 0xc | uVar7 | 0xe15000f0 | (uint)pvVar11;
LAB_080b32c0:
            puVar12 = puVar20 + 1;
            *puVar20 = uVar5 | (uint)local_4c & 0xf | ((int)local_4c >> 4) << 8;
            cpu_translate->translation_ptr = puVar12;
          }
        }
        iVar18 = uVar10 - 0xe;
        if (iVar18 != 0) {
          iVar18 = 1;
        }
        if (load_memory_function_s16 != (void *)0x0) {
          iVar18 = 0;
        }
        puVar24 = puVar12;
        if (iVar18 != 0) {
          puVar24 = puVar12 + 1;
          *puVar12 = ((opcode << 0x10) >> 0x1c) * -4 + 0x54 | 0xe50b0000;
        }
        cpu_translate->translation_ptr = cpu_translate->translation_stub_buffer;
        cpu_translate->primary_translation_ptr = puVar24;
        if (puVar23 == (u32 *)0x0) goto LAB_080b35e8;
        local_4c = arm_load_ext8_signed;
        load_memory_function_u16 = arm_load_ext8_unsigned;
        load_memory_function_u32 = arm_load_ext16_signed;
        local_38 = arm_load_ext16_unsigned;
        local_34 = arm_load_ext32_unsigned;
      }
      else {
        puVar24 = (u32 *)0x0;
        load_memory_function_s16 = (void *)0xff;
LAB_080b35e8:
        puVar23 = (u32 *)0x0;
        local_4c = arm_load_memory8_signed;
        load_memory_function_u16 = arm_load_memory8_unsigned;
        load_memory_function_u32 = arm_load_memory16_signed;
        local_38 = arm_load_memory16_unsigned;
        local_34 = arm_load_memory32_unsigned;
      }
      if (bVar26) {
        cpu_translate_setup_memory_address(cpu_translate,opcode,operand_type,operand_value,0xe);
      }
      if (doubleword_access == 0) {
        if (halfword_access == 0) {
          if (byte_access == 0) {
            puVar20 = cpu_translate->translation_ptr;
            load_memory_function_u32 = local_34;
          }
          else {
            puVar20 = cpu_translate->translation_ptr;
            load_memory_function_u32 = local_4c;
            if (_imm_6 == 0) {
              load_memory_function_u32 = load_memory_function_u16;
            }
          }
        }
        else {
          puVar20 = cpu_translate->translation_ptr;
          if (_imm_6 == 0) {
            load_memory_function_u32 = local_38;
          }
        }
        puVar12 = puVar20 + 1;
        *puVar20 = ((int)load_memory_function_u32 - (int)puVar20 >> 2) - 2U & 0xffffff | 0xeb000000;
        cpu_translate->translation_ptr = puVar12;
        if (puVar23 != (u32 *)0x0) goto LAB_080b33e0;
LAB_080b3674:
        if (uVar10 == 0xe) {
          if (uVar17 == 0xf) {
            uVar10 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
            if (uVar10 < 0xfd) {
              (cpu_translate->reg_alloc).emulated_reg_maps_to[uVar10] = 0xff;
              if ((cpu_translate->reg_alloc).native_regs[0].dirty == '\0') {
                puVar12 = cpu_translate->translation_ptr;
                goto LAB_080b4264;
              }
              pcVar14 = cpu_translate->current_instruction;
              if (((int)(uint)pcVar14->live_registers >> uVar10 & 1U) == 0) {
                puVar12 = cpu_translate->translation_ptr;
              }
              else {
                uVar5 = (uVar10 + 0x3fffffeb) * 4;
                if ((int)uVar5 < 0) {
                  uVar17 = 0;
                  uVar5 = (uVar10 + 0x3fffffeb) * -4;
                }
                else {
                  uVar17 = 0x800000;
                }
                puVar12 = cpu_translate->translation_ptr + 1;
                *cpu_translate->translation_ptr = uVar17 | 0xe50b0000 | uVar5;
              }
            }
            else {
LAB_080b4264:
              pcVar14 = cpu_translate->current_instruction;
            }
            uVar8 = 0xe1a00000;
            (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
          }
          else {
            uVar8 = cpu_translate_allocate_reg(cpu_translate,uVar17,0,&fresh_allocation);
            (cpu_translate->reg_alloc).native_regs[uVar8].dirty = '\x01';
            uVar8 = uVar8 << 0xc | 0xe1a00000;
            puVar12 = cpu_translate->translation_ptr;
            pcVar14 = cpu_translate->current_instruction;
          }
        }
        else {
          uVar10 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar17];
          if (uVar10 == 0xff) {
            pcVar14 = cpu_translate->current_instruction;
            *puVar12 = uVar17 * -4 + 0x54 | 0xe50b0000;
            cpu_translate->translation_ptr = puVar12 + 1;
            goto load_performed;
          }
          pcVar14 = cpu_translate->current_instruction;
          uVar8 = uVar10 << 0xc | 0xe1a00000;
        }
        *puVar12 = uVar8;
        cpu_translate->translation_ptr = puVar12 + 1;
      }
      else {
        puVar12 = cpu_translate->translation_ptr;
        uVar5 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar17];
        uVar7 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[uVar17 + 1];
        *puVar12 = ((int)arm_load_memory64 - (int)puVar12 >> 2) - 2U & 0xffffff | 0xeb000000;
        cpu_translate->translation_ptr = puVar12 + 1;
        if (uVar5 == 0xff) {
          puVar12[1] = uVar17 * -4 + 0x54 | 0xe50b1000;
          cpu_translate->translation_ptr = puVar12 + 2;
        }
        else {
          puVar12[1] = uVar5 << 0xc | 0xe1a00001;
          cpu_translate->translation_ptr = puVar12 + 2;
        }
        if (uVar7 == 0xff) {
          puVar12[2] = uVar17 * -4 + 0x50 | 0xe50b0000;
          cpu_translate->translation_ptr = puVar12 + 3;
        }
        else {
          puVar12[2] = uVar7 << 0xc | 0xe1a00000;
          cpu_translate->translation_ptr = puVar12 + 3;
        }
        puVar12 = puVar12 + 3;
        if (puVar23 == (u32 *)0x0) {
          if (doubleword_access == 0) goto LAB_080b3674;
          pcVar14 = cpu_translate->current_instruction;
        }
        else {
LAB_080b33e0:
          iVar18 = uVar10 - 0xe;
          if (iVar18 != 0) {
            iVar18 = 1;
          }
          if (load_memory_function_s16 != (void *)0x0) {
            iVar18 = 0;
          }
          if (iVar18 == 0) {
            *puVar12 = (int)load_memory_function_s16 << 0xc | 0xe1a00000;
          }
          else {
            *puVar12 = uVar17 * -4 + 0x54 | 0xe50b0000;
          }
          puVar20 = cpu_translate->translation_ptr_b;
          puVar12[1] = ((int)puVar24 - (int)(puVar12 + 1) >> 2) - 2U & 0xffffff | 0xea000000;
          iVar13 = (int)(puVar12 + 2) - (int)cpu_translate;
          iVar18 = iVar13 >> 2;
          puVar20 = (u32 *)((int)puVar20 - iVar13);
          cpu_translate->translation_ptr = puVar12 + 2;
          cpu_translate->translation_ptr_b = puVar20;
          if (iVar18 != 0) {
            puVar6 = &cpu_translate[-1].cpu_type;
            puVar24 = puVar20 + -1;
            do {
              puVar6 = puVar6 + 4;
              uVar8 = *(u32 *)puVar6;
              if ((uVar8 << 4) >> 0x1d == 5) {
                uVar8 = ((int)cpu_translate - (int)puVar20 >> 2) + uVar8 & 0xffffff |
                        uVar8 & 0xff000000;
              }
              puVar24 = puVar24 + 1;
              *puVar24 = uVar8;
            } while (cpu_translate->translation_stub_buffer + iVar18 + -1 != (u32 *)puVar6);
          }
          puVar24 = cpu_translate->primary_translation_ptr;
          pcVar14 = cpu_translate->current_instruction;
          *puVar23 = ((int)puVar20 - (int)puVar23 >> 2) - 2U & 0xffffff | *puVar23 & 0xff000000;
          cpu_translate->translation_ptr = puVar24;
        }
      }
load_performed:
      if ((short)pcVar14->dest_registers < 0) goto LAB_080b303c;
    }
  }
  else {
    if (cpu_translate->cpu_type != '\x01') goto LAB_080b30c4;
    uVar21 = cpu_translate->current_instruction->next_pc;
    if ((opcode & 0x800000) == 0) {
      uVar7 = uVar21 - operand_value;
    }
    else {
      uVar7 = operand_value + uVar21;
    }
    if ((0x3ffffff < uVar7) ||
       ((((halfword_access == 0 || ((uVar7 & 1) != 0)) && (byte_access == 0)) && ((uVar7 & 3) != 0))
       )) goto LAB_080b3520;
    uVar8 = cpu_translate_allocate_dest_reg(cpu_translate,uVar17,1,uVar10);
    cpu_00 = cpu_translate->current_cpu;
    if (uVar7 < 0x2000000) {
      ptVar9 = cpu_00->translation_cache;
      if (7 < ptVar9->itcm_hot_modifications[(uVar7 << 0x11) >> 0x13]) {
LAB_080b4168:
        if ((ptVar9->main_ram_modified_regions[(uVar7 << 10) >> 0x11] &
            1 << ((uVar7 << 0x19) >> 0x1b)) == 0) goto LAB_080b4190;
      }
      uVar7 = uVar7 + cpu_translate->memory_map_offset;
      uVar21 = cpu_translate_allocate_reg(cpu_translate,0xfe,0,&fresh_allocation);
      puVar24 = cpu_translate->translation_ptr;
      (cpu_translate->reg_alloc).native_regs[uVar21].const_value = uVar7;
      puVar22 = puVar24 + 1;
      *puVar24 = uVar7 & 0xfff | 0xe3000000 | (uVar7 * 0x10000 >> 0x1c) << 0x10 | uVar21 << 0xc;
      cpu_translate->translation_ptr = puVar22;
      if ((uVar7 & 0xffff0000) != 0) {
        puVar22 = puVar24 + 2;
        puVar24[1] = uVar7 * 0x10 >> 0x14 | (uVar7 >> 0x1c) << 0x10 | 0xe3400000 | uVar21 << 0xc;
        cpu_translate->translation_ptr = puVar22;
      }
      if (halfword_access == 0) {
        if (byte_access == 0) {
          *puVar22 = opcode & 0xf0000000 | 0x5900000 | uVar8 << 0xc | uVar21 << 0x10;
          cpu_translate->translation_ptr = puVar22 + 1;
        }
        else {
          if (_imm_6 != 0) {
            uVar10 = 0xd0;
            goto LAB_080b3010;
          }
          *puVar22 = opcode & 0xf0000000 | 0x5d00000 | uVar8 << 0xc | uVar21 << 0x10;
          cpu_translate->translation_ptr = puVar22 + 1;
        }
      }
      else {
        if (_imm_6 == 0) {
          uVar10 = 0xb0;
        }
        else {
          uVar10 = 0xf0;
        }
LAB_080b3010:
        *puVar22 = uVar10 | 0x1d00000 | opcode & 0xf0000000 | uVar8 << 0xc | uVar21 << 0x10;
        cpu_translate->translation_ptr = puVar22 + 1;
      }
    }
    else {
      if (uVar7 < 0x3000000) {
        ptVar9 = cpu_00->translation_cache;
        goto LAB_080b4168;
      }
LAB_080b4190:
      if (halfword_access == 0) {
        if (byte_access == 0) {
          cpu_block_fill_allocation(cpu_00,uVar7,4);
          constant_value = load_memory32(&cpu_00->memory_interface,uVar7);
        }
        else {
          cpu_block_fill_allocation(cpu_00,uVar7 & 0xfffffffe,2);
          if (_imm_6 == 0) {
            bVar3 = load_memory8(&cpu_00->memory_interface,uVar7);
            constant_value = (u32)bVar3;
          }
          else {
            uVar2 = load_memory8(&cpu_00->memory_interface,uVar7);
            constant_value = (u32)(char)uVar2;
          }
        }
      }
      else {
        cpu_block_fill_allocation(cpu_00,uVar7,2);
        if (_imm_6 == 0) {
          uVar4 = load_memory16(&cpu_00->memory_interface,uVar7);
          constant_value = (u32)uVar4;
        }
        else {
          uVar4 = load_memory16(&cpu_00->memory_interface,uVar7);
          constant_value = (u32)(short)uVar4;
        }
      }
      puVar22 = cpu_translate->translation_ptr;
      *puVar22 = opcode & 0xf0000000 | 0x3000000 | uVar8 << 0xc | constant_value & 0xfff |
                 ((constant_value << 0x10) >> 0x1c) << 0x10;
      cpu_translate->translation_ptr = puVar22 + 1;
      if ((constant_value & 0xffff0000) != 0) {
        puVar22[1] = (constant_value << 4) >> 0x14 |
                     uVar8 << 0xc | opcode & 0xf0000000 | 0x3400000 |
                     (constant_value >> 0x1c) << 0x10;
        cpu_translate->translation_ptr = puVar22 + 2;
      }
    }
    if (-1 < (short)cpu_translate->current_instruction->dest_registers) goto LAB_080b34ec;
    puVar22 = (u32 *)0x0;
LAB_080b303c:
    if (cpu_translate->cpu_type != '\x01') {
      if (cpu_translate->thumb_mode == '\0') {
        puVar24 = cpu_translate->translation_ptr;
        *puVar24 = 0xe3c00003;
        cpu_translate->translation_ptr = puVar24 + 1;
      }
      else if (cpu_translate->thumb_mode == '\x01') {
        puVar24 = cpu_translate->translation_ptr;
        *puVar24 = 0xe3800001;
        cpu_translate->translation_ptr = puVar24 + 1;
      }
    }
    cpu_translate_normalize_reg_allocation(cpu_translate);
    puVar24 = cpu_translate->translation_ptr;
    *puVar24 = ((int)block_indirect_branch - (int)puVar24 >> 2) - 2U & 0xffffff | 0xea000000;
    cpu_translate->translation_ptr = puVar24 + 1;
  }
  if (puVar22 != (u32 *)0x0) {
    *puVar22 = ((int)cpu_translate->translation_ptr - (int)puVar22 >> 2) - 2U & 0xffffff |
               *puVar22 & 0xff000000;
  }
LAB_080b34ec:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


