/*
 * Ghidra decompilation
 *
 * Function : FUN_0805aa1c
 * Address  : 0805aa1c
 * Program  : drastic16
 */


void FUN_0805aa1c(char *param_1)

{
  FILE *__s;
  size_t sVar1;
  
  if (param_1[0x41b] == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x404) == 0) {
    return;
  }
  __s = fopen(param_1,"wb");
  if (__s != (FILE *)0x0) {
    puts("Saving GBA backup file.");
    sVar1 = fwrite(*(void **)(param_1 + 0x404),*(size_t *)(param_1 + 0x40c),1,__s);
    if (sVar1 != 1) {
      puts("ERROR: Couldn\'t write all of GBA backup.");
    }
    fclose(__s);
    return;
  }
  printf("ERROR: Couldn\'t save GBA backup %s\n",param_1);
  return;
}


