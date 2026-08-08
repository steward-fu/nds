/*
 * Ghidra decompilation
 *
 * Function : remap_itcm
 * Address  : 0800d18c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void remap_itcm(memory_struct *memory,u32 itcm_size)

{
  uint uVar1;
  uint uVar2;
  memory_region_struct *memory_region;
  uint uVar3;
  uint uVar4;
  u32 region_page;
  u32 page_table_value;
  u8 *puVar5;
  memory_interface_struct *pmVar6;
  memory_interface_struct *memory_interface;
  memory_struct *pmVar7;
  u32 itcm_base;
  memory_region_struct *pmVar8;
  uint uVar9;
  uint uVar10;
  u8 *puVar11;
  u8 *puVar12;
  int iVar13;
  u32 uVar14;
  
  pmVar6 = memory->memory_interface_arm9;
  __printf_chk(1,"Remapping ITCM limit from %x to %x\n",memory->itcm_end,itcm_size);
  uVar14 = memory->itcm_end;
  if (itcm_size != uVar14) {
    if (uVar14 != 0) {
      uVar4 = 0;
      pmVar7 = pmVar6->memory;
      do {
        while (uVar3 = uVar4 >> 0xb, uVar4 < 0x10000000) {
          uVar1 = uVar4 >> 0x17;
          pmVar8 = pmVar6->memory_regions;
          if (pmVar8[uVar1].load_access == '\0') {
            puVar12 = pmVar8[uVar1].load_handler.direct_memory + (uVar4 & pmVar8[uVar1].mask);
            puVar11 = puVar12;
            if (pmVar8[uVar1].store_access != '\0') {
              puVar11 = (u8 *)0x0;
            }
            goto LAB_0800d23c;
          }
LAB_0800d28c:
          uVar4 = uVar4 + 0x800;
          pmVar6->page_table[uVar3] = 0x40000000;
          if (uVar14 == uVar4) goto LAB_0800d2a0;
        }
        if ((uVar4 < 0xffff0000) || (pmVar6->cpu->type != '\x01')) goto LAB_0800d28c;
        puVar12 = pmVar7->arm9_bios + (uVar4 & 0xfff);
        puVar11 = (u8 *)0x0;
LAB_0800d23c:
        if (puVar12 == (u8 *)0x0) goto LAB_0800d28c;
        page_table_value = (int)puVar12 - uVar4 >> 2;
        if (puVar12 != puVar11) {
          page_table_value = page_table_value | 0x40000000;
        }
        uVar4 = uVar4 + 0x800;
        pmVar6->page_table[uVar3] = page_table_value;
      } while (uVar14 != uVar4);
    }
LAB_0800d2a0:
    memory->itcm_end = itcm_size;
    if (itcm_size < 0x8001) {
      if (itcm_size != 0) {
        puVar11 = memory->itcm;
        uVar4 = 0;
        do {
          uVar3 = uVar4 >> 0x15;
          uVar1 = uVar4 >> 0x10;
          uVar9 = uVar4 << 0xb;
          uVar10 = uVar4 << 0x10;
          uVar2 = uVar4 >> 0xb;
          uVar4 = uVar4 + 0x800;
          pmVar6->page_allocation_bitmap_coarse[uVar3] =
               pmVar6->page_allocation_bitmap_coarse[uVar3] | 1 << (uVar9 >> 0x1b);
          pmVar6->page_allocation_bitmap_fine[uVar1] =
               pmVar6->page_allocation_bitmap_fine[uVar1] | 1 << (uVar10 >> 0x1b);
          pmVar6->page_table[uVar2] = (uint)puVar11 >> 2;
        } while (itcm_size != uVar4);
      }
    }
    else {
      itcm_base = 0;
      uVar4 = 0x8000;
      do {
        puVar11 = memory->itcm;
        puVar12 = puVar11 + 0x8000;
        iVar13 = itcm_base - (int)puVar11;
        do {
          puVar5 = puVar11 + iVar13;
          uVar3 = (int)puVar11 - (int)puVar5;
          puVar11 = puVar11 + 0x800;
          pmVar6->page_allocation_bitmap_coarse[(uint)puVar5 >> 0x15] =
               pmVar6->page_allocation_bitmap_coarse[(uint)puVar5 >> 0x15] |
               1 << ((uint)((int)puVar5 * 0x800) >> 0x1b);
          pmVar6->page_allocation_bitmap_fine[(uint)puVar5 >> 0x10] =
               pmVar6->page_allocation_bitmap_fine[(uint)puVar5 >> 0x10] |
               1 << ((uint)((int)puVar5 * 0x10000) >> 0x1b);
          pmVar6->page_table[(uint)puVar5 >> 0xb] = uVar3 >> 2;
        } while (puVar11 != puVar12);
        if (itcm_base < 0x4000000) {
          if (uVar4 < 0x4000001) {
            if (itcm_base < 0x8000) {
              if (0x8000 < uVar4) {
                remap_address_region_low_memory
                          (memory,(void *)0x8000,itcm_base,0x408000 - itcm_base);
              }
              goto LAB_0800d368;
            }
            uVar14 = 0x8000;
          }
          else {
            uVar14 = 0;
          }
          remap_address_region_low_memory(memory,(void *)itcm_base,uVar14,0x400000);
        }
LAB_0800d368:
        itcm_base = itcm_base + 0x8000;
        uVar4 = uVar4 + 0x8000;
      } while (itcm_size != itcm_base);
    }
  }
  return;
}


