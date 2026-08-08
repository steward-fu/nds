/*
 * Ghidra decompilation
 *
 * Function : unmap_memory_page_region_direct
 * Address  : 0800cc54
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void unmap_memory_page_region_direct
               (memory_interface_struct *memory_interface,u32 region_offset,u32 region_size)

{
  u32 *puVar1;
  u32 *page_allocation_bitmap_coarse;
  u32 *puVar2;
  u32 allocated_mask_3;
  u32 allocated_mask_9;
  u32 end_block_2MB;
  u32 unallocation_index_1;
  u32 allocated_mask_11;
  uint uVar3;
  u32 region_end;
  uint uVar4;
  u32 start_offset_64KB;
  int iVar5;
  u32 block_64KB;
  u32 allocated_mask_1;
  u32 allocated_mask_4;
  uint uVar6;
  u32 allocated_mask_6;
  u32 block_2KB;
  u32 allocated_mask_10;
  u32 block_2KB_1;
  uint uVar7;
  u32 allocated_mask_8;
  u32 uVar8;
  u32 allocated_mask;
  u32 allocated_mask_5;
  u32 allocated_mask_12;
  u32 *puVar9;
  u32 *puVar10;
  uint uVar11;
  uint uVar12;
  u32 *puVar13;
  u32 block_2MB;
  u32 unallocation_index;
  uint uVar14;
  u32 block_64KB_1;
  u32 uVar15;
  u32 allocated_mask_7;
  u32 unallocation_index_2;
  uint uVar16;
  u32 start_offset_2KB;
  u32 *puVar17;
  u32 allocated_mask_2;
  u32 unallocation_index_3;
  u32 unallocation_index_4;
  bool bVar18;
  u32 end_offset_64KB;
  u32 end_offset_2KB;
  u32 *page_allocation_bitmap_coarse_1;
  
  uVar3 = (region_size - 1) + region_offset;
  uVar6 = uVar3 >> 0x15;
  uVar11 = region_offset >> 0x15;
  uVar16 = (region_offset << 0x10) >> 0x1b;
  end_block_2MB = uVar3 * 0x800;
  end_block_2MB = end_block_2MB >> 0x1b;
  uVar3 = uVar3 * 0x10000 >> 0x1b;
  uVar4 = (region_offset << 0xb) >> 0x1b;
  if (uVar11 != uVar6) {
    uVar14 = 1 << uVar4;
    uVar8 = memory_interface->page_allocation_bitmap_coarse[uVar11];
    iVar5 = uVar4 + uVar11 * 0x20;
    if ((uVar8 & uVar14) != 0) {
      uVar4 = uVar16 + iVar5 * 0x20;
      uVar7 = uVar4 + 0x1f;
      uVar16 = 1 << uVar16;
      uVar15 = memory_interface->page_allocation_bitmap_fine[iVar5];
      if (uVar4 < 0xffffffe1) {
        do {
          bVar18 = (uVar15 & uVar16) != 0;
          if (bVar18) {
            uVar15 = uVar15 & ~uVar16;
          }
          uVar16 = uVar16 << 1;
          if (bVar18) {
            memory_interface->page_table[uVar4] = 0x40000000;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 <= uVar7);
      }
      memory_interface->page_allocation_bitmap_fine[iVar5] = uVar15;
      if (uVar15 == 0) {
        uVar8 = uVar8 & ~uVar14;
      }
    }
    uVar16 = iVar5 + 1;
    if ((uVar16 & 0x1f) != 0) {
      puVar9 = memory_interface->page_table + iVar5 * 0x20 + 0x20;
      puVar2 = memory_interface->page_allocation_bitmap_fine + iVar5 + 1;
      do {
        uVar14 = uVar14 << 1;
        if ((uVar14 & uVar8) != 0) {
          uVar4 = *puVar2;
          *puVar2 = 0;
          puVar13 = puVar9;
          for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
            if ((uVar4 & 1) != 0) {
              *puVar13 = 0x40000000;
            }
            puVar13 = puVar13 + 1;
          }
          uVar8 = uVar8 & ~uVar14;
        }
        uVar16 = uVar16 + 1;
        puVar2 = puVar2 + 1;
        puVar9 = puVar9 + 0x20;
      } while ((uVar16 & 0x1f) != 0);
    }
    uVar16 = uVar11 + 1;
    memory_interface->page_allocation_bitmap_coarse[uVar11] = uVar8;
    if (uVar16 < uVar6) {
      puVar13 = memory_interface->page_table + uVar11 * 0x400 + 0x400;
      puVar9 = memory_interface->page_allocation_bitmap_fine + uVar11 * 0x20 + 0x20;
      puVar2 = memory_interface->page_allocation_bitmap_coarse + uVar11 + 1;
      do {
        uVar4 = *puVar2;
        puVar10 = puVar2 + 1;
        *puVar2 = 0;
        puVar2 = puVar9;
        puVar17 = puVar13;
        for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
          if ((uVar4 & 1) != 0) {
            uVar14 = *puVar2;
            *puVar2 = 0;
            puVar1 = puVar17;
            for (; uVar14 != 0; uVar14 = uVar14 >> 1) {
              if ((uVar14 & 1) != 0) {
                *puVar1 = 0x40000000;
              }
              puVar1 = puVar1 + 1;
            }
          }
          puVar2 = puVar2 + 1;
          puVar17 = puVar17 + 0x20;
        }
        puVar9 = puVar9 + 0x20;
        puVar13 = puVar13 + 0x400;
        puVar2 = puVar10;
      } while (puVar10 != memory_interface->page_allocation_bitmap_coarse + uVar6);
      uVar16 = (uVar6 + uVar16 + -1) - uVar11;
    }
    uVar8 = memory_interface->page_allocation_bitmap_coarse[uVar16];
    uVar6 = uVar16 * 0x20;
    uVar11 = end_block_2MB + uVar6;
    if (uVar6 < uVar11) {
      puVar2 = memory_interface->page_table + uVar16 * 0x400;
      puVar9 = memory_interface->page_allocation_bitmap_fine + uVar16 * 0x20;
      uVar4 = 1;
      uVar14 = uVar6;
      do {
        if ((uVar8 & uVar4) != 0) {
          uVar6 = *puVar9;
          *puVar9 = 0;
          puVar13 = puVar2;
          for (; uVar6 != 0; uVar6 = uVar6 >> 1) {
            if ((uVar6 & 1) != 0) {
              *puVar13 = 0x40000000;
            }
            puVar13 = puVar13 + 1;
          }
          uVar8 = uVar8 & ~uVar4;
        }
        uVar14 = uVar14 + 1;
        uVar4 = uVar4 << 1;
        puVar9 = puVar9 + 1;
        puVar2 = puVar2 + 0x20;
        uVar6 = uVar11;
      } while (uVar11 != uVar14);
    }
    else {
      uVar4 = 1;
    }
    if ((uVar8 & uVar4) != 0) {
      uVar11 = uVar6 * 0x20;
      uVar15 = memory_interface->page_allocation_bitmap_fine[uVar6];
      uVar14 = uVar3 + uVar11;
      if (!CARRY4(uVar3,uVar11)) {
        uVar3 = 1;
        do {
          bVar18 = (uVar15 & uVar3) != 0;
          if (bVar18) {
            uVar15 = uVar15 & ~uVar3;
          }
          uVar3 = uVar3 << 1;
          if (bVar18) {
            memory_interface->page_table[uVar11] = 0x40000000;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 <= uVar14);
      }
      memory_interface->page_allocation_bitmap_fine[uVar6] = uVar15;
      if (uVar15 == 0) {
        uVar8 = uVar8 & ~uVar4;
      }
    }
    memory_interface->page_allocation_bitmap_coarse[uVar16] = uVar8;
    return;
  }
  uVar6 = 1 << uVar4;
  uVar14 = memory_interface->page_allocation_bitmap_coarse[uVar11];
  iVar5 = uVar4 + uVar11 * 0x20;
  if (uVar4 == end_block_2MB) {
    if ((uVar14 & uVar6) == 0) goto LAB_0800d0a0;
    uVar4 = uVar16 + iVar5 * 0x20;
    uVar16 = 1 << uVar16;
    uVar7 = uVar3 + uVar4;
    uVar8 = memory_interface->page_allocation_bitmap_fine[iVar5];
    if (!CARRY4(uVar3,uVar4)) {
      do {
        bVar18 = (uVar8 & uVar16) != 0;
        if (bVar18) {
          uVar8 = uVar8 & ~uVar16;
        }
        uVar16 = uVar16 << 1;
        if (bVar18) {
          memory_interface->page_table[uVar4] = 0x40000000;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar7);
    }
    memory_interface->page_allocation_bitmap_fine[iVar5] = uVar8;
  }
  else {
    uVar4 = end_block_2MB + iVar5;
    if ((uVar14 & uVar6) != 0) {
      uVar7 = uVar16 + iVar5 * 0x20;
      uVar12 = uVar7 + 0x1f;
      uVar16 = 1 << uVar16;
      uVar8 = memory_interface->page_allocation_bitmap_fine[iVar5];
      if (uVar7 < 0xffffffe1) {
        do {
          bVar18 = (uVar8 & uVar16) != 0;
          if (bVar18) {
            uVar8 = uVar8 & ~uVar16;
          }
          uVar16 = uVar16 << 1;
          if (bVar18) {
            memory_interface->page_table[uVar7] = 0x40000000;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 <= uVar12);
      }
      memory_interface->page_allocation_bitmap_fine[iVar5] = uVar8;
      if (uVar8 != 0) {
        uVar14 = uVar14 & ~uVar6;
      }
    }
    uVar16 = iVar5 + 1;
    uVar6 = uVar6 << 1;
    if (uVar16 < uVar4) {
      puVar2 = memory_interface->page_table + iVar5 * 0x20 + 0x20;
      puVar9 = memory_interface->page_allocation_bitmap_fine + iVar5 + 1;
      uVar7 = uVar16;
      do {
        if ((uVar14 & uVar6) != 0) {
          uVar12 = *puVar9;
          *puVar9 = 0;
          puVar13 = puVar2;
          for (; uVar12 != 0; uVar12 = uVar12 >> 1) {
            if ((uVar12 & 1) != 0) {
              *puVar13 = 0x40000000;
            }
            puVar13 = puVar13 + 1;
          }
          uVar14 = uVar14 & ~uVar6;
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar6 << 1;
        puVar9 = puVar9 + 1;
        puVar2 = puVar2 + 0x20;
      } while (uVar4 != uVar7);
      uVar16 = (uVar4 + uVar16 + -1) - iVar5;
    }
    if ((uVar6 & uVar14) == 0) goto LAB_0800d0a0;
    uVar4 = uVar16 * 0x20;
    uVar7 = uVar3 + uVar4;
    uVar8 = memory_interface->page_allocation_bitmap_fine[uVar16];
    if (!CARRY4(uVar3,uVar4)) {
      uVar3 = 1;
      do {
        bVar18 = (uVar3 & uVar8) != 0;
        if (bVar18) {
          uVar8 = uVar8 & ~uVar3;
        }
        uVar3 = uVar3 << 1;
        if (bVar18) {
          memory_interface->page_table[uVar4] = 0x40000000;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar7);
    }
    memory_interface->page_allocation_bitmap_fine[uVar16] = uVar8;
  }
  if (uVar8 == 0) {
    uVar14 = uVar14 & ~uVar6;
  }
LAB_0800d0a0:
  memory_interface->page_allocation_bitmap_coarse[uVar11] = uVar14;
  return;
}


