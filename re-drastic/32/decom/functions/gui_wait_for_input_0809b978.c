/*
 * Ghidra decompilation
 *
 * Function : gui_wait_for_input
 * Address  : 0809b978
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void gui_wait_for_input(input_struct *input,gui_input_struct *gui_input)

{
  do {
    get_gui_input(input,gui_input);
  } while (gui_input->action_type == 0xb);
  return;
}


