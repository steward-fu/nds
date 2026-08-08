/*
 * Ghidra decompilation
 *
 * Function : nds_file_open_cached
 * Address  : 00175390
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 nds_file_open_cached(long *param_1,undefined8 param_2,int param_3,int param_4)

{
  int __fd;
  __off_t _Var1;
  void *pvVar2;
  ssize_t sVar3;
  undefined8 uVar4;
  int __flags;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __flags = 1;
  if (param_4 != 0) {
    __flags = 0x8001;
  }
  __sprintf_chk(acStack_408,1,0x400,"%s%cunzipped_rom.nds",param_2,0x2f);
  __fd = open(acStack_408,0);
  uVar4 = 1;
  if (__fd < 0) goto LAB_00175538;
  *param_1 = (long)__fd;
  _Var1 = lseek(__fd,0,2);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined *)((long)param_1 + 0x1c) = 1;
  param_1[2] = CONCAT44((int)_Var1,(int)_Var1);
  if (param_3 == 0) {
    lseek(__fd,0,0);
    pvVar2 = mmap((void *)0x0,(ulong)*(uint *)((long)param_1 + 0x14),1,__flags,__fd,0);
    param_1[1] = (long)pvVar2;
    if (pvVar2 == (void *)0xffffffffffffffff) {
      puts("Could not mmap cached ROM.");
      puts("Trying again with trimming enabled.");
      goto LAB_00175494;
    }
  }
  else {
LAB_00175494:
    lseek(__fd,0x80,0);
    sVar3 = read(__fd,(void *)((long)param_1 + 0x14),4);
    if (sVar3 < 1) {
      puts("ERROR: could not read trim size from header");
    }
    else if ((*(uint *)((long)param_1 + 0x14) == 0) ||
            (*(uint *)(param_1 + 2) < *(uint *)((long)param_1 + 0x14))) {
      __printf_chk(1,"WARNING: invalid trim size %08x/%08x\n");
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_1 + 2);
    }
    lseek(__fd,0,0);
    pvVar2 = mmap((void *)0x0,(ulong)*(uint *)((long)param_1 + 0x14),1,__flags,__fd,0);
    param_1[1] = (long)pvVar2;
    if (pvVar2 == (void *)0xffffffffffffffff) {
      puts("Could not mmap cached ROM.");
      puts("ERROR: Total failure on cached ROM mmap.");
      uVar4 = 1;
      goto LAB_00175538;
    }
  }
  __printf_chk(1,"Opened cached ROM %s\n",acStack_408);
  uVar4 = 0;
LAB_00175538:
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,uVar4,0);
}


