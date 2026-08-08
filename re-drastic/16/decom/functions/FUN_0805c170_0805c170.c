/*
 * Ghidra decompilation
 *
 * Function : FUN_0805c170
 * Address  : 0805c170
 * Program  : drastic16
 */


void FUN_0805c170(int param_1)

{
  FILE *__s;
  size_t sVar1;
  
  if (*(int *)(param_1 + 0xcc8) != 0) {
    FUN_0805d844(param_1 + 0x8b4);
  }
  if (((*(int *)(param_1 + 0x86c) != 0) && (*(char *)(param_1 + 0x873) != '\0')) &&
     (*(int *)(param_1 + 0x85c) != 0)) {
    __s = fopen((char *)(param_1 + 0x458),"wb");
    if (__s == (FILE *)0x0) {
      printf("ERROR: Couldn\'t save GBA backup %s\n",(char *)(param_1 + 0x458));
    }
    else {
      puts("Saving GBA backup file.");
      sVar1 = fwrite(*(void **)(param_1 + 0x85c),*(size_t *)(param_1 + 0x864),1,__s);
      if (sVar1 != 1) {
        puts("ERROR: Couldn\'t write all of GBA backup.");
      }
      fclose(__s);
    }
  }
  free(*(void **)(param_1 + 0xcd4));
  *(undefined4 *)(param_1 + 0xcd4) = 0;
  FUN_08060d14(*(undefined4 *)(param_1 + 0x884));
  *(undefined4 *)(param_1 + 0x884) = 0;
  if (*(int *)(param_1 + 0x898) < 0) {
    return;
  }
  close(*(int *)(param_1 + 0x898));
  return;
}


