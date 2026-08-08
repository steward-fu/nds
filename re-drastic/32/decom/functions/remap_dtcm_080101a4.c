/*
 * Ghidra decompilation
 *
 * Function : remap_dtcm
 * Address  : 080101a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void remap_dtcm(memory_struct *memory,u32 dtcm_base,u32 dtcm_size)

{
  uint uVar1;
  uint uVar2;
  u32 region_page;
  u32 uVar3;
  memory_struct *pmVar4;
  u32 page_table_value;
  uint uVar5;
  uint uVar6;
  u8 *puVar7;
  u8 *puVar8;
  memory_interface_struct *pmVar9;
  memory_interface_struct *memory_interface;
  u32 remap_size;
  u32 uVar10;
  u32 original_dtcm_size;
  u32 remap_size_1;
  int iVar11;
  memory_region_struct *pmVar12;
  memory_region_struct *memory_region;
  
  pmVar9 = memory->memory_interface_arm9;
  uVar10 = memory->dtcm_end - memory->dtcm_base;
  __printf_chk(1,"Remapping DTCM from %x, %x to %x, %x\n",memory->dtcm_base,uVar10,dtcm_base,
               dtcm_size);
  if (uVar10 != 0) {
    uVar5 = memory->dtcm_base;
    pmVar4 = pmVar9->memory;
    uVar3 = uVar10;
    uVar6 = uVar5;
    do {
      while (uVar2 = uVar6 >> 0xb, uVar6 < 0x10000000) {
        uVar1 = uVar6 >> 0x17;
        pmVar12 = pmVar9->memory_regions;
        if (pmVar12[uVar1].load_access == '\0') {
          puVar8 = pmVar12[uVar1].load_handler.direct_memory + (pmVar12[uVar1].mask & uVar6);
          puVar7 = puVar8;
          if (pmVar12[uVar1].store_access != '\0') {
            puVar7 = (u8 *)0x0;
          }
          goto LAB_08010268;
        }
LAB_080102b8:
        uVar3 = uVar3 - 0x800;
        uVar6 = uVar6 + 0x800;
        pmVar9->page_table[uVar2] = 0x40000000;
        if (uVar3 == 0) goto LAB_080102cc;
      }
      if ((uVar6 < 0xffff0000) || (pmVar9->cpu->type != '\x01')) goto LAB_080102b8;
      puVar8 = pmVar4->arm9_bios + (uVar6 & 0xfff);
      puVar7 = (u8 *)0x0;
LAB_08010268:
      if (puVar8 == (u8 *)0x0) goto LAB_080102b8;
      page_table_value = (int)puVar8 - uVar6 >> 2;
      if (puVar8 != puVar7) {
        page_table_value = page_table_value | 0x40000000;
      }
      uVar3 = uVar3 - 0x800;
      pmVar9->page_table[uVar2] = page_table_value;
      uVar6 = uVar6 + 0x800;
    } while (uVar3 != 0);
LAB_080102cc:
    if (uVar5 < 0x4000000) {
      if (0x4000000 < uVar10 + uVar5) {
        uVar10 = 0x4000000 - uVar5;
      }
      if (uVar5 + 0xfe000000 < 0x1000000) {
        puts("DTCM moved off of main RAM, remapping main RAM to it.");
        remap_address_region_low_memory
                  (memory,(void *)memory->dtcm_base,uVar10,
                   (uint)(void *)memory->dtcm_base & 0x3fffff);
      }
      else if (uVar5 < 0x2000000) {
        remap_itcm(memory,memory->itcm_end);
      }
      else {
        remap_wram(memory);
      }
    }
  }
  memory->dtcm_base = dtcm_base;
  memory->dtcm_end = dtcm_base + dtcm_size;
  if (dtcm_size < 0x4001) {
    if (dtcm_size != 0) {
      puVar7 = memory->dtcm;
      iVar11 = dtcm_base - (int)puVar7;
      uVar10 = dtcm_size;
      do {
        puVar8 = puVar7 + iVar11;
        uVar10 = uVar10 - 0x800;
        uVar6 = (int)puVar7 - (int)puVar8;
        puVar7 = puVar7 + 0x800;
        pmVar9->page_allocation_bitmap_coarse[(uint)puVar8 >> 0x15] =
             pmVar9->page_allocation_bitmap_coarse[(uint)puVar8 >> 0x15] |
             1 << ((uint)((int)puVar8 * 0x800) >> 0x1b);
        pmVar9->page_allocation_bitmap_fine[(uint)puVar8 >> 0x10] =
             pmVar9->page_allocation_bitmap_fine[(uint)puVar8 >> 0x10] |
             1 << ((uint)((int)puVar8 * 0x10000) >> 0x1b);
        pmVar9->page_table[(uint)puVar8 >> 0xb] = uVar6 >> 2;
      } while (uVar10 != 0);
      if (dtcm_base < 0x4000000) {
        remap_address_region_low_memory(memory,(void *)dtcm_base,dtcm_size,0x410000);
        return;
      }
    }
  }
  else {
    do {
      puVar7 = memory->dtcm;
      uVar6 = dtcm_base + 0x800;
      pmVar9->page_allocation_bitmap_coarse[dtcm_base >> 0x15] =
           pmVar9->page_allocation_bitmap_coarse[dtcm_base >> 0x15] |
           1 << ((dtcm_base << 0xb) >> 0x1b);
      pmVar9->page_allocation_bitmap_fine[dtcm_base >> 0x10] =
           pmVar9->page_allocation_bitmap_fine[dtcm_base >> 0x10] |
           1 << ((dtcm_base << 0x10) >> 0x1b);
      pmVar9->page_table[dtcm_base >> 0xb] = (int)puVar7 - dtcm_base >> 2;
      uVar5 = dtcm_base + 0x1000;
      pmVar9->page_allocation_bitmap_coarse[uVar6 >> 0x15] =
           pmVar9->page_allocation_bitmap_coarse[uVar6 >> 0x15] | 1 << (uVar6 * 0x800 >> 0x1b);
      pmVar9->page_allocation_bitmap_fine[uVar6 >> 0x10] =
           pmVar9->page_allocation_bitmap_fine[uVar6 >> 0x10] | 1 << (uVar6 * 0x10000 >> 0x1b);
      pmVar9->page_table[uVar6 >> 0xb] = (uint)(puVar7 + (0x800 - uVar6)) >> 2;
      uVar6 = dtcm_base + 0x1800;
      pmVar9->page_allocation_bitmap_coarse[uVar5 >> 0x15] =
           pmVar9->page_allocation_bitmap_coarse[uVar5 >> 0x15] | 1 << (uVar5 * 0x800 >> 0x1b);
      pmVar9->page_allocation_bitmap_fine[uVar5 >> 0x10] =
           pmVar9->page_allocation_bitmap_fine[uVar5 >> 0x10] | 1 << (uVar5 * 0x10000 >> 0x1b);
      pmVar9->page_table[uVar5 >> 0xb] = (uint)(puVar7 + (0x1000 - uVar5)) >> 2;
      uVar5 = dtcm_base + 0x2000;
      pmVar9->page_allocation_bitmap_coarse[uVar6 >> 0x15] =
           pmVar9->page_allocation_bitmap_coarse[uVar6 >> 0x15] | 1 << (uVar6 * 0x800 >> 0x1b);
      pmVar9->page_allocation_bitmap_fine[uVar6 >> 0x10] =
           pmVar9->page_allocation_bitmap_fine[uVar6 >> 0x10] | 1 << (uVar6 * 0x10000 >> 0x1b);
      pmVar9->page_table[uVar6 >> 0xb] = (uint)(puVar7 + (0x1800 - uVar6)) >> 2;
      uVar6 = dtcm_base + 0x2800;
      pmVar9->page_allocation_bitmap_coarse[uVar5 >> 0x15] =
           pmVar9->page_allocation_bitmap_coarse[uVar5 >> 0x15] | 1 << (uVar5 * 0x800 >> 0x1b);
      pmVar9->page_allocation_bitmap_fine[uVar5 >> 0x10] =
           pmVar9->page_allocation_bitmap_fine[uVar5 >> 0x10] | 1 << (uVar5 * 0x10000 >> 0x1b);
      pmVar9->page_table[uVar5 >> 0xb] = (uint)(puVar7 + (0x2000 - uVar5)) >> 2;
      uVar5 = dtcm_base + 0x3000;
      pmVar9->page_allocation_bitmap_coarse[uVar6 >> 0x15] =
           pmVar9->page_allocation_bitmap_coarse[uVar6 >> 0x15] | 1 << (uVar6 * 0x800 >> 0x1b);
      pmVar9->page_allocation_bitmap_fine[uVar6 >> 0x10] =
           pmVar9->page_allocation_bitmap_fine[uVar6 >> 0x10] | 1 << (uVar6 * 0x10000 >> 0x1b);
      pmVar9->page_table[uVar6 >> 0xb] = (uint)(puVar7 + (0x2800 - uVar6)) >> 2;
      uVar6 = dtcm_base + 0x3800;
      pmVar9->page_allocation_bitmap_coarse[uVar5 >> 0x15] =
           pmVar9->page_allocation_bitmap_coarse[uVar5 >> 0x15] | 1 << (uVar5 * 0x800 >> 0x1b);
      pmVar9->page_allocation_bitmap_fine[uVar5 >> 0x10] =
           pmVar9->page_allocation_bitmap_fine[uVar5 >> 0x10] | 1 << (uVar5 * 0x10000 >> 0x1b);
      pmVar9->page_table[uVar5 >> 0xb] = (uint)(puVar7 + (0x3000 - uVar5)) >> 2;
      pmVar9->page_allocation_bitmap_coarse[uVar6 >> 0x15] =
           pmVar9->page_allocation_bitmap_coarse[uVar6 >> 0x15] | 1 << (uVar6 * 0x800 >> 0x1b);
      pmVar9->page_allocation_bitmap_fine[uVar6 >> 0x10] =
           pmVar9->page_allocation_bitmap_fine[uVar6 >> 0x10] | 1 << (uVar6 * 0x10000 >> 0x1b);
      pmVar9->page_table[uVar6 >> 0xb] = (uint)(puVar7 + (0x3800 - uVar6)) >> 2;
      if (dtcm_base < (void *)0x4000000) {
        remap_address_region_low_memory(memory,(void *)dtcm_base,dtcm_size,0x410000);
      }
      dtcm_size = dtcm_size - 0x4000;
      dtcm_base = dtcm_base + 0x4000;
    } while (dtcm_size != 0);
  }
  return;
}


