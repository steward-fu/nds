/*
 * Ghidra decompilation
 *
 * Function : FUN_08004eb0
 * Address  : 08004eb0
 * Program  : drastic16
 */


undefined4 FUN_08004eb0(int param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  FILE *__stream;
  long __off;
  size_t sVar1;
  undefined4 uVar2;
  char acStack_420 [1028];
  
  sprintf(acStack_420,"%s%csystem%c%s",param_1 + 0x81c30,0x2f,0x2f,param_2);
  __stream = fopen(acStack_420,"rb");
  if (__stream == (FILE *)0x0) {
    printf("***Failed to load system file %s.\n",param_2);
    uVar2 = 0xffffffff;
  }
  else {
    __off = ftell(__stream);
    fseek(__stream,0,2);
    sVar1 = ftell(__stream);
    fseek(__stream,__off,0);
    if (sVar1 == param_4) {
      sVar1 = fread(param_3,sVar1,1,__stream);
      if (sVar1 == 1) {
        uVar2 = 0;
      }
      else {
        printf("***System file %s failed to load.\n",param_2);
        uVar2 = 0xffffffff;
      }
    }
    else {
      printf("***System file %s is the wrong size (should be %d bytes, is %d)\n",param_2,param_4,
             sVar1);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


