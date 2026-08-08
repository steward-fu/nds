/*
 * Ghidra decompilation
 *
 * Function : remap_wram
 * Address  : 001147a0
 * Program  : drastic64
 */


void remap_wram(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *__addr;
  uint uVar7;
  long lVar8;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = lVar2;
  lVar8 = param_1 + 0x20;
  if ((*(byte *)(param_1 + 0x1b2b7) & 1) != 0) {
    lVar3 = param_1 + 0x6b070;
    lVar8 = lVar2;
  }
  *(long *)(param_1 + 0xfba40) = lVar3;
  *(long *)(param_1 + 0xfba50) = lVar8;
  if ((*(byte *)(param_1 + 0x1b2b7) >> 1 & 1) == 0) {
    lVar3 = param_1 + 0x4020;
    lVar8 = lVar2 + 0x4000;
  }
  else {
    lVar8 = param_1 + 0x6b070;
    lVar3 = lVar2 + 0x4000;
  }
  lVar2 = *(long *)(param_1 + 0xfba88);
  iVar5 = 0x1000000;
  uVar1 = *(uint *)(*(long *)(nds_system + lVar2 + 0xb04008) + 0xfd4d4);
  uVar7 = *(uint *)(*(long *)(nds_system + lVar2 + 0xb04008) + 0xfd4d0);
  *(long *)(param_1 + 0xfba48) = lVar8;
  *(long *)(param_1 + 0xfba58) = lVar3;
  uVar6 = 0x3000000;
  if (0x4000000 < uVar1 && uVar7 < 0x3000000 || 0x4000000 < uVar1 && uVar7 == 0x3000000) {
    lVar2 = unmap_memory_page_region_direct(lVar2,0x3000000,uVar7 + 0xfd000000);
    iVar5 = 0x4000000 - uVar1;
    uVar6 = uVar7;
  }
  unmap_memory_page_region_direct(lVar2,uVar6,iVar5);
  lVar3 = *(long *)(param_1 + 0xfba90);
  uVar1 = *(uint *)(*(long *)(nds_system + lVar3 + 0xb04008) + 0xfd4d4);
  uVar7 = *(uint *)(*(long *)(nds_system + lVar3 + 0xb04008) + 0xfd4d0);
  if (0x3800000 < uVar1 && uVar7 < 0x3000000 || 0x3800000 < uVar1 && uVar7 == 0x3000000) {
    lVar3 = unmap_memory_page_region_direct(lVar3,0x3000000,uVar7 + 0xfd000000);
    iVar5 = 0x3800000 - uVar1;
  }
  else {
    iVar5 = 0x800000;
    uVar7 = 0x3000000;
  }
  lVar8 = 0;
  unmap_memory_page_region_direct(lVar3,uVar7,iVar5);
  do {
    while( true ) {
      lVar3 = lVar8 + *(long *)(param_1 + 0xfd4f0);
      __addr = (undefined1 *)(lVar3 + 0x3000000);
      if (*(char *)(param_1 + 0xfd513) == '\0') break;
      lVar8 = lVar8 + 0x8000;
      uVar1 = 0;
      if (*(uint *)(param_1 + 0xfd4dc) != 0) {
        uVar1 = 0x408000 / *(uint *)(param_1 + 0xfd4dc);
      }
      remap_file_pages(__addr,0x8000,0,(ulong)uVar1,0);
      if (lVar8 == 0x1000000) {
        return;
      }
    }
    munmap(__addr,0x4000);
    puVar4 = (undefined1 *)mmap(__addr,0x4000,3,1,*(int *)(param_1 + 0xfd4e8),0x408000);
    if (__addr == puVar4) {
      __addr = nds_system + lVar3 + 0x2b08000;
      munmap(__addr,0x4000);
      puVar4 = (undefined1 *)mmap(__addr,0x4000,3,1,*(int *)(param_1 + 0xfd4e8),0x40c000);
      if (__addr != puVar4) goto LAB_00114988;
    }
    else {
LAB_00114988:
      __printf_chk(1,"ERROR: Low memory remap to %p didn\'t map to same location (got %p)\n",__addr,
                   puVar4);
    }
    lVar8 = lVar8 + 0x8000;
    if (lVar8 == 0x1000000) {
      return;
    }
  } while( true );
}


