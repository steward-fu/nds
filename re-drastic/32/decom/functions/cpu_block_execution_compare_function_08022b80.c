/*
 * Ghidra decompilation
 *
 * Function : cpu_block_execution_compare_function
 * Address  : 08022b80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable a:cpu_block_execution_struct *[r0:4] conflicts with parameter, skipped.
   Local variable b:cpu_block_execution_struct *[r1:4] conflicts with parameter, skipped. */

int cpu_block_execution_compare_function(void *_a,void *_b)

{
  return *(int *)((int)_b + 8) - *(int *)((int)_a + 8);
}


