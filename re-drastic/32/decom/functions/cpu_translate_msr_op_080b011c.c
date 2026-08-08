/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_msr_op
 * Address  : 080b011c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_msr_op(cpu_translate_struct *cpu_translate,u32 opcode)

{
  ushort uVar1;
  u32 *puVar2;
  u32 *puVar3;
  u32 uVar4;
  u8 *emulated_reg_maps_to;
  u8 *emulated_reg_maps_to_1;
  u8 *emulated_reg_maps_to_2;
  u8 *emulated_reg_maps_to_3;
  uint uVar5;
  u32 mapped_reg;
  u32 mapped_reg_1;
  u32 mapped_reg_2;
  u32 mapped_reg_3;
  u32 *puVar6;
  uint uVar7;
  u32 psr_mask;
  u32 *ptr_u32;
  uint uVar8;
  u32 *puVar9;
  u32 *pc_storage_ptr;
  uint uVar10;
  u32 pc_delta;
  uint uVar11;
  u32 translation_ptr_delta;
  u32 *puVar12;
  u32 fresh_allocation;
  int local_2c;
  
  uVar5 = opcode >> 0x10;
  local_2c = __stack_chk_guard;
  if ((opcode & 0x400000) == 0) {
    if ((uVar5 & 8) != 0) {
      puVar2 = cpu_translate->translation_ptr;
      *puVar2 = 0xe128f000;
      cpu_translate->flags_cached = 0xf;
      cpu_translate->flags_dirty = 0xf;
      cpu_translate->translation_ptr = puVar2 + 1;
    }
    if ((uVar5 & 1) != 0) {
      if (opcode >> 0x1c < 0xe) {
        puVar2 = cpu_translate->translation_ptr;
        *puVar2 = 0xfffffffeU - ((int)puVar2 >> 2) & 0xffffff | 0xa000000 |
                  (opcode >> 0x1c ^ 1) << 0x1c;
        cpu_translate->translation_ptr = puVar2 + 1;
      }
      else {
        puVar2 = (u32 *)0x0;
      }
      uVar8 = cpu_translate->flags_cached;
      uVar7 = (uint)cpu_translate->current_instruction->live_flags;
      uVar5 = uVar8 & uVar7;
      if ((uVar5 & 0xfffffffe & (uint)(u32 *)cpu_translate->flags_dirty) != 0) {
        uVar4 = cpu_translate_allocate_reg
                          (cpu_translate,(u32)&fresh_allocation,
                           (u32)cpu_translate->current_instruction,(u32 *)cpu_translate->flags_dirty
                          );
        if ((uVar7 & 0xfffffffe & ~(uVar8 & 0xfffffffe)) == 0) {
          puVar12 = cpu_translate->translation_ptr + 1;
          *cpu_translate->translation_ptr = uVar4 << 0xc | 0xe3a00000;
          cpu_translate->translation_ptr = puVar12;
        }
        else {
          puVar3 = cpu_translate->translation_ptr;
          puVar12 = puVar3 + 2;
          *puVar3 = uVar4 << 0xc | 0xe51b0080;
          puVar3[1] = uVar5 & 0xfffffffe | 0xe3c00200 | uVar4 << 0xc | uVar4 << 0x10;
          cpu_translate->translation_ptr = puVar12;
        }
        uVar7 = uVar4 << 0xc;
        puVar3 = puVar12;
        if ((uVar5 & 2) != 0) {
          puVar3 = puVar12 + 1;
          *puVar12 = uVar4 << 0x10 | 0x23800202 | uVar7;
          cpu_translate->translation_ptr = puVar3;
        }
        puVar12 = puVar3;
        if ((uVar5 & 4) != 0) {
          puVar12 = puVar3 + 1;
          *puVar3 = uVar4 << 0x10 | 0x3800204 | uVar7;
          cpu_translate->translation_ptr = puVar12;
        }
        puVar3 = puVar12;
        if ((uVar5 & 8) != 0) {
          puVar3 = puVar12 + 1;
          *puVar12 = uVar4 << 0x10 | 0x43800208 | uVar7;
        }
        uVar1 = (cpu_translate->reg_alloc).locked_regs;
        *puVar3 = uVar7 | 0xe50b0080;
        cpu_translate->translation_ptr = puVar3 + 1;
        (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar4 & 0xff));
      }
      uVar5 = 0;
      cpu_translate->flags_cached = 1;
      cpu_translate->flags_dirty = 0;
      cpu_translate_normalize_reg_allocation(cpu_translate);
      uVar7 = (uint)(cpu_translate->reg_alloc).native_regs[1].mapped_reg;
      if (((uVar7 < 0xfd) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar7] = 0xff,
          (cpu_translate->reg_alloc).native_regs[1].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar7 & 1U) != 0)) {
        puVar12 = cpu_translate->translation_ptr;
        uVar8 = (uVar7 + 0x3fffffeb) * 4;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar7 + 0x3fffffeb) * -4;
        }
        else {
          uVar5 = 0x800000;
        }
        *puVar12 = uVar5 | 0xe50b1000 | uVar8;
        cpu_translate->translation_ptr = puVar12 + 1;
      }
      uVar5 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
      (cpu_translate->reg_alloc).native_regs[1].mapped_reg = 0xfd;
      if (((uVar5 < 0xfd) &&
          ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5] = 0xff,
          (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
         (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar5 & 1U) != 0)) {
        uVar7 = (uVar5 + 0x3fffffeb) * 4;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar5 + 0x3fffffeb) * -4;
          uVar5 = 0;
        }
        else {
          uVar5 = 0x800000;
        }
        puVar12 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar5 | 0xe50be000 | uVar7;
      }
      else {
        puVar12 = cpu_translate->translation_ptr;
      }
      puVar3 = cpu_translate->pc_metadata_ptr;
      puVar9 = cpu_translate->current_pc_metadata_ptr;
      puVar6 = cpu_translate->translation_ptr_code_base;
      (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xfd;
      *puVar12 = ((int)arm_msr_cpsr_low - (int)puVar12 >> 2) - 2U & 0xffffff | 0xeb000000;
      uVar5 = (int)(puVar12 + 1) - (int)puVar6 >> 2;
      cpu_translate->translation_ptr = puVar12 + 1;
      uVar7 = cpu_translate->current_pc - cpu_translate->base_pc;
      if (cpu_translate->pc_metadata_count <= (uint)((int)puVar9 - (int)puVar3 >> 2)) {
        __printf_chk(1,"FATAL: went past metadata storage of %d for block @ %p (%x)\n",
                     cpu_translate->pc_metadata_count,puVar6,cpu_translate->current_pc);
      }
      if (0xffff < uVar7) {
        __printf_chk(1,"FATAL: pc_delta in stored PC metadata is %x\n",uVar7);
      }
      if (0xffff < uVar5) {
        __printf_chk(1,"FATAL: translation_ptr_delta in stored PC metadata is %x\n",uVar5);
      }
      puVar12 = cpu_translate->current_pc_metadata_ptr;
      *puVar9 = uVar7 | uVar5 << 0x10;
      cpu_translate->current_pc_metadata_ptr = puVar12 + 1;
      if (puVar2 != (u32 *)0x0) {
        *puVar2 = ((int)cpu_translate->translation_ptr - (int)puVar2 >> 2) - 2U & 0xffffff |
                  *puVar2 & 0xff000000;
      }
    }
  }
  else {
    uVar11 = cpu_translate->flags_cached;
    uVar7 = cpu_translate_msr_op::psr_masks[(int)(u32 *)(uVar5 & 0xf)];
    uVar10 = (uint)cpu_translate->current_instruction->live_flags;
    uVar8 = uVar11 & uVar10;
    if ((uVar8 & 0xfffffffe & cpu_translate->flags_dirty) != 0) {
      uVar4 = cpu_translate_allocate_reg
                        (cpu_translate,(u32)&fresh_allocation,0x81439b8,(u32 *)(uVar5 & 0xf));
      if ((uVar10 & 0xfffffffe & ~(uVar11 & 0xfffffffe)) == 0) {
        puVar2 = cpu_translate->translation_ptr + 1;
        *cpu_translate->translation_ptr = uVar4 << 0xc | 0xe3a00000;
        cpu_translate->translation_ptr = puVar2;
      }
      else {
        puVar12 = cpu_translate->translation_ptr;
        puVar2 = puVar12 + 2;
        *puVar12 = uVar4 << 0xc | 0xe51b0080;
        puVar12[1] = uVar8 & 0xfffffffe | 0xe3c00200 | uVar4 << 0xc | uVar4 << 0x10;
        cpu_translate->translation_ptr = puVar2;
      }
      uVar5 = uVar4 << 0xc;
      puVar12 = puVar2;
      if ((uVar8 & 2) != 0) {
        puVar12 = puVar2 + 1;
        *puVar2 = uVar4 << 0x10 | 0x23800202 | uVar5;
        cpu_translate->translation_ptr = puVar12;
      }
      puVar2 = puVar12;
      if ((uVar8 & 4) != 0) {
        puVar2 = puVar12 + 1;
        *puVar12 = uVar4 << 0x10 | 0x3800204 | uVar5;
        cpu_translate->translation_ptr = puVar2;
      }
      puVar12 = puVar2;
      if ((uVar8 & 8) != 0) {
        puVar12 = puVar2 + 1;
        *puVar2 = uVar4 << 0x10 | 0x43800208 | uVar5;
      }
      uVar1 = (cpu_translate->reg_alloc).locked_regs;
      *puVar12 = uVar5 | 0xe50b0080;
      cpu_translate->translation_ptr = puVar12 + 1;
      (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar4 & 0xff));
    }
    uVar8 = (uint)(cpu_translate->reg_alloc).native_regs[1].mapped_reg;
    uVar5 = 0;
    cpu_translate->flags_cached = 1;
    cpu_translate->flags_dirty = 0;
    if (((uVar8 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar8] = 0xff,
        (cpu_translate->reg_alloc).native_regs[1].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar8 & 1U) != 0)) {
      puVar2 = cpu_translate->translation_ptr;
      uVar10 = (uVar8 + 0x3fffffeb) * 4;
      if ((int)uVar10 < 0) {
        uVar10 = (uVar8 + 0x3fffffeb) * -4;
      }
      else {
        uVar5 = 0x800000;
      }
      *puVar2 = uVar5 | 0xe50b1000 | uVar10;
      cpu_translate->translation_ptr = puVar2 + 1;
    }
    uVar5 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
    (cpu_translate->reg_alloc).native_regs[1].mapped_reg = 0xfd;
    if (((uVar5 < 0xfd) &&
        ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5] = 0xff,
        (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
       (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar5 & 1U) != 0)) {
      uVar8 = (uVar5 + 0x3fffffeb) * 4;
      if ((int)uVar8 < 0) {
        uVar10 = 0;
        uVar8 = (uVar5 + 0x3fffffeb) * -4;
      }
      else {
        uVar10 = 0x800000;
      }
      puVar2 = cpu_translate->translation_ptr + 1;
      *cpu_translate->translation_ptr = uVar10 | 0xe50be000 | uVar8;
    }
    else {
      puVar2 = cpu_translate->translation_ptr;
    }
    uVar7 = ~uVar7;
    (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xfd;
    puVar12 = puVar2 + 1;
    *puVar2 = uVar7 & 0xfff | 0xe3001000 | ((uVar7 << 0x10) >> 0x1c) << 0x10;
    cpu_translate->translation_ptr = puVar12;
    if ((uVar7 & 0xffff0000) != 0) {
      puVar12 = puVar2 + 2;
      puVar2[1] = (uVar7 << 4) >> 0x14 | (uVar7 >> 0x1c) << 0x10 | 0xe3401000;
    }
    *puVar12 = 0xe1c00001;
    puVar12[1] = ((int)arm_msr_spsr - (int)(puVar12 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
    cpu_translate->translation_ptr = puVar12 + 2;
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


