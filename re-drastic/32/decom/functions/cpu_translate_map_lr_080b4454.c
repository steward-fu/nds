/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_map_lr
 * Address  : 080b4454
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_map_lr(cpu_translate_struct *cpu_translate)

{
  u32 *puVar1;
  uint uVar2;
  uint uVar3;
  u32 mapped_reg;
  uint uVar4;
  
  uVar3 = (uint)(cpu_translate->reg_alloc).native_regs[0xe].mapped_reg;
  if (((uVar3 < 0xfd) &&
      ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar3] = 0xff,
      (cpu_translate->reg_alloc).native_regs[0xe].dirty != '\0')) &&
     (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar3 & 1U) != 0)) {
    puVar1 = cpu_translate->translation_ptr;
    uVar4 = (uVar3 + 0x3fffffeb) * 4;
    if ((int)uVar4 < 0) {
      uVar2 = 0;
      uVar4 = (uVar3 + 0x3fffffeb) * -4;
    }
    else {
      uVar2 = 0x800000;
    }
    *puVar1 = uVar2 | 0xe50be000 | uVar4;
    cpu_translate->translation_ptr = puVar1 + 1;
  }
  (cpu_translate->reg_alloc).native_regs[0xe].mapped_reg = 0xfd;
  return;
}


