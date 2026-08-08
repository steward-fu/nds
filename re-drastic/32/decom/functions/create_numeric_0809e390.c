/*
 * Ghidra decompilation
 *
 * Function : create_numeric
 * Address  : 0809e390
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_option_numeric_struct *
create_numeric(menu_option_numeric_struct *numeric,char *name,u32 line_number,u32 *value,
              u32 lower_limit,u32 upper_limit)

{
  menu_option_numeric_struct *pmVar1;
  
  if (numeric == (menu_option_numeric_struct *)0x0) {
    numeric = (menu_option_numeric_struct *)malloc(0x24);
  }
  pmVar1 = numeric;
  if (numeric == (menu_option_numeric_struct *)0x0) {
    pmVar1 = (menu_option_numeric_struct *)malloc(0x18);
  }
  (pmVar1->base).name = name;
  (pmVar1->base).line_number = line_number;
  (pmVar1->base).draw_function = draw_numeric;
  (pmVar1->base).action_function = action_numeric;
  (pmVar1->base).focus_function = (focus_function_type)0x0;
  (pmVar1->base).destruct_function = (destruct_function_type)0x0;
  numeric->value = value;
  numeric->lower_limit = lower_limit;
  numeric->upper_limit = upper_limit;
  return numeric;
}


