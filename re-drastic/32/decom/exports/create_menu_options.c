/*
 * Ghidra decompilation
 *
 * Function : create_menu_options
 * Address  : 0809e95c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

menu_struct * create_menu_options(menu_state_struct *menu_state,menu_struct *parent_menu)

{
  menu_struct *pmVar1;
  menu_struct *menu;
  undefined4 *puVar2;
  char **ppcVar3;
  menu_option_struct *base;
  menu_option_struct *base_1;
  menu_option_struct *base_2;
  menu_option_struct *base_3;
  menu_option_struct *base_4;
  menu_option_struct *base_5;
  menu_option_struct *base_6;
  menu_option_struct *base_7;
  menu_option_struct *base_8;
  menu_option_struct *base_9;
  menu_option_struct *base_10;
  menu_option_struct *base_11;
  menu_option_struct *base_12;
  menu_option_struct *base_13;
  menu_option_struct *base_14;
  menu_option_struct *base_15;
  menu_option_struct *base_16;
  char **ppcVar4;
  char **ppcVar5;
  void **menu_options;
  config_struct *pcVar6;
  config_struct *config;
  u32 uVar7;
  undefined4 uVar8;
  
  pcVar6 = menu_state->config;
  pmVar1 = (menu_struct *)malloc(0x20);
  *(menu_struct **)&pmVar1->field_0x1c = parent_menu;
  *(code **)pmVar1 = draw_menu_options;
  *(code **)&pmVar1->field_0x4 = focus_menu_none;
  *(undefined4 *)&pmVar1->field_0xc = 0x17;
  *(undefined4 *)&pmVar1->field_0x10 = 0;
  puVar2 = (undefined4 *)malloc(0x5c);
  *(undefined4 **)&pmVar1->field_0x18 = puVar2;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  *puVar2 = ppcVar3;
  *ppcVar4 = "Frame skip type        ";
  ppcVar4[1] = (char *)0x1e;
  ppcVar4[2] = (char *)draw_numeric;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->frameskip_type;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x2;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::frameskip_labels;
  ppcVar3 = (char **)malloc(0x24);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  ppcVar5[3] = (char *)action_numeric;
  puVar2[1] = ppcVar3;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  *ppcVar5 = "Frame skip value                   ";
  ppcVar5[1] = (char *)0x1f;
  ppcVar5[2] = (char *)draw_numeric;
  ppcVar3[6] = (char *)&pcVar6->frameskip_value;
  ppcVar3[7] = (char *)0x1;
  ppcVar3[8] = (char *)0x9;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  puVar2[2] = ppcVar3;
  *ppcVar4 = "Screen orientation     ";
  ppcVar4[1] = (char *)0x21;
  ppcVar4[2] = (char *)draw_numeric;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&menu_state->screen_orientation;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x2;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::orientation_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  puVar2[3] = ppcVar3;
  *ppcVar4 = "Screen swap            ";
  ppcVar4[1] = (char *)0x22;
  ppcVar4[2] = (char *)draw_numeric;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->screen_swap;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[4] = ppcVar3;
  *ppcVar4 = "Show speed             ";
  ppcVar4[1] = (char *)0x23;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->show_frame_counter;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[3] = (char *)action_numeric;
  puVar2[5] = ppcVar3;
  *ppcVar4 = "Enable sound           ";
  ppcVar4[1] = (char *)0x24;
  ppcVar4[2] = (char *)draw_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->enable_sound;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[6] = ppcVar3;
  *ppcVar4 = "Fast forward           ";
  ppcVar4[1] = (char *)0x25;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->fast_forward;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[7] = ppcVar3;
  *ppcVar4 = "Mirror touchscreen     ";
  ppcVar4[1] = (char *)0x26;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->mirror_touch;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[8] = ppcVar3;
  *ppcVar4 = "Compress savestates    ";
  ppcVar4[1] = (char *)0x27;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->compress_savestates;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[3] = (char *)action_numeric;
  puVar2[9] = ppcVar3;
  *ppcVar4 = "Snapshot in savestates ";
  ppcVar4[1] = (char *)0x28;
  ppcVar4[2] = (char *)draw_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->savestate_snapshot;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[10] = ppcVar3;
  *ppcVar4 = "Enable cheats          ";
  ppcVar4[1] = (char *)0x29;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->enable_cheats;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[0xb] = ppcVar3;
  *ppcVar4 = "Uncompress ROMs        ";
  ppcVar4[1] = (char *)0x2a;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->unzip_roms;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[0xc] = ppcVar3;
  *ppcVar4 = "Backup in savestates   ";
  ppcVar4[1] = (char *)0x2b;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->backup_in_savestates;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  puVar2[0xd] = ppcVar3;
  *ppcVar4 = "Speed override         ";
  ppcVar4[1] = (char *)0x2c;
  ppcVar4[2] = (char *)draw_numeric;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&menu_state->speed_override;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x7;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::speed_override_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[0xe] = ppcVar3;
  *ppcVar4 = "Fix main 2D screen     ";
  ppcVar4[1] = (char *)0x2d;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->fix_main_2d_screen;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[0xf] = ppcVar3;
  *ppcVar4 = "Disable edge marking   ";
  ppcVar4[1] = (char *)0x2e;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->disable_edge_marking;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[2] = (char *)draw_numeric;
  puVar2[0x10] = ppcVar3;
  *ppcVar4 = "High-resolution 3D     ";
  ppcVar4[1] = (char *)0x2f;
  ppcVar4[3] = (char *)action_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->hires_3d;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x28);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x24);
  }
  ppcVar4 = ppcVar5;
  if (ppcVar5 == (char **)0x0) {
    ppcVar4 = (char **)malloc(0x18);
  }
  ppcVar4[3] = (char *)action_numeric;
  puVar2[0x11] = ppcVar3;
  *ppcVar4 = "Threaded 3D            ";
  ppcVar4[1] = (char *)0x30;
  ppcVar4[2] = (char *)draw_numeric;
  ppcVar4[4] = (char *)0x0;
  ppcVar4[5] = (char *)0x0;
  ppcVar5[6] = (char *)&pcVar6->threaded_3d;
  ppcVar5[7] = (char *)0x0;
  ppcVar5[8] = (char *)0x1;
  ppcVar3[2] = (char *)draw_numeric_labeled;
  ppcVar3[9] = (char *)create_menu_options::yes_no_labels;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  puVar2[0x12] = ppcVar3;
  *ppcVar5 = "Delete game-specific config";
  ppcVar5[1] = (char *)0x32;
  ppcVar5[2] = (char *)draw_menu_option;
  ppcVar5[3] = (char *)action_select;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = (char *)select_delete_config_local;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  ppcVar5[3] = (char *)action_select;
  puVar2[0x13] = ppcVar3;
  *ppcVar5 = "Exit: save for all games";
  ppcVar5[1] = (char *)0x34;
  ppcVar5[2] = (char *)draw_menu_option;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = (char *)select_save_config_global;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  ppcVar5[3] = (char *)action_select;
  puVar2[0x14] = ppcVar3;
  *ppcVar5 = "Exit: save for this game";
  ppcVar5[1] = (char *)0x35;
  ppcVar5[2] = (char *)draw_menu_option;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = (char *)select_save_config_local;
  ppcVar3 = (char **)malloc(0x1c);
  ppcVar5 = ppcVar3;
  if (ppcVar3 == (char **)0x0) {
    ppcVar5 = (char **)malloc(0x18);
  }
  puVar2[0x15] = ppcVar3;
  *ppcVar5 = "Exit without saving";
  uVar7 = menu_state->game_loaded_on_entry;
  ppcVar5[1] = (char *)0x36;
  ppcVar5[2] = (char *)draw_menu_option;
  ppcVar5[3] = (char *)action_select;
  ppcVar5[4] = (char *)0x0;
  ppcVar5[5] = (char *)0x0;
  ppcVar3[6] = (char *)select_exit_current_menu;
  if (uVar7 == 0) {
    uVar8 = 0x100;
  }
  else {
    uVar8 = 0x5c;
  }
  *(undefined4 *)&pmVar1->field_0x8 = uVar8;
  *(undefined4 *)&pmVar1->field_0xc = 0x16;
  return pmVar1;
}


