/*
 * Ghidra decompilation
 *
 * Function : map_cartridge_region_motion
 * Address  : 0011a910
 * Program  : drastic64
 */


void map_cartridge_region_motion(undefined8 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x600) = 0x7fffff;
  *(code **)(param_2 + 0x608) = load_motion_low_8;
  *(code **)(param_2 + 0x610) = load_motion_low_16;
  *(code **)(param_2 + 0x618) = load_motion_low_32;
  *(undefined2 *)(param_2 + 0x658) = 0x302;
  *(undefined8 *)(param_2 + 0x638) = 0;
  *(undefined8 *)(param_2 + 0x640) = 0;
  *(code **)(param_2 + 0x648) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x650) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_2 + 0x660) = 0x7fffff;
  *(code **)(param_2 + 0x668) = load_motion_low_8;
  *(code **)(param_2 + 0x670) = load_motion_low_16;
  *(code **)(param_2 + 0x678) = load_motion_low_32;
  *(undefined2 *)(param_2 + 0x6b8) = 0x302;
  *(undefined8 *)(param_2 + 0x698) = 0;
  *(undefined8 *)(param_2 + 0x6a0) = 0;
  *(code **)(param_2 + 0x6a8) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x6b0) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_2 + 0x6c0) = 0x7fffff;
  *(code **)(param_2 + 0x6c8) = load_motion_low_8;
  *(code **)(param_2 + 0x6d0) = load_motion_low_16;
  *(code **)(param_2 + 0x6d8) = load_motion_low_32;
  *(undefined2 *)(param_2 + 0x718) = 0x302;
  *(undefined8 *)(param_2 + 0x6f8) = 0;
  *(undefined8 *)(param_2 + 0x700) = 0;
  *(code **)(param_2 + 0x708) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x710) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_2 + 0x720) = 0x7fffff;
  *(code **)(param_2 + 0x728) = load_motion_low_8;
  *(code **)(param_2 + 0x730) = load_motion_low_16;
  *(code **)(param_2 + 0x738) = load_motion_low_32;
  *(undefined2 *)(param_2 + 0x778) = 0x302;
  *(undefined8 *)(param_2 + 0x758) = 0;
  *(undefined8 *)(param_2 + 0x760) = 0;
  *(code **)(param_2 + 0x768) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x770) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_2 + 0x780) = 0x7fffff;
  *(code **)(param_2 + 0x788) = load_motion_high_8;
  *(code **)(param_2 + 0x790) = load_motion_high_16;
  *(code **)(param_2 + 0x798) = load_motion_high_32;
  *(undefined2 *)(param_2 + 0x7d8) = 0x302;
  *(undefined8 *)(param_2 + 0x7b8) = 0;
  *(undefined8 *)(param_2 + 0x7c0) = 0;
  *(code **)(param_2 + 0x7c8) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 2000) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_2 + 0x7e0) = 0x7fffff;
  *(code **)(param_2 + 0x7e8) = load_motion_high_8;
  *(code **)(param_2 + 0x7f0) = load_motion_high_16;
  *(code **)(param_2 + 0x7f8) = load_motion_high_32;
  *(undefined2 *)(param_2 + 0x838) = 0x302;
  *(undefined8 *)(param_2 + 0x818) = 0;
  *(undefined8 *)(param_2 + 0x820) = 0;
  *(code **)(param_2 + 0x828) = memory_get_code_bitmap_null;
  *(code **)(param_2 + 0x830) = memory_get_code_bitmap_null;
  return;
}


