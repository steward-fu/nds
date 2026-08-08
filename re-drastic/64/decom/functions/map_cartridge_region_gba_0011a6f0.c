/*
 * Ghidra decompilation
 *
 * Function : map_cartridge_region_gba
 * Address  : 0011a6f0
 * Program  : drastic64
 */


void map_cartridge_region_gba(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  if (param_4 >> 0x17 != 0) {
    lVar1 = param_3 + 0x800000;
    iVar3 = (int)param_3;
    do {
      lVar4 = (ulong)((uint)((0x8000000 - iVar3) + (int)param_3) >> 0x17) * 0x60;
      lVar2 = param_2 + lVar4;
      *(undefined4 *)(param_2 + lVar4) = 0x7fffff;
      *(long *)(lVar2 + 8) = param_3;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x40) = 0;
      param_3 = param_3 + 0x800000;
      *(code **)(lVar2 + 0x48) = memory_get_code_bitmap_null;
      *(code **)(lVar2 + 0x50) = memory_get_code_bitmap_null;
      *(undefined2 *)(lVar2 + 0x58) = 0x300;
    } while (lVar1 + (ulong)((param_4 >> 0x17) - 1) * 0x800000 != param_3);
  }
  *(undefined4 *)(param_2 + 0x780) = 0x7fffff;
  *(code **)(param_2 + 0x788) = load_gba_backup_8;
  *(code **)(param_2 + 0x790) = load_gba_backup_16;
  *(code **)(param_2 + 0x798) = load_gba_backup_32;
  *(undefined2 *)(param_2 + 0x7d8) = 0x202;
  *(code **)(param_2 + 0x7a0) = store_gba_backup_8;
  *(code **)(param_2 + 0x7a8) = store_gba_backup_16;
  *(code **)(param_2 + 0x7b0) = store_gba_backup_32;
  *(undefined8 *)(param_2 + 0x7b8) = 0;
  *(undefined8 *)(param_2 + 0x7c0) = 0;
  *(code **)(param_2 + 0x7c8) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 2000) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_2 + 0x7e0) = 0x7fffff;
  *(code **)(param_2 + 0x7e8) = load_gba_backup_8;
  *(code **)(param_2 + 0x7f0) = load_gba_backup_16;
  *(code **)(param_2 + 0x7f8) = load_gba_backup_32;
  *(undefined2 *)(param_2 + 0x838) = 0x202;
  *(code **)(param_2 + 0x800) = store_gba_backup_8;
  *(code **)(param_2 + 0x808) = store_gba_backup_16;
  *(code **)(param_2 + 0x810) = store_gba_backup_32;
  *(undefined8 *)(param_2 + 0x818) = 0;
  *(undefined8 *)(param_2 + 0x820) = 0;
  *(code **)(param_2 + 0x828) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x830) = memory_get_code_bitmap_null;
  return;
}


