/*
 * Ghidra decompilation
 *
 * Function : memory_clear_slot2
 * Address  : 0011acd0
 * Program  : drastic64
 */


void memory_clear_slot2(long param_1)

{
  if (*(void **)(param_1 + 0xfba38) != (void *)0x0) {
    free(*(void **)(param_1 + 0xfba38));
  }
  if (*(void **)(param_1 + 0xaf170) != (void *)0x0) {
    free(*(void **)(param_1 + 0xaf170));
  }
  if (*(void **)(param_1 + 0xef1b0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xef1b0));
  }
  *(undefined8 *)(param_1 + 0xfba38) = 0;
  *(undefined4 *)(param_1 + 0xfba60) = 0;
  *(undefined8 *)(param_1 + 0xaf170) = 0;
  *(undefined8 *)(param_1 + 0xef1b0) = 0;
  *(undefined4 *)(param_1 + 0xfc098) = 0x7fffff;
  *(code **)(param_1 + 0xfc0a0) = load_cart_arm9_8;
  *(code **)(param_1 + 0xfc0a8) = load_cart_arm9_16;
  *(code **)(param_1 + 0xfc0b0) = load_cart_arm9_32;
  *(undefined8 *)(param_1 + 0xfc0d0) = 0;
  *(undefined8 *)(param_1 + 0xfc0d8) = 0;
  *(code **)(param_1 + 0xfc0e0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc0e8) = memory_get_code_bitmap_null;
  *(undefined2 *)(param_1 + 0xfc0f0) = 0x302;
  *(undefined4 *)(param_1 + 0xfcc98) = 0x7fffff;
  *(code **)(param_1 + 0xfcca0) = load_cart_arm7_8;
  *(code **)(param_1 + 0xfcca8) = load_cart_arm7_16;
  *(code **)(param_1 + 0xfccb0) = load_cart_arm7_32;
  *(undefined2 *)(param_1 + 0xfccf0) = 0x302;
  *(undefined8 *)(param_1 + 0xfccd0) = 0;
  *(undefined8 *)(param_1 + 0xfccd8) = 0;
  *(code **)(param_1 + 0xfcce0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfcce8) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfc0f8) = 0x7fffff;
  *(code **)(param_1 + 0xfc100) = load_cart_arm9_8;
  *(code **)(param_1 + 0xfc108) = load_cart_arm9_16;
  *(code **)(param_1 + 0xfc110) = load_cart_arm9_32;
  *(undefined8 *)(param_1 + 0xfc130) = 0;
  *(undefined8 *)(param_1 + 0xfc138) = 0;
  *(code **)(param_1 + 0xfc140) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc148) = memory_get_code_bitmap_null;
  *(undefined2 *)(param_1 + 0xfc150) = 0x302;
  *(undefined4 *)(param_1 + 0xfccf8) = 0x7fffff;
  *(code **)(param_1 + 0xfcd00) = load_cart_arm7_8;
  *(code **)(param_1 + 0xfcd08) = load_cart_arm7_16;
  *(code **)(param_1 + 0xfcd10) = load_cart_arm7_32;
  *(undefined2 *)(param_1 + 0xfcd50) = 0x302;
  *(undefined8 *)(param_1 + 0xfcd30) = 0;
  *(undefined8 *)(param_1 + 0xfcd38) = 0;
  *(code **)(param_1 + 0xfcd40) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfcd48) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfc158) = 0x7fffff;
  *(code **)(param_1 + 0xfc160) = load_cart_arm9_8;
  *(code **)(param_1 + 0xfc168) = load_cart_arm9_16;
  *(code **)(param_1 + 0xfc170) = load_cart_arm9_32;
  *(undefined8 *)(param_1 + 0xfc190) = 0;
  *(undefined8 *)(param_1 + 0xfc198) = 0;
  *(code **)(param_1 + 0xfc1a0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc1a8) = memory_get_code_bitmap_null;
  *(undefined2 *)(param_1 + 0xfc1b0) = 0x302;
  *(undefined4 *)(param_1 + 0xfcd58) = 0x7fffff;
  *(code **)(param_1 + 0xfcd60) = load_cart_arm7_8;
  *(code **)(param_1 + 0xfcd68) = load_cart_arm7_16;
  *(code **)(param_1 + 0xfcd70) = load_cart_arm7_32;
  *(undefined2 *)(param_1 + 0xfcdb0) = 0x302;
  *(undefined8 *)(param_1 + 0xfcd90) = 0;
  *(undefined8 *)(param_1 + 0xfcd98) = 0;
  *(code **)(param_1 + 0xfcda0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfcda8) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfc1b8) = 0x7fffff;
  *(code **)(param_1 + 0xfc1c0) = load_cart_arm9_8;
  *(code **)(param_1 + 0xfc1c8) = load_cart_arm9_16;
  *(code **)(param_1 + 0xfc1d0) = load_cart_arm9_32;
  *(undefined8 *)(param_1 + 0xfc1f0) = 0;
  *(undefined8 *)(param_1 + 0xfc1f8) = 0;
  *(code **)(param_1 + 0xfc200) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc208) = memory_get_code_bitmap_null;
  *(undefined2 *)(param_1 + 0xfc210) = 0x302;
  *(undefined4 *)(param_1 + 0xfcdb8) = 0x7fffff;
  *(code **)(param_1 + 0xfcdc0) = load_cart_arm7_8;
  *(code **)(param_1 + 0xfcdc8) = load_cart_arm7_16;
  *(code **)(param_1 + 0xfcdd0) = load_cart_arm7_32;
  *(undefined2 *)(param_1 + 0xfce10) = 0x302;
  *(undefined8 *)(param_1 + 0xfcdf0) = 0;
  *(undefined8 *)(param_1 + 0xfcdf8) = 0;
  *(code **)(param_1 + 0xfce00) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfce08) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfc218) = 0x7fffff;
  *(code **)(param_1 + 0xfc220) = load_cart_arm9_8;
  *(code **)(param_1 + 0xfc228) = load_cart_arm9_16;
  *(code **)(param_1 + 0xfc230) = load_cart_arm9_32;
  *(undefined2 *)(param_1 + 0xfc270) = 0x302;
  *(undefined8 *)(param_1 + 0xfc250) = 0;
  *(undefined8 *)(param_1 + 0xfc258) = 0;
  *(code **)(param_1 + 0xfc260) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc268) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfce18) = 0x7fffff;
  *(code **)(param_1 + 0xfce20) = load_cart_arm7_8;
  *(code **)(param_1 + 0xfce28) = load_cart_arm7_16;
  *(code **)(param_1 + 0xfce30) = load_cart_arm7_32;
  *(undefined2 *)(param_1 + 0xfce70) = 0x302;
  *(undefined8 *)(param_1 + 0xfce50) = 0;
  *(undefined8 *)(param_1 + 0xfce58) = 0;
  *(code **)(param_1 + 0xfce60) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfce68) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfc278) = 0x7fffff;
  *(code **)(param_1 + 0xfc280) = load_cart_arm9_8;
  *(code **)(param_1 + 0xfc288) = load_cart_arm9_16;
  *(code **)(param_1 + 0xfc290) = load_cart_arm9_32;
  *(undefined2 *)(param_1 + 0xfc2d0) = 0x302;
  *(undefined8 *)(param_1 + 0xfc2b0) = 0;
  *(undefined8 *)(param_1 + 0xfc2b8) = 0;
  *(code **)(param_1 + 0xfc2c0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfc2c8) = memory_get_code_bitmap_null;
  *(undefined4 *)(param_1 + 0xfce78) = 0x7fffff;
  *(code **)(param_1 + 0xfce80) = load_cart_arm7_8;
  *(code **)(param_1 + 0xfce88) = load_cart_arm7_16;
  *(code **)(param_1 + 0xfce90) = load_cart_arm7_32;
  *(undefined2 *)(param_1 + 0xfced0) = 0x302;
  *(undefined8 *)(param_1 + 0xfceb0) = 0;
  *(undefined8 *)(param_1 + 0xfceb8) = 0;
  *(code **)(param_1 + 0xfcec0) = memory_get_code_bitmap_null;
  *(code **)(param_1 + 0xfcec8) = memory_get_code_bitmap_null;
  return;
}


