/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_allocate_src_reg
 * Address  : 080b105c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 cpu_translate_allocate_src_reg(cpu_translate_struct *cpu_translate,u32 emulated_reg,u32 lock)

{
  u32 uVar1;
  u32 mapped_reg;
  u32 mapped_reg_1;
  u32 dest;
  uint uVar2;
  uint uVar3;
  u32 *puVar4;
  u32 fresh_allocation;
  int local_14;
  
  local_14 = __stack_chk_guard;
  if (emulated_reg == 0xf) {
    uVar3 = cpu_translate->current_instruction->next_pc;
    uVar1 = cpu_translate_allocate_reg(cpu_translate,0xfe,lock,&fresh_allocation);
    puVar4 = cpu_translate->translation_ptr;
    (cpu_translate->reg_alloc).native_regs[uVar1].const_value = uVar3;
    *puVar4 = uVar3 & 0xfff | 0xe3000000 | ((uVar3 << 0x10) >> 0x1c) << 0x10 | uVar1 << 0xc;
    cpu_translate->translation_ptr = puVar4 + 1;
    if ((uVar3 & 0xffff0000) != 0) {
      puVar4[1] = (uVar3 << 4) >> 0x14 | (uVar3 >> 0x1c) << 0x10 | 0xe3400000 | uVar1 << 0xc;
      cpu_translate->translation_ptr = puVar4 + 2;
    }
  }
  else {
    uVar1 = cpu_translate_allocate_reg(cpu_translate,emulated_reg,lock,&fresh_allocation);
    if (fresh_allocation != 0) {
      puVar4 = cpu_translate->translation_ptr;
      uVar3 = (emulated_reg + 0x3fffffeb) * 4;
      if ((int)uVar3 < 0) {
        uVar2 = 0;
        uVar3 = (emulated_reg + 0x3fffffeb) * -4;
      }
      else {
        uVar2 = 0x800000;
      }
      *puVar4 = uVar3 | uVar1 << 0xc | 0xe51b0000 | uVar2;
      cpu_translate->translation_ptr = puVar4 + 1;
    }
  }
  if (local_14 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}


