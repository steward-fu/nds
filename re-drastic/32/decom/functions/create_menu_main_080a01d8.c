/*
 * Ghidra decompilation
 *
 * Function : create_menu_main
 * Address  : 080a01d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_struct * create_menu_main(menu_state_struct *menu_state)

{
  menu_struct *parent_menu;
  menu_struct *menu_1;
  void *pvVar1;
  menu_struct *pmVar2;
  menu_struct *options_menu;
  menu_struct *pmVar3;
  menu_struct *controls_menu;
  menu_struct *pmVar4;
  menu_struct *firmware_menu;
  char **ppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  undefined4 uVar8;
  menu_struct *menu;
  void **menu_options;
  undefined4 *puVar9;
  config_struct *pcVar10;
  config_struct *config;
  u32 *puVar11;
  
  pcVar10 = menu_state->config;
  parent_menu = (menu_struct *)malloc(0x20);
  *(code **)parent_menu = draw_menu_main;
  *(undefined4 *)&parent_menu->field_0x4 = 0;
  *(undefined4 *)&parent_menu->field_0xc = 10;
  *(undefined4 *)&parent_menu->field_0x10 = 0;
  *(undefined4 *)&parent_menu->field_0x1c = 0;
  pvVar1 = malloc(0x28);
  *(void **)&parent_menu->field_0x18 = pvVar1;
  pmVar2 = create_menu_options(menu_state,parent_menu);
  pmVar3 = create_menu_controls(menu_state,parent_menu);
  pmVar4 = create_menu_firmware(menu_state,parent_menu);
  puVar9 = *(undefined4 **)&parent_menu->field_0x18;
  if (menu_state->game_loaded_on_entry == 0) {
    uVar8 = 0x158;
  }
  else {
    uVar8 = 0xb4;
  }
  *(undefined4 *)&parent_menu->field_0x8 = uVar8;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  *ppcVar7 = "Change Options";
  ppcVar7[1] = (char *)0x23;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select_menu;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)destroy_select_menu;
  ppcVar5[6] = (char *)pmVar2;
  *puVar9 = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[5] = (char *)destroy_select_menu;
  *ppcVar7 = "Configure Controls";
  ppcVar7[1] = (char *)0x24;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select_menu;
  ppcVar7[4] = (char *)0x0;
  ppcVar5[6] = (char *)pmVar3;
  puVar9[1] = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[5] = (char *)destroy_select_menu;
  *ppcVar7 = "Configure Firmware";
  ppcVar7[1] = (char *)0x25;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select_menu;
  ppcVar7[4] = (char *)0x0;
  ppcVar5[6] = (char *)pmVar4;
  puVar9[2] = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  *ppcVar7 = "Configure Cheats";
  ppcVar7[1] = (char *)0x26;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select;
  puVar11 = &pcVar10->savestate_number;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_cheat_menu;
  puVar9[3] = ppcVar5;
  ppcVar6 = (char **)malloc(0x2c);
  ppcVar7 = ppcVar6;
  ppcVar5 = ppcVar6;
  if ((ppcVar6 == (char **)0x0) &&
     (ppcVar5 = (char **)malloc(0x24), ppcVar7 = ppcVar5, ppcVar5 == (char **)0x0)) {
    ppcVar7 = (char **)malloc(0x18);
  }
  *ppcVar7 = "Load state   ";
  ppcVar7[1] = (char *)0x28;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)puVar11;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x9;
  ppcVar6[3] = (char *)action_numeric_select;
  ppcVar6[4] = (char *)focus_savestate;
  ppcVar6[9] = (char *)modify_snapshot_bg;
  ppcVar6[10] = (char *)select_load_state;
  puVar9[4] = ppcVar6;
  ppcVar6 = (char **)malloc(0x2c);
  ppcVar7 = ppcVar6;
  ppcVar5 = ppcVar6;
  if ((ppcVar6 == (char **)0x0) &&
     (ppcVar7 = (char **)malloc(0x24), ppcVar5 = ppcVar7, ppcVar7 == (char **)0x0)) {
    ppcVar5 = (char **)malloc(0x18);
  }
  ppcVar5[2] = (char *)draw_numeric;
  ppcVar5[3] = (char *)action_numeric;
  *ppcVar5 = "Save state   ";
  ppcVar5[1] = (char *)0x29;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar7[6] = (char *)puVar11;
  ppcVar7[7] = (char *)0x0;
  ppcVar7[8] = (char *)0x9;
  ppcVar6[3] = (char *)action_numeric_select;
  ppcVar6[4] = (char *)focus_savestate;
  ppcVar6[9] = (char *)modify_snapshot_bg;
  ppcVar6[10] = (char *)select_save_state;
  puVar9[5] = ppcVar6;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  *ppcVar7 = "Load new game ";
  ppcVar7[1] = (char *)0x2b;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_load_game;
  puVar9[6] = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  *ppcVar7 = "Restart game  ";
  ppcVar7[1] = (char *)0x2c;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_restart;
  puVar9[7] = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  *ppcVar7 = "Return to game";
  ppcVar7[1] = (char *)0x2e;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_return;
  puVar9[8] = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x18);
  }
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select;
  *ppcVar7 = "Exit DraStic  ";
  ppcVar7[1] = (char *)0x30;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_quit;
  puVar9[9] = ppcVar5;
  return parent_menu;
}


