/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_block
 * Address  : 080b7a74
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u8 * cpu_translate_block(cpu_block_struct *cpu_block,cpu_struct *cpu,u32 pc,u32 thumb_mode)

{
  u8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  bool bVar4;
  u32 uVar5;
  u32 *translation_ptr_code_base;
  cpu_instruction_struct *pcVar6;
  u32 uVar7;
  cpu_branch_target_struct *pcVar8;
  cpu_branch_target_struct *current_branch_target;
  uint uVar9;
  translation_cache_struct *ptVar10;
  translation_cache_struct *translation_cache;
  u32 *puVar11;
  u32 memory_map_offset_value;
  u32 current_pc;
  u32 **ppuVar12;
  cpu_instruction_struct *pcVar13;
  code *pcVar14;
  u32 *fresh_allocation_00;
  u32 cycle_counter;
  uint *puVar15;
  u32 internal_link_offset;
  u32 cycle_counter_1;
  u32 mapped_reg;
  cpu_instruction_struct *current_instruction;
  u32 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  u32 *ptr_u32;
  u8 local_570;
  u32 **local_568;
  u8 *local_558;
  uint local_54c;
  u32 fresh_allocation;
  cpu_translate_struct _cpu_translate;
  int local_2c;
  
  local_54c = (uint)cpu_block->block_flags;
  _cpu_translate.cpu_type = cpu->type;
  ptVar10 = cpu->translation_cache;
  local_2c = __stack_chk_guard;
  if (thumb_mode != 0) {
    local_54c = local_54c | 1;
  }
  bVar4 = pc < 0x2000000 && _cpu_translate.cpu_type == '\x01';
  if (pc < 0x2000000 && _cpu_translate.cpu_type == '\x01') {
    bVar4 = true;
    local_568 = (u32 **)ptVar10->translation_ptr_itcm;
    local_558 = ptVar10->translation_ptr_itcm_b;
  }
  else if (pc >> 0x18 == 2) {
    local_568 = (u32 **)ptVar10->translation_ptr_main;
    local_558 = ptVar10->translation_ptr_main_b;
  }
  else {
    local_568 = (u32 **)ptVar10->translation_ptr_alternate;
    local_558 = ptVar10->translation_ptr_alternate_b;
  }
  _cpu_translate.current_branch_target = cpu_block->branch_targets;
  puVar11 = (u32 *)(local_558 + -0x18);
  _cpu_translate.flags_cached = 1;
  _cpu_translate.memory_map_offset = cpu->memory->memory_map_offset;
  ppuVar12 = local_568 + 1;
  local_570 = (u8)thumb_mode;
  _cpu_translate.thumb_mode = local_570;
  _cpu_translate.memory_map_offset_value = _cpu_translate.memory_map_offset;
  _cpu_translate.translation_cache = ptVar10;
  _cpu_translate.cpu_block = cpu_block;
  _cpu_translate.current_cpu = cpu;
  if (0xff < _cpu_translate.memory_map_offset) {
    if ((_cpu_translate.memory_map_offset & 3) == 0) {
      iVar18 = 0;
      do {
        _cpu_translate.memory_map_offset_value = _cpu_translate.memory_map_offset_value >> 2;
        iVar18 = iVar18 + 2;
        if (_cpu_translate.memory_map_offset_value < 0x100) {
          _cpu_translate.memory_map_offset_shift = 0x20U - iVar18 >> 1;
          goto LAB_080b7b9c;
        }
      } while ((_cpu_translate.memory_map_offset_value & 3) == 0);
    }
    _cpu_translate.translation_ptr_b = puVar11;
    __printf_chk(1,"ERROR: memory_map_offset %x doesn\'t work as an ARM immediate!\n");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  _cpu_translate.memory_map_offset_shift = 0x10;
LAB_080b7b9c:
  _cpu_translate.reg_alloc.native_regs[0].static_mapping = 0xff;
  _cpu_translate.reg_alloc.native_regs[0].mapped_reg = 0xff;
  _cpu_translate.reg_alloc.native_regs[1].static_mapping = 0xff;
  _cpu_translate.reg_alloc.native_regs[1].mapped_reg = 0xff;
  _cpu_translate.reg_alloc.native_regs[10].static_mapping = 0xff;
  _cpu_translate.reg_alloc.native_regs[10].mapped_reg = 0xff;
  _cpu_translate.reg_alloc.native_regs[11].static_mapping = 0xff;
  _cpu_translate.reg_alloc.native_regs[11].mapped_reg = 0xff;
  _cpu_translate.reg_alloc.native_regs[14].static_mapping = 0xff;
  _cpu_translate.reg_alloc.native_regs[14].mapped_reg = 0xff;
  _cpu_translate.reg_alloc.native_regs[15].static_mapping = 0xff;
  _cpu_translate.reg_alloc.native_regs[15].mapped_reg = 0xff;
  _cpu_translate.reg_alloc.emulated_reg_maps_to[7] = 0xff;
  _cpu_translate.reg_alloc.emulated_reg_maps_to[8] = 0xff;
  _cpu_translate.reg_alloc.emulated_reg_maps_to[9] = 0xff;
  _cpu_translate.reg_alloc.emulated_reg_maps_to[10] = 0xff;
  _cpu_translate.reg_alloc.emulated_reg_maps_to[11] = 0xff;
  _cpu_translate.reg_alloc.emulated_reg_maps_to[15] = 0xff;
  _cpu_translate.reg_alloc.native_regs[0].dirty = '\0';
  _cpu_translate.reg_alloc.native_regs[1].dirty = '\0';
  _cpu_translate.reg_alloc.native_regs[2].static_mapping = '\0';
  _cpu_translate.reg_alloc.native_regs[2].mapped_reg = '\0';
  _cpu_translate.reg_alloc.native_regs[2].dirty = '\x01';
  _cpu_translate.reg_alloc.native_regs[10].dirty = '\0';
  _cpu_translate.reg_alloc.native_regs[11].dirty = '\0';
  _cpu_translate.reg_alloc.native_regs[14].dirty = '\0';
  _cpu_translate.reg_alloc.native_regs[15].dirty = '\0';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[0] = '\x02';
  _cpu_translate.reg_alloc.native_regs[3].static_mapping = '\x01';
  _cpu_translate.reg_alloc.native_regs[3].mapped_reg = '\x01';
  _cpu_translate.reg_alloc.native_regs[5].static_mapping = '\x03';
  _cpu_translate.reg_alloc.native_regs[5].mapped_reg = '\x03';
  _cpu_translate.reg_alloc.native_regs[7].static_mapping = '\x05';
  _cpu_translate.reg_alloc.native_regs[7].mapped_reg = '\x05';
  _cpu_translate.reg_alloc.native_regs[8].static_mapping = '\x06';
  _cpu_translate.reg_alloc.native_regs[8].mapped_reg = '\x06';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[1] = '\x03';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[3] = '\x05';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[4] = '\x06';
  _cpu_translate.reg_alloc.native_regs[3].dirty = '\x01';
  _cpu_translate.reg_alloc.native_regs[4].static_mapping = '\x02';
  _cpu_translate.reg_alloc.native_regs[4].mapped_reg = '\x02';
  _cpu_translate.reg_alloc.native_regs[4].dirty = '\x01';
  _cpu_translate.reg_alloc.native_regs[5].dirty = '\x01';
  _cpu_translate.reg_alloc.native_regs[6].static_mapping = '\x04';
  _cpu_translate.reg_alloc.native_regs[6].mapped_reg = '\x04';
  _cpu_translate.reg_alloc.native_regs[6].dirty = '\x01';
  _cpu_translate.reg_alloc.native_regs[7].dirty = '\x01';
  _cpu_translate.reg_alloc.native_regs[8].dirty = '\x01';
  _cpu_translate.reg_alloc.native_regs[9].static_mapping = '\f';
  _cpu_translate.reg_alloc.native_regs[9].mapped_reg = '\f';
  _cpu_translate.reg_alloc.native_regs[9].dirty = '\x01';
  _cpu_translate.reg_alloc.native_regs[12].static_mapping = '\r';
  _cpu_translate.reg_alloc.native_regs[12].mapped_reg = '\r';
  _cpu_translate.reg_alloc.native_regs[12].dirty = '\x01';
  _cpu_translate.reg_alloc.native_regs[13].static_mapping = '\x0e';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[2] = '\x04';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[5] = '\a';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[6] = '\b';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[12] = '\t';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[13] = '\f';
  _cpu_translate.reg_alloc.native_regs[13].mapped_reg = '\x0e';
  _cpu_translate.reg_alloc.native_regs[13].dirty = '\x01';
  _cpu_translate.reg_alloc.emulated_reg_maps_to[14] = '\r';
  _cpu_translate.reg_alloc.allocate_pos_const = 0;
  _cpu_translate.reg_alloc.allocate_pos_non_static = 0;
  _cpu_translate.reg_alloc.allocate_pos_dead = 0;
  _cpu_translate.cycle_counter = 0;
  if ((cpu_block->end_type == '\0') &&
     (_cpu_translate.cycle_counter = 4, _cpu_translate.cpu_type == '\x01')) {
    _cpu_translate.cycle_counter = 2;
  }
  uVar19 = (uint)cpu_block->instruction_length;
  if (uVar19 == 0) {
    _cpu_translate.pc_metadata_count = 0;
    iVar18 = 0;
  }
  else {
    pcVar13 = cpu_block->instructions;
    _cpu_translate.pc_metadata_count = 0;
    pcVar6 = pcVar13 + uVar19;
    do {
      puVar1 = &pcVar13->flags;
      pcVar13 = pcVar13 + 1;
      _cpu_translate.pc_metadata_count =
           _cpu_translate.pc_metadata_count - ((int)((uint)*puVar1 << 0x1d) >> 0x1f);
    } while (pcVar13 != pcVar6);
    iVar18 = _cpu_translate.pc_metadata_count * -4;
  }
  _cpu_translate.translation_ptr_b = (u32 *)((int)puVar11 + iVar18);
  local_568[1] = (u32 *)0xe11a000a;
  if (_cpu_translate.cpu_type == '\x01') {
    pcVar14 = recompiler_cpu_next_action_arm9_to_arm7;
  }
  else {
    pcVar14 = recompiler_cpu_next_action_arm7_to_event_update;
  }
  _cpu_translate.translation_ptr = (u32 *)(local_568 + 3);
  local_568[2] = (u32 *)(((int)pcVar14 - (int)(local_568 + 2) >> 2) - 2U & 0xffffff | 0x4b000000);
  uVar16 = pc;
  _cpu_translate.pc_metadata_ptr = _cpu_translate.translation_ptr_b;
  _cpu_translate.current_pc_metadata_ptr = _cpu_translate.translation_ptr_b;
  _cpu_translate.translation_ptr_code_base = (u32 *)ppuVar12;
  _cpu_translate.base_pc = pc;
  if (uVar19 != 0) {
    iVar18 = 0;
    uVar19 = 0;
    do {
      uVar5 = _cpu_translate.flags_cached;
      _cpu_translate.reg_alloc.locked_regs = 0x8c00;
      pcVar6 = (cpu_instruction_struct *)((int)&cpu_block->instructions->opcode + iVar18);
      if (cpu->type == '\x01') {
        _cpu_translate.cycle_counter =
             (_cpu_translate.current_cpu)->system->cpu_cycle_adjustment +
             _cpu_translate.cycle_counter + (uint)pcVar6->cycles;
      }
      else {
        _cpu_translate.cycle_counter = _cpu_translate.cycle_counter + (uint)pcVar6->cycles * 2;
      }
      uVar2 = pcVar6->dest_registers;
      pcVar6->live_registers = uVar2 | pcVar6->live_registers | pcVar6->source_registers;
      _cpu_translate.current_instruction = pcVar6;
      if ((pcVar6->flags & 2) != 0) {
        fresh_allocation_00 = (u32 *)(uint)pcVar6->live_flags;
        uVar17 = _cpu_translate.flags_cached & (uint)fresh_allocation_00;
        _cpu_translate.current_pc = uVar16;
        if ((uVar17 & 0xfffffffe & _cpu_translate.flags_dirty) != 0) {
          uVar7 = cpu_translate_allocate_reg
                            (&_cpu_translate,(u32)&fresh_allocation,_cpu_translate.flags_cached,
                             fresh_allocation_00);
          uVar9 = uVar7 << 0xc;
          if (((uint)fresh_allocation_00 & 0xfffffffe & ~(uVar5 & 0xfffffffe)) == 0) {
            puVar20 = _cpu_translate.translation_ptr + 1;
            *_cpu_translate.translation_ptr = uVar9 | 0xe3a00000;
          }
          else {
            *_cpu_translate.translation_ptr = uVar9 | 0xe51b0080;
            puVar20 = _cpu_translate.translation_ptr + 2;
            _cpu_translate.translation_ptr[1] =
                 uVar17 & 0xfffffffe | 0xe3c00200 | uVar9 | uVar7 << 0x10;
          }
          puVar15 = puVar20;
          if ((uVar17 & 2) != 0) {
            puVar15 = puVar20 + 1;
            *puVar20 = uVar7 << 0x10 | 0x23800202 | uVar9;
          }
          puVar20 = puVar15;
          if ((uVar17 & 4) != 0) {
            puVar20 = puVar15 + 1;
            *puVar15 = uVar7 << 0x10 | 0x3800204 | uVar9;
          }
          puVar15 = puVar20;
          if ((uVar17 & 8) != 0) {
            puVar15 = puVar20 + 1;
            *puVar20 = uVar7 << 0x10 | 0x43800208 | uVar9;
          }
          _cpu_translate.reg_alloc.locked_regs =
               _cpu_translate.reg_alloc.locked_regs & ~(ushort)(1 << (uVar7 & 0xff));
          _cpu_translate.translation_ptr = puVar15 + 1;
          *puVar15 = uVar9 | 0xe50b0080;
        }
        _cpu_translate.flags_cached = 1;
        _cpu_translate.flags_dirty = 0;
        cpu_translate_normalize_reg_allocation(&_cpu_translate);
        uVar2 = pcVar6->dest_registers;
      }
      pcVar6->translation_ptr = (u8 *)_cpu_translate.translation_ptr;
      if ((uVar2 & 0x8000) != 0) {
        if (0xff < _cpu_translate.cycle_counter) {
          *_cpu_translate.translation_ptr = _cpu_translate.cycle_counter >> 8 | 0xe24aac00;
          _cpu_translate.translation_ptr = _cpu_translate.translation_ptr + 1;
        }
        *_cpu_translate.translation_ptr = _cpu_translate.cycle_counter & 0xff | 0xe24aa000;
        _cpu_translate.cycle_counter = 0;
        _cpu_translate.translation_ptr = _cpu_translate.translation_ptr + 1;
      }
      uVar19 = uVar19 + 1;
      iVar18 = iVar18 + 0x1c;
      if (thumb_mode == 0) {
        uVar16 = uVar16 + 4;
      }
      else {
        uVar16 = uVar16 + 2;
      }
      _cpu_translate.current_pc = uVar16;
      cpu_translate_instruction(&_cpu_translate);
    } while (uVar19 < cpu_block->instruction_length);
  }
  _cpu_translate.reg_alloc.locked_regs = 0x8c00;
  switch(cpu_block->end_type) {
  case '\x01':
  case '\x02':
    uVar19 = (uint)_cpu_translate.reg_alloc.native_regs[0].mapped_reg;
    if (((uVar19 < 0xfd) &&
        (_cpu_translate.reg_alloc.emulated_reg_maps_to[uVar19] = 0xff,
        _cpu_translate.reg_alloc.native_regs[0].dirty != '\0')) &&
       (((int)(uint)(_cpu_translate.current_instruction)->live_registers >> uVar19 & 1U) != 0)) {
      uVar17 = (uVar19 + 0x3fffffeb) * 4;
      if ((int)uVar17 < 0) {
        uVar9 = 0;
        uVar17 = (uVar19 + 0x3fffffeb) * -4;
      }
      else {
        uVar9 = 0x800000;
      }
      *_cpu_translate.translation_ptr = uVar9 | 0xe50b0000 | uVar17;
      _cpu_translate.translation_ptr = _cpu_translate.translation_ptr + 1;
    }
    _cpu_translate.reg_alloc.native_regs[0].mapped_reg = 0xfd;
    *_cpu_translate.translation_ptr =
         (uint)_cpu_translate.thumb_mode | uVar16 & 0xfff | 0xe3000000 |
         ((uVar16 << 0x10) >> 0x1c) << 0x10;
    puVar20 = _cpu_translate.translation_ptr + 1;
    if ((uVar16 & 0xffff0000) != 0) {
      _cpu_translate.translation_ptr[1] =
           (uVar16 << 4) >> 0x14 | (uVar16 >> 0x1c) << 0x10 | 0xe3400000;
      puVar20 = _cpu_translate.translation_ptr + 2;
    }
    _cpu_translate.translation_ptr = puVar20;
    cpu_translate_normalize_reg_allocation(&_cpu_translate);
    iVar18 = (int)block_indirect_branch - (int)_cpu_translate.translation_ptr;
    break;
  case '\x03':
    if (0xff < _cpu_translate.cycle_counter) {
      *_cpu_translate.translation_ptr = _cpu_translate.cycle_counter >> 8 | 0xe24aac00;
      _cpu_translate.translation_ptr = _cpu_translate.translation_ptr + 1;
    }
    *_cpu_translate.translation_ptr = _cpu_translate.cycle_counter & 0xff | 0xe24aa000;
    _cpu_translate.cycle_counter = 0;
    _cpu_translate.translation_ptr = _cpu_translate.translation_ptr + 1;
    cpu_translate_direct_link(&_cpu_translate,0xe);
    goto switchD_080b805c_caseD_4;
  case '\x04':
    *_cpu_translate.translation_ptr =
         uVar16 & 0xfff | 0xe3000000 | ((uVar16 << 0x10) >> 0x1c) << 0x10;
    puVar20 = _cpu_translate.translation_ptr + 1;
    if ((uVar16 & 0xffff0000) != 0) {
      _cpu_translate.translation_ptr[1] =
           (uVar16 << 4) >> 0x14 | (uVar16 >> 0x1c) << 0x10 | 0xe3400000;
      puVar20 = _cpu_translate.translation_ptr + 2;
    }
    _cpu_translate.translation_ptr = puVar20;
    iVar18 = (int)block_itcm_branch_arm - (int)_cpu_translate.translation_ptr;
    break;
  default:
    goto switchD_080b805c_caseD_4;
  }
  *_cpu_translate.translation_ptr = (iVar18 >> 2) - 2U & 0xffffff | 0xea000000;
  _cpu_translate.translation_ptr = _cpu_translate.translation_ptr + 1;
switchD_080b805c_caseD_4:
  *local_568 = puVar11;
  *(undefined4 *)(local_558 + -0x18) = 0;
  *(u32 *)(local_558 + -0x14) = thumb_mode | pc;
  *(u32 ***)(local_558 + -0x10) = ppuVar12;
  *(u16 *)(local_558 + -0xc) = cpu_block->base_live_registers;
  *(ushort *)(local_558 + -10) = (ushort)cpu_block->base_live_flags;
  uVar2 = cpu_block->halfword_length;
  *(short *)(local_558 + -6) = (short)_cpu_translate.translation_ptr - (short)ppuVar12;
  *(ushort *)(local_558 + -8) = (ushort)(((uint)uVar2 << 0x14) >> 0x14) | (ushort)(local_54c << 0xc)
  ;
  *(u32 **)(local_558 + -4) = _cpu_translate.pc_metadata_ptr;
  if (bVar4) {
    ptVar10->translation_ptr_itcm =
         (u8 *)(int)CONCAT44(_cpu_translate.translation_ptr_b,_cpu_translate.translation_ptr);
    ptVar10->translation_ptr_itcm_b =
         (u8 *)(int)(CONCAT44(_cpu_translate.translation_ptr_b,_cpu_translate.translation_ptr) >>
                    0x20);
  }
  else {
    uVar3 = CONCAT44(_cpu_translate.translation_ptr_b,_cpu_translate.translation_ptr);
    if (pc >> 0x18 == 2) {
      ptVar10->translation_ptr_main = (u8 *)(int)uVar3;
      ptVar10->translation_ptr_main_b = (u8 *)(int)((ulonglong)uVar3 >> 0x20);
    }
    else {
      ptVar10->translation_ptr_alternate = (u8 *)(int)uVar3;
      ptVar10->translation_ptr_alternate_b = (u8 *)(int)((ulonglong)uVar3 >> 0x20);
    }
  }
  if (cpu_block->num_branch_targets != 0) {
    current_branch_target = cpu_block->branch_targets;
    pcVar8 = current_branch_target + cpu_block->num_branch_targets;
    do {
      if (current_branch_target->internal_link_offset != 0) {
        puVar20 = (uint *)current_branch_target->backpatch_ptr;
        *puVar20 = ((int)cpu_block->instructions[current_branch_target->internal_link_offset].
                         translation_ptr - (int)puVar20 >> 2) - 2U & 0xffffff |
                   *puVar20 & 0xff000000;
      }
      current_branch_target = current_branch_target + 1;
    } while (current_branch_target != pcVar8);
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (u8 *)ppuVar12;
}


