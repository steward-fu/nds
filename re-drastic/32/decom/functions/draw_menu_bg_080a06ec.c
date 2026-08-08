/*
 * Ghidra decompilation
 *
 * Function : draw_menu_bg
 * Address  : 080a06ec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_menu_bg(menu_state_struct *menu_state)

{
  u16 *snapshot_top_00;
  u16 *snapshot_top;
  u16 *snapshot_bottom_00;
  u16 *snapshot_bottom;
  char *str;
  char *time_str;
  u32 uVar1;
  time_t savestate_time;
  int local_24;
  
  local_24 = __stack_chk_guard;
  clear_screen_menu(0);
  if (menu_state->drastic_logo != (u16 *)0x0) {
    if (menu_state->game_loaded_on_entry == 0) {
      uVar1 = 200;
    }
    else {
      uVar1 = 0x24;
    }
    blit_screen_menu(menu_state->drastic_logo,uVar1,0x28,400,0x96);
  }
  if (menu_state->game_loaded_on_entry == 0) {
    uVar1 = 0x204;
  }
  else {
    uVar1 = 0x160;
  }
  set_font_narrow_small();
  print_string("Version r2.5.0.4",0xffff,0,uVar1,0xc9);
  set_font_wide();
  if (menu_state->game_loaded_on_entry != 0) {
    if ((menu_state->current_menu->parent_menu == (_menu_struct *)0x0) &&
       (menu_state->current_menu->current_option == 3)) {
      savestate_time =
           savestate_index_timestamp(menu_state->system,menu_state->config->savestate_number);
      set_font_narrow_small();
      if (savestate_time == 0) {
        print_string("(No savestate)",0xffff,0,0x220,0xe9);
      }
      else {
        snapshot_top_00 = (u16 *)malloc(0x18000);
        snapshot_bottom_00 = (u16 *)malloc(0x18000);
        snapshot_bottom = (u16 *)&savestate_time;
        str = ctime((time_t *)snapshot_bottom);
        memset(snapshot_top_00,0,0x18000);
        memset(snapshot_bottom_00,0,0x18000);
        load_state_index(menu_state->system,menu_state->config->savestate_number,snapshot_top_00,
                         snapshot_bottom_00,1);
        blit_screen_menu(snapshot_top_00,0x1d8,0x30,0x100,0xc0);
        blit_screen_menu(snapshot_bottom_00,0x1d8,0xf0,0x100,0xc0);
        print_string(str,0xffff,0,0x1dc,0x19c);
        free(snapshot_top_00);
        free(snapshot_bottom_00);
      }
      set_font_wide();
    }
    else {
      blit_screen_menu(menu_state->ds_screen_top,0x1d8,0x30,0x100,0xc0);
      blit_screen_menu(menu_state->ds_screen_bottom,0x1d8,0xf0,0x100,0xc0);
    }
  }
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


