/*
 * Ghidra decompilation
 *
 * Function : FUN_0017e8bc
 * Address  : 0017e8bc
 * Program  : drastic64
 */


code ** FUN_0017e8bc(long param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  code **ppcVar5;
  code *pcVar6;
  undefined8 *puVar7;
  char **ppcVar8;
  char **ppcVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar10 = *(long *)(param_1 + 8);
  ppcVar5 = (code **)malloc(0x30);
  *ppcVar5 = draw_menu_controls;
  ppcVar5[1] = focus_menu_none;
  *(undefined4 *)(ppcVar5 + 3) = 0;
  ppcVar5[5] = param_3;
  lVar12 = 0;
  pcVar6 = (code *)malloc(0xc0);
  ppcVar5[4] = pcVar6;
  do {
    while( true ) {
      lVar3 = ((ulong)(uint)(&options_to_config_map_11898)[lVar12] + 0x666) * 2;
      puVar11 = (&input_names_11897)[lVar12];
      puVar7 = (undefined8 *)malloc(0x50);
      lVar2 = lVar10 + lVar3 + 0x52;
      lVar3 = lVar10 + lVar3;
      iVar1 = (int)lVar12 + 0x1e;
      if (puVar7 != (undefined8 *)0x0) break;
      puVar7 = (undefined8 *)malloc(0x30);
      *(undefined8 *)(pcVar6 + lVar12 * 8) = 0;
      *puVar7 = puVar11;
      *(int *)(puVar7 + 1) = iVar1;
      puVar7[2] = draw_button_config;
      puVar7[3] = action_button_config;
      lVar12 = lVar12 + 1;
      puVar7[4] = 0;
      puVar7[5] = 0;
      uRam0000000000000048 = 0;
      lRam0000000000000038 = lVar3;
      lRam0000000000000040 = lVar2;
      if (lVar12 == 0x14) goto LAB_0017e9f8;
    }
    *puVar7 = puVar11;
    *(int *)(puVar7 + 1) = iVar1;
    puVar7[2] = draw_button_config;
    puVar7[3] = action_button_config;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[7] = lVar3;
    *(undefined8 **)(pcVar6 + lVar12 * 8) = puVar7;
    puVar7[8] = lVar2;
    *(undefined *)(puVar7 + 9) = 0;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x14);
LAB_0017e9f8:
  ppcVar8 = (char **)malloc(0x38);
  ppcVar9 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar9 = (char **)malloc(0x30);
  }
  *ppcVar9 = "Restore default controls";
  *(undefined4 *)(ppcVar9 + 1) = 0x33;
  ppcVar9[2] = (char *)draw_menu_option;
  ppcVar9[3] = (char *)action_select;
  ppcVar9[4] = (char *)0x0;
  ppcVar9[5] = (char *)0x0;
  ppcVar8[6] = (char *)select_restore_default_controls;
  *(char ***)(pcVar6 + 0xa0) = ppcVar8;
  ppcVar8 = (char **)malloc(0x38);
  ppcVar9 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar9 = (char **)malloc(0x30);
  }
  *ppcVar9 = "Delete game-specific config";
  *(undefined4 *)(ppcVar9 + 1) = 0x34;
  ppcVar9[2] = (char *)draw_menu_option;
  ppcVar9[3] = (char *)action_select;
  ppcVar9[4] = (char *)0x0;
  ppcVar9[5] = (char *)0x0;
  ppcVar8[6] = (char *)select_delete_config_local;
  *(char ***)(pcVar6 + 0xa8) = ppcVar8;
  ppcVar8 = (char **)malloc(0x38);
  ppcVar9 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar9 = (char **)malloc(0x30);
  }
  *ppcVar9 = "Exit: save for all games";
  *(undefined4 *)(ppcVar9 + 1) = 0x36;
  ppcVar9[2] = (char *)draw_menu_option;
  ppcVar9[3] = (char *)action_select;
  ppcVar9[4] = (char *)0x0;
  ppcVar9[5] = (char *)0x0;
  ppcVar8[6] = (char *)select_save_config_global;
  *(char ***)(pcVar6 + 0xb0) = ppcVar8;
  ppcVar8 = (char **)malloc(0x38);
  ppcVar9 = ppcVar8;
  if (ppcVar8 == (char **)0x0) {
    ppcVar9 = (char **)malloc(0x30);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  *ppcVar9 = "Exit without saving";
  *(undefined4 *)(ppcVar9 + 1) = 0x37;
  ppcVar9[2] = (char *)draw_menu_option;
  ppcVar9[3] = (char *)action_select;
  ppcVar9[4] = (char *)0x0;
  ppcVar9[5] = (char *)0x0;
  uVar4 = 0x38;
  if (iVar1 == 0) {
    uVar4 = 0xd8;
  }
  *(char ***)(pcVar6 + 0xb8) = ppcVar8;
  *(undefined4 *)(ppcVar5 + 2) = uVar4;
  *(undefined4 *)((long)ppcVar5 + 0x14) = 0x18;
  ppcVar8[6] = (char *)select_exit_current_menu;
  *(undefined4 *)(param_1 + 0x164) = 0;
  return ppcVar5;
}


