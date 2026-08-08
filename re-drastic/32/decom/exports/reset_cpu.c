/*
 * Ghidra decompilation
 *
 * Function : reset_cpu
 * Address  : 0802157c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_cpu(cpu_struct *cpu)

{
  *(undefined8 *)cpu->reg = 0;
  *(undefined8 *)(cpu->reg + 2) = 0;
  *(undefined8 *)(cpu->reg + 4) = 0;
  *(undefined8 *)(cpu->reg + 6) = 0;
  *(undefined8 *)(cpu->reg + 8) = 0;
  *(undefined8 *)(cpu->reg + 10) = 0;
  *(undefined8 *)(cpu->reg + 0xc) = 0;
  *(undefined8 *)(cpu->reg + 0xe) = 0;
  cpu->mode = 0;
  cpu->active_interrupts = 0;
  cpu->state = '\0';
  cpu->pc = 0;
  cpu->cpsr = 0x1f;
  cpu->reg[0xd] = 0x2400000;
  cpu->cycles_remaining = -1;
  cpu->timers[0].reload_cycles = 0x10000;
  cpu->timers[0].reload_value = 0;
  cpu->timers[0].control = 0;
  cpu->timers[0].prescale = '\0';
  cpu->timers[0].event_pending = '\0';
  cpu->timers[1].reload_cycles = 0x10000;
  cpu->timers[1].reload_value = 0;
  cpu->timers[1].control = 0;
  cpu->timers[1].prescale = '\0';
  cpu->timers[1].event_pending = '\0';
  cpu->timers[2].reload_cycles = 0x10000;
  cpu->timers[2].reload_value = 0;
  cpu->timers[2].control = 0;
  cpu->timers[2].prescale = '\0';
  cpu->timers[2].event_pending = '\0';
  cpu->timers[3].reload_cycles = 0x10000;
  cpu->timers[3].reload_value = 0;
  cpu->timers[3].control = 0;
  cpu->timers[3].prescale = '\0';
  cpu->timers[3].event_pending = '\0';
  cpu->native_flags = 0;
  cpu->alert_flags = 0;
  reset_debug(&cpu->debug);
  return;
}


