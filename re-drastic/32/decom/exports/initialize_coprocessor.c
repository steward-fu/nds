/*
 * Ghidra decompilation
 *
 * Function : initialize_coprocessor
 * Address  : 08022560
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_coprocessor(coprocessor_struct *coprocessor,cpu_struct *cpu)

{
  memory_struct *pmVar1;
  
  pmVar1 = (cpu->memory_interface).memory;
  coprocessor->cpu = cpu;
  coprocessor->memory = pmVar1;
  return;
}


