/*
 * Ghidra decompilation
 *
 * Function : gba_backup_auto_save_step
 * Address  : 0016eb90
 * Program  : drastic64
 */


char * gba_backup_auto_save_step(char *param_1)

{
  int iVar1;
  uint uVar2;
  FILE *__s;
  size_t sVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x43c) == 0) {
    return param_1;
  }
  iVar1 = *(int *)(param_1 + 0x43c) + -1;
  *(int *)(param_1 + 0x43c) = iVar1;
  if (((iVar1 == 0) && (param_1[0x443] != '\0')) && (*(long *)(param_1 + 0x428) != 0)) {
    __s = fopen(param_1,"wb");
    if (__s != (FILE *)0x0) {
      puts("Saving GBA backup file.");
      sVar3 = fwrite(*(void **)(param_1 + 0x428),(ulong)*(uint *)(param_1 + 0x434),1,__s);
      if (sVar3 != 1) {
        puts("ERROR: Couldn\'t write all of GBA backup.");
      }
      uVar2 = fclose(__s);
      return (char *)(ulong)uVar2;
    }
    pcVar4 = (char *)__printf_chk(1,"ERROR: Couldn\'t save GBA backup %s\n",param_1);
    return pcVar4;
  }
  return param_1;
}


