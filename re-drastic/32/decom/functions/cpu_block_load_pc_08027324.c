/*
 * Ghidra decompilation
 *
 * Function : cpu_block_load_pc
 * Address  : 08027324
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_block_load_pc(cpu_struct *cpu)

{
  if (cpu->block_resume_ptr != (void *)0x0) {
    cpu->pc = *(u32 *)(*(int *)((int)cpu->block_resume_ptr + -0xc) + 4);
  }
  return;
}


