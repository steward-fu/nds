/*
 * Ghidra decompilation
 *
 * Function : FUN_080604e4
 * Address  : 080604e4
 * Program  : drastic16
 */


undefined4 FUN_080604e4(int *param_1,undefined4 param_2,int param_3)

{
  int __fd;
  undefined4 uVar1;
  __off_t _Var2;
  ssize_t sVar3;
  void *pvVar4;
  char acStack_418 [1028];
  
  sprintf(acStack_418,"%s%cunzipped_rom.nds",param_2,0x2f);
  __fd = open(acStack_418,0);
  if (__fd < 0) {
    uVar1 = 1;
  }
  else {
    *param_1 = __fd;
    _Var2 = lseek(__fd,0,2);
    param_1[4] = 0;
    *(undefined *)(param_1 + 5) = 1;
    param_1[2] = _Var2;
    param_1[3] = _Var2;
    if (param_3 == 0) goto LAB_080605d8;
    while( true ) {
      lseek(__fd,0x80,0);
      sVar3 = read(__fd,param_1 + 3,4);
      if (sVar3 < 1) {
        puts("ERROR: could not read trim size from header");
      }
      else if ((param_1[3] == 0) || ((uint)param_1[2] < (uint)param_1[3])) {
        printf("WARNING: invalid trim size %08x/%08x\n");
        param_1[3] = param_1[2];
      }
LAB_080605d8:
      lseek(__fd,0,0);
      pvVar4 = mmap((void *)0x0,param_1[3],1,1,__fd,0);
      param_1[1] = (int)pvVar4;
      if (pvVar4 != (void *)0xffffffff) break;
      puts("Could not mmap cached ROM.");
      if (param_3 != 0) {
        puts("ERROR: Total failure on cached ROM mmap.");
        return 1;
      }
      puts("Trying again with trimming enabled.");
      param_3 = 1;
    }
    printf("Opened cached ROM %s\n",acStack_418);
    uVar1 = 0;
  }
  return uVar1;
}


