/*
 * Ghidra decompilation
 *
 * Function : gba_backup_save
 * Address  : 0016eae0
 * Program  : drastic64
 */


char * gba_backup_save(char *param_1)

{
  uint uVar1;
  FILE *__s;
  size_t sVar2;
  char *pcVar3;
  
  if (param_1[0x443] == '\0') {
    return param_1;
  }
  if (*(long *)(param_1 + 0x428) != 0) {
    __s = fopen(param_1,"wb");
    if (__s != (FILE *)0x0) {
      puts("Saving GBA backup file.");
      sVar2 = fwrite(*(void **)(param_1 + 0x428),(ulong)*(uint *)(param_1 + 0x434),1,__s);
      if (sVar2 != 1) {
        puts("ERROR: Couldn\'t write all of GBA backup.");
      }
      uVar1 = fclose(__s);
      return (char *)(ulong)uVar1;
    }
    pcVar3 = (char *)__printf_chk(1,"ERROR: Couldn\'t save GBA backup %s\n",param_1);
    return pcVar3;
  }
  return param_1;
}


