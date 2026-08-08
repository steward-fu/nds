/*
 * Ghidra decompilation
 *
 * Function : remap_palette_oam_deferred
 * Address  : 0011b520
 * Program  : drastic64
 */


void remap_palette_oam_deferred(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  
  *(undefined4 *)(param_1 + 0xfbe58) = 0x7ff;
  *(code **)(param_1 + 0xfbe60) = load_palette_deferred_first8;
  *(code **)(param_1 + 0xfbe68) = load_palette_deferred_first16;
  *(code **)(param_1 + 0xfbe70) = load_palette_deferred_first32;
  *(undefined2 *)(param_1 + 0xfbeb0) = 0x202;
  *(code **)(param_1 + 0xfbe78) = store_palette_deferred_first8;
  *(code **)(param_1 + 0xfbe80) = store_palette_deferred_first16;
  *(code **)(param_1 + 0xfbe88) = store_palette_deferred_first32;
  *(undefined8 *)(param_1 + 0xfbe90) = 0;
  *(undefined8 *)(param_1 + 0xfbe98) = 0;
  *(code **)(param_1 + 0xfbea0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfbea8) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfbeb8) = 0x7ff;
  *(code **)(param_1 + 0xfbec0) = load_palette_deferred_first8;
  *(code **)(param_1 + 0xfbec8) = load_palette_deferred_first16;
  iVar5 = 0x1000000;
  *(code **)(param_1 + 0xfbed0) = load_palette_deferred_first32;
  *(undefined2 *)(param_1 + 0xfbf10) = 0x202;
  *(code **)(param_1 + 0xfbed8) = store_palette_deferred_first8;
  *(code **)(param_1 + 0xfbee0) = store_palette_deferred_first16;
  *(code **)(param_1 + 0xfbee8) = store_palette_deferred_first32;
  *(undefined8 *)(param_1 + 0xfbef0) = 0;
  *(undefined8 *)(param_1 + 0xfbef8) = 0;
  *(code **)(param_1 + 0xfbf00) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfbf08) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfbfd8) = 0x7ff;
  *(undefined2 *)(param_1 + 0xfc030) = 0x202;
  *(undefined2 *)(param_1 + 0xfc090) = 0x202;
  *(code **)(param_1 + 0xfbfe0) = load_oam_deferred_first8;
  *(code **)(param_1 + 0xfbfe8) = load_oam_deferred_first16;
  lVar3 = *(long *)(param_1 + 0xfba88);
  *(code **)(param_1 + 0xfbff8) = store_oam_deferred_first8;
  *(code **)(param_1 + 0xfc000) = store_oam_deferred_first16;
  *(undefined8 *)(param_1 + 0xfc010) = 0;
  *(undefined8 *)(param_1 + 0xfc018) = 0;
  lVar6 = *(long *)(nds_system + lVar3 + 0xb04008);
  *(code **)(param_1 + 0xfbff0) = load_oam_deferred_first32;
  *(code **)(param_1 + 0xfc008) = store_oam_deferred_first32;
  *(code **)(param_1 + 0xfc020) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc028) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfc038) = 0x7ff;
  *(code **)(param_1 + 0xfc040) = load_oam_deferred_first8;
  *(code **)(param_1 + 0xfc048) = load_oam_deferred_first16;
  *(code **)(param_1 + 0xfc050) = load_oam_deferred_first32;
  *(code **)(param_1 + 0xfc058) = store_oam_deferred_first8;
  *(code **)(param_1 + 0xfc060) = store_oam_deferred_first16;
  *(code **)(param_1 + 0xfc068) = store_oam_deferred_first32;
  *(undefined8 *)(param_1 + 0xfc070) = 0;
  uVar1 = *(uint *)(lVar6 + 0xfd4d0);
  uVar2 = *(uint *)(lVar6 + 0xfd4d4);
  *(undefined8 *)(param_1 + 0xfc078) = 0;
  *(code **)(param_1 + 0xfc080) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc088) = memory_get_code_bitmap_null;
  uVar7 = 0x5000000;
  if ((0x5000000 >= uVar1 && 0x5ffffff < uVar2) && (0x5000000 < uVar1 || uVar2 != 0x6000000)) {
    lVar3 = unmap_memory_page_region_direct(lVar3,0x5000000,uVar1 + 0xfb000000);
    iVar5 = 0x6000000 - uVar2;
    uVar7 = uVar1;
  }
  unmap_memory_page_region_direct(lVar3,uVar7,iVar5);
  lVar3 = *(long *)(param_1 + 0xfba88);
  uVar1 = *(uint *)(*(long *)(nds_system + lVar3 + 0xb04008) + 0xfd4d4);
  uVar2 = *(uint *)(*(long *)(nds_system + lVar3 + 0xb04008) + 0xfd4d0);
  if ((uVar1 < 0x8000001 || 0x6ffffff < uVar2) && (uVar1 < 0x8000001 || uVar2 != 0x7000000)) {
    unmap_memory_page_region_direct(lVar3,0x7000000);
    return;
  }
  uVar4 = unmap_memory_page_region_direct(lVar3,0x7000000,uVar2 + 0xf9000000);
  unmap_memory_page_region_direct(uVar4,uVar2,0x8000000 - uVar1);
  return;
}


