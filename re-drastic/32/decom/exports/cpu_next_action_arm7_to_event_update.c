/*
 * Ghidra decompilation
 *
 * Function : cpu_next_action_arm7_to_event_update
 * Address  : 080063a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void cpu_next_action_arm7_to_event_update(system_struct *system)

{
  u32 uVar1;
  u32 cycles_to_next_event;
  int iVar2;
  
  execute_events(system);
  execute_arm_trigger_interrupts(&system->cpu_arm9);
  execute_arm_trigger_interrupts(&system->cpu_arm7);
  iVar2 = (system->cpu_arm9).cycles_remaining;
  uVar1 = ((system->event_list).base)->cycles_forward;
  system->cycles_to_next_event = uVar1;
  (system->cpu_arm9).cycles_remaining = iVar2 + uVar1;
  if ((system->cpu_arm9).state == '\0') {
    execute_cpu(&system->cpu_arm9);
    return;
  }
  (system->cpu_arm9).cycles_remaining = -1;
                    /* WARNING: Could not recover jumptable at 0x08006440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(system->cpu_arm9).next_action_callback)(system);
  return;
}


