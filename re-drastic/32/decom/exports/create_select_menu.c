/*
 * Ghidra decompilation
 *
 * Function : create_select_menu
 * Address  : 0809e2f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_option_select_menu_struct *
create_select_menu(menu_option_select_menu_struct *select_menu,char *name,u32 line_number,
                  menu_struct *target_menu)

{
  menu_option_select_menu_struct *pmVar1;
  
  if (select_menu == (menu_option_select_menu_struct *)0x0) {
    select_menu = (menu_option_select_menu_struct *)malloc(0x1c);
  }
  pmVar1 = select_menu;
  if (select_menu == (menu_option_select_menu_struct *)0x0) {
    pmVar1 = (menu_option_select_menu_struct *)malloc(0x18);
  }
  (pmVar1->base).name = name;
  (pmVar1->base).line_number = line_number;
  (pmVar1->base).draw_function = draw_menu_option;
  (pmVar1->base).action_function = action_select_menu;
  (pmVar1->base).focus_function = (focus_function_type)0x0;
  (pmVar1->base).destruct_function = destroy_select_menu;
  select_menu->target_menu = target_menu;
  return select_menu;
}


