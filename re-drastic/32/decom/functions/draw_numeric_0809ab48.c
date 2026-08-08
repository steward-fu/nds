/*
 * Ghidra decompilation
 *
 * Function : draw_numeric
 * Address  : 0809ab48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_numeric(menu_state_struct *menu_state,menu_option_struct *menu_option,u32 selected)

{
  int iVar1;
  u32 bg_color;
  draw_function_type p_Var2;
  u32 column_start;
  menu_option_numeric_struct *numeric;
  undefined4 uVar3;
  char display_str [256];
  
  iVar1 = __stack_chk_guard;
  p_Var2 = menu_option[1].draw_function;
  if ((int)p_Var2 < 0x2711) {
    if ((int)p_Var2 < 0x3e9) {
      if ((int)p_Var2 < 0x65) {
        if ((int)p_Var2 < 0xb) {
          uVar3 = 1;
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 4;
    }
  }
  else {
    uVar3 = 5;
  }
  __sprintf_chk(display_str,1,0x100,"%s%*d",menu_option->name,uVar3,
                *(undefined4 *)menu_option[1].name);
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


