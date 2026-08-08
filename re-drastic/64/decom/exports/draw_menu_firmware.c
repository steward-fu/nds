/*
 * Ghidra decompilation
 *
 * Function : draw_menu_firmware
 * Address  : 00179960
 * Program  : drastic64
 */


void draw_menu_firmware(long *param_1,long param_2)

{
  print_string("Configure Firmware User Settings",0xffff,0,*(int *)(param_2 + 0x10) + 0x10,0xf8);
  print_string("(Note: changes take effect only",0xbac2,0,*(int *)(param_2 + 0x10) + 0x10,0x180);
  print_string(" when a game is newly loaded)",0xbac2,0,*(int *)(param_2 + 0x10) + 0x10,0x188);
  fill_screen_menu(0xffffffff,*(int *)(param_2 + 0x10) + 0x118,0x128,0x10,8);
  fill_screen_menu(*(undefined2 *)(&favorite_colors + (ulong)*(uint *)(*param_1 + 0x855d8) * 2),
                   *(int *)(param_2 + 0x10) + 0x119,0x129,0xe,6);
  return;
}


