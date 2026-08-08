/*
 * Ghidra decompilation
 *
 * Function : create_select
 * Address  : 0809e270
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_option_select_struct *
create_select(menu_option_select_struct *select,char *name,u32 line_number,
             select_function_type select_function)

{
  menu_option_select_struct *pmVar1;
  
  if (select == (menu_option_select_struct *)0x0) {
    select = (menu_option_select_struct *)malloc(0x1c);
  }
  pmVar1 = select;
  if (select == (menu_option_select_struct *)0x0) {
    pmVar1 = (menu_option_select_struct *)malloc(0x18);
  }
  (pmVar1->base).name = name;
  (pmVar1->base).line_number = line_number;
  (pmVar1->base).draw_function = draw_menu_option;
  (pmVar1->base).action_function = action_select;
  (pmVar1->base).focus_function = (focus_function_type)0x0;
  (pmVar1->base).destruct_function = (destruct_function_type)0x0;
  select->select_function = select_function;
  return select;
}


