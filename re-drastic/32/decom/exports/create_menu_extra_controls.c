/*
 * Ghidra decompilation
 *
 * Function : create_menu_extra_controls
 * Address  : 0809f62c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_struct *
create_menu_extra_controls
          (menu_state_struct *menu_state,menu_struct *parent_menu,menu_struct *grandparent_menu)

{
  menu_struct *pmVar1;
  menu_struct *menu;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char **ppcVar5;
  char **ppcVar6;
  undefined4 uVar7;
  int iVar8;
  u32 config_index;
  int *piVar9;
  void **ppvVar10;
  undefined4 *puVar11;
  config_struct *config;
  config_struct *pcVar12;
  int iVar13;
  u32 uVar14;
  
  pcVar12 = menu_state->config;
  piVar9 = (int *)&UNK_0813f3bc;
  iVar13 = 0x1e;
  pmVar1 = (menu_struct *)malloc(0x20);
  *(code **)pmVar1 = draw_menu_controls;
  *(code **)&pmVar1->field_0x4 = focus_menu_none;
  *(undefined4 *)&pmVar1->field_0xc = 0x17;
  puVar11 = (undefined4 *)&UNK_0813f40c;
  *(undefined4 *)&pmVar1->field_0x10 = 0;
  *(menu_struct **)&pmVar1->field_0x1c = grandparent_menu;
  pvVar2 = malloc(0x5c);
  ppvVar10 = (void **)((int)pvVar2 + -4);
  *(void **)&pmVar1->field_0x18 = pvVar2;
  do {
    piVar9 = piVar9 + 1;
    iVar8 = *piVar9;
    puVar11 = puVar11 + 1;
    uVar7 = *puVar11;
    puVar3 = (undefined4 *)malloc(0x28);
    puVar4 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)malloc(0x18);
    }
    ppvVar10 = ppvVar10 + 1;
    *ppvVar10 = puVar3;
    *puVar4 = uVar7;
    puVar4[1] = iVar13;
    iVar13 = iVar13 + 1;
    puVar4[2] = draw_button_config;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[3] = action_button_config;
    puVar3[7] = pcVar12->controls_a + iVar8;
    puVar3[8] = pcVar12->controls_b + iVar8;
    *(undefined *)(puVar3 + 9) = 0;
  } while (iVar13 != 0x31);
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar6 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  *ppcVar6 = "Restore default controls";
  *(char ***)((int)pvVar2 + 0x4c) = ppcVar5;
  ppcVar6[1] = (char *)0x32;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[3] = (char *)action_select;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_restore_default_controls;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar6 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  ppcVar6[3] = (char *)action_select;
  *ppcVar6 = "Delete game-specific config";
  ppcVar6[1] = (char *)0x33;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_delete_config_local;
  *(char ***)((int)pvVar2 + 0x50) = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar6 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  ppcVar6[3] = (char *)action_select;
  *ppcVar6 = "Exit: save for all games";
  ppcVar6[1] = (char *)0x35;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  ppcVar5[6] = (char *)select_save_config_global;
  *(char ***)((int)pvVar2 + 0x54) = ppcVar5;
  ppcVar5 = (char **)malloc(0x1c);
  ppcVar6 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar6 = (char **)malloc(0x18);
  }
  *ppcVar6 = "Exit without saving";
  *(char ***)((int)pvVar2 + 0x58) = ppcVar5;
  uVar14 = menu_state->game_loaded_on_entry;
  menu_state->column_select = 0;
  ppcVar6[1] = (char *)0x36;
  ppcVar6[2] = (char *)draw_menu_option;
  ppcVar6[3] = (char *)action_select;
  ppcVar6[4] = (char *)0x0;
  ppcVar6[5] = (char *)0x0;
  if (uVar14 == 0) {
    uVar7 = 0xd8;
  }
  else {
    uVar7 = 0x38;
  }
  ppcVar5[6] = (char *)select_exit_current_menu;
  *(undefined4 *)&pmVar1->field_0x8 = uVar7;
  *(undefined4 *)&pmVar1->field_0xc = 0x17;
  return pmVar1;
}


