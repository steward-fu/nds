/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_setup_memory_address
 * Address  : 080b1750
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_setup_memory_address
               (cpu_translate_struct *cpu_translate,u32 opcode,u32 operand_type,u32 operand_value,
               u32 condition)

{
  ushort uVar1;
  u32 native_rn;
  u32 native_rm;
  u32 adjust_reg;
  u32 native_rn_2;
  u32 native_rm_1;
  cpu_translate_struct *pcVar2;
  u32 *puVar3;
  int iVar4;
  u32 uVar5;
  uint uVar6;
  u32 uVar7;
  u32 mapped_reg_1;
  uint uVar8;
  u32 dest_pc;
  uint uVar9;
  u32 mapped_reg;
  u32 mapped_reg_2;
  u32 dest;
  uint uVar10;
  u32 shift_value;
  u32 offset_low;
  u32 rm;
  uint uVar11;
  u32 rn;
  u32 rn_1;
  u32 rm_1;
  uint uVar12;
  u32 offset_high;
  u32 rn_2;
  uint uVar13;
  u32 shift_type;
  
  if (operand_type == 1) {
    uVar11 = (opcode << 0xc) >> 0x1c;
    if ((opcode & 0x800000) == 0) {
      uVar12 = 0x400000;
    }
    else {
      uVar12 = 0x800000;
    }
    uVar5 = opcode & 0x1000000;
    if (uVar5 == 0) {
      pcVar2 = cpu_translate;
      cpu_translate_load_reg_fixed(cpu_translate,uVar11,0);
      uVar7 = cpu_translate_allocate_src_reg(pcVar2,opcode & 0xf,uVar5);
      uVar5 = cpu_translate_allocate_dest_reg(cpu_translate,uVar11,1,condition);
      puVar3 = cpu_translate->translation_ptr;
      *puVar3 = uVar12 | condition << 0x1c | uVar7 | uVar5 << 0xc;
      cpu_translate->translation_ptr = puVar3 + 1;
      (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
    }
    else {
      uVar10 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
      if (((uVar10 < 0xfd) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar10] = 0xff,
          (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar10 & 1U) != 0)) {
        puVar3 = cpu_translate->translation_ptr;
        uVar13 = (uVar10 + 0x3fffffeb) * 4;
        if ((int)uVar13 < 0) {
          uVar9 = 0;
          uVar13 = (uVar10 + 0x3fffffeb) * -4;
        }
        else {
          uVar9 = 0x800000;
        }
        *puVar3 = uVar9 | 0xe50b0000 | uVar13;
        cpu_translate->translation_ptr = puVar3 + 1;
      }
      uVar7 = 0x49c;
      uVar1 = (cpu_translate->reg_alloc).locked_regs;
      (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
      (cpu_translate->reg_alloc).locked_regs = uVar1 | 1;
      uVar5 = cpu_translate_allocate_src_reg(cpu_translate,uVar11,0x49c);
      uVar7 = cpu_translate_allocate_src_reg(cpu_translate,opcode & 0xf,uVar7);
      puVar3 = cpu_translate->translation_ptr;
      *puVar3 = condition << 0x1c | uVar12 | uVar7 | uVar5 << 0x10;
      cpu_translate->translation_ptr = puVar3 + 1;
      if ((opcode & 0x200000) != 0) {
        (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
        puVar3[1] = condition << 0x1c | 0x1a00000 | uVar5 << 0xc;
        cpu_translate->translation_ptr = puVar3 + 2;
      }
    }
    (cpu_translate->reg_alloc).locked_regs =
         ~(ushort)(1 << (uVar7 & 0xff)) & ~(ushort)(1 << (uVar5 & 0xff)) &
         (cpu_translate->reg_alloc).locked_regs;
  }
  else if (operand_type == 0) {
    uVar11 = (opcode << 0xc) >> 0x1c;
    if (operand_value == 0) {
      cpu_translate_load_reg_fixed(cpu_translate,uVar11,0);
      return;
    }
    uVar12 = operand_value & 0xff;
    if ((opcode & 0x800000) == 0) {
      uVar10 = 0x400000;
      iVar4 = 2;
    }
    else {
      uVar10 = 0x800000;
      iVar4 = 4;
    }
    uVar13 = operand_value >> 8;
    if ((opcode & 0x1000000) == 0) {
      pcVar2 = cpu_translate;
      cpu_translate_load_reg_fixed(cpu_translate,uVar11,0);
      uVar5 = cpu_translate_allocate_dest_reg(pcVar2,uVar11,0,condition);
      (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
      if (uVar12 != 0) {
        puVar3 = cpu_translate->translation_ptr;
        *puVar3 = uVar12 | condition << 0x1c | 0x2000000 | uVar10 | uVar5 << 0xc;
        cpu_translate->translation_ptr = puVar3 + 1;
        uVar12 = uVar5;
      }
      if (uVar13 != 0) {
        puVar3 = cpu_translate->translation_ptr;
        *puVar3 = condition << 0x1c | 0x2000c00 | uVar13 | uVar10 | uVar5 << 0xc | uVar12 << 0x10;
        cpu_translate->translation_ptr = puVar3 + 1;
      }
    }
    else {
      uVar9 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
      if (((uVar9 < 0xfd) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar9] = 0xff,
          (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar9 & 1U) != 0)) {
        puVar3 = cpu_translate->translation_ptr;
        uVar8 = (uVar9 + 0x3fffffeb) * 4;
        if ((int)uVar8 < 0) {
          uVar6 = 0;
          uVar8 = (uVar9 + 0x3fffffeb) * -4;
        }
        else {
          uVar6 = 0x800000;
        }
        *puVar3 = uVar6 | 0xe50b0000 | uVar8;
        cpu_translate->translation_ptr = puVar3 + 1;
      }
      uVar1 = (cpu_translate->reg_alloc).locked_regs;
      (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
      (cpu_translate->reg_alloc).locked_regs = uVar1 | 1;
      if (uVar11 == 0xf) {
        puVar3 = cpu_translate->translation_ptr;
        uVar5 = cpu_translate->current_instruction->next_pc;
        if (iVar4 == 4) {
          uVar11 = operand_value + uVar5;
        }
        else {
          uVar11 = uVar5 - operand_value;
        }
        *puVar3 = condition << 0x1c | 0x3000000 | uVar11 & 0xfff |
                  ((uVar11 << 0x10) >> 0x1c) << 0x10;
        cpu_translate->translation_ptr = puVar3 + 1;
        if ((uVar11 & 0xffff0000) != 0) {
          puVar3[1] = (uVar11 << 4) >> 0x14 |
                      condition << 0x1c | 0x3400000 | (uVar11 >> 0x1c) << 0x10;
          cpu_translate->translation_ptr = puVar3 + 2;
        }
      }
      else {
        uVar7 = cpu_translate_allocate_src_reg(cpu_translate,uVar11,0);
        uVar5 = uVar7;
        if (uVar12 != 0) {
          puVar3 = cpu_translate->translation_ptr;
          *puVar3 = uVar12 | condition << 0x1c | 0x2000000 | uVar10 | uVar7 << 0x10;
          cpu_translate->translation_ptr = puVar3 + 1;
          uVar5 = 0;
        }
        if (uVar13 != 0) {
          puVar3 = cpu_translate->translation_ptr;
          *puVar3 = condition << 0x1c | 0x2000c00 | uVar13 | uVar10 | uVar5 << 0x10;
          cpu_translate->translation_ptr = puVar3 + 1;
        }
        if ((opcode & 0x200000) != 0) {
          (cpu_translate->reg_alloc).native_regs[uVar7].dirty = '\x01';
          puVar3 = cpu_translate->translation_ptr;
          *puVar3 = condition << 0x1c | 0x1a00000 | uVar7 << 0xc;
          cpu_translate->translation_ptr = puVar3 + 1;
        }
      }
    }
  }
  else if (operand_type == 2) {
    uVar11 = (opcode << 0xc) >> 0x1c;
    if ((opcode & 0x800000) == 0) {
      uVar12 = 0x400000;
    }
    else {
      uVar12 = 0x800000;
    }
    uVar5 = opcode & 0x1000000;
    uVar10 = (opcode << 0x14) >> 0x1b;
    uVar13 = (opcode << 0x19) >> 0x1e;
    if (uVar5 == 0) {
      pcVar2 = cpu_translate;
      cpu_translate_load_reg_fixed(cpu_translate,uVar11,0);
      uVar7 = cpu_translate_allocate_src_reg(pcVar2,opcode & 0xf,uVar5);
      uVar5 = cpu_translate_allocate_dest_reg(cpu_translate,uVar11,1,condition);
      puVar3 = cpu_translate->translation_ptr;
      *puVar3 = uVar10 << 7 | uVar13 << 5 | condition << 0x1c | uVar12 | uVar7 | uVar5 << 0xc;
      cpu_translate->translation_ptr = puVar3 + 1;
      (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
    }
    else {
      uVar9 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
      if (((uVar9 < 0xfd) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar9] = 0xff,
          (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar9 & 1U) != 0)) {
        puVar3 = cpu_translate->translation_ptr;
        uVar8 = (uVar9 + 0x3fffffeb) * 4;
        if ((int)uVar8 < 0) {
          uVar6 = 0;
          uVar8 = (uVar9 + 0x3fffffeb) * -4;
        }
        else {
          uVar6 = 0x800000;
        }
        *puVar3 = uVar6 | 0xe50b0000 | uVar8;
        cpu_translate->translation_ptr = puVar3 + 1;
      }
      uVar7 = 0x49c;
      uVar1 = (cpu_translate->reg_alloc).locked_regs;
      (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
      (cpu_translate->reg_alloc).locked_regs = uVar1 | 1;
      uVar5 = cpu_translate_allocate_src_reg(cpu_translate,uVar11,0x49c);
      uVar7 = cpu_translate_allocate_src_reg(cpu_translate,opcode & 0xf,uVar7);
      puVar3 = cpu_translate->translation_ptr;
      *puVar3 = uVar10 << 7 | uVar13 << 5 | condition << 0x1c | uVar12 | uVar7 | uVar5 << 0x10;
      cpu_translate->translation_ptr = puVar3 + 1;
      if ((opcode & 0x200000) != 0) {
        (cpu_translate->reg_alloc).native_regs[uVar5].dirty = '\x01';
        puVar3[1] = condition << 0x1c | 0x1a00000 | uVar5 << 0xc;
        cpu_translate->translation_ptr = puVar3 + 2;
      }
    }
    (cpu_translate->reg_alloc).locked_regs =
         ~(ushort)(1 << (uVar7 & 0xff)) & ~(ushort)(1 << (uVar5 & 0xff)) &
         (cpu_translate->reg_alloc).locked_regs;
  }
  return;
}


