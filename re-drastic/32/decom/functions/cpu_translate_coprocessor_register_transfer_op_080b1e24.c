/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_coprocessor_register_transfer_op
 * Address  : 080b1e24
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable lr_reg:u32[r0:4] conflicts with parameter, skipped. */

void cpu_translate_coprocessor_register_transfer_op(cpu_translate_struct *cpu_translate,u32 opcode)

{
  ushort uVar1;
  u32 uVar2;
  u32 mapped_reg;
  u32 *puVar3;
  u32 mapped_reg_10;
  cpu_translate_struct *pcVar4;
  u8 *emulated_reg_maps_to;
  u8 *emulated_reg_maps_to_1;
  u8 *emulated_reg_maps_to_6;
  u8 *emulated_reg_maps_to_7;
  u8 *emulated_reg_maps_to_4;
  u8 *emulated_reg_maps_to_5;
  uint uVar5;
  u8 *emulated_reg_maps_to_3;
  u8 *emulated_reg_maps_to_2;
  uint uVar6;
  u32 mapped_reg_2;
  u32 mapped_reg_3;
  code *pcVar7;
  u32 *puVar8;
  u32 mapped_reg_8;
  u32 mapped_reg_9;
  u32 *puVar9;
  u32 mapped_reg_6;
  u32 mapped_reg_7;
  u32 mapped_reg_1;
  u32 mapped_reg_5;
  u32 mapped_reg_4;
  u32 *pc_storage_ptr;
  uint uVar10;
  u32 *puVar11;
  u32 *pc_storage_ptr_1;
  u32 pc;
  u32 pc_delta;
  uint uVar12;
  u32 pc_delta_1;
  coprocessor_struct *pcVar13;
  coprocessor_struct *coprocessor;
  u32 translation_ptr_delta;
  u32 translation_ptr_delta_1;
  uint uVar14;
  uint uVar15;
  u32 fresh_allocation;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  if ((opcode << 0x14) >> 0x1c != 0xf || (opcode << 8) >> 0x1d != 0) {
    uVar15 = cpu_translate->flags_cached;
    uVar10 = cpu_translate->current_pc;
    uVar14 = (uint)cpu_translate->current_instruction->live_flags;
    pcVar13 = cpu_translate->current_cpu->coprocessor;
    uVar12 = uVar15 & uVar14;
    puVar9 = (u32 *)(uVar12 & 0xfffffffe);
    if (((uint)puVar9 & cpu_translate->flags_dirty) != 0) {
      uVar2 = cpu_translate_allocate_reg
                        (cpu_translate,(u32)&fresh_allocation,cpu_translate->flags_dirty,puVar9);
      if ((uVar14 & 0xfffffffe & ~(uVar15 & 0xfffffffe)) == 0) {
        puVar3 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar2 << 0xc | 0xe3a00000;
        cpu_translate->translation_ptr = puVar3;
      }
      else {
        puVar8 = cpu_translate->translation_ptr;
        puVar3 = puVar8 + 2;
        *puVar8 = uVar2 << 0xc | 0xe51b0080;
        puVar8[1] = (uint)puVar9 | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
        cpu_translate->translation_ptr = puVar3;
      }
      uVar14 = uVar2 << 0xc;
      puVar9 = puVar3;
      if ((uVar12 & 2) != 0) {
        puVar9 = puVar3 + 1;
        *puVar3 = uVar2 << 0x10 | 0x23800202 | uVar14;
        cpu_translate->translation_ptr = puVar9;
      }
      puVar3 = puVar9;
      if ((uVar12 & 4) != 0) {
        puVar3 = puVar9 + 1;
        *puVar9 = uVar2 << 0x10 | 0x3800204 | uVar14;
        cpu_translate->translation_ptr = puVar3;
      }
      puVar9 = puVar3;
      if ((uVar12 & 8) != 0) {
        puVar9 = puVar3 + 1;
        *puVar3 = uVar2 << 0x10 | 0x43800208 | uVar14;
      }
      uVar1 = (cpu_translate->reg_alloc).locked_regs;
      *puVar9 = uVar14 | 0xe50b0080;
      cpu_translate->translation_ptr = puVar9 + 1;
      (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
    }
    uVar12 = 0;
    cpu_translate->flags_cached = 1;
    cpu_translate->flags_dirty = 0;
    cpu_translate_normalize_reg_allocation(cpu_translate);
    puVar9 = cpu_translate->translation_ptr;
    *puVar9 = 0xe3a01005;
    puVar9[1] = ((int)arm_set_cpu_mode - (int)(puVar9 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
    uVar14 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
    cpu_translate->translation_ptr = puVar9 + 2;
    if (((uVar14 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar14] = 0xff,
        (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar14 & 1U) != 0)) {
      puVar9 = cpu_translate->translation_ptr;
      uVar15 = (uVar14 + 0x3fffffeb) * 4;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar14 + 0x3fffffeb) * -4;
      }
      else {
        uVar12 = 0x800000;
      }
      *puVar9 = uVar12 | 0xe50b0000 | uVar15;
      cpu_translate->translation_ptr = puVar9 + 1;
    }
    uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[1].mapped_reg;
    (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
    if (((uVar12 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar12] = 0xff,
        (cpu_translate->reg_alloc).native_regs[1].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
      puVar9 = cpu_translate->translation_ptr;
      uVar14 = (uVar12 + 0x3fffffeb) * 4;
      if ((int)uVar14 < 0) {
        uVar15 = 0;
        uVar14 = (uVar12 + 0x3fffffeb) * -4;
      }
      else {
        uVar15 = 0x800000;
      }
      *puVar9 = uVar15 | 0xe50b1000 | uVar14;
      cpu_translate->translation_ptr = puVar9 + 1;
    }
    (cpu_translate->reg_alloc).native_regs[1].mapped_reg = 0xfd;
    uVar2 = cpu_translate_allocate_reg(cpu_translate,0xe,0,&fresh_allocation);
    (cpu_translate->reg_alloc).native_regs[uVar2].dirty = '\x01';
    puVar3 = cpu_translate->translation_ptr;
    puVar9 = puVar3 + 1;
    *puVar3 = uVar10 & 0xfff | 0xe3000000 | ((uVar10 << 0x10) >> 0x1c) << 0x10 | uVar2 << 0xc;
    cpu_translate->translation_ptr = puVar9;
    if ((uVar10 & 0xffff0000) != 0) {
      puVar9 = puVar3 + 2;
      puVar3[1] = (uVar10 << 4) >> 0x14 | (uVar10 >> 0x1c) << 0x10 | 0xe3400000 | uVar2 << 0xc;
    }
    puVar3 = puVar9 + 1;
    *puVar9 = 0xe51b0058;
    cpu_translate->translation_ptr = puVar3;
    if (cpu_translate->thumb_mode != '\0') {
      puVar3 = puVar9 + 2;
      puVar9[1] = 0xe3800020;
    }
    *puVar3 = 0xe50b028c;
    puVar3[1] = 0xe3c0003f;
    puVar3[2] = 0xe380009b;
    puVar3[3] = 0xe50b0058;
    cpu_translate->translation_ptr = puVar3 + 4;
    if (pcVar13 == (coprocessor_struct *)0x0) {
      puVar3[4] = 0xe3a00004;
      cpu_translate->translation_ptr = puVar3 + 5;
    }
    else {
      puVar3[4] = 0xe51b007c;
      puVar3[5] = 0xe5900008;
      puVar3[6] = 0xe2800004;
      cpu_translate->translation_ptr = puVar3 + 7;
    }
    cpu_translate_normalize_reg_allocation(cpu_translate);
    puVar9 = cpu_translate->translation_ptr;
    *puVar9 = ((int)block_indirect_branch - (int)puVar9 >> 2) - 2U & 0xffffff | 0xea000000;
    cpu_translate->translation_ptr = puVar9 + 1;
    goto LAB_080b2394;
  }
  uVar15 = (opcode << 0x18) >> 0x1d;
  uVar12 = (opcode << 0x10) >> 0x1c;
  uVar14 = (opcode << 0xc) >> 0x1c;
  uVar10 = opcode & 0xf;
  if ((opcode & 0x100000) != 0) {
    if (uVar12 == 0xf) {
      uVar12 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
      if (((uVar12 < 0xfd) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar12] = 0xff,
          (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar12 & 1U) != 0)) {
        uVar6 = (uVar12 + 0x3fffffeb) * 4;
        if ((int)uVar6 < 0) {
          uVar5 = 0;
          uVar6 = (uVar12 + 0x3fffffeb) * -4;
        }
        else {
          uVar5 = 0x800000;
        }
        puVar9 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar5 | 0xe50b0000 | uVar6;
        cpu_translate->translation_ptr = puVar9;
      }
      else {
        puVar9 = cpu_translate->translation_ptr;
      }
      uVar2 = 0;
      (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
      uVar12 = uVar2;
    }
    else {
      uVar2 = cpu_translate_allocate_reg(cpu_translate,uVar12,0,&fresh_allocation);
      (cpu_translate->reg_alloc).native_regs[uVar2].dirty = '\x01';
      if ((opcode >> 0x1c == 0xe) || (fresh_allocation == 0)) {
        puVar9 = cpu_translate->translation_ptr;
        uVar12 = uVar2 << 0xc;
      }
      else {
        puVar9 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar12 * -4 + 0x54 | 0xe51b0000 | uVar2 << 0xc;
        cpu_translate->translation_ptr = puVar9;
        uVar12 = uVar2 << 0xc;
      }
    }
    if (uVar14 == 1) {
      if ((uVar15 | uVar10) == 0) {
        uVar12 = uVar12 | opcode & 0xf0000000;
        *puVar9 = uVar12 | 0x51b007c;
        puVar9[1] = uVar12 | uVar2 << 0x10 | 0x590000c;
        cpu_translate->translation_ptr = puVar9 + 2;
        goto LAB_080b2394;
      }
    }
    else if (uVar14 == 0) {
      if (uVar10 == 0) {
        if (uVar15 == 1) {
          *puVar9 = opcode & 0xf0000000 | 0x3020112 | uVar12;
          puVar9[1] = opcode & 0xf0000000 | 0x3400f0d | uVar12;
          cpu_translate->translation_ptr = puVar9 + 2;
        }
        else if (uVar15 == 2) {
          *puVar9 = opcode & 0xf0000000 | 0x3000180 | uVar12;
          puVar9[1] = opcode & 0xf0000000 | 0x3400014 | uVar12;
          cpu_translate->translation_ptr = puVar9 + 2;
        }
        else {
          *puVar9 = opcode & 0xf0000000 | 0x3090561 | uVar12;
          puVar9[1] = opcode & 0xf0000000 | 0x3440100 | uVar12;
          cpu_translate->translation_ptr = puVar9 + 2;
        }
        goto LAB_080b2394;
      }
    }
    else if ((uVar14 == 9) && (uVar10 == 1)) {
      if (uVar15 == 0) {
        uVar12 = uVar12 | opcode & 0xf0000000;
        *puVar9 = uVar12 | 0x51b007c;
        puVar9[1] = uVar12 | uVar2 << 0x10 | 0x5900010;
        cpu_translate->translation_ptr = puVar9 + 2;
        goto LAB_080b2394;
      }
      if (uVar15 == 1) {
        uVar12 = uVar12 | opcode & 0xf0000000;
        *puVar9 = uVar12 | 0x51b007c;
        puVar9[1] = uVar12 | uVar2 << 0x10 | 0x5900014;
        cpu_translate->translation_ptr = puVar9 + 2;
        goto LAB_080b2394;
      }
    }
    *puVar9 = uVar12 | opcode & 0xf0000000 | 0x3a00000;
    cpu_translate->translation_ptr = puVar9 + 1;
    goto LAB_080b2394;
  }
  if (uVar14 == 7) {
    if ((uVar10 == 0 && uVar15 == 4) || (uVar10 == 8 && uVar15 == 2)) {
      uVar12 = cpu_translate->flags_cached;
      uVar10 = (uint)cpu_translate->current_instruction->live_flags;
      uVar14 = uVar12 & uVar10;
      if ((uVar14 & 0xfffffffe & (uint)(u32 *)cpu_translate->flags_dirty) != 0) {
        uVar2 = cpu_translate_allocate_reg
                          (cpu_translate,(u32)&fresh_allocation,
                           (u32)cpu_translate->current_instruction,(u32 *)cpu_translate->flags_dirty
                          );
        if ((uVar10 & 0xfffffffe & ~(uVar12 & 0xfffffffe)) == 0) {
          puVar9 = cpu_translate->translation_ptr + 1;
          *cpu_translate->translation_ptr = uVar2 << 0xc | 0xe3a00000;
          cpu_translate->translation_ptr = puVar9;
        }
        else {
          puVar3 = cpu_translate->translation_ptr;
          puVar9 = puVar3 + 2;
          *puVar3 = uVar2 << 0xc | 0xe51b0080;
          puVar3[1] = uVar14 & 0xfffffffe | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
          cpu_translate->translation_ptr = puVar9;
        }
        uVar10 = uVar2 << 0xc;
        puVar3 = puVar9;
        if ((uVar14 & 2) != 0) {
          puVar3 = puVar9 + 1;
          *puVar9 = uVar2 << 0x10 | 0x23800202 | uVar10;
          cpu_translate->translation_ptr = puVar3;
        }
        puVar9 = puVar3;
        if ((uVar14 & 4) != 0) {
          puVar9 = puVar3 + 1;
          *puVar3 = uVar2 << 0x10 | 0x3800204 | uVar10;
          cpu_translate->translation_ptr = puVar9;
        }
        puVar3 = puVar9;
        if ((uVar14 & 8) != 0) {
          puVar3 = puVar9 + 1;
          *puVar9 = uVar2 << 0x10 | 0x43800208 | uVar10;
        }
        uVar1 = (cpu_translate->reg_alloc).locked_regs;
        *puVar3 = uVar10 | 0xe50b0080;
        cpu_translate->translation_ptr = puVar3 + 1;
        (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
      }
      cpu_translate->flags_cached = 1;
      cpu_translate->flags_dirty = 0;
      cpu_translate_normalize_reg_allocation(cpu_translate);
      puVar9 = cpu_translate->translation_ptr;
      *puVar9 = 0xe3a01001;
      puVar3 = puVar9 + 2;
      puVar9[1] = (uint)cpu_translate->thumb_mode | cpu_translate->current_pc & 0xfff | 0xe3000000 |
                  ((cpu_translate->current_pc << 0x10) >> 0x1c) << 0x10;
      uVar10 = cpu_translate->current_pc;
      cpu_translate->translation_ptr = puVar3;
      if ((uVar10 & 0xffff0000) != 0) {
        puVar3 = puVar9 + 3;
        puVar9[2] = (uVar10 << 4) >> 0x14 | (uVar10 >> 0x1c) << 0x10 | 0xe3400000;
      }
      *puVar3 = opcode & 0xf0000000 | 0x54b127b;
      puVar3[1] = ((int)block_halt - (int)(puVar3 + 1) >> 2) - 2U & 0xffffff |
                  opcode & 0xf0000000 | 0xa000000;
      cpu_translate->translation_ptr = puVar3 + 2;
    }
    goto LAB_080b2394;
  }
  if (uVar14 == 9) {
    if (uVar10 != 1) goto LAB_080b2394;
    if (uVar15 != 0) {
      if (uVar15 == 1) {
        uVar15 = cpu_translate->flags_cached;
        uVar14 = (uint)cpu_translate->current_instruction->live_flags;
        uVar10 = uVar15 & uVar14;
        puVar9 = (u32 *)(uVar10 & 0xfffffffe);
        if (((uint)puVar9 & cpu_translate->flags_dirty) != 0) {
          uVar2 = cpu_translate_allocate_reg
                            (cpu_translate,(u32)&fresh_allocation,cpu_translate->flags_dirty,puVar9)
          ;
          if ((uVar14 & 0xfffffffe & ~(uVar15 & 0xfffffffe)) == 0) {
            puVar3 = cpu_translate->translation_ptr + 1;
            *cpu_translate->translation_ptr = uVar2 << 0xc | 0xe3a00000;
            cpu_translate->translation_ptr = puVar3;
          }
          else {
            puVar8 = cpu_translate->translation_ptr;
            puVar3 = puVar8 + 2;
            *puVar8 = uVar2 << 0xc | 0xe51b0080;
            puVar8[1] = (uint)puVar9 | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
            cpu_translate->translation_ptr = puVar3;
          }
          uVar14 = uVar2 << 0xc;
          puVar9 = puVar3;
          if ((uVar10 & 2) != 0) {
            puVar9 = puVar3 + 1;
            *puVar3 = uVar2 << 0x10 | 0x23800202 | uVar14;
            cpu_translate->translation_ptr = puVar9;
          }
          puVar3 = puVar9;
          if ((uVar10 & 4) != 0) {
            puVar3 = puVar9 + 1;
            *puVar9 = uVar2 << 0x10 | 0x3800204 | uVar14;
            cpu_translate->translation_ptr = puVar3;
          }
          puVar9 = puVar3;
          if ((uVar10 & 8) != 0) {
            puVar9 = puVar3 + 1;
            *puVar3 = uVar2 << 0x10 | 0x43800208 | uVar14;
          }
          uVar1 = (cpu_translate->reg_alloc).locked_regs;
          *puVar9 = uVar14 | 0xe50b0080;
          cpu_translate->translation_ptr = puVar9 + 1;
          (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
        }
        cpu_translate->flags_cached = 1;
        cpu_translate->flags_dirty = 0;
        cpu_translate_load_reg_fixed(cpu_translate,uVar12,1);
        uVar10 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
        if (((uVar10 < 0xfd) &&
            ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar10] = 0xff,
            (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
           (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar10 & 1U) != 0)) {
          puVar9 = cpu_translate->translation_ptr;
          uVar12 = (uVar10 + 0x3fffffeb) * 4;
          if ((int)uVar12 < 0) {
            uVar14 = 0;
            uVar12 = (uVar10 + 0x3fffffeb) * -4;
          }
          else {
            uVar14 = 0x800000;
          }
          *puVar9 = uVar14 | 0xe50b0000 | uVar12;
          cpu_translate->translation_ptr = puVar9 + 1;
        }
        uVar10 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
        (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
        if (((uVar10 < 0xfd) &&
            ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar10] = 0xff,
            (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
           (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar10 & 1U) != 0)) {
          uVar12 = (uVar10 + 0x3fffffeb) * 4;
          if ((int)uVar12 < 0) {
            uVar12 = (uVar10 + 0x3fffffeb) * -4;
            uVar10 = 0;
          }
          else {
            uVar10 = 0x800000;
          }
          puVar9 = cpu_translate->translation_ptr + 1;
          *cpu_translate->translation_ptr = uVar10 | 0xe50be000 | uVar12;
        }
        else {
          puVar9 = cpu_translate->translation_ptr;
        }
        (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xfd;
        *puVar9 = ((int)arm_update_coprocessor_itcm_control - (int)puVar9 >> 2) - 2U & 0xffffff |
                  opcode & 0xf0000000 | 0xb000000;
        cpu_translate->translation_ptr = puVar9 + 1;
      }
      goto LAB_080b2394;
    }
    pcVar4 = cpu_translate;
    cpu_translate_normalize_reg_allocation(cpu_translate);
    uVar15 = pcVar4->flags_cached;
    uVar14 = (uint)pcVar4->current_instruction->live_flags;
    uVar10 = uVar15 & uVar14;
    puVar9 = (u32 *)(uVar10 & 0xfffffffe);
    if (((uint)puVar9 & pcVar4->flags_dirty) != 0) {
      uVar2 = cpu_translate_allocate_reg(pcVar4,(u32)&fresh_allocation,pcVar4->flags_dirty,puVar9);
      if ((uVar14 & 0xfffffffe & ~(uVar15 & 0xfffffffe)) == 0) {
        puVar3 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar2 << 0xc | 0xe3a00000;
        cpu_translate->translation_ptr = puVar3;
      }
      else {
        puVar8 = cpu_translate->translation_ptr;
        puVar3 = puVar8 + 2;
        *puVar8 = uVar2 << 0xc | 0xe51b0080;
        puVar8[1] = (uint)puVar9 | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
        cpu_translate->translation_ptr = puVar3;
      }
      uVar14 = uVar2 << 0xc;
      puVar9 = puVar3;
      if ((uVar10 & 2) != 0) {
        puVar9 = puVar3 + 1;
        *puVar3 = uVar2 << 0x10 | 0x23800202 | uVar14;
        cpu_translate->translation_ptr = puVar9;
      }
      puVar3 = puVar9;
      if ((uVar10 & 4) != 0) {
        puVar3 = puVar9 + 1;
        *puVar9 = uVar2 << 0x10 | 0x3800204 | uVar14;
        cpu_translate->translation_ptr = puVar3;
      }
      puVar9 = puVar3;
      if ((uVar10 & 8) != 0) {
        puVar9 = puVar3 + 1;
        *puVar3 = uVar2 << 0x10 | 0x43800208 | uVar14;
      }
      uVar1 = (cpu_translate->reg_alloc).locked_regs;
      *puVar9 = uVar14 | 0xe50b0080;
      cpu_translate->translation_ptr = puVar9 + 1;
      (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
    }
    cpu_translate->flags_cached = 1;
    cpu_translate->flags_dirty = 0;
    cpu_translate_load_reg_fixed(cpu_translate,uVar12,1);
    uVar10 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
    if (((uVar10 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar10] = 0xff,
        (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar10 & 1U) != 0)) {
      puVar9 = cpu_translate->translation_ptr;
      uVar12 = (uVar10 + 0x3fffffeb) * 4;
      if ((int)uVar12 < 0) {
        uVar14 = 0;
        uVar12 = (uVar10 + 0x3fffffeb) * -4;
      }
      else {
        uVar14 = 0x800000;
      }
      *puVar9 = uVar14 | 0xe50b0000 | uVar12;
      cpu_translate->translation_ptr = puVar9 + 1;
    }
    uVar10 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
    (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
    if (((uVar10 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar10] = 0xff,
        (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar10 & 1U) != 0)) {
      uVar12 = (uVar10 + 0x3fffffeb) * 4;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar10 + 0x3fffffeb) * -4;
        uVar10 = 0;
      }
      else {
        uVar10 = 0x800000;
      }
      puVar9 = cpu_translate->translation_ptr + 1;
      *cpu_translate->translation_ptr = uVar10 | 0xe50be000 | uVar12;
    }
    else {
      puVar9 = cpu_translate->translation_ptr;
    }
    puVar3 = cpu_translate->pc_metadata_ptr;
    pcVar7 = arm_update_coprocessor_dtcm_control;
  }
  else {
    if ((uVar14 != 1) || ((uVar15 | uVar10) != 0)) goto LAB_080b2394;
    pcVar4 = cpu_translate;
    cpu_translate_normalize_reg_allocation(cpu_translate);
    uVar10 = pcVar4->flags_cached;
    uVar15 = (uint)pcVar4->current_instruction->live_flags;
    uVar14 = uVar10 & uVar15;
    if ((uVar14 & 0xfffffffe & (uint)(u32 *)pcVar4->flags_dirty) != 0) {
      uVar2 = cpu_translate_allocate_reg
                        (pcVar4,(u32)&fresh_allocation,uVar10,(u32 *)pcVar4->flags_dirty);
      if ((uVar15 & 0xfffffffe & ~(uVar10 & 0xfffffffe)) == 0) {
        puVar9 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar2 << 0xc | 0xe3a00000;
        cpu_translate->translation_ptr = puVar9;
      }
      else {
        puVar3 = cpu_translate->translation_ptr;
        puVar9 = puVar3 + 2;
        *puVar3 = uVar2 << 0xc | 0xe51b0080;
        puVar3[1] = uVar14 & 0xfffffffe | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
        cpu_translate->translation_ptr = puVar9;
      }
      uVar10 = uVar2 << 0xc;
      puVar3 = puVar9;
      if ((uVar14 & 2) != 0) {
        puVar3 = puVar9 + 1;
        *puVar9 = uVar2 << 0x10 | 0x23800202 | uVar10;
        cpu_translate->translation_ptr = puVar3;
      }
      puVar9 = puVar3;
      if ((uVar14 & 4) != 0) {
        puVar9 = puVar3 + 1;
        *puVar3 = uVar2 << 0x10 | 0x3800204 | uVar10;
        cpu_translate->translation_ptr = puVar9;
      }
      puVar3 = puVar9;
      if ((uVar14 & 8) != 0) {
        puVar3 = puVar9 + 1;
        *puVar9 = uVar2 << 0x10 | 0x43800208 | uVar10;
      }
      uVar1 = (cpu_translate->reg_alloc).locked_regs;
      *puVar3 = uVar10 | 0xe50b0080;
      cpu_translate->translation_ptr = puVar3 + 1;
      (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
    }
    cpu_translate->flags_cached = 1;
    cpu_translate->flags_dirty = 0;
    cpu_translate_load_reg_fixed(cpu_translate,uVar12,1);
    uVar10 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
    if (((uVar10 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar10] = 0xff,
        (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar10 & 1U) != 0)) {
      puVar9 = cpu_translate->translation_ptr;
      uVar12 = (uVar10 + 0x3fffffeb) * 4;
      if ((int)uVar12 < 0) {
        uVar14 = 0;
        uVar12 = (uVar10 + 0x3fffffeb) * -4;
      }
      else {
        uVar14 = 0x800000;
      }
      *puVar9 = uVar14 | 0xe50b0000 | uVar12;
      cpu_translate->translation_ptr = puVar9 + 1;
    }
    uVar10 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
    (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
    if (((uVar10 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar10] = 0xff,
        (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar10 & 1U) != 0)) {
      uVar12 = (uVar10 + 0x3fffffeb) * 4;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar10 + 0x3fffffeb) * -4;
        uVar10 = 0;
      }
      else {
        uVar10 = 0x800000;
      }
      puVar9 = cpu_translate->translation_ptr + 1;
      *cpu_translate->translation_ptr = uVar10 | 0xe50be000 | uVar12;
    }
    else {
      puVar9 = cpu_translate->translation_ptr;
    }
    puVar3 = cpu_translate->pc_metadata_ptr;
    pcVar7 = arm_update_coprocessor_control;
  }
  puVar11 = cpu_translate->current_pc_metadata_ptr;
  puVar8 = cpu_translate->translation_ptr_code_base;
  (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xfd;
  *puVar9 = ((int)pcVar7 - (int)puVar9 >> 2) - 2U & 0xffffff | opcode & 0xf0000000 | 0xb000000;
  uVar10 = (int)(puVar9 + 1) - (int)puVar8 >> 2;
  cpu_translate->translation_ptr = puVar9 + 1;
  uVar12 = cpu_translate->current_pc - cpu_translate->base_pc;
  if (cpu_translate->pc_metadata_count <= (uint)((int)puVar11 - (int)puVar3 >> 2)) {
    __printf_chk(1,"FATAL: went past metadata storage of %d for block @ %p (%x)\n",
                 cpu_translate->pc_metadata_count,puVar8,cpu_translate->current_pc);
  }
  if (0xffff < uVar12) {
    __printf_chk(1,"FATAL: pc_delta in stored PC metadata is %x\n",uVar12);
  }
  if (0xffff < uVar10) {
    __printf_chk(1,"FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar10);
  }
  puVar9 = cpu_translate->current_pc_metadata_ptr;
  *puVar11 = uVar12 | uVar10 << 0x10;
  cpu_translate->current_pc_metadata_ptr = puVar9 + 1;
LAB_080b2394:
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


