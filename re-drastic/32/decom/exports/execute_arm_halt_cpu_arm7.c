/*
 * Ghidra decompilation
 *
 * Function : execute_arm_halt_cpu_arm7
 * Address  : 08020de4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void execute_arm_halt_cpu_arm7(cpu_struct *cpu)

{
  cpu->state = '\x01';
  remove_event(&cpu->system->event_list,2);
  return;
}


