/*
 * Ghidra decompilation
 *
 * Function : menu_bios_warning
 * Address  : 080a1100
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void menu_bios_warning(system_struct *system)

{
  int iVar1;
  gui_input_struct gui_input;
  char error_str [2048];
  
  iVar1 = __stack_chk_guard;
  set_font_narrow();
  set_screen_menu_on();
  __sprintf_chk(error_str,1,0x800,
                "Could not load system files.\n\nDraStic requires the following files in the system directory\n(%s%csystem):\n\nnds_bios_arm9.bin            4KB\nnds_bios_arm7.bin            16KB\n\nThese files can be extracted from a Nintendo DS, by using a\nflash cart with homebrew such as the following:\n\n"
                ,system->root_path,0x2f);
  print_string(error_str,0xffff,0,100,0x96);
  set_font_wide();
  print_string("http://library.dev-scene.com/index.php?dir=DS/Hardware (Firmware) 07/DSBF dump/",
               0xffff,0,100,0x14a);
  update_screen_menu();
  do {
    get_gui_input(&system->input,&gui_input);
  } while (gui_input.action_type == 0xb);
  set_screen_menu_off();
  if (iVar1 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


