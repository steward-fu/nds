/*
 * Ghidra decompilation
 *
 * Function : initialize_memory
 * Address  : 0011be80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_memory(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined7 local_f8;
  undefined uStack_f1;
  undefined2 local_f0;
  undefined5 uStack_ee;
  long local_8;
  
  lVar1 = param_2 + 0x15c7d50;
  lVar2 = param_2 + 0x25ce340;
  *(undefined *)((long)param_1 + 0xfd513) = 1;
  param_1[0x1f74d] = param_2;
  param_1[0x1f74e] = param_2 + 0x36d1ec0;
  param_1[0x1f74f] = param_2 + 0x3a28bb0;
  param_1[0x1f750] = param_2 + 0x1587000;
  param_1[0x1f751] = param_2 + 0x15ca120;
  param_1[0x1f752] = param_2 + 0x25d0710;
  param_1[0x1fa97] = param_2 + 800;
  param_1[0x1fa98] = param_2 + 0x30d0;
  param_1[0x1fa99] = param_2 + 0x5528;
  *(long **)(nds_system + param_2 + 0x20ce128) = param_1;
  *(long **)(nds_system + param_2 + 0x30d4718) = param_1;
  *(long **)(nds_system + param_2 + 0x20ce120) = param_1 + 0x1f753;
  *(long **)(nds_system + param_2 + 0x30d4710) = param_1 + 0x1f8d3;
  *(long *)(nds_system + param_2 + 0x20ce130) = lVar1;
  *(long *)(nds_system + param_2 + 0x30d4720) = lVar2;
  local_8 = ___stack_chk_guard;
  iVar3 = getpagesize();
  *(int *)((long)param_1 + 0xfd4dc) = iVar3;
  local_108._0_1_ = 'd';
  local_108._1_1_ = 'r';
  local_108._2_1_ = 'a';
  local_108._3_1_ = 's';
  local_108._4_1_ = 't';
  local_108._5_1_ = 'i';
  local_108._6_1_ = 'c';
  local_108._7_1_ = '_';
  uStack_100._0_1_ = 'm';
  uStack_100._1_1_ = 'a';
  uStack_100._2_1_ = 'p';
  uStack_100._3_1_ = 'p';
  uStack_100._4_1_ = 'e';
  uStack_100._5_1_ = 'd';
  uStack_100._6_1_ = '_';
  uStack_100._7_1_ = 'm';
  local_f8 = 0x642e79726f6d65;
  uStack_f1 = 0x61;
  local_f0._0_1_ = 't';
  local_f0._1_1_ = '\0';
  iVar3 = shm_open((char *)&local_108,0x42,0x1ff);
  iVar4 = ftruncate(iVar3,0x414000);
  if (iVar4 < 0) {
    __printf_chk(1,"Truncate of memory mapped file %s failed.\n",&local_108);
  }
  shm_unlink((char *)&local_108);
  pvVar5 = mmap((void *)0x0,0x4000000,3,1,iVar3,0);
  *(int *)(param_1 + 0x1fa9d) = iVar3;
  param_1[0x1fa9c] = (long)pvVar5;
  if (pvVar5 == (void *)0xffffffffffffffff) {
    puts("Memory map buffer failed. Trying large allocation.");
    close(*(int *)(param_1 + 0x1fa9d));
    iVar3 = shm_open((char *)&local_108,0x42,0x1ff);
    iVar4 = ftruncate(iVar3,0x4000000);
    if (iVar4 < 0) {
      __printf_chk(1,"Truncate of memory mapped file %s failed.\n",&local_108);
    }
    shm_unlink((char *)&local_108);
    pvVar5 = mmap((void *)0x0,0x4000000,3,1,iVar3,0);
    *(int *)(param_1 + 0x1fa9d) = iVar3;
    param_1[0x1fa9c] = (long)pvVar5;
    if (pvVar5 == (void *)0xffffffffffffffff) {
      puts("ERROR: Memory map buffer failed.");
      perror("Error is");
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
  }
  __printf_chk(1,"Got memory mapped buffer at %p (%s)\n",pvVar5,&local_108);
  pvVar5 = (void *)param_1[0x1fa9e];
  if (pvVar5 == (void *)0xffffffffffffffff) {
    pvVar5 = mmap((void *)0x0,0x4000000,3,1,*(int *)(param_1 + 0x1fa9d),0);
    if (pvVar5 != (void *)0xffffffffffffffff) {
      __printf_chk(1,"Got dynamic memory map low buffer @ %p (allocated 0x%x bytes)\n",pvVar5,
                   0x4000000);
      munmap(pvVar5,0x4000000);
      param_1[0x1fa9e] = (long)pvVar5;
      goto LAB_0011c044;
    }
LAB_0011c768:
    puts("ERROR: Dynamic memory map low buffer failed.");
LAB_0011c6d8:
    perror("Error is");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
LAB_0011c044:
  pvVar5 = mmap(pvVar5,0x4000000,3,0x11,*(int *)(param_1 + 0x1fa9d),0);
  if ((void *)param_1[0x1fa9e] != pvVar5) {
    pvVar5 = mmap((void *)0x0,0x4000000,3,1,*(int *)(param_1 + 0x1fa9d),0);
    if (pvVar5 == (void *)0xffffffffffffffff) goto LAB_0011c768;
    __printf_chk(1,"Got dynamic memory map low buffer @ %p\n",pvVar5);
    munmap(pvVar5,0x4000000);
    param_1[0x1fa9e] = (long)pvVar5;
    pvVar5 = mmap(pvVar5,0x4000000,3,0x11,*(int *)(param_1 + 0x1fa9d),0);
    if ((void *)param_1[0x1fa9e] != pvVar5) {
      __printf_chk(1,"ERROR: Memory map low buffer @ %08x to 0x4000000 failed.\n",0);
      goto LAB_0011c6d8;
    }
  }
  lVar6 = param_1[0x1fa9c];
  lVar9 = 0;
  *param_1 = lVar6;
  param_1[1] = lVar6 + 0x400000;
  param_1[2] = lVar6 + 0x408000;
  param_1[3] = lVar6 + 0x410000;
  __printf_chk(1,"Using memory map offset %p\n");
  do {
    while( true ) {
      __printf_chk(1,"Direct mapping main RAM to %x\n",(int)lVar9 + 0x2000000);
      pvVar5 = (void *)(lVar9 + param_1[0x1fa9e] + 0x2000000);
      lVar6 = 0;
      if (*(char *)((long)param_1 + 0xfd513) != '\0') break;
      do {
        munmap(pvVar5,0x4000);
        pvVar7 = mmap(pvVar5,0x4000,3,1,*(int *)(param_1 + 0x1fa9d),lVar6);
        if (pvVar5 != pvVar7) {
          __printf_chk(1,"ERROR: Low memory remap to %p didn\'t map to same location (got %p)\n",
                       pvVar5,pvVar7);
          goto LAB_0011c45c;
        }
        lVar6 = lVar6 + 0x4000;
        pvVar5 = (void *)((long)pvVar5 + 0x4000);
      } while (lVar6 != 0x400000);
joined_r0x0011c47c:
      lVar9 = lVar9 + 0x400000;
      if (lVar9 == 0x1000000) goto LAB_0011c1bc;
    }
    iVar3 = remap_file_pages(pvVar5,0x400000,0,0,0);
    if (iVar3 != 0) {
LAB_0011c45c:
      puts("Remap failed.");
      perror("Error is");
      goto joined_r0x0011c47c;
    }
    lVar9 = lVar9 + 0x400000;
  } while (lVar9 != 0x1000000);
LAB_0011c1bc:
  local_108._0_1_ = 'd';
  local_108._1_1_ = 'r';
  local_108._2_1_ = 'a';
  local_108._3_1_ = 's';
  local_108._4_1_ = 't';
  local_108._5_1_ = 'i';
  local_108._6_1_ = 'c';
  local_108._7_1_ = '_';
  uStack_100._0_1_ = 'm';
  uStack_100._1_1_ = 'a';
  uStack_100._2_1_ = 'p';
  uStack_100._3_1_ = 'p';
  uStack_100._4_1_ = 'e';
  uStack_100._5_1_ = 'd';
  uStack_100._6_1_ = '_';
  uStack_100._7_1_ = 'm';
  local_f8 = 0x765f79726f6d65;
  uStack_f1 = 0x72;
  local_f0._0_1_ = 'a';
  local_f0._1_1_ = 'm';
  uStack_ee = 0x7461642e;
  iVar3 = shm_open((char *)&local_108,0x42,0x1ff);
  iVar4 = ftruncate(iVar3,0xa8000);
  if (iVar4 < 0) {
    __printf_chk(1,"Truncate of memory mapped file %s failed.\n",&local_108);
  }
  shm_unlink((char *)&local_108);
  pvVar5 = mmap((void *)0x0,0x800000,3,1,iVar3,0);
  *(int *)(param_1 + 0x1faa1) = iVar3;
  param_1[0x1fa9f] = (long)pvVar5;
  if (pvVar5 == (void *)0xffffffffffffffff) {
    puts("Memory VRAM buffer map failed. Trying large allocation.");
    close(*(int *)(param_1 + 0x1faa1));
    iVar3 = shm_open((char *)&local_108,0x42,0x1ff);
    iVar4 = ftruncate(iVar3,0x800000);
    if (iVar4 < 0) {
      __printf_chk(1,"Truncate of memory mapped file %s failed.\n",&local_108);
    }
    shm_unlink((char *)&local_108);
    pvVar5 = mmap((void *)0x0,0x800000,3,1,iVar3,0);
    *(int *)(param_1 + 0x1faa1) = iVar3;
    param_1[0x1fa9f] = (long)pvVar5;
    if (pvVar5 == (void *)0xffffffffffffffff) {
      puts("ERROR: Memory VRAM buffer map failed.");
      goto LAB_0011c6d8;
    }
  }
  pvVar5 = mmap((void *)0x0,0x800000,3,1,iVar3,0);
  param_1[0x1faa0] = (long)pvVar5;
  if (pvVar5 == (void *)0xffffffffffffffff) {
    puts("ERROR: Memory map VRAM failed.");
    goto LAB_0011c6d8;
  }
  lVar9 = param_1[0x1fa9f];
  param_1[0x2a04] = lVar9;
  param_1[0x2a05] = lVar9 + 0x20000;
  param_1[0x2a06] = lVar9 + 0x40000;
  param_1[0x2a07] = lVar9 + 0x60000;
  param_1[0x2a08] = lVar9 + 0x80000;
  param_1[0x2a09] = lVar9 + 0x90000;
  param_1[0x2a0a] = lVar9 + 0x94000;
  param_1[0x2a0b] = lVar9 + 0x98000;
  param_1[0x2a0c] = lVar9 + 0xa0000;
  param_1[0x2a0d] = lVar9 + 0xa4000;
  initialize_memory_map_arm9(param_1);
  initialize_memory_map_arm7(param_1);
  puts("  Initializing CP15.");
  initialize_coprocessor(param_1 + 0x1faa3,lVar1);
  *(long **)(nds_system + param_2 + 0x10cdfa0) = param_1 + 0x1faa3;
  *(undefined8 *)(nds_system + param_2 + 0x20d4590) = 0;
  *(long **)(nds_system + param_2 + 0x10cddd0) = param_1 + 0x360e;
  *(long **)(nds_system + param_2 + 0x20d43c0) = param_1 + 0x460e;
  puts("  Initializing DMA.");
  initialize_dma(param_1 + 0x1fa53,param_1,param_1 + 0x1f753,param_1 + 0x360e,lVar1);
  initialize_dma(param_1 + 0x1fa69,param_1,param_1 + 0x1f8d3,param_1 + 0x460e,lVar2);
  initialize_ipc(param_1 + 0x1fa7f,lVar1,param_1 + 0x1fa8b);
  initialize_ipc(param_1 + 0x1fa8b,lVar2,param_1 + 0x1fa7f);
  *(undefined *)((long)param_1 + 0xfd512) = 0;
  iVar3 = load_system_file(param_2,"nds_bios_arm9.bin",param_1 + 0x2004,0x1000);
  if (iVar3 < 0) {
    puts("Can\'t find Nintendo ARM9 BIOS. Trying free DraStic ARM9 BIOS.");
    iVar3 = load_system_file(param_2,"drastic_bios_arm9.bin",param_1 + 0x2004,0x1000);
    if (-1 < iVar3) {
      *(byte *)((long)param_1 + 0xfd512) = *(byte *)((long)param_1 + 0xfd512) | 2;
      iVar3 = load_system_file(param_2,"nds_bios_arm7.bin",param_1 + 0x2204,0x4000);
      goto joined_r0x0011c504;
    }
LAB_0011c74c:
    uVar8 = 0xffffffff;
  }
  else {
    iVar3 = load_system_file(param_2,"nds_bios_arm7.bin",param_1 + 0x2204,0x4000);
joined_r0x0011c504:
    if (iVar3 < 0) {
      puts("Can\'t find Nintendo ARM9 BIOS. Trying free DraStic ARM7 BIOS.");
      iVar3 = load_system_file(param_2,"drastic_bios_arm7.bin",param_1 + 0x2204,0x4000);
      if (iVar3 < 0) goto LAB_0011c74c;
      *(byte *)((long)param_1 + 0xfd512) = *(byte *)((long)param_1 + 0xfd512) | 1;
      iVar3 = load_system_file(param_2,"nds_firmware.bin",param_1 + 0x560e,0x40000);
    }
    else {
      iVar3 = load_system_file(param_2,"nds_firmware.bin",param_1 + 0x560e,0x40000);
    }
    if (iVar3 < 0) {
      memset(param_1 + 0x560e,0,0x40000);
      patch_firmware_header_data(param_1 + 0x560e);
    }
    param_1[0x1f747] = 0;
    param_1[0x15e2e] = 0;
    uVar8 = 0;
    param_1[0x1de36] = 0;
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8,&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
  }
  return;
}


