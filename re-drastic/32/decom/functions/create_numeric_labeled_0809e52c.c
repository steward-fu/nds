/*
 * Ghidra decompilation
 *
 * Function : create_numeric_labeled
 * Address  : 0809e52c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_option_numeric_labeled_struct *
create_numeric_labeled
          (menu_option_numeric_labeled_struct *numeric_labeled,char *name,u32 line_number,u32 *value
          ,u32 lower_limit,u32 upper_limit,char **labels)

{
  menu_option_struct *base;
  menu_option_numeric_labeled_struct *pmVar1;
  menu_option_numeric_labeled_struct *pmVar2;
  
  pmVar1 = numeric_labeled;
  if ((numeric_labeled == (menu_option_numeric_labeled_struct *)0x0) &&
     (numeric_labeled = (menu_option_numeric_labeled_struct *)malloc(0x28), pmVar1 = numeric_labeled
     , numeric_labeled == (menu_option_numeric_labeled_struct *)0x0)) {
    pmVar1 = (menu_option_numeric_labeled_struct *)malloc(0x24);
  }
  pmVar2 = pmVar1;
  if (pmVar1 == (menu_option_numeric_labeled_struct *)0x0) {
    pmVar2 = (menu_option_numeric_labeled_struct *)malloc(0x18);
  }
  (pmVar2->base).base.name = name;
  (pmVar2->base).base.line_number = line_number;
  (pmVar2->base).base.action_function = action_numeric;
  (pmVar2->base).base.focus_function = (focus_function_type)0x0;
  (pmVar2->base).base.draw_function = draw_numeric;
  (pmVar2->base).base.destruct_function = (destruct_function_type)0x0;
  (pmVar1->base).value = value;
  (pmVar1->base).lower_limit = lower_limit;
  (pmVar1->base).upper_limit = upper_limit;
  (numeric_labeled->base).base.draw_function = draw_numeric_labeled;
  numeric_labeled->labels = labels;
  return numeric_labeled;
}


