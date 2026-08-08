/*
 * Ghidra decompilation
 *
 * Function : create_button_config
 * Address  : 0809e6a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_option_button_config_struct *
create_button_config
          (menu_option_button_config_struct *button_config,char *name,u32 line_number,u16 *value_a,
          u16 *value_b)

{
  menu_option_button_config_struct *pmVar1;
  
  if (button_config == (menu_option_button_config_struct *)0x0) {
    button_config = (menu_option_button_config_struct *)malloc(0x28);
  }
  pmVar1 = button_config;
  if (button_config == (menu_option_button_config_struct *)0x0) {
    pmVar1 = (menu_option_button_config_struct *)malloc(0x18);
  }
  (pmVar1->base).name = name;
  (pmVar1->base).line_number = line_number;
  (pmVar1->base).draw_function = draw_button_config;
  (pmVar1->base).action_function = action_button_config;
  (pmVar1->base).focus_function = (focus_function_type)0x0;
  (pmVar1->base).destruct_function = (destruct_function_type)0x0;
  button_config->value_a = value_a;
  button_config->value_b = value_b;
  button_config->set_mode = '\0';
  return button_config;
}


