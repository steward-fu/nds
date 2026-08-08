/*
 * Ghidra decompilation
 *
 * Function : initialize_debug
 * Address  : 080a33a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_debug(debug_struct *debug,cpu_struct *cpu)

{
  debug->cpu = cpu;
  debug->print_stack_lines = '\x02';
  debug->mode = '\x01';
  debug->previous_mode = '\x01';
  debug->print_watch_address = '\0';
  return;
}


