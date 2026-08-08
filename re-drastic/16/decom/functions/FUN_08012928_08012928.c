/*
 * Ghidra decompilation
 *
 * Function : FUN_08012928
 * Address  : 08012928
 * Program  : drastic16
 */


void FUN_08012928(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  undefined local_10a;
  
  local_128._0_1_ = 'd';
  local_128._1_1_ = 'r';
  local_128._2_1_ = 'a';
  local_128._3_1_ = 's';
  uStack_124._0_1_ = 't';
  uStack_124._1_1_ = 'i';
  uStack_124._2_1_ = 'c';
  uStack_124._3_1_ = '_';
  uStack_120._0_1_ = 'm';
  uStack_120._1_1_ = 'a';
  uStack_120._2_1_ = 'p';
  uStack_120._3_1_ = 'p';
  uStack_11c._0_1_ = 'e';
  uStack_11c._1_1_ = 'd';
  uStack_11c._2_1_ = '_';
  uStack_11c._3_1_ = 'm';
  local_118._0_1_ = 'e';
  local_118._1_1_ = 'm';
  local_118._2_1_ = 'o';
  local_118._3_1_ = 'r';
  uStack_114._0_1_ = 'y';
  uStack_114._1_1_ = '_';
  uStack_114._2_1_ = 'v';
  uStack_114._3_1_ = 'r';
  uStack_110._0_1_ = 'a';
  uStack_110._1_1_ = 'm';
  uStack_110._2_1_ = '.';
  uStack_110._3_1_ = 'd';
  uStack_10c = 0x7461;
  local_10a = 0;
  iVar1 = shm_open((char *)&local_128,0x42,0x1ff);
  *(int *)(param_1 + 0xfc818) = iVar1;
  iVar1 = ftruncate(iVar1,0xa8000);
  if (iVar1 < 0) {
    puts("Truncate of memory mapped VRAM file failed.");
  }
  shm_unlink((char *)&local_128);
  pvVar2 = mmap((void *)0x0,0xa8000,3,1,*(int *)(param_1 + 0xfc818),0);
  *(void **)(param_1 + 0xfc810) = pvVar2;
  if (pvVar2 != (void *)0xffffffff) {
    pvVar2 = mmap((void *)0x0,0x800000,3,1,*(int *)(param_1 + 0xfc818),0);
    *(void **)(param_1 + 0xfc814) = pvVar2;
    if (pvVar2 != (void *)0xffffffff) {
      iVar1 = *(int *)(param_1 + 0xfc810);
      *(int *)(param_1 + 0x15010) = iVar1;
      *(int *)(param_1 + 0x15014) = iVar1 + 0x20000;
      *(int *)(param_1 + 0x15018) = iVar1 + 0x40000;
      *(int *)(param_1 + 0x1501c) = iVar1 + 0x60000;
      *(int *)(param_1 + 0x15020) = iVar1 + 0x80000;
      *(int *)(param_1 + 0x15024) = iVar1 + 0x90000;
      *(int *)(param_1 + 0x15028) = iVar1 + 0x94000;
      *(int *)(param_1 + 0x1502c) = iVar1 + 0x98000;
      *(int *)(param_1 + 0x15030) = iVar1 + 0xa0000;
      *(int *)(param_1 + 0x15034) = iVar1 + 0xa4000;
      return;
    }
    puts("ERROR: Memory map VRAM failed.");
    perror("Error is");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puts("ERROR: Memory VRAM buffer map failed.");
  perror("Error is");
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


