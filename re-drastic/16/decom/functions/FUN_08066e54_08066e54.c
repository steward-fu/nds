/*
 * Ghidra decompilation
 *
 * Function : FUN_08066e54
 * Address  : 08066e54
 * Program  : drastic16
 */


void FUN_08066e54(void)

{
  int local_810 [2];
  char acStack_808 [2056];
  
  FUN_080771cc();
  FUN_0807b4cc();
  sprintf(acStack_808,
          "Could not load system files.\n\nDraStic requires the following files in the system directory\n(%s%csystem):\n\nnds_bios_arm9.bin            4KB\nnds_bios_arm7.bin            16KB\n\nThese files can be extracted from a Nintendo DS, by using a\nflash cart with homebrew such as the following:\n\n"
          ,"<sd card>/appdata/DraStic",0x2f);
  FUN_08076bb8(acStack_808,0xffff,0,100,0x96);
  FUN_080771b4();
  FUN_08076bb8("http://library.dev-scene.com/index.php?dir=DS/Hardware (Firmware) 07/DSBF dump/",
               0xffff,0,100,0x14a);
  FUN_0807b0dc();
  do {
    FUN_08079b70(local_810);
  } while (local_810[0] == 0xb);
  FUN_0807a374();
  return;
}


