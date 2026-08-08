/*
 * Ghidra decompilation
 *
 * Function : FUN_08066680
 * Address  : 08066680
 * Program  : drastic16
 */


void FUN_08066680(int *param_1)

{
  uint uVar1;
  FILE *__stream;
  void *__ptr;
  size_t sVar2;
  int iVar3;
  char acStack_410 [1028];
  
  iVar3 = *param_1;
  uVar1 = time((time_t *)0x0);
  sprintf(acStack_410,"%s%cdrastic_logo_%d.raw",iVar3 + 0x81c30,0x2f,uVar1 & 1);
  __stream = fopen(acStack_410,"rb");
  if (__stream == (FILE *)0x0) {
    param_1[7] = 0;
  }
  else {
    __ptr = malloc(120000);
    param_1[7] = (int)__ptr;
    sVar2 = fread(__ptr,120000,1,__stream);
    if (sVar2 != 1) {
      free((void *)param_1[7]);
      param_1[7] = 0;
    }
    fclose(__stream);
  }
  return;
}


