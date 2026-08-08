/*
 * Ghidra decompilation
 *
 * Function : memory_setup_slot2_rumble
 * Address  : 0011aaf0
 * Program  : drastic64
 */


undefined8 memory_setup_slot2_rumble(long param_1)

{
  *(undefined4 *)(param_1 + 0xfc098) = 0x7fffff;
  *(code **)(param_1 + 0xfc0a0) = load_rumble_8;
  *(code **)(param_1 + 0xfc0a8) = load_rumble_16;
  *(code **)(param_1 + 0xfc0b0) = load_rumble_32;
  *(code **)(param_1 + 0xfc0b8) = store_rumble_8;
  *(code **)(param_1 + 0xfc0c0) = store_rumble_16;
  *(code **)(param_1 + 0xfc0c8) = store_rumble_32;
  *(undefined8 *)(param_1 + 0xfc0d0) = 0;
  *(undefined8 *)(param_1 + 0xfc0d8) = 0;
  *(code **)(param_1 + 0xfc0e0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc0e8) = memory_get_code_bitmap_null;
  *(undefined2 *)(param_1 + 0xfc0f0) = 0x202;
  *(undefined4 *)(param_1 + 0xfc0f8) = 0x7fffff;
  *(code **)(param_1 + 0xfc100) = load_rumble_8;
  *(code **)(param_1 + 0xfc108) = load_rumble_16;
  *(code **)(param_1 + 0xfc110) = load_rumble_32;
  *(undefined2 *)(param_1 + 0xfc150) = 0x202;
  *(code **)(param_1 + 0xfc118) = store_rumble_8;
  *(code **)(param_1 + 0xfc120) = store_rumble_16;
  *(code **)(param_1 + 0xfc128) = store_rumble_32;
  *(undefined8 *)(param_1 + 0xfc130) = 0;
  *(undefined8 *)(param_1 + 0xfc138) = 0;
  *(code **)(param_1 + 0xfc140) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc148) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfc158) = 0x7fffff;
  *(code **)(param_1 + 0xfc160) = load_rumble_8;
  *(code **)(param_1 + 0xfc168) = load_rumble_16;
  *(code **)(param_1 + 0xfc170) = load_rumble_32;
  *(undefined2 *)(param_1 + 0xfc1b0) = 0x202;
  *(code **)(param_1 + 0xfc178) = store_rumble_8;
  *(code **)(param_1 + 0xfc180) = store_rumble_16;
  *(code **)(param_1 + 0xfc188) = store_rumble_32;
  *(undefined8 *)(param_1 + 0xfc190) = 0;
  *(undefined8 *)(param_1 + 0xfc198) = 0;
  *(code **)(param_1 + 0xfc1a0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc1a8) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfc1b8) = 0x7fffff;
  *(code **)(param_1 + 0xfc1c0) = load_rumble_8;
  *(code **)(param_1 + 0xfc1c8) = load_rumble_16;
  *(code **)(param_1 + 0xfc1d0) = load_rumble_32;
  *(undefined2 *)(param_1 + 0xfc210) = 0x202;
  *(code **)(param_1 + 0xfc1d8) = store_rumble_8;
  *(code **)(param_1 + 0xfc1e0) = store_rumble_16;
  *(code **)(param_1 + 0xfc1e8) = store_rumble_32;
  *(undefined8 *)(param_1 + 0xfc1f0) = 0;
  *(undefined8 *)(param_1 + 0xfc1f8) = 0;
  *(code **)(param_1 + 0xfc200) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc208) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfcc98) = 0x7fffff;
  *(code **)(param_1 + 0xfcca0) = load_rumble_8;
  *(code **)(param_1 + 0xfcca8) = load_rumble_16;
  *(code **)(param_1 + 0xfccb0) = load_rumble_32;
  *(undefined2 *)(param_1 + 0xfccf0) = 0x202;
  *(code **)(param_1 + 0xfccb8) = store_rumble_8;
  *(code **)(param_1 + 0xfccc0) = store_rumble_16;
  *(code **)(param_1 + 0xfccc8) = store_rumble_32;
  *(undefined8 *)(param_1 + 0xfccd0) = 0;
  *(undefined8 *)(param_1 + 0xfccd8) = 0;
  *(code **)(param_1 + 0xfcce0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfcce8) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfccf8) = 0x7fffff;
  *(code **)(param_1 + 0xfcd00) = load_rumble_8;
  *(code **)(param_1 + 0xfcd08) = load_rumble_16;
  *(code **)(param_1 + 0xfcd10) = load_rumble_32;
  *(undefined2 *)(param_1 + 0xfcd50) = 0x202;
  *(code **)(param_1 + 0xfcd18) = store_rumble_8;
  *(code **)(param_1 + 0xfcd20) = store_rumble_16;
  *(code **)(param_1 + 0xfcd28) = store_rumble_32;
  *(undefined8 *)(param_1 + 0xfcd30) = 0;
  *(undefined8 *)(param_1 + 0xfcd38) = 0;
  *(code **)(param_1 + 0xfcd40) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfcd48) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfcd58) = 0x7fffff;
  *(code **)(param_1 + 0xfcd60) = load_rumble_8;
  *(code **)(param_1 + 0xfcd68) = load_rumble_16;
  *(code **)(param_1 + 0xfcd70) = load_rumble_32;
  *(undefined2 *)(param_1 + 0xfcdb0) = 0x202;
  *(code **)(param_1 + 0xfcd78) = store_rumble_8;
  *(code **)(param_1 + 0xfcd80) = store_rumble_16;
  *(code **)(param_1 + 0xfcd88) = store_rumble_32;
  *(undefined8 *)(param_1 + 0xfcd90) = 0;
  *(undefined8 *)(param_1 + 0xfcd98) = 0;
  *(code **)(param_1 + 0xfcda0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfcda8) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfcdb8) = 0x7fffff;
  *(code **)(param_1 + 0xfcdc0) = load_rumble_8;
  *(code **)(param_1 + 0xfcdc8) = load_rumble_16;
  *(code **)(param_1 + 0xfcdd0) = load_rumble_32;
  *(undefined2 *)(param_1 + 0xfce10) = 0x202;
  *(code **)(param_1 + 0xfcdd8) = store_rumble_8;
  *(code **)(param_1 + 0xfcde0) = store_rumble_16;
  *(code **)(param_1 + 0xfcde8) = store_rumble_32;
  *(undefined8 *)(param_1 + 0xfcdf0) = 0;
  *(undefined8 *)(param_1 + 0xfcdf8) = 0;
  *(code **)(param_1 + 0xfce00) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfce08) = memory_get_code_bitmap_null;
  return 0;
}


