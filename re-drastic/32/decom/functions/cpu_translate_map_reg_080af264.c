/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_map_reg
 * Address  : 080af264
 * Program  : drastic
 */


void cpu_translate_map_reg
               (cpu_translate_struct *cpu_translate,u32 native_reg_index,u32 emulated_reg,u32 lock)

{
  uint uVar1;
  u32 mapped_reg;
  uint uVar2;
  u32 dest;
  u32 *puVar3;
  uint uVar4;
  
  uVar1 = (uint)(cpu_translate->reg_alloc).native_regs[native_reg_index].mapped_reg;
  if (((uVar1 < 0xfd) &&
      ((cpu_translate->reg_alloc).emulated_reg_maps_to[uVar1] = 0xff,
      (cpu_translate->reg_alloc).native_regs[native_reg_index].dirty != '\0')) &&
     (((int)(uint)cpu_translate->current_instruction->live_registers >> uVar1 & 1U) != 0)) {
    puVar3 = cpu_translate->translation_ptr;
    uVar2 = (uVar1 + 0x3fffffeb) * 4;
    if ((int)uVar2 < 0) {
      uVar4 = 0;
      uVar2 = (uVar1 + 0x3fffffeb) * -4;
    }
    else {
      uVar4 = 0x800000;
    }
    *puVar3 = uVar2 | native_reg_index << 0xc | 0xe50b0000 | uVar4;
    cpu_translate->translation_ptr = puVar3 + 1;
  }
  (cpu_translate->reg_alloc).native_regs[native_reg_index].mapped_reg = 0xfd;
  (cpu_translate->reg_alloc).locked_regs =
       (cpu_translate->reg_alloc).locked_regs | (ushort)(emulated_reg << (native_reg_index & 0xff));
  return;
}


