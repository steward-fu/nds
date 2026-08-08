/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_copy_reg_allocation
 * Address  : 080b44c4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_copy_reg_allocation
               (cpu_translate_struct *cpu_translate,
               cpu_translate_register_allocation_struct *save_reg_alloc)

{
  memcpy(&cpu_translate->reg_alloc,save_reg_alloc,0xa0);
  return;
}


