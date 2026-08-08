/*
 * Ghidra decompilation
 *
 * Function : reset_memory
 * Address  : 0011c7f0
 * Program  : drastic64
 */


void reset_memory(void **param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int extraout_w8;
  int iVar4;
  int iVar5;
  long lVar6;
  
  memset(param_1 + 0x360e,0,0x8000);
  memset(param_1 + 0x460e,0,0x8000);
  *(undefined *)((long)param_1 + 0x1b2b7) = 3;
  *(undefined2 *)(param_1 + 0x3634) = 0x3ff;
  *(undefined *)((long)param_1 + 0x232b1) = 3;
  *(undefined2 *)(param_1 + 0x4634) = 0x3ff;
  *(undefined4 *)((long)param_1 + 0x231a4) = 0x7f800f;
  *(undefined2 *)((long)param_1 + 0x1b212) = 0xff;
  *(undefined2 *)((long)param_1 + 0x1b374) = 1;
  *(undefined2 *)(param_1 + 0x466e) = 1;
  *(undefined2 *)(param_1 + 0x366e) = 1;
  iVar4 = 0x200000;
  iVar5 = 0;
  memset(*param_1,0,0x400000);
  memset(param_1[1],0,0x8000);
  memset(param_1[2],0,0x8000);
  memset(param_1[3],0,0x4000);
  memset(param_1 + 4,0,0x10000);
  memset(param_1[0x2a04],0,0x20000);
  memset(param_1[0x2a05],0,0x20000);
  memset(param_1[0x2a06],0,0x20000);
  memset(param_1[0x2a07],0,0x20000);
  memset(param_1[0x2a08],0,0x10000);
  memset(param_1[0x2a09],0,0x4000);
  memset(param_1[0x2a0a],0,0x4000);
  memset(param_1[0x2a0b],0,0x8000);
  memset(param_1[0x2a0c],0,0x4000);
  memset(param_1 + 0xd60e,0,0x20000);
  memset(param_1[0x2a0d],0,0x4000);
  memset(param_1 + 0x2c0e,0,0x800);
  memset(param_1 + 0x2d0e,0,0x800);
  memset(param_1 + 0x2a0e,0,0x800);
  memset(param_1 + 0x2b0e,0,0x800);
  *(undefined2 *)(param_1 + 0x1faa2) = 0;
  remap_wram(param_1);
  memory_clear_slot2(param_1);
  remap_palette_oam_deferred(param_1);
  puts("  Setting up ARM9 memory map.");
  pvVar2 = param_1[0x1f751];
  do {
    pvVar2 = (void *)map_memory_page_from_memory_map(pvVar2,iVar5);
    iVar5 = iVar5 + 0x800;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puts("  Setting up ARM7 memory map.");
  pvVar2 = param_1[0x1f752];
  iVar4 = 0x200000;
  iVar5 = 0;
  do {
    pvVar2 = (void *)map_memory_page_from_memory_map(pvVar2,iVar5);
    iVar5 = iVar5 + 0x800;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pvVar2 = param_1[0x1f751];
  __printf_chk(1,"Remapping ITCM limit from %x to %x\n",*(undefined4 *)(param_1 + 0x1fa9b),0);
  iVar5 = 0;
  if (*(int *)(param_1 + 0x1fa9b) != 0) {
    do {
      iVar4 = iVar5 + 0x800;
      map_memory_page_from_memory_map(pvVar2,iVar5);
      iVar5 = iVar4;
    } while (extraout_w8 != iVar4);
    *(undefined4 *)(param_1 + 0x1fa9b) = 0;
  }
  remap_dtcm(param_1,0,0);
  reset_coprocessor(param_1 + 0x1faa3);
  reset_dma(param_1 + 0x1fa53);
  reset_dma(param_1 + 0x1fa69);
  reset_ipc(param_1 + 0x1fa7f);
  lVar6 = 0;
  reset_ipc(param_1 + 0x1fa8b);
  do {
    pvVar2 = (void *)((long)param_1[0x1faa0] + lVar6);
    if (*(char *)((long)param_1 + 0xfd513) == '\0') {
      munmap(pvVar2,0x4000);
      pvVar3 = mmap(pvVar2,0x4000,3,1,*(int *)(param_1 + 0x1faa1),0xa4000);
      if (pvVar2 != pvVar3) {
        __printf_chk(1,"ERROR: VRAM remap to %p didn\'t map to same location (got %p)\n",pvVar2,
                     pvVar3);
      }
    }
    else {
      uVar1 = 0;
      if (*(uint *)((long)param_1 + 0xfd4dc) != 0) {
        uVar1 = 0xa4000 / *(uint *)((long)param_1 + 0xfd4dc);
      }
      remap_file_pages(pvVar2,0x4000,0,(ulong)uVar1,0);
    }
    lVar6 = lVar6 + 0x4000;
  } while (lVar6 != 0x800000);
  patch_firmware_user_data((long)param_1[0x1f74d] + 0x855a8,param_1 + 0x560e);
  pvVar2 = *param_1;
  pvVar3 = param_1[0xd5cf];
  *(void **)((long)pvVar2 + 0x3ffc80) = param_1[0xd5ce];
  *(void **)((long)pvVar2 + 0x3ffc88) = pvVar3;
  pvVar3 = param_1[0xd5d1];
  *(void **)((long)pvVar2 + 0x3ffc90) = param_1[0xd5d0];
  *(void **)((long)pvVar2 + 0x3ffc98) = pvVar3;
  pvVar3 = param_1[0xd5d3];
  *(void **)((long)pvVar2 + 0x3ffca0) = param_1[0xd5d2];
  *(void **)((long)pvVar2 + 0x3ffca8) = pvVar3;
  pvVar3 = param_1[0xd5d5];
  *(void **)((long)pvVar2 + 0x3ffcb0) = param_1[0xd5d4];
  *(void **)((long)pvVar2 + 0x3ffcb8) = pvVar3;
  pvVar3 = param_1[0xd5d7];
  *(void **)((long)pvVar2 + 0x3ffcc0) = param_1[0xd5d6];
  *(void **)((long)pvVar2 + 0x3ffcc8) = pvVar3;
  pvVar3 = param_1[0xd5d9];
  *(void **)((long)pvVar2 + 0x3ffcd0) = param_1[0xd5d8];
  *(void **)((long)pvVar2 + 0x3ffcd8) = pvVar3;
  pvVar3 = param_1[0xd5db];
  *(void **)((long)pvVar2 + 0x3ffce0) = param_1[0xd5da];
  *(void **)((long)pvVar2 + 0x3ffce8) = pvVar3;
  *(undefined *)((long)*param_1 + 0x3ffc40) = 1;
  return;
}


