/*
 * Ghidra decompilation
 *
 * Function : set_debug_mode
 * Address  : 080a3394
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void set_debug_mode(debug_struct *debug,debug_mode_enum debug_mode)

{
  debug->mode = (u8)debug_mode;
  debug->previous_mode = (u8)debug_mode;
  return;
}


