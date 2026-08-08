/*
 * Ghidra decompilation
 *
 * Function : gamecard_load_gba
 * Address  : 0808f9a0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 gamecard_load_gba(gamecard_struct *gamecard,char *gba_file_name)

{
  int iVar1;
  FILE *pFVar2;
  FILE *gba_file;
  u32 uVar3;
  u8 *puVar4;
  FILE *backup_file;
  uint __size;
  u32 backup_file_size;
  size_t sVar5;
  s32 sVar6;
  uint uVar7;
  gba_gamepak_struct *gba_00;
  gba_gamepak_struct *gba;
  size_t sVar8;
  u32 rom_size_padded;
  memory_struct *memory;
  char *pcVar9;
  system_struct *psVar10;
  char gba_file_path [1024];
  
  iVar1 = __stack_chk_guard;
  psVar10 = gamecard->system;
  pcVar9 = psVar10->user_root_path;
  gba_00 = &gamecard->gba_gamepak;
  __snprintf_chk(gba_file_path,0x400,1,0x400,"%s/slot2/%s.gba",pcVar9,gba_file_name);
  pFVar2 = fopen(gba_file_path,"rb");
  if ((gamecard->gba_gamepak).loaded != '\0') {
    free((gamecard->gba_gamepak).rom_data);
    puVar4 = (gamecard->gba_gamepak).backup;
    if (puVar4 != (u8 *)0x0) {
      free(puVar4);
    }
    (gamecard->gba_gamepak).rom_data = (u8 *)0x0;
    (gamecard->gba_gamepak).backup = (u8 *)0x0;
    (gamecard->gba_gamepak).loaded = '\0';
  }
  (gamecard->gba_gamepak).write_frame_counter = 0;
  if (pFVar2 == (FILE *)0x0) {
    sVar6 = -1;
    goto LAB_0808fbec;
  }
  fseek(pFVar2,0,2);
  uVar3 = ftell(pFVar2);
  (gamecard->gba_gamepak).rom_size = uVar3;
  fseek(pFVar2,0,0);
  __printf_chk(1,"Loading GBA ROM %s in slot 2: %d bytes\n",gba_file_name,
               (gamecard->gba_gamepak).rom_size);
  sVar8 = (gamecard->gba_gamepak).rom_size;
  sVar5 = sVar8;
  if (sVar8 < 0x800000) {
    __printf_chk(1," Padding GBA ROM to %d bytes.\n",0x800000);
    sVar8 = (gamecard->gba_gamepak).rom_size;
    sVar5 = 0x800000;
  }
  puVar4 = (u8 *)malloc(sVar5);
  (gamecard->gba_gamepak).rom_data = puVar4;
  sVar8 = fread(puVar4,sVar8,1,pFVar2);
  if (sVar8 != 1) {
    puts("ERROR: Failed to load GBA data.");
  }
  fclose(pFVar2);
  uVar3 = (gamecard->gba_gamepak).rom_size;
  if (sVar5 != uVar3) {
    memset((gamecard->gba_gamepak).rom_data + uVar3,0xff,sVar5 - uVar3);
  }
  (gamecard->gba_gamepak).rom_size = sVar5;
  gba_scan_save(gba_00);
  __snprintf_chk(gba_00,0x400,1,0x400,"%s/slot2/%s.sav",pcVar9,gba_file_name);
  pFVar2 = fopen(gba_00->backup_path,"rb");
  if (pFVar2 == (FILE *)0x0) {
LAB_0808fc5c:
    memset((gamecard->gba_gamepak).backup,0xff,(gamecard->gba_gamepak).backup_size);
  }
  else {
    if ((gamecard->gba_gamepak).backup == (u8 *)0x0) {
      puts(" Can\'t load GBA backup file: cart has no backup.");
      fclose(pFVar2);
      goto LAB_0808fc5c;
    }
    fseek(pFVar2,0,2);
    __size = ftell(pFVar2);
    fseek(pFVar2,0,0);
    uVar7 = (gamecard->gba_gamepak).backup_size;
    if (uVar7 < __size) {
      __printf_chk(1," GBA backup is %d bytes, but file is %d bytes. Partially loading file.\n",
                   uVar7,__size);
      __size = (gamecard->gba_gamepak).backup_size;
    }
    sVar5 = fread((gamecard->gba_gamepak).backup,__size,1,pFVar2);
    if (sVar5 != 1) {
      puts("ERROR: Failed to load GBA backup data.");
    }
    fclose(pFVar2);
    uVar3 = (gamecard->gba_gamepak).backup_size;
    if (__size < uVar3) {
      __printf_chk(1," GBA backup is %d bytes, but file is %d bytes. Padding save with 0xFF.\n",
                   uVar3,__size);
      memset((gamecard->gba_gamepak).backup + __size,0xff,
             (gamecard->gba_gamepak).backup_size - __size);
      uVar3 = (gamecard->gba_gamepak).backup_size;
    }
    __printf_chk(1," Loaded GBA ROM backup %s: %d bytes.\n",gba_00,uVar3);
  }
  (gamecard->gba_gamepak).loaded = '\x01';
  memory_setup_slot2_gba
            (&psVar10->memory,(gamecard->gba_gamepak).rom_data,(gamecard->gba_gamepak).rom_size);
  sVar6 = 0;
LAB_0808fbec:
  if (iVar1 == __stack_chk_guard) {
    return sVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


