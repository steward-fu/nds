/*
 * Ghidra decompilation
 *
 * Function : gui_wait_for_input
 * Address  : 0017aa80
 * Program  : drastic64
 */


void gui_wait_for_input(undefined8 param_1,int *param_2)

{
  do {
    get_gui_input(param_1,param_2);
  } while (*param_2 == 0xb);
  return;
}


