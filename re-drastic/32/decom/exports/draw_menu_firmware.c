/*
 * Ghidra decompilation
 *
 * Function : draw_menu_firmware
 * Address  : 0809a93c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void draw_menu_firmware(menu_state_struct *menu_state,menu_struct *menu)

{
  print_string("Configure Firmware User Settings",0xffff,0,*(int *)&menu->field_0x8 + 0x10,0xf8);
  print_string("(Note: changes take effect only",0xbac2,0,*(int *)&menu->field_0x8 + 0x10,0x180);
  print_string(" when a game is newly loaded)",0xbac2,0,*(int *)&menu->field_0x8 + 0x10,0x188);
  fill_screen_menu(0xffff,*(int *)&menu->field_0x8 + 0x118,0x128,0x10,8);
  fill_screen_menu(favorite_colors[(menu_state->system->config).firmware.favorite_color],
                   *(int *)&menu->field_0x8 + 0x119,0x129,0xe,6);
  return;
}


