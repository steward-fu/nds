/*
 * Ghidra decompilation
 *
 * Function : create_input
 * Address  : 0809e608
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_option_input_struct *
create_input(menu_option_input_struct *input,char *name,u32 line_number,char *str,u32 capacity)

{
  menu_option_input_struct *pmVar1;
  
  if (input == (menu_option_input_struct *)0x0) {
    input = (menu_option_input_struct *)malloc(0x24);
  }
  pmVar1 = input;
  if (input == (menu_option_input_struct *)0x0) {
    pmVar1 = (menu_option_input_struct *)malloc(0x18);
  }
  (pmVar1->base).name = name;
  (pmVar1->base).line_number = line_number;
  (pmVar1->base).draw_function = draw_input;
  (pmVar1->base).action_function = action_input;
  (pmVar1->base).focus_function = (focus_function_type)0x0;
  (pmVar1->base).destruct_function = (destruct_function_type)0x0;
  input->str = str;
  input->capacity = capacity;
  input->cursor_index = 0;
  return input;
}


