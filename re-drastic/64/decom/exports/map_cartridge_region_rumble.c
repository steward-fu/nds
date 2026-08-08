/*
 * Ghidra decompilation
 *
 * Function : map_cartridge_region_rumble
 * Address  : 0011a830
 * Program  : drastic64
 */


void map_cartridge_region_rumble(undefined8 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x600) = 0x7fffff;
  *(code **)(param_2 + 0x608) = load_rumble_8;
  *(code **)(param_2 + 0x610) = load_rumble_16;
  *(code **)(param_2 + 0x618) = load_rumble_32;
  *(undefined2 *)(param_2 + 0x658) = 0x202;
  *(code **)(param_2 + 0x620) = store_rumble_8;
  *(code **)(param_2 + 0x628) = store_rumble_16;
  *(code **)(param_2 + 0x630) = store_rumble_32;
  *(undefined8 *)(param_2 + 0x638) = 0;
  *(undefined8 *)(param_2 + 0x640) = 0;
  *(code **)(param_2 + 0x648) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x650) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_2 + 0x660) = 0x7fffff;
  *(code **)(param_2 + 0x668) = load_rumble_8;
  *(code **)(param_2 + 0x670) = load_rumble_16;
  *(code **)(param_2 + 0x678) = load_rumble_32;
  *(undefined2 *)(param_2 + 0x6b8) = 0x202;
  *(code **)(param_2 + 0x680) = store_rumble_8;
  *(code **)(param_2 + 0x688) = store_rumble_16;
  *(code **)(param_2 + 0x690) = store_rumble_32;
  *(undefined8 *)(param_2 + 0x698) = 0;
  *(undefined8 *)(param_2 + 0x6a0) = 0;
  *(code **)(param_2 + 0x6a8) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x6b0) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_2 + 0x6c0) = 0x7fffff;
  *(code **)(param_2 + 0x6c8) = load_rumble_8;
  *(code **)(param_2 + 0x6d0) = load_rumble_16;
  *(code **)(param_2 + 0x6d8) = load_rumble_32;
  *(undefined2 *)(param_2 + 0x718) = 0x202;
  *(code **)(param_2 + 0x6e0) = store_rumble_8;
  *(code **)(param_2 + 0x6e8) = store_rumble_16;
  *(code **)(param_2 + 0x6f0) = store_rumble_32;
  *(undefined8 *)(param_2 + 0x6f8) = 0;
  *(undefined8 *)(param_2 + 0x700) = 0;
  *(code **)(param_2 + 0x708) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x710) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_2 + 0x720) = 0x7fffff;
  *(code **)(param_2 + 0x728) = load_rumble_8;
  *(code **)(param_2 + 0x730) = load_rumble_16;
  *(code **)(param_2 + 0x738) = load_rumble_32;
  *(undefined2 *)(param_2 + 0x778) = 0x202;
  *(code **)(param_2 + 0x740) = store_rumble_8;
  *(code **)(param_2 + 0x748) = store_rumble_16;
  *(code **)(param_2 + 0x750) = store_rumble_32;
  *(undefined8 *)(param_2 + 0x758) = 0;
  *(undefined8 *)(param_2 + 0x760) = 0;
  *(code **)(param_2 + 0x768) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x770) = memory_get_code_bitmap_null;
  return;
}


