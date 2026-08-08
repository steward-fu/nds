/*
 * Ghidra decompilation
 *
 * Function : create_menu_video_options
 * Address  : 0017d7f0
 * Program  : drastic64
 */


code ** create_menu_video_options(long param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code **ppcVar3;
  undefined8 *puVar4;
  char **ppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  ppcVar3 = (code **)malloc(0x30);
  *ppcVar3 = draw_menu_video_options;
  ppcVar3[1] = focus_menu_none;
  *(undefined4 *)(ppcVar3 + 3) = 0;
  ppcVar3[5] = param_3;
  puVar4 = (undefined8 *)malloc(0x78);
  ppcVar3[4] = (code *)puVar4;
  ppcVar5 = (char **)malloc(0x48);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x40);
  }
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Frame skip type        ";
  *(undefined4 *)(ppcVar6 + 1) = 0x1e;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar7[6] = (char *)(lVar8 + 0x440);
  ppcVar7[7] = (char *)0x200000000;
  *puVar4 = ppcVar5;
  ppcVar5[2] = (char *)draw_numeric_labeled;
  ppcVar5[8] = frameskip_labels_11876;
  ppcVar5 = (char **)malloc(0x40);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Frame skip value                   ";
  *(undefined4 *)(ppcVar7 + 1) = 0x1f;
  ppcVar7[2] = (char *)draw_numeric;
  ppcVar7[3] = (char *)action_numeric;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  puVar4[1] = ppcVar5;
  ppcVar5[6] = (char *)(lVar8 + 0x444);
  ppcVar5[7] = (char *)0x900000001;
  ppcVar5 = (char **)malloc(0x48);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x40);
  }
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Safe frame skipping    ";
  *(undefined4 *)(ppcVar6 + 1) = 0x20;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar7[6] = (char *)(lVar8 + 0x4ac);
  ppcVar7[7] = (char *)0x100000000;
  puVar4[2] = ppcVar5;
  ppcVar5[2] = (char *)draw_numeric_labeled;
  ppcVar5[8] = yes_no_labels_11875;
  ppcVar5 = (char **)malloc(0x48);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x40);
  }
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Screen orientation     ";
  *(undefined4 *)(ppcVar6 + 1) = 0x22;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar7[6] = (char *)(param_1 + 0x50);
  ppcVar7[7] = (char *)0x200000000;
  ppcVar5[2] = (char *)draw_numeric_labeled;
  puVar4[3] = ppcVar5;
  ppcVar5[8] = orientation_labels_11877;
  ppcVar5 = (char **)malloc(0x48);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x40);
  }
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Screen swap            ";
  *(undefined4 *)(ppcVar6 + 1) = 0x23;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar7[6] = (char *)(lVar8 + 0x454);
  ppcVar7[7] = (char *)0x100000000;
  ppcVar5[2] = (char *)draw_numeric_labeled;
  puVar4[4] = ppcVar5;
  ppcVar5[8] = yes_no_labels_11875;
  ppcVar5 = (char **)malloc(0x48);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x40);
  }
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Mirror touchscreen     ";
  *(undefined4 *)(ppcVar6 + 1) = 0x24;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar7[6] = (char *)(lVar8 + 0x46c);
  ppcVar7[7] = (char *)0x100000000;
  ppcVar5[2] = (char *)draw_numeric_labeled;
  puVar4[5] = ppcVar5;
  ppcVar5[8] = yes_no_labels_11875;
  ppcVar5 = (char **)malloc(0x48);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x40);
  }
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Fix main 2D screen     ";
  *(undefined4 *)(ppcVar6 + 1) = 0x25;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar7[6] = (char *)(lVar8 + 0x498);
  ppcVar7[7] = (char *)0x100000000;
  ppcVar5[2] = (char *)draw_numeric_labeled;
  puVar4[6] = ppcVar5;
  ppcVar5[8] = yes_no_labels_11875;
  ppcVar5 = (char **)malloc(0x48);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x40);
  }
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Disable edge marking   ";
  *(undefined4 *)(ppcVar6 + 1) = 0x26;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar7[6] = (char *)(lVar8 + 0x49c);
  ppcVar7[7] = (char *)0x100000000;
  ppcVar5[2] = (char *)draw_numeric_labeled;
  puVar4[7] = ppcVar5;
  ppcVar5[8] = yes_no_labels_11875;
  ppcVar5 = (char **)malloc(0x48);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x40);
  }
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "High-resolution 3D     ";
  *(undefined4 *)(ppcVar6 + 1) = 0x27;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar7[6] = (char *)(lVar8 + 0x4a0);
  ppcVar7[7] = (char *)0x100000000;
  ppcVar5[2] = (char *)draw_numeric_labeled;
  puVar4[8] = ppcVar5;
  ppcVar5[8] = yes_no_labels_11875;
  ppcVar5 = (char **)malloc(0x48);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x40);
  }
  ppcVar6 = ppcVar7;
  if (ppcVar7 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x30);
  }
  *ppcVar6 = "Threaded 3D            ";
  *(undefined4 *)(ppcVar6 + 1) = 0x28;
  ppcVar6[2] = (char *)draw_numeric;
  ppcVar6[3] = (char *)action_numeric;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar7[6] = (char *)(lVar8 + 0x468);
  ppcVar7[7] = (char *)0x100000000;
  ppcVar5[2] = (char *)draw_numeric_labeled;
  ppcVar5[8] = yes_no_labels_11875;
  puVar4[9] = ppcVar5;
  ppcVar5 = (char **)malloc(0x38);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Delete game-specific config";
  *(undefined4 *)(ppcVar7 + 1) = 0x2a;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_delete_config_local;
  puVar4[10] = ppcVar5;
  ppcVar5 = (char **)malloc(0x38);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Exit: save for all games";
  *(undefined4 *)(ppcVar7 + 1) = 0x2c;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_save_config_global;
  puVar4[0xb] = ppcVar5;
  ppcVar5 = (char **)malloc(0x38);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  *ppcVar7 = "Exit: save for this game";
  *(undefined4 *)(ppcVar7 + 1) = 0x2d;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_save_config_local;
  puVar4[0xc] = ppcVar5;
  ppcVar5 = (char **)malloc(0x38);
  ppcVar7 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar7 = (char **)malloc(0x30);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  *ppcVar7 = "Exit without saving";
  *(undefined4 *)(ppcVar7 + 1) = 0x2e;
  ppcVar7[2] = (char *)draw_menu_option;
  ppcVar7[3] = (char *)action_select;
  ppcVar7[4] = (char *)0x0;
  ppcVar7[5] = (char *)0x0;
  uVar2 = 0x5c;
  if (iVar1 == 0) {
    uVar2 = 0x100;
  }
  *(undefined4 *)(ppcVar3 + 2) = uVar2;
  *(undefined4 *)((long)ppcVar3 + 0x14) = 0xe;
  puVar4[0xd] = ppcVar5;
  ppcVar5[6] = (char *)select_exit_current_menu;
  return ppcVar3;
}


