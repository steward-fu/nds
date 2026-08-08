/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_set_lr
 * Address  : 080b1d18
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_set_lr(cpu_translate_struct *cpu_translate,u32 pc,u32 condition)

{
  u32 uVar1;
  u32 mapped_reg;
  u32 *puVar2;
  u32 fresh_allocation;
  int local_1c;
  
  local_1c = __stack_chk_guard;
  uVar1 = cpu_translate_allocate_reg(cpu_translate,0xe,0,&fresh_allocation);
  (cpu_translate->reg_alloc).native_regs[uVar1].dirty = '\x01';
  if (condition == 0xe) {
    puVar2 = cpu_translate->translation_ptr;
  }
  else if (fresh_allocation == 0) {
    puVar2 = cpu_translate->translation_ptr;
  }
  else {
    puVar2 = cpu_translate->translation_ptr + 1;
    *cpu_translate->translation_ptr = uVar1 << 0xc | 0xe51b001c;
  }
  *puVar2 = pc & 0xfff | 0x3000000 | condition << 0x1c | ((pc << 0x10) >> 0x1c) << 0x10 |
            uVar1 << 0xc;
  cpu_translate->translation_ptr = puVar2 + 1;
  if ((pc & 0xffff0000) != 0) {
    puVar2[1] = condition << 0x1c | (pc >> 0x1c) << 0x10 | 0x3400000 | (pc << 4) >> 0x14 |
                uVar1 << 0xc;
    cpu_translate->translation_ptr = puVar2 + 2;
  }
  if (local_1c == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


