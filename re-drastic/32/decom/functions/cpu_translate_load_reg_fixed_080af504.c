/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_load_reg_fixed
 * Address  : 080af504
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_load_reg_fixed
               (cpu_translate_struct *cpu_translate,u32 emulated_reg,u32 native_reg)

{
  u32 *puVar1;
  u32 dest_1;
  uint uVar2;
  u32 mapped_reg;
  uint uVar3;
  uint uVar4;
  cpu_instruction_struct *pcVar5;
  u32 dest;
  uint uVar6;
  
  uVar2 = (uint)(cpu_translate->reg_alloc).native_regs[native_reg].mapped_reg;
  uVar4 = (uint)(cpu_translate->reg_alloc).emulated_reg_maps_to[emulated_reg];
  if (((uVar2 < 0xfd) &&
      ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar2] = 0xff,
      (cpu_translate->reg_alloc).native_regs[native_reg].dirty != '\0')) &&
     (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar2 & 1U) != 0)) {
    puVar1 = cpu_translate->translation_ptr;
    uVar3 = (uVar2 + 0x3fffffeb) * 4;
    if ((int)uVar3 < 0) {
      uVar6 = 0;
      uVar3 = (uVar2 + 0x3fffffeb) * -4;
    }
    else {
      uVar6 = 0x800000;
    }
    *puVar1 = uVar3 | native_reg << 0xc | 0xe50b0000 | uVar6;
    cpu_translate->translation_ptr = puVar1 + 1;
  }
  (cpu_translate->reg_alloc).native_regs[native_reg].mapped_reg = 0xfd;
  (cpu_translate->reg_alloc).locked_regs =
       (cpu_translate->reg_alloc).locked_regs | (ushort)(1 << (native_reg & 0xff));
  if (emulated_reg == 0xf) {
    puVar1 = cpu_translate->translation_ptr;
    pcVar5 = cpu_translate->current_instruction;
    uVar2 = pcVar5->next_pc;
    *puVar1 = uVar2 & 0xfff | 0xe3000000 | native_reg << 0xc | ((uVar2 << 0x10) >> 0x1c) << 0x10;
    uVar2 = pcVar5->next_pc;
    cpu_translate->translation_ptr = puVar1 + 1;
    if ((uVar2 & 0xffff0000) != 0) {
      puVar1[1] = (uVar2 << 4) >> 0x14 | (uVar2 >> 0x1c) << 0x10 | 0xe3400000 | native_reg << 0xc;
      cpu_translate->translation_ptr = puVar1 + 2;
    }
  }
  else if (uVar4 == 0xff) {
    puVar1 = cpu_translate->translation_ptr;
    uVar2 = (emulated_reg + 0x3fffffeb) * 4;
    if ((int)uVar2 < 0) {
      uVar4 = 0;
      uVar2 = (emulated_reg + 0x3fffffeb) * -4;
    }
    else {
      uVar4 = 0x800000;
    }
    dest_1 = native_reg << 0xc | 0xe51b0000 | uVar4;
    *puVar1 = uVar2 | dest_1;
    cpu_translate->translation_ptr = puVar1 + 1;
  }
  else if (uVar4 != native_reg) {
    puVar1 = cpu_translate->translation_ptr;
    *puVar1 = uVar4 | native_reg << 0xc | 0xe1a00000;
    cpu_translate->translation_ptr = puVar1 + 1;
  }
  return;
}


