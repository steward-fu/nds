/*
 * Ghidra decompilation
 *
 * Function : action_numeric
 * Address  : 0809a5f8
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */
/* Local variable numeric:menu_option_numeric_struct *[r1:4] conflicts with parameter, skipped.
   Local variable numeric_range:u32[r1:4] conflicts with parameter, skipped. */

u32 action_numeric(menu_state_struct *menu_state,menu_option_struct *menu_option,
                  gui_input_struct *gui_input)

{
  u32 uVar1;
  draw_function_type p_Var2;
  int iVar3;
  s32 value;
  
  uVar1 = gui_input->action_type;
  p_Var2 = menu_option[1].draw_function + (1 - menu_option[1].line_number);
  switch(uVar1) {
  case 2:
    iVar3 = -1;
    break;
  case 3:
    iVar3 = 1;
    break;
  default:
    goto switchD_0809a624_caseD_4;
  case 7:
    iVar3 = 10;
    break;
  case 8:
    iVar3 = -10;
  }
  for (iVar3 = *(int *)menu_option[1].name + iVar3; iVar3 < (int)menu_option[1].line_number;
      iVar3 = iVar3 + (int)p_Var2) {
  }
  for (; (int)menu_option[1].draw_function < iVar3; iVar3 = iVar3 - (int)p_Var2) {
  }
  uVar1 = 0xb;
  *(int *)menu_option[1].name = iVar3;
switchD_0809a624_caseD_4:
  return uVar1;
}


