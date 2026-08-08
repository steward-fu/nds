/*
 * Ghidra decompilation
 *
 * Function : FUN_08067420
 * Address  : 08067420
 * Program  : drastic16
 */


undefined4 FUN_08067420(int param_1,undefined4 param_2)

{
  FILE *__stream;
  int iVar1;
  char acStack_420 [4];
  uint local_41c;
  undefined auStack_418 [8];
  char acStack_410 [1024];
  
  sprintf(acStack_410,"%s%cconfig%c%s",param_1 + 0x82030,0x2f,0x2f,param_2);
  printf("Loading directory config file %s\n",acStack_410);
  __stream = fopen(acStack_410,"rb");
  if (__stream == (FILE *)0x0) {
    printf("Directory config file %s does not exist.\n",acStack_410);
    return 0xffffffff;
  }
  fread(acStack_420,4,1,__stream);
  fread(&local_41c,4,1,__stream);
  fread(auStack_418,8,1,__stream);
  iVar1 = strncmp(acStack_420,"DSC2",4);
  if ((iVar1 == 0) && (local_41c < 3)) {
    fread((char *)(param_1 + 0x8135c),0x400,1,__stream);
    if (1 < local_41c) {
      fread((void *)(param_1 + 0x8175c),4,1,__stream);
    }
    iVar1 = chdir((char *)(param_1 + 0x8135c));
    if (-1 < iVar1) {
      fclose(__stream);
      return 0;
    }
  }
  puts("ERROR: Directory config file could not be loaded.");
  fclose(__stream);
  return 0xffffffff;
}


