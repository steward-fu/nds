/*
 * Ghidra decompilation
 *
 * Function : remap_palette_oam_direct
 * Address  : 0011b6d0
 * Program  : drastic64
 */


void remap_palette_oam_direct(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  
  lVar4 = param_1 + 0x16070;
  *(undefined4 *)(param_1 + 0xfbe58) = 0x7ff;
  *(long *)(param_1 + 0xfbe60) = lVar4;
  *(undefined2 *)(param_1 + 0xfbeb0) = 0;
  *(long *)(param_1 + 0xfbe78) = lVar4;
  *(undefined8 *)(param_1 + 0xfbe90) = 0;
  *(undefined8 *)(param_1 + 0xfbe98) = 0;
  *(code **)(param_1 + 0xfbea0) = memory_get_code_bitmap_coarse_direct;
  *(code **)(param_1 + 0xfbea8) = memory_get_code_bitmap_fine_direct;
  iVar6 = 0x1000000;
  *(undefined4 *)(param_1 + 0xfbeb8) = 0x7ff;
  *(long *)(param_1 + 0xfbec0) = lVar4;
  *(undefined2 *)(param_1 + 0xfbf10) = 0;
  *(long *)(param_1 + 0xfbed8) = lVar4;
  *(undefined8 *)(param_1 + 0xfbef0) = 0;
  *(undefined8 *)(param_1 + 0xfbef8) = 0;
  lVar4 = param_1 + 0x15070;
  *(code **)(param_1 + 0xfbf00) = memory_get_code_bitmap_coarse_direct;
  *(code **)(param_1 + 0xfbf08) = memory_get_code_bitmap_fine_direct;
  *(undefined4 *)(param_1 + 0xfbfd8) = 0x7ff;
  *(long *)(param_1 + 0xfbfe0) = lVar4;
  *(long *)(param_1 + 0xfbff8) = lVar4;
  *(undefined8 *)(param_1 + 0xfc010) = 0;
  *(undefined8 *)(param_1 + 0xfc018) = 0;
  *(code **)(param_1 + 0xfc020) = memory_get_code_bitmap_coarse_direct;
  *(code **)(param_1 + 0xfc028) = memory_get_code_bitmap_fine_direct;
  *(undefined2 *)(param_1 + 0xfc030) = 0;
  *(undefined4 *)(param_1 + 0xfc038) = 0x7ff;
  *(long *)(param_1 + 0xfc040) = lVar4;
  *(undefined2 *)(param_1 + 0xfc090) = 0;
  *(code **)(param_1 + 0xfc080) = memory_get_code_bitmap_coarse_direct;
  *(code **)(param_1 + 0xfc088) = memory_get_code_bitmap_fine_direct;
  lVar3 = *(long *)(param_1 + 0xfba88);
  *(long *)(param_1 + 0xfc058) = lVar4;
  *(undefined8 *)(param_1 + 0xfc070) = 0;
  *(undefined8 *)(param_1 + 0xfc078) = 0;
  uVar1 = *(uint *)(*(long *)(nds_system + lVar3 + 0xb04008) + 0xfd4d0);
  uVar2 = *(uint *)(*(long *)(nds_system + lVar3 + 0xb04008) + 0xfd4d4);
  uVar7 = 0x5000000;
  if ((0x5000000 >= uVar1 && 0x5ffffff < uVar2) && (0x5000000 < uVar1 || uVar2 != 0x6000000)) {
    lVar3 = unmap_memory_page_region_direct(lVar3,0x5000000,uVar1 + 0xfb000000);
    iVar6 = 0x6000000 - uVar2;
    uVar7 = uVar1;
  }
  unmap_memory_page_region_direct(lVar3,uVar7,iVar6);
  lVar4 = *(long *)(param_1 + 0xfba88);
  uVar1 = *(uint *)(*(long *)(nds_system + lVar4 + 0xb04008) + 0xfd4d4);
  uVar2 = *(uint *)(*(long *)(nds_system + lVar4 + 0xb04008) + 0xfd4d0);
  if ((uVar1 < 0x8000001 || 0x6ffffff < uVar2) && (uVar1 < 0x8000001 || uVar2 != 0x7000000)) {
    unmap_memory_page_region_direct(lVar4,0x7000000);
    return;
  }
  uVar5 = unmap_memory_page_region_direct(lVar4,0x7000000,uVar2 + 0xf9000000);
  unmap_memory_page_region_direct(uVar5,uVar2,0x8000000 - uVar1);
  return;
}


