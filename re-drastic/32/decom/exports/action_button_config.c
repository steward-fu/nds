/*
 * Ghidra decompilation
 *
 * Function : action_button_config
 * Address  : 0809b23c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable button_config:menu_option_button_config_struct *[r1:4] conflicts with parameter,
   skipped. */

u32 action_button_config
              (menu_state_struct *menu_state,menu_option_struct *menu_option,
              gui_input_struct *gui_input)

{
  u32 new_value;
  u16 *value_ptr_1;
  u32 uVar1;
  undefined2 *puVar2;
  u16 *value_ptr;
  
  if (*(char *)&menu_option[1].action_function == '\0') {
    uVar1 = gui_input->action_type;
    switch(uVar1) {
    case 2:
    case 3:
      uVar1 = 0xb;
      menu_state->column_select = menu_state->column_select ^ 1;
      break;
    case 4:
      *(undefined *)&menu_option[1].action_function = 1;
      menu_state->capturing_input = 1;
      return 0xb;
    case 6:
      puVar2 = (undefined2 *)menu_option[1].line_number;
      if (menu_state->column_select == 1) {
        puVar2 = (undefined2 *)menu_option[1].draw_function;
      }
      *puVar2 = 0xffff;
      return 0xb;
    }
    return uVar1;
  }
  uVar1 = platform_get_config_input();
  if (uVar1 >> 10 != 0x3f) {
    puVar2 = (undefined2 *)menu_option[1].line_number;
    if (menu_state->column_select == 1) {
      puVar2 = (undefined2 *)menu_option[1].draw_function;
    }
    *puVar2 = (short)uVar1;
  }
  *(undefined *)&menu_option[1].action_function = 0;
  menu_state->capturing_input = 0;
  clear_gui_actions();
  delay_us(100000);
  return 0xb;
}


