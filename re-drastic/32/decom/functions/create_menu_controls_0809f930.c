/*
 * Ghidra decompilation
 *
 * Function : create_menu_controls
 * Address  : 0809f930
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_struct * create_menu_controls(menu_state_struct *menu_state,menu_struct *parent_menu)

{
  menu_struct *parent_menu_00;
  menu_option_struct **ppmVar1;
  menu_struct *pmVar2;
  menu_struct *extra_menu;
  menu_option_struct *pmVar3;
  menu_option_struct *pmVar4;
  menu_struct *menu;
  char *pcVar5;
  int iVar6;
  u32 config_index;
  u32 uVar7;
  int *piVar8;
  menu_option_struct **ppmVar9;
  char **ppcVar10;
  config_struct *pcVar11;
  config_struct *config;
  void **menu_options;
  
  piVar8 = (int *)&UNK_0813f45c;
  uVar7 = 0x1e;
  pcVar11 = menu_state->config;
  ppcVar10 = (char **)(create_menu_controls::options_to_config_map + 0x11);
  parent_menu_00 = (menu_struct *)malloc(0x20);
  parent_menu_00->draw_function = draw_menu_controls;
  parent_menu_00->focus_function = focus_menu_none;
  parent_menu_00->num_options = 0x18;
  parent_menu_00->current_option = 0;
  parent_menu_00->parent_menu = parent_menu;
  ppmVar1 = (menu_option_struct **)malloc(0x60);
  parent_menu_00->options = ppmVar1;
  ppmVar9 = ppmVar1 + -1;
  pmVar2 = create_menu_extra_controls(menu_state,parent_menu_00,parent_menu);
  do {
    piVar8 = piVar8 + 1;
    iVar6 = *piVar8;
    ppcVar10 = ppcVar10 + 1;
    pcVar5 = *ppcVar10;
    pmVar3 = (menu_option_struct *)malloc(0x28);
    pmVar4 = pmVar3;
    if (pmVar3 == (menu_option_struct *)0x0) {
      pmVar4 = (menu_option_struct *)malloc(0x18);
    }
    ppmVar9 = ppmVar9 + 1;
    *ppmVar9 = pmVar3;
    pmVar4->name = pcVar5;
    pmVar4->line_number = uVar7;
    uVar7 = uVar7 + 1;
    pmVar4->draw_function = draw_button_config;
    pmVar4->focus_function = (focus_function_type)0x0;
    pmVar4->destruct_function = (destruct_function_type)0x0;
    pmVar4->action_function = action_button_config;
    pmVar3[1].line_number = (u32)(pcVar11->controls_a + iVar6);
    pmVar3[1].draw_function = (draw_function_type)(pcVar11->controls_b + iVar6);
    *(undefined *)&pmVar3[1].action_function = 0;
  } while (uVar7 != 0x30);
  pmVar3 = (menu_option_struct *)malloc(0x1c);
  pmVar4 = pmVar3;
  if (pmVar3 == (menu_option_struct *)0x0) {
    pmVar4 = (menu_option_struct *)malloc(0x18);
  }
  pmVar4->name = "Extra Controls";
  pmVar4->line_number = 0x31;
  ppmVar1[0x12] = pmVar3;
  pmVar4->draw_function = draw_menu_option;
  pmVar4->action_function = action_select_menu;
  pmVar4->focus_function = (focus_function_type)0x0;
  pmVar4->destruct_function = destroy_select_menu;
  pmVar3[1].name = (char *)pmVar2;
  pmVar3 = (menu_option_struct *)malloc(0x1c);
  pmVar4 = pmVar3;
  if (pmVar3 == (menu_option_struct *)0x0) {
    pmVar4 = (menu_option_struct *)malloc(0x18);
  }
  pmVar4->name = "Restore default controls";
  ppmVar1[0x13] = pmVar3;
  pmVar4->line_number = 0x33;
  pmVar4->draw_function = draw_menu_option;
  pmVar4->action_function = action_select;
  pmVar4->focus_function = (focus_function_type)0x0;
  pmVar4->destruct_function = (destruct_function_type)0x0;
  pmVar3[1].name = (char *)select_restore_default_controls;
  pmVar3 = (menu_option_struct *)malloc(0x1c);
  pmVar4 = pmVar3;
  if (pmVar3 == (menu_option_struct *)0x0) {
    pmVar4 = (menu_option_struct *)malloc(0x18);
  }
  pmVar4->name = "Delete game-specific config";
  pmVar4->line_number = 0x34;
  pmVar4->draw_function = draw_menu_option;
  pmVar4->action_function = action_select;
  pmVar4->focus_function = (focus_function_type)0x0;
  pmVar4->destruct_function = (destruct_function_type)0x0;
  pmVar3[1].name = (char *)select_delete_config_local;
  ppmVar1[0x14] = pmVar3;
  pmVar3 = (menu_option_struct *)malloc(0x1c);
  pmVar4 = pmVar3;
  if (pmVar3 == (menu_option_struct *)0x0) {
    pmVar4 = (menu_option_struct *)malloc(0x18);
  }
  pmVar4->name = "Exit: save for all games";
  pmVar4->line_number = 0x36;
  pmVar4->draw_function = draw_menu_option;
  pmVar4->action_function = action_select;
  pmVar4->focus_function = (focus_function_type)0x0;
  pmVar4->destruct_function = (destruct_function_type)0x0;
  pmVar3[1].name = (char *)select_save_config_global;
  ppmVar1[0x15] = pmVar3;
  pmVar3 = (menu_option_struct *)malloc(0x1c);
  pmVar4 = pmVar3;
  if (pmVar3 == (menu_option_struct *)0x0) {
    pmVar4 = (menu_option_struct *)malloc(0x18);
  }
  pmVar4->name = "Exit: save for this game";
  pmVar4->line_number = 0x37;
  pmVar4->draw_function = draw_menu_option;
  pmVar4->action_function = action_select;
  pmVar4->focus_function = (focus_function_type)0x0;
  pmVar4->destruct_function = (destruct_function_type)0x0;
  pmVar3[1].name = (char *)select_save_config_local;
  ppmVar1[0x16] = pmVar3;
  pmVar3 = (menu_option_struct *)malloc(0x1c);
  pmVar4 = pmVar3;
  if (pmVar3 == (menu_option_struct *)0x0) {
    pmVar4 = (menu_option_struct *)malloc(0x18);
  }
  pmVar4->name = "Exit without saving";
  ppmVar1[0x17] = pmVar3;
  uVar7 = menu_state->game_loaded_on_entry;
  menu_state->column_select = 0;
  pmVar4->line_number = 0x38;
  pmVar4->draw_function = draw_menu_option;
  pmVar4->action_function = action_select;
  pmVar4->focus_function = (focus_function_type)0x0;
  pmVar4->destruct_function = (destruct_function_type)0x0;
  if (uVar7 == 0) {
    uVar7 = 0xd8;
  }
  else {
    uVar7 = 0x38;
  }
  pmVar3[1].name = (char *)select_exit_current_menu;
  parent_menu_00->column_start = uVar7;
  parent_menu_00->num_options = 0x18;
  return parent_menu_00;
}


