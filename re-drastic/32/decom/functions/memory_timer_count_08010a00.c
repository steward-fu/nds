/*
 * Ghidra decompilation
 *
 * Function : memory_timer_count
 * Address  : 08010a00
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 memory_timer_count(timer_struct *timer)

{
  system_struct *psVar1;
  cpu_struct *cpu;
  
  if ((timer->control & 0x80) == 0) {
    return (uint)timer->reload_value;
  }
  psVar1 = timer->cpu->system;
  return (uint)timer->reload_value +
         (((*(int *)&psVar1->global_cycles + psVar1->cycles_to_next_event) -
          timer->cpu->cycles_remaining) - *(int *)&timer->reload_timestamp >> timer->prescale) &
         0xffff;
}


