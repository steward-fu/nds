/*
 * Ghidra decompilation
 *
 * Function : reset_debug
 * Address  : 080a33c8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_debug(debug_struct *debug)

{
  debug->instruction_count = 0;
  debug->current_pc = 0;
  debug->repeat_count = 0;
  return;
}


