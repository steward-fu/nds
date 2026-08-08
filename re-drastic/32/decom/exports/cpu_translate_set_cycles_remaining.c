/*
 * Ghidra decompilation
 *
 * Function : cpu_translate_set_cycles_remaining
 * Address  : 080b4c6c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_translate_set_cycles_remaining(cpu_translate_struct *cpu_translate)

{
  u32 *puVar1;
  
  puVar1 = cpu_translate->translation_ptr;
  *puVar1 = 0xe50ba014;
  cpu_translate->translation_ptr = puVar1 + 1;
  return;
}


