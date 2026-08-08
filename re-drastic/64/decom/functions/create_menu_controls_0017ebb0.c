/*
 * Ghidra decompilation
 *
 * Function : create_menu_controls
 * Address  : 0017ebb0
 * Program  : drastic64
 */


code ** create_menu_controls(long param_1,code *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  code **ppcVar5;
  code *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char **ppcVar9;
  char **ppcVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  
  lVar11 = *(long *)(param_1 + 8);
  ppcVar5 = (code **)malloc(0x30);
  *ppcVar5 = draw_menu_controls;
  ppcVar5[1] = focus_menu_none;
  *(undefined8 *)((long)ppcVar5 + 0x14) = 0x18;
  ppcVar5[5] = param_2;
  pcVar6 = (code *)malloc(0xc0);
  ppcVar5[4] = pcVar6;
  pcVar7 = (char *)create_menu_extra_controls(param_1,ppcVar5,param_2);
  lVar13 = 0;
  do {
    while( true ) {
      lVar3 = ((ulong)(uint)(&options_to_config_map_11915)[lVar13] + 0x666) * 2;
      puVar12 = (&input_names_11914)[lVar13];
      puVar8 = (undefined8 *)malloc(0x50);
      lVar2 = lVar11 + lVar3 + 0x52;
      lVar3 = lVar11 + lVar3;
      iVar1 = (int)lVar13 + 0x1e;
      if (puVar8 != (undefined8 *)0x0) break;
      puVar8 = (undefined8 *)malloc(0x30);
      *(undefined8 *)(pcVar6 + lVar13 * 8) = 0;
      *puVar8 = puVar12;
      *(int *)(puVar8 + 1) = iVar1;
      puVar8[2] = draw_button_config;
      puVar8[3] = action_button_config;
      lVar13 = lVar13 + 1;
      puVar8[4] = 0;
      puVar8[5] = 0;
      uRam0000000000000048 = 0;
      lRam0000000000000038 = lVar3;
      lRam0000000000000040 = lVar2;
      if (lVar13 == 0x12) goto LAB_0017ed00;
    }
    *puVar8 = puVar12;
    *(int *)(puVar8 + 1) = iVar1;
    puVar8[2] = draw_button_config;
    puVar8[3] = action_button_config;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[7] = lVar3;
    *(undefined8 **)(pcVar6 + lVar13 * 8) = puVar8;
    puVar8[8] = lVar2;
    *(undefined *)(puVar8 + 9) = 0;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x12);
LAB_0017ed00:
  ppcVar9 = (char **)malloc(0x38);
  ppcVar10 = ppcVar9;
  if (ppcVar9 == (char **)0x0) {
    ppcVar10 = (char **)malloc(0x30);
  }
  *ppcVar10 = "Extra Controls";
  *(undefined4 *)(ppcVar10 + 1) = 0x31;
  ppcVar10[2] = (char *)draw_menu_option;
  ppcVar10[3] = (char *)action_select_menu;
  ppcVar10[4] = (char *)0x0;
  ppcVar10[5] = (char *)destroy_select_menu;
  ppcVar9[6] = pcVar7;
  *(char ***)(pcVar6 + 0x90) = ppcVar9;
  ppcVar9 = (char **)malloc(0x38);
  ppcVar10 = ppcVar9;
  if (ppcVar9 == (char **)0x0) {
    ppcVar10 = (char **)malloc(0x30);
  }
  *ppcVar10 = "Restore default controls";
  *(undefined4 *)(ppcVar10 + 1) = 0x33;
  ppcVar10[2] = (char *)draw_menu_option;
  ppcVar10[3] = (char *)action_select;
  ppcVar10[4] = (char *)0x0;
  ppcVar10[5] = (char *)0x0;
  ppcVar9[6] = (char *)select_restore_default_controls;
  *(char ***)(pcVar6 + 0x98) = ppcVar9;
  ppcVar9 = (char **)malloc(0x38);
  ppcVar10 = ppcVar9;
  if (ppcVar9 == (char **)0x0) {
    ppcVar10 = (char **)malloc(0x30);
  }
  *ppcVar10 = "Delete game-specific config";
  *(undefined4 *)(ppcVar10 + 1) = 0x34;
  ppcVar10[2] = (char *)draw_menu_option;
  ppcVar10[3] = (char *)action_select;
  ppcVar10[4] = (char *)0x0;
  ppcVar10[5] = (char *)0x0;
  ppcVar9[6] = (char *)select_delete_config_local;
  *(char ***)(pcVar6 + 0xa0) = ppcVar9;
  ppcVar9 = (char **)malloc(0x38);
  ppcVar10 = ppcVar9;
  if (ppcVar9 == (char **)0x0) {
    ppcVar10 = (char **)malloc(0x30);
  }
  *ppcVar10 = "Exit: save for all games";
  *(undefined4 *)(ppcVar10 + 1) = 0x36;
  ppcVar10[2] = (char *)draw_menu_option;
  ppcVar10[3] = (char *)action_select;
  ppcVar10[4] = (char *)0x0;
  ppcVar10[5] = (char *)0x0;
  ppcVar9[6] = (char *)select_save_config_global;
  *(char ***)(pcVar6 + 0xa8) = ppcVar9;
  ppcVar9 = (char **)malloc(0x38);
  ppcVar10 = ppcVar9;
  if (ppcVar9 == (char **)0x0) {
    ppcVar10 = (char **)malloc(0x30);
  }
  *ppcVar10 = "Exit: save for this game";
  *(undefined4 *)(ppcVar10 + 1) = 0x37;
  ppcVar10[2] = (char *)draw_menu_option;
  ppcVar10[3] = (char *)action_select;
  ppcVar10[4] = (char *)0x0;
  ppcVar10[5] = (char *)0x0;
  ppcVar9[6] = (char *)select_save_config_local;
  *(char ***)(pcVar6 + 0xb0) = ppcVar9;
  ppcVar9 = (char **)malloc(0x38);
  ppcVar10 = ppcVar9;
  if (ppcVar9 == (char **)0x0) {
    ppcVar10 = (char **)malloc(0x30);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  *ppcVar10 = "Exit without saving";
  uVar4 = 0x38;
  *(undefined4 *)(ppcVar10 + 1) = 0x38;
  ppcVar10[2] = (char *)draw_menu_option;
  ppcVar10[3] = (char *)action_select;
  ppcVar10[4] = (char *)0x0;
  ppcVar10[5] = (char *)0x0;
  if (iVar1 == 0) {
    uVar4 = 0xd8;
  }
  *(char ***)(pcVar6 + 0xb8) = ppcVar9;
  *(undefined4 *)(ppcVar5 + 2) = uVar4;
  *(undefined4 *)((long)ppcVar5 + 0x14) = 0x18;
  ppcVar9[6] = (char *)select_exit_current_menu;
  *(undefined4 *)(param_1 + 0x164) = 0;
  return ppcVar5;
}


