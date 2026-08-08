/*
 * Ghidra decompilation
 *
 * Function : draw_button_config
 * Address  : 0809a7a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_button_config(menu_state_struct *menu_state,menu_option_struct *menu_option,u32 selected)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  u32 name_length;
  menu_option_button_config_struct *button_config;
  u32 bg_color;
  u32 bg_color_00;
  u32 x;
  u32 column_start;
  char label_a [32];
  char label_b [32];
  
  iVar2 = __stack_chk_guard;
  x = menu_state->current_menu->column_start;
  sVar3 = strlen(menu_option->name);
  name_length = (u32)label_a;
  platform_print_code((char *)name_length,(uint)*(ushort *)menu_option[1].line_number);
  platform_print_code(label_b,(uint)*(ushort *)menu_option[1].draw_function);
  if (selected == 0) {
    bg_color_00 = 0;
    bg_color = 0;
  }
  else {
    if (*(char *)&menu_option[1].action_function == '\0') {
      bg_color = 0x17;
    }
    else {
      bg_color = 0x600;
    }
    if (menu_state->column_select == 0) {
      bg_color_00 = 0;
    }
    else {
      bg_color_00 = bg_color;
      bg_color = 0;
    }
  }
  iVar1 = (sVar3 + 1) * 8;
  print_string(menu_option->name,0xffff,0,x,menu_option->line_number << 3);
  print_string(label_a,0xffff,bg_color,x + iVar1,menu_option->line_number << 3);
  print_string(label_b,0xffff,bg_color_00,iVar1 + 0x78 + x,menu_option->line_number << 3);
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


