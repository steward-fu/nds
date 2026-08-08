/*
 * Ghidra decompilation
 *
 * Function : reset_event_list
 * Address  : 0801861c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_event_list(event_list_struct *event_list)

{
  event_list->base = (event_struct *)0x0;
  return;
}


