/*
 * Ghidra decompilation
 *
 * Function : remap_palette_oam_direct
 * Address  : 08015668
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void remap_palette_oam_direct(memory_struct *memory)

{
  u32 uVar1;
  memory_struct *pmVar2;
  u32 dtcm_end_1;
  uint uVar3;
  u32 dtcm_end;
  u32 dtcm_base_1;
  memory_interface_struct *pmVar4;
  u32 uVar5;
  u32 dtcm_base;
  u16 *puVar6;
  u16 *puVar7;
  
  puVar6 = memory->oam_ram;
  puVar7 = memory->palette_ram;
  memory->memory_regions_arm9[10].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[10].mask = 0x7ff;
  memory->memory_regions_arm9[10].load_handler.direct_memory = (u8 *)puVar7;
  memory->memory_regions_arm9[10].store_handler.direct_memory = (u8 *)puVar7;
  memory->memory_regions_arm9[10].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[10].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory->memory_regions_arm9[10].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  memory->memory_regions_arm9[10].load_access = '\0';
  memory->memory_regions_arm9[10].store_access = '\0';
  memory->memory_regions_arm9[0xb].mask = 0x7ff;
  memory->memory_regions_arm9[0xb].load_handler.direct_memory = (u8 *)puVar7;
  memory->memory_regions_arm9[0xb].store_handler.direct_memory = (u8 *)puVar7;
  memory->memory_regions_arm9[0xb].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0xb].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0xb].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory->memory_regions_arm9[0xb].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  memory->memory_regions_arm9[0xb].load_access = '\0';
  memory->memory_regions_arm9[0xb].store_access = '\0';
  memory->memory_regions_arm9[0xe].mask = 0x7ff;
  memory->memory_regions_arm9[0xe].load_handler.direct_memory = (u8 *)puVar6;
  memory->memory_regions_arm9[0xe].store_handler.direct_memory = (u8 *)puVar6;
  memory->memory_regions_arm9[0xe].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0xe].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0xe].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory->memory_regions_arm9[0xe].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  memory->memory_regions_arm9[0xe].load_access = '\0';
  memory->memory_regions_arm9[0xe].store_access = '\0';
  memory->memory_regions_arm9[0xf].mask = 0x7ff;
  memory->memory_regions_arm9[0xf].load_handler.direct_memory = (u8 *)puVar6;
  pmVar4 = memory->memory_interface_arm9;
  memory->memory_regions_arm9[0xf].store_handler.direct_memory = (u8 *)puVar6;
  memory->memory_regions_arm9[0xf].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0xf].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0xf].load_access = '\0';
  memory->memory_regions_arm9[0xf].store_access = '\0';
  pmVar2 = pmVar4->memory;
  memory->memory_regions_arm9[0xf].get_code_bitmap_coarse = memory_get_code_bitmap_coarse_direct;
  memory->memory_regions_arm9[0xf].get_code_bitmap_fine = memory_get_code_bitmap_fine_direct;
  uVar5 = pmVar2->dtcm_base;
  uVar3 = pmVar2->dtcm_end;
  if (uVar3 < 0x6000001 || 0x5000000 < uVar5) {
    uVar1 = 0x1000000;
    uVar5 = 0x5000000;
  }
  else {
    unmap_memory_page_region_direct(pmVar4,0x5000000,uVar5 + 0xfb000000);
    uVar1 = 0x6000000 - uVar3;
  }
  unmap_memory_page_region_direct(pmVar4,uVar5,uVar1);
  pmVar4 = memory->memory_interface_arm9;
  uVar5 = pmVar4->memory->dtcm_base;
  uVar3 = pmVar4->memory->dtcm_end;
  if (uVar5 < 0x7000001 && 0x8000000 < uVar3) {
    unmap_memory_page_region_direct(pmVar4,0x7000000,uVar5 + 0xf9000000);
    uVar1 = 0x8000000 - uVar3;
  }
  else {
    uVar1 = 0x1000000;
    uVar5 = 0x7000000;
  }
  unmap_memory_page_region_direct(pmVar4,uVar5,uVar1);
  return;
}


