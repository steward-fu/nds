/*
 * Ghidra decompilation
 *
 * Function : create_numeric_select
 * Address  : 0809e438
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_option_numeric_select_struct *
create_numeric_select
          (menu_option_numeric_select_struct *numeric_select,char *name,u32 line_number,u32 *value,
          u32 lower_limit,u32 upper_limit,select_function_type select_function,
          select_function_type modify_function,focus_function_type focus_function)

{
  menu_option_numeric_select_struct *pmVar1;
  menu_option_numeric_select_struct *pmVar2;
  
  if (numeric_select == (menu_option_numeric_select_struct *)0x0) {
    numeric_select = (menu_option_numeric_select_struct *)malloc(0x2c);
  }
  pmVar1 = numeric_select;
  pmVar2 = numeric_select;
  if ((numeric_select == (menu_option_numeric_select_struct *)0x0) &&
     (pmVar1 = (menu_option_numeric_select_struct *)malloc(0x24), pmVar2 = pmVar1,
     pmVar1 == (menu_option_numeric_select_struct *)0x0)) {
    pmVar2 = (menu_option_numeric_select_struct *)malloc(0x18);
  }
  (pmVar2->base).base.name = name;
  (pmVar2->base).base.line_number = line_number;
  (pmVar2->base).base.draw_function = draw_numeric;
  (pmVar2->base).base.action_function = action_numeric;
  (pmVar2->base).base.focus_function = (focus_function_type)0x0;
  (pmVar2->base).base.destruct_function = (destruct_function_type)0x0;
  (pmVar1->base).value = value;
  (pmVar1->base).lower_limit = lower_limit;
  (pmVar1->base).upper_limit = upper_limit;
  (numeric_select->base).base.action_function = action_numeric_select;
  numeric_select->modify_function = modify_function;
  (numeric_select->base).base.focus_function = focus_function;
  numeric_select->select_function = select_function;
  return numeric_select;
}


