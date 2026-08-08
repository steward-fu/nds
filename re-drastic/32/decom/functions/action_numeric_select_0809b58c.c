/*
 * Ghidra decompilation
 *
 * Function : action_numeric_select
 * Address  : 0809b58c
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */
/* Local variable numeric_select:menu_option_numeric_select_struct *[r1:4] conflicts with parameter,
   skipped. */

u32 action_numeric_select
              (menu_state_struct *menu_state,menu_option_struct *menu_option,
              gui_input_struct *gui_input)

{
  uint uVar1;
  menu_option_numeric_struct *numeric;
  s32 value;
  action_function_type p_Var2;
  gui_input_struct *pgVar3;
  gui_input_struct *pgVar4;
  int iVar5;
  draw_function_type p_Var6;
  u32 numeric_range;
  
  pgVar3 = (gui_input_struct *)gui_input->action_type;
  p_Var6 = menu_option[1].draw_function + (1 - menu_option[1].line_number);
  pgVar4 = pgVar3;
  switch(pgVar3) {
  case (gui_input_struct *)0x2:
    iVar5 = -1;
    break;
  case (gui_input_struct *)0x3:
    iVar5 = 1;
    break;
  default:
    goto LAB_0809b628;
  case (gui_input_struct *)0x7:
    iVar5 = 10;
    break;
  case (gui_input_struct *)0x8:
    iVar5 = -10;
  }
  for (iVar5 = *(int *)menu_option[1].name + iVar5; iVar5 < (int)menu_option[1].line_number;
      iVar5 = iVar5 + (int)p_Var6) {
  }
  for (; (int)menu_option[1].draw_function < iVar5; iVar5 = iVar5 - (int)p_Var6) {
  }
  *(int *)menu_option[1].name = iVar5;
  pgVar3 = (gui_input_struct *)gui_input->action_type;
  pgVar4 = (gui_input_struct *)0xb;
LAB_0809b628:
  if (pgVar3 < (gui_input_struct *)0x9) {
    uVar1 = 1 << ((uint)pgVar3 & 0xff);
    if ((uVar1 & 0x1cc) == 0) {
      if ((uVar1 & 0x10) == 0) {
        return (u32)pgVar4;
      }
      p_Var2 = (action_function_type)menu_option[1].focus_function;
    }
    else {
      p_Var2 = menu_option[1].action_function;
      if (p_Var2 == (action_function_type)0x0) {
        return (u32)pgVar4;
      }
    }
    (*p_Var2)(menu_state,menu_option,pgVar3);
  }
  return (u32)pgVar4;
}


