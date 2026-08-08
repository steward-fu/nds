/*
 * Ghidra decompilation
 *
 * Function : create_menu_firmware
 * Address  : 0809fcfc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_struct * create_menu_firmware(menu_state_struct *menu_state,menu_struct *parent_menu)

{
  menu_struct *pmVar1;
  menu_struct *menu_1;
  undefined4 *puVar2;
  char **ppcVar3;
  menu_option_struct *base;
  menu_option_struct *base_1;
  menu_option_struct *base_2;
  u32 uVar4;
  char **ppcVar5;
  char **ppcVar6;
  undefined4 uVar7;
  void **menu_options;
  menu_struct *menu;
  config_struct *pcVar8;
  config_firmware_struct *config_firmware;
  
  pcVar8 = menu_state->config;
  pmVar1 = (menu_struct *)malloc(0x20);
  *(code **)pmVar1 = draw_menu_firmware;
  *(code **)&pmVar1->field_0x4 = focus_menu_none;
  *(undefined4 *)&pmVar1->field_0xc = 9;
  *(undefined4 *)&pmVar1->field_0x10 = 0;
  *(menu_struct **)&pmVar1->field_0x1c = parent_menu;
  puVar2 = (undefined4 *)malloc(0x24);
  *(undefined4 **)&pmVar1->field_0x18 = puVar2;
  ppcVar3 = (char **)malloc(0x24);
  ppcVar6 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  *puVar2 = ppcVar3;
  *ppcVar6 = "Username                   ";
  ppcVar6[2] = (char *)draw_input;
  ppcVar6[1] = (char *)0x23;
  ppcVar6[3] = (char *)action_input;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar3[6] = menu_state->config_username;
  ppcVar3[7] = (char *)0xa;
  ppcVar3[8] = (char *)0x0;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar6 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x24);
  }
  ppcVar5 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  puVar2[1] = ppcVar3;
  *ppcVar5 = "Language          ";
  ppcVar5[1] = (char *)0x24;
  ppcVar5[2] = (char *)draw_numeric;
  ppcVar5[3] = (char *)action_numeric;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar6[6] = (char *)&(pcVar8->firmware).language;
  ppcVar6[7] = (char *)0x0;
  ppcVar6[8] = (char *)0x6;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_firmware::language_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar6 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x24);
  }
  ppcVar5 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  puVar2[2] = ppcVar3;
  *ppcVar5 = "Favorite Color ";
  ppcVar5[1] = (char *)0x25;
  ppcVar5[2] = (char *)draw_numeric;
  ppcVar5[3] = (char *)action_numeric;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar6[6] = (char *)&(pcVar8->firmware).favorite_color;
  ppcVar6[7] = (char *)0x0;
  ppcVar6[8] = (char *)0xf;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_firmware::color_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar6 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x24);
  }
  ppcVar5 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  puVar2[3] = ppcVar3;
  *ppcVar5 = "Birthday Month    ";
  ppcVar5[1] = (char *)0x26;
  ppcVar5[2] = (char *)draw_numeric;
  ppcVar5[3] = (char *)action_numeric;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar6[6] = (char *)&(pcVar8->firmware).birthday_month;
  ppcVar6[7] = (char *)0x0;
  ppcVar6[8] = (char *)0xb;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_firmware::birthday_month_labels;
  ppcVar3 = (char **)malloc(0x24);
  ppcVar6 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  ppcVar6[3] = (char *)action_numeric;
  puVar2[4] = ppcVar3;
  *ppcVar6 = "Birthday Day                       ";
  ppcVar6[1] = (char *)0x27;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar3[6] = (char *)&(pcVar8->firmware).birthday_day;
  ppcVar3[7] = (char *)0x1;
  ppcVar3[8] = (char *)0x1f;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar6 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  puVar2[5] = ppcVar3;
  *ppcVar6 = "Delete game-specific config";
  ppcVar6[1] = (char *)0x29;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[3] = (char *)action_select;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar3[6] = (char *)select_delete_config_local;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar6 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  ppcVar6[3] = (char *)action_select;
  puVar2[6] = ppcVar3;
  *ppcVar6 = "Exit: save for all games";
  ppcVar6[1] = (char *)0x2b;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar3[6] = (char *)select_save_config_global;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar6 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  ppcVar6[3] = (char *)action_select;
  puVar2[7] = ppcVar3;
  *ppcVar6 = "Exit: save for this game";
  ppcVar6[1] = (char *)0x2c;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar3[6] = (char *)select_save_config_local;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar6 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  puVar2[8] = ppcVar3;
  *ppcVar6 = "Exit without saving";
  ppcVar6[1] = (char *)0x2d;
  uVar4 = menu_state->game_loaded_on_entry;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[3] = (char *)action_select;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar3[6] = (char *)select_exit_current_menu;
  if (uVar4 == 0) {
    uVar7 = 0x100;
  }
  else {
    uVar7 = 0x5c;
  }
  *(undefined4 *)&pmVar1->field_0x8 = uVar7;
  return pmVar1;
}


