/*
 * Ghidra decompilation
 *
 * Function : map_cartridge_region_slot2_ram
 * Address  : 0011a330
 * Program  : drastic64
 */


void map_cartridge_region_slot2_ram(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  *(undefined *)(param_2 + 0x658) = 0;
  uVar7 = *(undefined8 *)(param_1 + 0xfba38);
  *(undefined *)(param_2 + 0x659) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0xfba38);
  uVar2 = *(undefined8 *)(param_1 + 0xaf170);
  uVar1 = *(undefined8 *)(param_1 + 0xef1b0);
  *(undefined *)(param_2 + 0x6b8) = 0;
  lVar9 = *(long *)(param_1 + 0xfba38);
  *(undefined *)(param_2 + 0x6b9) = 0;
  *(undefined4 *)(param_2 + 0x600) = 0x7fffff;
  *(undefined8 *)(param_2 + 0x608) = uVar7;
  *(undefined8 *)(param_2 + 0x620) = uVar5;
  lVar8 = *(long *)(param_1 + 0xfba38);
  *(undefined8 *)(param_2 + 0x638) = uVar2;
  *(undefined8 *)(param_2 + 0x640) = uVar1;
  lVar6 = *(long *)(param_1 + 0xaf170);
  *(code **)(param_2 + 0x648) = memory_get_code_bitmap_coarse_direct;
  *(code **)(param_2 + 0x650) = memory_get_code_bitmap_fine_direct;
  lVar3 = *(long *)(param_1 + 0xef1b0);
  *(undefined4 *)(param_2 + 0x660) = 0x7fffff;
  *(long *)(param_2 + 0x668) = lVar9 + 0x800000;
  *(long *)(param_2 + 0x680) = lVar8 + 0x800000;
  *(undefined *)(param_2 + 0x718) = 0;
  *(long *)(param_2 + 0x698) = lVar6 + 0x200;
  *(long *)(param_2 + 0x6a0) = lVar3 + 0x80000;
  *(code **)(param_2 + 0x6a8) = memory_get_code_bitmap_coarse_direct;
  *(code **)(param_2 + 0x6b0) = memory_get_code_bitmap_fine_direct;
  lVar6 = *(long *)(param_1 + 0xfba38);
  *(undefined *)(param_2 + 0x719) = 0;
  *(undefined4 *)(param_2 + 0x6c0) = 0x7fffff;
  lVar3 = *(long *)(param_1 + 0xfba38);
  *(long *)(param_2 + 0x6c8) = lVar6 + 0x1000000;
  *(long *)(param_2 + 0x6e0) = lVar3 + 0x1000000;
  lVar4 = *(long *)(param_1 + 0xaf170);
  lVar6 = *(long *)(param_1 + 0xef1b0);
  *(undefined *)(param_2 + 0x778) = 0;
  lVar9 = *(long *)(param_1 + 0xfba38);
  *(undefined *)(param_2 + 0x779) = 0;
  lVar8 = *(long *)(param_1 + 0xfba38);
  lVar3 = *(long *)(param_1 + 0xef1b0);
  *(long *)(param_2 + 0x6f8) = lVar4 + 0x400;
  *(long *)(param_2 + 0x700) = lVar6 + 0x100000;
  *(code **)(param_2 + 0x708) = memory_get_code_bitmap_coarse_direct;
  *(code **)(param_2 + 0x710) = memory_get_code_bitmap_fine_direct;
  *(undefined4 *)(param_2 + 0x720) = 0x7fffff;
  lVar6 = *(long *)(param_1 + 0xaf170);
  *(long *)(param_2 + 0x728) = lVar9 + 0x1800000;
  *(long *)(param_2 + 0x740) = lVar8 + 0x1800000;
  *(long *)(param_2 + 0x758) = lVar6 + 0x600;
  *(long *)(param_2 + 0x760) = lVar3 + 0x180000;
  *(code **)(param_2 + 0x768) = memory_get_code_bitmap_coarse_direct;
  *(code **)(param_2 + 0x770) = memory_get_code_bitmap_fine_direct;
  return;
}


