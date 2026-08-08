/*
 * Ghidra decompilation
 *
 * Function : create_menu_firmware
 * Address  : 0017ef60
 * Program  : drastic64
 */


code ** create_menu_firmware(long param_1,code *param_2)

{
  int iVar1;
  code **ppcVar2;
  undefined8 *puVar3;
  char **ppcVar4;
  char **ppcVar5;
  char **ppcVar6;
  undefined4 uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  ppcVar2 = (code **)malloc(0x30);
  *ppcVar2 = draw_menu_firmware;
  ppcVar2[1] = focus_menu_none;
  *(undefined8 *)((long)ppcVar2 + 0x14) = 9;
  ppcVar2[5] = param_2;
  puVar3 = (undefined8 *)malloc(0x48);
  ppcVar2[4] = (code *)puVar3;
  ppcVar4 = (char **)malloc(0x40);
  ppcVar6 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Username                   ";
  *(undefined4 *)(ppcVar6 + 1) = 0x23;
  ppcVar6[2] = (char *)draw_input;
  ppcVar6[3] = (char *)action_input;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  *puVar3 = ppcVar4;
  ppcVar4[6] = (char *)(param_1 + 0x58);
  ppcVar4[7] = (char *)0xa;
  ppcVar4 = (char **)malloc(0x48);
  ppcVar6 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x40);
  }
  ppcVar5 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x30);
  }
  *ppcVar5 = "Language          ";
  *(undefined4 *)(ppcVar5 + 1) = 0x24;
  ppcVar5[2] = (char *)draw_numeric;
  ppcVar5[3] = (char *)action_numeric;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar6[6] = (char *)(lVar8 + 0x2c);
  ppcVar6[7] = (char *)0x600000000;
  puVar3[1] = ppcVar4;
  ppcVar4[2] = (char *)draw_numeric_labeled;
  ppcVar4[8] = language_labels_11938;
  ppcVar4 = (char **)malloc(0x48);
  ppcVar6 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x40);
  }
  ppcVar5 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x30);
  }
  *ppcVar5 = "Favorite Color ";
  *(undefined4 *)(ppcVar5 + 1) = 0x25;
  ppcVar5[2] = (char *)draw_numeric;
  ppcVar5[3] = (char *)action_numeric;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar6[6] = (char *)(lVar8 + 0x30);
  ppcVar6[7] = (char *)0xf00000000;
  puVar3[2] = ppcVar4;
  ppcVar4[2] = (char *)draw_numeric_labeled;
  ppcVar4[8] = color_labels_11939;
  ppcVar4 = (char **)malloc(0x48);
  ppcVar6 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x40);
  }
  ppcVar5 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x30);
  }
  *ppcVar5 = "Birthday Month    ";
  *(undefined4 *)(ppcVar5 + 1) = 0x26;
  ppcVar5[2] = (char *)draw_numeric;
  ppcVar5[3] = (char *)action_numeric;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar6[6] = (char *)(lVar8 + 0x34);
  ppcVar6[7] = (char *)0xb00000000;
  ppcVar4[2] = (char *)draw_numeric_labeled;
  puVar3[3] = ppcVar4;
  ppcVar4[8] = birthday_month_labels_11940;
  ppcVar4 = (char **)malloc(0x40);
  ppcVar6 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Birthday Day                       ";
  *(undefined4 *)(ppcVar6 + 1) = 0x27;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  puVar3[4] = ppcVar4;
  ppcVar4[6] = (char *)(lVar8 + 0x38);
  ppcVar4[7] = (char *)0x1f00000001;
  ppcVar4 = (char **)malloc(0x38);
  ppcVar6 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Delete game-specific config";
  *(undefined4 *)(ppcVar6 + 1) = 0x29;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[3] = (char *)action_select;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  puVar3[5] = ppcVar4;
  ppcVar4[6] = (char *)select_delete_config_local;
  ppcVar4 = (char **)malloc(0x38);
  ppcVar6 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Exit: save for all games";
  *(undefined4 *)(ppcVar6 + 1) = 0x2b;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[3] = (char *)action_select;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  puVar3[6] = ppcVar4;
  ppcVar4[6] = (char *)select_save_config_global;
  ppcVar4 = (char **)malloc(0x38);
  ppcVar6 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Exit: save for this game";
  *(undefined4 *)(ppcVar6 + 1) = 0x2c;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[3] = (char *)action_select;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar4[6] = (char *)select_save_config_local;
  puVar3[7] = ppcVar4;
  ppcVar4 = (char **)malloc(0x38);
  ppcVar6 = ppcVar4;
  if (ppcVar4 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  *ppcVar6 = "Exit without saving";
  *(undefined4 *)(ppcVar6 + 1) = 0x2d;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[3] = (char *)action_select;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  uVar7 = 0x5c;
  if (iVar1 == 0) {
    uVar7 = 0x100;
  }
  *(undefined4 *)(ppcVar2 + 2) = uVar7;
  puVar3[8] = ppcVar4;
  ppcVar4[6] = (char *)select_exit_current_menu;
  return ppcVar2;
}


