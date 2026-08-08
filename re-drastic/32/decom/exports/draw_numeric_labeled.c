/*
 * Ghidra decompilation
 *
 * Function : draw_numeric_labeled
 * Address  : 0809ac30
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_numeric_labeled
               (menu_state_struct *menu_state,menu_option_struct *menu_option,u32 selected)

{
  int iVar1;
  u32 bg_color;
  u32 column_start;
  menu_option_numeric_struct *numeric;
  char display_str [256];
  
  iVar1 = __stack_chk_guard;
  __sprintf_chk(display_str,1,0x100,&DAT_0813f5c0,menu_option->name,
                *(undefined4 *)(menu_option[1].action_function + *(int *)menu_option[1].name * 4));
  if (selected == 0) {
    bg_color = 0;
  }
  else {
    bg_color = 0x17;
  }
  print_string(display_str,0xffff,bg_color,menu_state->current_menu->column_start,
               menu_option->line_number << 3);
  if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


