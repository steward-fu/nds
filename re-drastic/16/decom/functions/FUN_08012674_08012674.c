/*
 * Ghidra decompilation
 *
 * Function : FUN_08012674
 * Address  : 08012674
 * Program  : drastic16
 */


void FUN_08012674(int *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined2 local_100;
  
  local_118._0_1_ = 'd';
  local_118._1_1_ = 'r';
  local_118._2_1_ = 'a';
  local_118._3_1_ = 's';
  uStack_114._0_1_ = 't';
  uStack_114._1_1_ = 'i';
  uStack_114._2_1_ = 'c';
  uStack_114._3_1_ = '_';
  uStack_110._0_1_ = 'm';
  uStack_110._1_1_ = 'a';
  uStack_110._2_1_ = 'p';
  uStack_110._3_1_ = 'p';
  uStack_10c._0_1_ = 'e';
  uStack_10c._1_1_ = 'd';
  uStack_10c._2_1_ = '_';
  uStack_10c._3_1_ = 'm';
  local_108._0_1_ = 'e';
  local_108._1_1_ = 'm';
  local_108._2_1_ = 'o';
  local_108._3_1_ = 'r';
  uStack_104._0_1_ = 'y';
  uStack_104._1_1_ = '.';
  uStack_104._2_1_ = 'd';
  uStack_104._3_1_ = 'a';
  local_100 = 0x74;
  iVar1 = shm_open((char *)&local_118,0x42,0x1ff);
  param_1[0x3f202] = iVar1;
  iVar1 = ftruncate(iVar1,0x414000);
  if (iVar1 < 0) {
    puts("Truncate of memory mapped file failed.");
  }
  shm_unlink((char *)&local_118);
  pvVar2 = mmap((void *)0x0,0x414000,3,1,param_1[0x3f202],0);
  param_1[0x3f201] = (int)pvVar2;
  if (pvVar2 != (void *)0xffffffff) {
    printf("Got memory mapped buffer at %p (%s)\n",pvVar2,&local_118);
    uVar3 = param_1[0x3f203];
    if (uVar3 == 0xffffffff) {
      pvVar2 = mmap((void *)0x0,0x5000000,3,1,param_1[0x3f202],0);
      if (pvVar2 == (void *)0xffffffff) {
        puts("ERROR: Dynamic memory map low buffer failed.");
        perror("Error is");
                    /* WARNING: Subroutine does not return */
        exit(-1);
      }
      printf("Got dynamic memory map low buffer @ %08x\n",pvVar2);
      munmap(pvVar2,0x5000000);
      uVar3 = (int)pvVar2 + 0xffffffU & 0xff000000;
      param_1[0x3f203] = uVar3;
    }
    pvVar2 = mmap((void *)(uVar3 + 0x1000),0x4000000,3,0x11,param_1[0x3f202],0);
    if (pvVar2 == (void *)(param_1[0x3f203] + 0x1000)) {
      iVar1 = mprotect((void *)(param_1[0x3f203] + 0x4000000),0x1000,0);
      if (iVar1 == 0) {
        iVar1 = param_1[0x3f201];
        iVar4 = 0x2000000;
        *param_1 = iVar1;
        param_1[1] = iVar1 + 0x400000;
        param_1[2] = iVar1 + 0x408000;
        param_1[3] = iVar1 + 0x410000;
        printf("Using memory map offset %x\n",param_1[0x3f203]);
        do {
          printf("Direct mapping main RAM to %x\n",iVar4);
          iVar1 = remap_file_pages((void *)(iVar4 + param_1[0x3f203]),0x400000,0,0,0);
          if (iVar1 != 0) {
            puts("Remap failed.");
            perror("Error is");
          }
          iVar4 = iVar4 + 0x400000;
        } while (iVar4 != 0x3000000);
        return;
      }
      puts("ERROR: Failed to set 4KB at mapped low memory end to invalid.");
    }
    else {
      printf("ERROR: Memory map low buffer @ %08x to 0x4000000 failed.\n",0x1000);
    }
    perror("Error is");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puts("ERROR: Memory map buffer failed.");
  perror("Error is");
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


