/*
 * Ghidra decompilation
 *
 * Function : menu_bios_warning
 * Address  : 001801e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void menu_bios_warning(long param_1)

{
  int local_830 [2];
  undefined auStack_828 [2080];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  set_font_narrow(0);
  set_screen_menu_on();
  __sprintf_chk(auStack_828,1,0x820,
                "Could not load system files.\n\nDraStic requires the following files in the system directory\n(%s%csystem):\n\nnds_bios_arm9.bin            4KB\nnds_bios_arm7.bin            16KB\n\nThese files can be extracted from a Nintendo DS, by using a\nflash cart with homebrew such as the following:\n\n"
                ,param_1 + 0x8a780,0x2f);
  print_string(auStack_828,0xffff,0,100,0x96);
  set_font_wide();
  print_string("http://library.dev-scene.com/index.php?dir=DS/Hardware (Firmware) 07/DSBF dump/",
               0xffff,0,100,0x14a);
  update_screen_menu();
  update_screen_menu();
  update_screen_menu();
  do {
    get_gui_input(param_1 + 0x5550,local_830);
  } while (local_830[0] == 0xb);
  set_screen_menu_off();
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


