/*
 * Ghidra decompilation
 *
 * Function : draw_menu_option_string
 * Address  : 0809e1bc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_menu_option_string
               (menu_state_struct *menu_state,menu_option_struct *menu_option,char *display_str,
               u32 selected)

{
  u32 bg_color;
  u32 column_start;
  
  if (selected == 0) {
    bg_color = 0;
  }
  else {
    bg_color = 0x17;
  }
  print_string(display_str,0xffff,bg_color,menu_state->current_menu->column_start,
               menu_option->line_number << 3);
  return;
}


