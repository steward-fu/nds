/*
 * Ghidra decompilation
 *
 * Function : cpu_next_action_arm9_to_arm7
 * Address  : 08006378
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_next_action_arm9_to_arm7(system_struct *system)

{
  (system->cpu_arm7).cycles_remaining =
       (system->cpu_arm7).cycles_remaining + system->cycles_to_next_event;
  execute_cpu(&system->cpu_arm7);
  return;
}


