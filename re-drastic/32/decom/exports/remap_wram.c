/*
 * Ghidra decompilation
 *
 * Function : remap_wram
 * Address  : 0800d444
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void remap_wram(memory_struct *memory)

{
  byte bVar1;
  void *pvVar2;
  u8 *remap_ptr;
  size_t __pgoff;
  u8 *puVar3;
  u8 *wram_high_bank;
  u32 uVar4;
  u8 *puVar5;
  u8 *wram_low_bank;
  u8 *puVar6;
  u32 dtcm_end_1;
  u8 *page_address;
  void *__addr;
  uint uVar7;
  u32 dtcm_end;
  u32 dtcm_base_1;
  int iVar8;
  u32 uVar9;
  u32 dtcm_base;
  memory_interface_struct *pmVar10;
  
  puVar5 = memory->wram;
  bVar1 = memory->arm9_io_registers[0x247];
  puVar3 = puVar5 + 0x4000;
  if ((bVar1 & 1) == 0) {
    puVar6 = memory->arm7_wram;
  }
  else {
    puVar6 = puVar5;
    puVar5 = memory->null_buffer_load;
  }
  memory->arm9_wram_map[0] = puVar5;
  memory->arm7_wram_map[0] = puVar6;
  if ((bVar1 & 2) == 0) {
    puVar6 = memory->arm7_wram + 0x4000;
    puVar5 = puVar3;
  }
  else {
    puVar5 = memory->null_buffer_load;
    puVar6 = puVar3;
  }
  pmVar10 = memory->memory_interface_arm9;
  memory->arm9_wram_map[1] = puVar5;
  memory->arm7_wram_map[1] = puVar6;
  uVar9 = pmVar10->memory->dtcm_base;
  uVar7 = pmVar10->memory->dtcm_end;
  if (uVar7 < 0x4000001 || 0x3000000 < uVar9) {
    uVar4 = 0x1000000;
    uVar9 = 0x3000000;
  }
  else {
    unmap_memory_page_region_direct(pmVar10,0x3000000,uVar9 + 0xfd000000);
    uVar4 = 0x4000000 - uVar7;
  }
  unmap_memory_page_region_direct(pmVar10,uVar9,uVar4);
  pmVar10 = memory->memory_interface_arm7;
  uVar9 = pmVar10->memory->dtcm_base;
  uVar7 = pmVar10->memory->dtcm_end;
  if (uVar9 < 0x3000001 && 0x3800000 < uVar7) {
    unmap_memory_page_region_direct(pmVar10,0x3000000,uVar9 + 0xfd000000);
    uVar4 = 0x3800000 - uVar7;
  }
  else {
    uVar4 = 0x800000;
    uVar9 = 0x3000000;
  }
  iVar8 = 0;
  unmap_memory_page_region_direct(pmVar10,uVar9,uVar4);
  do {
    while (__addr = (void *)(iVar8 + memory->memory_map_offset + 0x3000000),
          memory->use_remap_file_pages != '\0') {
      iVar8 = iVar8 + 0x8000;
      __pgoff = __aeabi_uidiv(0x408000,memory->native_page_size);
      remap_file_pages(__addr,0x8000,0,__pgoff,0);
      if (iVar8 == 0x1000000) {
        return;
      }
    }
    if (((uint)__addr & 0x3fff) == 0) {
      munmap(__addr,0x4000);
      pvVar2 = mmap(__addr,0x4000,3,1,memory->memory_map_fd,0x408000);
      if (pvVar2 == __addr) {
        __addr = (void *)((int)pvVar2 + 0x4000);
        munmap(__addr,0x4000);
        pvVar2 = mmap(__addr,0x4000,3,1,memory->memory_map_fd,0x40c000);
        if (__addr == pvVar2) goto LAB_0800d5d4;
      }
      __printf_chk(1,"ERROR: Low memory remap to %p didn\'t map to same location (got %p)\n",__addr,
                   pvVar2);
    }
    else {
      __printf_chk(1,
                   "ERROR: remap_address_region_low_memory chunk not 16KB aligned\n (mapping %x to %p for %x)\n"
                   ,0x408000,__addr,0x8000);
    }
LAB_0800d5d4:
    iVar8 = iVar8 + 0x8000;
    if (iVar8 == 0x1000000) {
      return;
    }
  } while( true );
}


