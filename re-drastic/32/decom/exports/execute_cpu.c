/*
 * Ghidra decompilation
 *
 * Function : execute_cpu
 * Address  : 08021404
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void execute_cpu(cpu_struct *cpu)

{
                    /* WARNING: Could not recover jumptable at 0x08021410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*cpu->next_action_callback)(cpu->system);
  return;
}


