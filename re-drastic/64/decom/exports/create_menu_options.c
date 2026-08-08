/*
 * Ghidra decompilation
 *
 * Function : create_menu_options
 * Address  : 0017df80
 * Program  : drastic64
 */


code ** create_menu_options(long param_1,code *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code **ppcVar3;
  code *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  char **ppcVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 8);
  ppcVar3 = (code **)malloc(0x30);
  *ppcVar3 = draw_menu_options;
  ppcVar3[1] = focus_menu_none;
  *(undefined8 *)((long)ppcVar3 + 0x14) = 0x10;
  ppcVar3[5] = param_2;
  pcVar4 = (code *)malloc(0x80);
  ppcVar3[4] = pcVar4;
  pcVar5 = (char *)create_menu_video_options(param_1,ppcVar3,param_2);
  puVar9 = (undefined8 *)ppcVar3[4];
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Video options";
  *(undefined4 *)(ppcVar8 + 1) = 0x1e;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select_menu;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)destroy_select_menu;
  ppcVar6[6] = pcVar5;
  *puVar9 = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Show speed             ";
  *(undefined4 *)(ppcVar7 + 1) = 0x20;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x448);
  ppcVar8[7] = (char *)0x100000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = yes_no_labels_11889;
  puVar9[1] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Enable sound           ";
  *(undefined4 *)(ppcVar7 + 1) = 0x21;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x460);
  ppcVar8[7] = (char *)0x100000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = yes_no_labels_11889;
  puVar9[2] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Fast forward           ";
  *(undefined4 *)(ppcVar7 + 1) = 0x22;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x45c);
  ppcVar8[7] = (char *)0x100000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = yes_no_labels_11889;
  puVar9[3] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Compress savestates    ";
  *(undefined4 *)(ppcVar7 + 1) = 0x23;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x470);
  ppcVar8[7] = (char *)0x100000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = yes_no_labels_11889;
  puVar9[4] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Snapshot in savestates ";
  *(undefined4 *)(ppcVar7 + 1) = 0x24;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x474);
  ppcVar8[7] = (char *)0x100000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = yes_no_labels_11889;
  puVar9[5] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Enable cheats          ";
  *(undefined4 *)(ppcVar7 + 1) = 0x25;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x478);
  ppcVar8[7] = (char *)0x100000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = yes_no_labels_11889;
  puVar9[6] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Uncompress ROMs        ";
  *(undefined4 *)(ppcVar7 + 1) = 0x26;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x47c);
  ppcVar8[7] = (char *)0x100000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = yes_no_labels_11889;
  puVar9[7] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Preload ROMs           ";
  *(undefined4 *)(ppcVar7 + 1) = 0x27;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x480);
  ppcVar8[7] = (char *)0x100000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = yes_no_labels_11889;
  puVar9[8] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Backup in savestates   ";
  *(undefined4 *)(ppcVar7 + 1) = 0x28;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x484);
  ppcVar8[7] = (char *)0x100000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = yes_no_labels_11889;
  puVar9[9] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Speed override         ";
  *(undefined4 *)(ppcVar7 + 1) = 0x29;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(param_1 + 0x54);
  ppcVar8[7] = (char *)0x700000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = speed_override_labels_11890;
  puVar9[10] = ppcVar6;
  ppcVar6 = (char **)malloc(0x48);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x40);
  }
  ppcVar7 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Slot 2 Device          ";
  *(undefined4 *)(ppcVar7 + 1) = 0x2a;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar8[6] = (char *)(lVar10 + 0x4b4);
  ppcVar8[7] = (char *)0x500000000;
  ppcVar6[2] = (char *)draw_numeric_labeled;
  ppcVar6[8] = slot2_device_type_labels_11891;
  puVar9[0xb] = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Delete game-specific config";
  *(undefined4 *)(ppcVar8 + 1) = 0x2c;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  ppcVar6[6] = (char *)select_delete_config_local;
  puVar9[0xc] = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Exit: save for all games";
  *(undefined4 *)(ppcVar8 + 1) = 0x2e;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  ppcVar6[6] = (char *)select_save_config_global;
  puVar9[0xd] = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Exit: save for this game";
  *(undefined4 *)(ppcVar8 + 1) = 0x2f;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  ppcVar6[6] = (char *)select_save_config_local;
  puVar9[0xe] = ppcVar6;
  ppcVar6 = (char **)malloc(0x38);
  ppcVar8 = ppcVar6;
  if (ppcVar6 == (char **)0x0) {
    ppcVar8 = (char **)malloc(0x30);
  }
  *ppcVar8 = "Exit without saving";
  *(undefined4 *)(ppcVar8 + 1) = 0x30;
  ppcVar8[2] = (char *)draw_menu_option;
  ppcVar8[3] = (char *)action_select;
  ppcVar8[4] = (char *)0x0;
  ppcVar8[5] = (char *)0x0;
  iVar1 = *(int *)(param_1 + 0x40);
  ppcVar6[6] = (char *)select_exit_current_menu;
  puVar9[0xf] = ppcVar6;
  uVar2 = 0x5c;
  if (iVar1 == 0) {
    uVar2 = 0x100;
  }
  *(undefined4 *)(ppcVar3 + 2) = uVar2;
  *(undefined4 *)((long)ppcVar3 + 0x14) = 0x10;
  return ppcVar3;
}


