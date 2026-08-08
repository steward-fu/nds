/*
 * Ghidra decompilation
 *
 * Function : remap_palette_oam_deferred
 * Address  : 08015464
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void remap_palette_oam_deferred(memory_struct *memory)

{
  u32 uVar1;
  memory_struct *pmVar2;
  u32 dtcm_end_1;
  uint uVar3;
  u32 dtcm_end;
  u32 dtcm_base_1;
  u32 uVar4;
  u32 dtcm_base;
  memory_interface_struct *pmVar5;
  
  memory->memory_regions_arm9[10].mask = 0x7ff;
  memory->memory_regions_arm9[10].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[10].load_handler = 0x800848c080083f8;
  memory->memory_regions_arm9[10].load_handler.extended_function.load32 =
       load_palette_deferred_first32;
  memory->memory_regions_arm9[10].store_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[10].store_handler = 0x800b6280800b548;
  memory->memory_regions_arm9[10].store_handler.extended_function.store32 =
       store_palette_deferred_first32;
  memory->memory_regions_arm9[10].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[10].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[10].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[10].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0xb].mask = 0x7ff;
  memory->memory_regions_arm9[0xb].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0xb].load_handler = 0x800848c080083f8;
  memory->memory_regions_arm9[0xb].load_handler.extended_function.load32 =
       load_palette_deferred_first32;
  memory->memory_regions_arm9[0xb].store_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0xb].store_handler = 0x800b6280800b548;
  memory->memory_regions_arm9[0xb].store_handler.extended_function.store32 =
       store_palette_deferred_first32;
  memory->memory_regions_arm9[0xb].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0xb].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0xb].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0xb].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0xe].mask = 0x7ff;
  memory->memory_regions_arm9[0xe].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0xe].load_handler = 0x8008648080085b4;
  memory->memory_regions_arm9[0xe].load_handler.extended_function.load32 = load_oam_deferred_first32
  ;
  memory->memory_regions_arm9[0xe].store_access = '\x02';
  memory->memory_regions_arm9[0xe].store_handler.extended_function.store8 =
       store_oam_deferred_first8;
  memory->memory_regions_arm9[0xe].store_handler.extended_function.store16 =
       store_oam_deferred_first16;
  memory->memory_regions_arm9[0xe].store_handler.extended_function.store32 =
       store_oam_deferred_first32;
  memory->memory_regions_arm9[0xe].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0xe].code_bitmap_fine = (u32 *)0x0;
  memory->memory_regions_arm9[0xe].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0xe].get_code_bitmap_fine = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0xf].mask = 0x7ff;
  memory->memory_regions_arm9[0xf].load_access = '\x02';
  *(undefined8 *)&memory->memory_regions_arm9[0xf].load_handler = 0x8008648080085b4;
  memory->memory_regions_arm9[0xf].load_handler.extended_function.load32 = load_oam_deferred_first32
  ;
  memory->memory_regions_arm9[0xf].store_access = '\x02';
  memory->memory_regions_arm9[0xf].store_handler.extended_function.store8 =
       store_oam_deferred_first8;
  memory->memory_regions_arm9[0xf].store_handler.extended_function.store16 =
       store_oam_deferred_first16;
  pmVar5 = memory->memory_interface_arm9;
  memory->memory_regions_arm9[0xf].store_handler.extended_function.store32 =
       store_oam_deferred_first32;
  memory->memory_regions_arm9[0xf].code_bitmap_coarse = (u32 *)0x0;
  memory->memory_regions_arm9[0xf].get_code_bitmap_coarse = memory_get_code_bitmap_null;
  memory->memory_regions_arm9[0xf].get_code_bitmap_fine = memory_get_code_bitmap_null;
  pmVar2 = pmVar5->memory;
  memory->memory_regions_arm9[0xf].code_bitmap_fine = (u32 *)0x0;
  uVar4 = pmVar2->dtcm_base;
  uVar3 = pmVar2->dtcm_end;
  if (uVar3 < 0x6000001 || 0x5000000 < uVar4) {
    uVar1 = 0x1000000;
    uVar4 = 0x5000000;
  }
  else {
    unmap_memory_page_region_direct(pmVar5,0x5000000,uVar4 + 0xfb000000);
    uVar1 = 0x6000000 - uVar3;
  }
  unmap_memory_page_region_direct(pmVar5,uVar4,uVar1);
  pmVar5 = memory->memory_interface_arm9;
  uVar4 = pmVar5->memory->dtcm_base;
  uVar3 = pmVar5->memory->dtcm_end;
  if (uVar4 < 0x7000001 && 0x8000000 < uVar3) {
    unmap_memory_page_region_direct(pmVar5,0x7000000,uVar4 + 0xf9000000);
    uVar1 = 0x8000000 - uVar3;
  }
  else {
    uVar1 = 0x1000000;
    uVar4 = 0x7000000;
  }
  unmap_memory_page_region_direct(pmVar5,uVar4,uVar1);
  return;
}


