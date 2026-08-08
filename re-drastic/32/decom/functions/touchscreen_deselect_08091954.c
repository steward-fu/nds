/*
 * Ghidra decompilation
 *
 * Function : touchscreen_deselect
 * Address  : 08091954
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void touchscreen_deselect(touchscreen_struct *touchscreen)

{
  touchscreen->read_counter = '\0';
  return;
}


