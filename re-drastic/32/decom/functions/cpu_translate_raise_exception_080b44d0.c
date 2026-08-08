/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_raise_exception
 * Address  : 080b44d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable lr_reg:u32[r0:4] conflicts with parameter, skipped. */

void cpu_translate_raise_exception
               (cpu_translate_struct *cpu_translate,u32 exception_type,u32 cpu_mode,u32 condition)

{
  ushort uVar1;
  u8 *emulated_reg_maps_to;
  u8 *emulated_reg_maps_to_1;
  u32 uVar2;
  u32 mapped_reg_2;
  u32 *puVar3;
  u32 *puVar4;
  uint uVar5;
  u32 mapped_reg;
  u32 mapped_reg_1;
  u32 exception_pc;
  u32 *puVar6;
  uint uVar7;
  u32 pc;
  uint uVar8;
  u32 *puVar9;
  u32 *ptr_u32;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  coprocessor_struct *coprocessor;
  u32 fresh_allocation;
  int local_2c;
  
  uVar7 = cpu_translate->current_pc;
  uVar11 = cpu_translate->flags_cached;
  uVar10 = (uint)cpu_translate->current_instruction->live_flags;
  exception_pc = (u32)cpu_translate->current_cpu;
  uVar8 = uVar11 & uVar10;
  uVar5 = uVar8 & 0xfffffffe;
  puVar6 = *(u32 **)(exception_pc + 0x2304);
  bVar12 = (uVar5 & cpu_translate->flags_dirty) != 0;
  puVar4 = puVar6;
  if (!bVar12) {
    puVar4 = &fresh_allocation;
  }
  local_2c = __stack_chk_guard;
  if (bVar12) {
    puVar4 = &fresh_allocation;
    uVar2 = cpu_translate_allocate_reg(cpu_translate,(u32)puVar4,uVar5,puVar4);
    if ((uVar10 & 0xfffffffe & ~(uVar11 & 0xfffffffe)) == 0) {
      puVar9 = cpu_translate->translation_ptr + 1;
      *cpu_translate->translation_ptr = uVar2 << 0xc | 0xe3a00000;
      cpu_translate->translation_ptr = puVar9;
    }
    else {
      puVar3 = cpu_translate->translation_ptr;
      puVar9 = puVar3 + 2;
      *puVar3 = uVar2 << 0xc | 0xe51b0080;
      puVar3[1] = uVar5 | 0xe3c00200 | uVar2 << 0xc | uVar2 << 0x10;
      cpu_translate->translation_ptr = puVar9;
    }
    uVar5 = uVar2 << 0xc;
    puVar3 = puVar9;
    if ((uVar8 & 2) != 0) {
      puVar3 = puVar9 + 1;
      *puVar9 = uVar2 << 0x10 | 0x23800202 | uVar5;
      cpu_translate->translation_ptr = puVar3;
    }
    puVar9 = puVar3;
    if ((uVar8 & 4) != 0) {
      puVar9 = puVar3 + 1;
      *puVar3 = uVar2 << 0x10 | 0x3800204 | uVar5;
      cpu_translate->translation_ptr = puVar9;
    }
    puVar3 = puVar9;
    if ((uVar8 & 8) != 0) {
      puVar3 = puVar9 + 1;
      *puVar9 = uVar2 << 0x10 | 0x43800208 | uVar5;
    }
    uVar1 = (cpu_translate->reg_alloc).locked_regs;
    *puVar3 = uVar5 | 0xe50b0080;
    cpu_translate->translation_ptr = puVar3 + 1;
    (cpu_translate->reg_alloc).locked_regs = uVar1 & ~(ushort)(1 << (uVar2 & 0xff));
  }
  puVar9 = (u32 *)0x0;
  cpu_translate->flags_cached = 1;
  cpu_translate->flags_dirty = 0;
  cpu_translate_normalize_reg_allocation(cpu_translate);
  if (condition < 0xe) {
    puVar9 = cpu_translate->translation_ptr;
    puVar3 = puVar9 + 1;
    *puVar9 = 0xfffffffeU - ((int)puVar9 >> 2) & 0xffffff | (condition ^ 1) << 0x1c | 0xa000000;
  }
  else {
    puVar3 = cpu_translate->translation_ptr;
  }
  *puVar3 = cpu_mode | 0xe3a01000;
  puVar3[1] = ((int)arm_set_cpu_mode - (int)(puVar3 + 1) >> 2) - 2U & 0xffffff | 0xeb000000;
  uVar5 = (uint)(cpu_translate->reg_alloc).native_regs[0].mapped_reg;
  cpu_translate->translation_ptr = puVar3 + 2;
  if (((uVar5 < 0xfd) &&
      ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5] = 0xff,
      (cpu_translate->reg_alloc).native_regs[0].dirty != '\0')) &&
     (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar5 & 1U) != 0)) {
    puVar3 = cpu_translate->translation_ptr;
    uVar8 = (uVar5 + 0x3fffffeb) * 4;
    if ((int)uVar8 < 0) {
      uVar10 = 0;
      uVar8 = (uVar5 + 0x3fffffeb) * -4;
    }
    else {
      uVar10 = 0x800000;
    }
    *puVar3 = uVar10 | 0xe50b0000 | uVar8;
    cpu_translate->translation_ptr = puVar3 + 1;
  }
  uVar5 = (uint)(cpu_translate->reg_alloc).native_regs[1].mapped_reg;
  (cpu_translate->reg_alloc).native_regs[0].mapped_reg = 0xfd;
  if (((uVar5 < 0xfd) &&
      ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar5] = 0xff,
      (cpu_translate->reg_alloc).native_regs[1].dirty != '\0')) &&
     (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar5 & 1U) != 0)) {
    puVar3 = cpu_translate->translation_ptr;
    uVar8 = (uVar5 + 0x3fffffeb) * 4;
    if ((int)uVar8 < 0) {
      uVar10 = 0;
      uVar8 = (uVar5 + 0x3fffffeb) * -4;
    }
    else {
      uVar10 = 0x800000;
    }
    *puVar3 = uVar10 | 0xe50b1000 | uVar8;
    cpu_translate->translation_ptr = puVar3 + 1;
  }
  (cpu_translate->reg_alloc).native_regs[1].mapped_reg = 0xfd;
  uVar2 = cpu_translate_allocate_reg(cpu_translate,0xe,0,puVar4);
  (cpu_translate->reg_alloc).native_regs[uVar2].dirty = '\x01';
  puVar4 = cpu_translate->translation_ptr;
  puVar3 = puVar4 + 1;
  *puVar4 = uVar7 & 0xfff | 0xe3000000 | ((uVar7 << 0x10) >> 0x1c) << 0x10 | uVar2 << 0xc;
  cpu_translate->translation_ptr = puVar3;
  if ((uVar7 & 0xffff0000) != 0) {
    puVar3 = puVar4 + 2;
    puVar4[1] = (uVar7 << 4) >> 0x14 | (uVar7 >> 0x1c) << 0x10 | 0xe3400000 | uVar2 << 0xc;
  }
  puVar4 = puVar3 + 1;
  *puVar3 = 0xe51b0058;
  cpu_translate->translation_ptr = puVar4;
  if (cpu_translate->thumb_mode != '\0') {
    puVar4 = puVar3 + 2;
    puVar3[1] = 0xe3800020;
  }
  uVar5 = (cpu_mode + 0x3fffff58) * 4;
  uVar7 = cpu_modes_cpsr[cpu_mode];
  if ((int)uVar5 < 0) {
    uVar8 = 0;
    uVar5 = (cpu_mode + 0x3fffff58) * -4;
  }
  else {
    uVar8 = 0x800000;
  }
  *puVar4 = uVar8 | 0xe50b0000 | uVar5;
  puVar4[1] = 0xe3c0003f;
  puVar4[2] = uVar7 | 0xe3800080;
  puVar4[3] = 0xe50b0058;
  cpu_translate->translation_ptr = puVar4 + 4;
  if (puVar6 == (u32 *)0x0) {
    puVar4[4] = exception_type << 2 | 0xe3a00000;
    cpu_translate->translation_ptr = puVar4 + 5;
  }
  else {
    puVar4[4] = 0xe51b007c;
    puVar4[5] = 0xe5900008;
    puVar4[6] = exception_type << 2 | 0xe2800000;
    cpu_translate->translation_ptr = puVar4 + 7;
  }
  cpu_translate_normalize_reg_allocation(cpu_translate);
  puVar4 = cpu_translate->translation_ptr;
  *puVar4 = ((int)block_indirect_branch - (int)puVar4 >> 2) - 2U & 0xffffff | 0xea000000;
  cpu_translate->translation_ptr = puVar4 + 1;
  if (puVar9 != (u32 *)0x0) {
    *puVar9 = ((int)(puVar4 + 1) - (int)puVar9 >> 2) - 2U & 0xffffff | *puVar9 & 0xff000000;
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


