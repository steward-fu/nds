/*
 * Ghidra decompilation
 *
 * Function : gamecard_close
 * Address  : 001708a0
 * Program  : drastic64
 */


int gamecard_close(long param_1)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  
  if (*(int *)(param_1 + 0x2d84) != 0) {
    backup_save(param_1 + 0x968);
  }
  if (((*(int *)(param_1 + 0x8dc) != 0) && (*(char *)(param_1 + 0x8e3) != '\0')) &&
     (*(long *)(param_1 + 0x8c8) != 0)) {
    __s = fopen((char *)(param_1 + 0x4a0),"wb");
    if (__s == (FILE *)0x0) {
      __printf_chk(1,"ERROR: Couldn\'t save GBA backup %s\n",(char *)(param_1 + 0x4a0));
    }
    else {
      puts("Saving GBA backup file.");
      sVar2 = fwrite(*(void **)(param_1 + 0x8c8),(ulong)*(uint *)(param_1 + 0x8d4),1,__s);
      if (sVar2 != 1) {
        puts("ERROR: Couldn\'t write all of GBA backup.");
      }
      fclose(__s);
    }
  }
  free(*(void **)(param_1 + 0x2d90));
  *(undefined8 *)(param_1 + 0x2d90) = 0;
  nds_file_close(*(undefined8 *)(param_1 + 0x920));
  iVar1 = *(int *)(param_1 + 0x93c);
  *(undefined8 *)(param_1 + 0x920) = 0;
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = close(iVar1);
  return iVar1;
}


