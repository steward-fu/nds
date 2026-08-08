/*
 * Ghidra decompilation
 *
 * Function : create_menu_main
 * Address  : 0017f3e0
 * Program  : drastic64
 */


code ** create_menu_main(long param_1)

{
  code **ppcVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  char **ppcVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 8);
  ppcVar1 = (code **)malloc(0x30);
  *ppcVar1 = draw_menu_main;
  ppcVar1[1] = (code *)0x0;
  *(undefined8 *)((long)ppcVar1 + 0x14) = 10;
  ppcVar1[5] = (code *)0x0;
  pcVar2 = (code *)malloc(0x50);
  ppcVar1[4] = pcVar2;
  pcVar3 = (char *)create_menu_options(param_1,ppcVar1);
  pcVar4 = (char *)create_menu_controls(param_1,ppcVar1);
  pcVar5 = (char *)create_menu_firmware(param_1,ppcVar1);
  uVar9 = 0xb4;
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar9 = 0x158;
  }
  *(undefined4 *)(ppcVar1 + 2) = uVar9;
  puVar10 = (undefined8 *)ppcVar1[4];
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Change Options";
  *(undefined4 *)(ppcVar8 + 1) = 0x23;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select_menu;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)destroy_select_menu;
  ppcVar6[6] = pcVar3;
  *puVar10 = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Configure Controls";
  *(undefined4 *)(ppcVar8 + 1) = 0x24;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select_menu;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)destroy_select_menu;
  ppcVar6[6] = pcVar4;
  puVar10[1] = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Configure Firmware";
  *(undefined4 *)(ppcVar8 + 1) = 0x25;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select_menu;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)destroy_select_menu;
  ppcVar6[6] = pcVar5;
  puVar10[2] = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Configure Cheats";
  *(undefined4 *)(ppcVar8 + 1) = 0x26;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  pcVar3 = (char *)(lVar11 + 0x458);
  ppcVar6[6] = (char *)select_cheat_menu;
  puVar10[3] = ppcVar6;
  ppcVar7 = (char **)malloc(0x50);
  ppcVar8 = ppcVar7;
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x40);
    ppcVar8 = ppcVar6;
    if (ppcVar6 == (char **)0x0) {
      ppcVar8 = (char **)malloc(0x30);
    }
  }
  *ppcVar8 = "Load state   ";
  *(undefined4 *)(ppcVar8 + 1) = 0x28;
  ppcVar8[2] = (char *)draw_numeric;
  ppcVar8[3] = (char *)action_numeric;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  ppcVar6[6] = pcVar3;
  ppcVar6[7] = (char *)0x900000000;
  ppcVar7[3] = (char *)action_numeric_select;
  ppcVar7[4] = (char *)focus_savestate;
  ppcVar7[8] = (char *)modify_snapshot_bg;
  ppcVar7[9] = (char *)select_load_state;
  puVar10[4] = ppcVar7;
  ppcVar7 = (char **)malloc(0x50);
  ppcVar8 = ppcVar7;
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x40);
    ppcVar8 = ppcVar6;
    if (ppcVar6 == (char **)0x0) {
      ppcVar8 = (char **)malloc(0x30);
    }
  }
  *ppcVar8 = "Save state   ";
  *(undefined4 *)(ppcVar8 + 1) = 0x29;
  ppcVar8[2] = (char *)draw_numeric;
  ppcVar8[3] = (char *)action_numeric;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  ppcVar6[6] = pcVar3;
  ppcVar6[7] = (char *)0x900000000;
  ppcVar7[3] = (char *)action_numeric_select;
  ppcVar7[4] = (char *)focus_savestate;
  ppcVar7[8] = (char *)modify_snapshot_bg;
  ppcVar7[9] = (char *)select_save_state;
  puVar10[5] = ppcVar7;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Load new game ";
  *(undefined4 *)(ppcVar8 + 1) = 0x2b;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  ppcVar6[6] = (char *)select_load_game;
  puVar10[6] = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Restart game  ";
  *(undefined4 *)(ppcVar8 + 1) = 0x2c;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  ppcVar6[6] = (char *)select_restart;
  puVar10[7] = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Return to game";
  *(undefined4 *)(ppcVar8 + 1) = 0x2e;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  ppcVar6[6] = (char *)select_return;
  puVar10[8] = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Exit DraStic  ";
  *(undefined4 *)(ppcVar8 + 1) = 0x30;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  ppcVar6[6] = (char *)select_quit;
  puVar10[9] = ppcVar6;
  return ppcVar1;
}


