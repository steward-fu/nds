/*
 * Ghidra decompilation
 *
 * Function : create_menu_option
 * Address  : 0809e1f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_option_struct *
create_menu_option(menu_option_struct *menu_option,char *name,u32 line_number,
                  draw_function_type draw_function,action_function_type action_function,
                  focus_function_type focus_function,destruct_function_type destruct_function)

{
  if (menu_option == (menu_option_struct *)0x0) {
    menu_option = (menu_option_struct *)malloc(0x18);
  }
  menu_option->name = name;
  menu_option->line_number = line_number;
  menu_option->draw_function = (draw_function_type)(int)CONCAT44(action_function,draw_function);
  menu_option->action_function =
       (action_function_type)(int)(CONCAT44(action_function,draw_function) >> 0x20);
  menu_option->focus_function = (focus_function_type)(int)CONCAT44(destruct_function,focus_function)
  ;
  menu_option->destruct_function =
       (destruct_function_type)(int)(CONCAT44(destruct_function,focus_function) >> 0x20);
  return menu_option;
}


