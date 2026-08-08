/*
 * Ghidra decompilation
 *
 * Function : save_custom_cheats
 * Address  : 080a2d10
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 save_custom_cheats(cheat_directory_struct *cheat_directory,system_struct *system)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  FILE *custom_cheat_file;
  s32 sVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  cheat_struct *current_cheat;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char custom_cheat_path [1024];
  
  iVar2 = __stack_chk_guard;
  pcVar9 = system->user_root_path;
  __sprintf_chk(custom_cheat_path,1,0x400,"%s%ccheats%c%s.cht",pcVar9,0x2f,0x2f,
                system->gamecard_name);
  __stream = fopen(custom_cheat_path,"wb");
  if (__stream == (FILE *)0x0) {
    __printf_chk(1,"Can\'t save custom cheat file at %s.\n",custom_cheat_path);
    sVar3 = -1;
  }
  else {
    if (cheat_directory->num_custom_cheats != 0) {
      iVar7 = 0;
      uVar8 = 0;
      do {
        piVar6 = (int *)((int)&cheat_directory->custom_cheats->data + iVar7);
        __fprintf_chk(__stream,1,&DAT_081408e8,piVar6[1],pcVar9);
        if (*(char *)piVar6[5] != '\0') {
          fputc(0x2b,__stream);
        }
        fputc(10,__stream);
        if (piVar6[3] != 0) {
          iVar5 = 4;
          uVar4 = 0;
          do {
            iVar1 = uVar4 * 4;
            uVar4 = uVar4 + 2;
            pcVar9 = *(char **)(*piVar6 + iVar5);
            iVar5 = iVar5 + 8;
            __fprintf_chk(__stream,1,"%08X %08X\n",*(undefined4 *)(*piVar6 + iVar1),pcVar9);
          } while (uVar4 < (uint)piVar6[3]);
        }
        fputc(10,__stream);
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 0x18;
      } while (uVar8 < cheat_directory->num_custom_cheats);
    }
    fclose(__stream);
    sVar3 = 0;
  }
  if (iVar2 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar3;
}


