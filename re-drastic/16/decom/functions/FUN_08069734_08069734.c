/*
 * Ghidra decompilation
 *
 * Function : FUN_08069734
 * Address  : 08069734
 * Program  : drastic16
 */


undefined4 FUN_08069734(char *param_1)

{
  FILE *__stream;
  int iVar1;
  long lVar2;
  size_t sVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x424);
  __stream = fopen(param_1,"rb+");
  if (__stream == (FILE *)0x0) {
    printf("ERROR: Couldn\'t open cheat database file (%s) for update.\n",param_1);
    return 0xffffffff;
  }
  iVar1 = fseek(__stream,*(long *)(iVar4 + 8),0);
  if (iVar1 != 0) {
    printf("ERROR: Couldn\'t seek cheat database file (%s) for update.\n",param_1);
    fclose(__stream);
    return 0xffffffff;
  }
  lVar2 = ftell(__stream);
  if (lVar2 != *(int *)(iVar4 + 8)) {
    printf("ERROR: Sek cheat database file (%s) went to wrong location.\n",param_1);
    fclose(__stream);
    return 0xffffffff;
  }
  sVar3 = fwrite(*(void **)(param_1 + 0x428),*(size_t *)(iVar4 + 0xc),1,__stream);
  if (sVar3 == 1) {
    fclose(__stream);
    FUN_080687e0(param_1);
    return 0;
  }
  puts("ERROR: Couldn\'t update cheat database file.");
  fclose(__stream);
  return 0xffffffff;
}


