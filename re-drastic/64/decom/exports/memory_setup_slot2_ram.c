/*
 * Ghidra decompilation
 *
 * Function : memory_setup_slot2_ram
 * Address  : 0011a450
 * Program  : drastic64
 */


undefined8 memory_setup_slot2_ram(long param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *pvVar1;
  undefined8 uVar2;
  
  __ptr = malloc(0x2000000);
  *(void **)(param_1 + 0xfba38) = __ptr;
  *(undefined *)(param_1 + 0xfba64) = 0;
  *(undefined4 *)(param_1 + 0xfba60) = 0x2000000;
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    __ptr_00 = malloc(0x800);
    *(void **)(param_1 + 0xaf170) = __ptr_00;
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      uVar2 = 0xffffffff;
      *(undefined8 *)(param_1 + 0xfba38) = 0;
    }
    else {
      pvVar1 = malloc(0x200000);
      *(void **)(param_1 + 0xef1b0) = pvVar1;
      if (pvVar1 == (void *)0x0) {
        free(__ptr);
        free(__ptr_00);
        *(undefined8 *)(param_1 + 0xfba38) = 0;
        uVar2 = 0xffffffff;
        *(undefined8 *)(param_1 + 0xaf170) = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0xfc0f0) = 0;
        *(long *)(param_1 + 0xfc0b8) = *(long *)(param_1 + 0xfba38);
        *(undefined2 *)(param_1 + 0xfc150) = 0;
        *(undefined8 *)(param_1 + 0xfc0a0) = *(undefined8 *)(param_1 + 0xfba38);
        *(undefined8 *)(param_1 + 0xfc0d0) = *(undefined8 *)(param_1 + 0xaf170);
        *(undefined8 *)(param_1 + 0xfc0d8) = *(undefined8 *)(param_1 + 0xef1b0);
        *(undefined2 *)(param_1 + 0xfc1b0) = 0;
        *(long *)(param_1 + 0xfc130) = *(long *)(param_1 + 0xaf170) + 0x200;
        *(long *)(param_1 + 0xfc138) = *(long *)(param_1 + 0xef1b0) + 0x80000;
        *(long *)(param_1 + 0xfc160) = *(long *)(param_1 + 0xfba38) + 0x1000000;
        *(undefined4 *)(param_1 + 0xfc098) = 0x7fffff;
        *(code **)(param_1 + 0xfc0e0) = memory_get_code_bitmap_coarse_direct;
        *(code **)(param_1 + 0xfc0e8) = memory_get_code_bitmap_fine_direct;
        *(undefined4 *)(param_1 + 0xfc0f8) = 0x7fffff;
        *(long *)(param_1 + 0xfc100) = *(long *)(param_1 + 0xfba38) + 0x800000;
        *(long *)(param_1 + 0xfc118) = *(long *)(param_1 + 0xfba38) + 0x800000;
        *(code **)(param_1 + 0xfc140) = memory_get_code_bitmap_coarse_direct;
        *(code **)(param_1 + 0xfc148) = memory_get_code_bitmap_fine_direct;
        *(undefined4 *)(param_1 + 0xfc158) = 0x7fffff;
        *(long *)(param_1 + 0xfc178) = *(long *)(param_1 + 0xfba38) + 0x1000000;
        *(long *)(param_1 + 0xfc190) = *(long *)(param_1 + 0xaf170) + 0x400;
        *(code **)(param_1 + 0xfc1a0) = memory_get_code_bitmap_coarse_direct;
        *(undefined2 *)(param_1 + 0xfc210) = 0;
        *(long *)(param_1 + 0xfc198) = *(long *)(param_1 + 0xef1b0) + 0x100000;
        *(code **)(param_1 + 0xfc1a8) = memory_get_code_bitmap_fine_direct;
        *(undefined4 *)(param_1 + 0xfc1b8) = 0x7fffff;
        *(long *)(param_1 + 0xfc1c0) = *(long *)(param_1 + 0xfba38) + 0x1800000;
        *(long *)(param_1 + 0xfc1d8) = *(long *)(param_1 + 0xfba38) + 0x1800000;
        *(long *)(param_1 + 0xfc1f0) = *(long *)(param_1 + 0xaf170) + 0x600;
        *(long *)(param_1 + 0xfc1f8) = *(long *)(param_1 + 0xef1b0) + 0x180000;
        *(code **)(param_1 + 0xfc200) = memory_get_code_bitmap_coarse_direct;
        *(code **)(param_1 + 0xfc208) = memory_get_code_bitmap_fine_direct;
        *(undefined4 *)(param_1 + 0xfcc98) = 0x7fffff;
        *(undefined8 *)(param_1 + 0xfcca0) = *(undefined8 *)(param_1 + 0xfba38);
        *(undefined2 *)(param_1 + 0xfccf0) = 0;
        *(undefined8 *)(param_1 + 0xfccb8) = *(undefined8 *)(param_1 + 0xfba38);
        *(undefined8 *)(param_1 + 0xfccd0) = *(undefined8 *)(param_1 + 0xaf170);
        *(undefined8 *)(param_1 + 0xfccd8) = *(undefined8 *)(param_1 + 0xef1b0);
        *(code **)(param_1 + 0xfcce0) = memory_get_code_bitmap_coarse_direct;
        *(code **)(param_1 + 0xfcce8) = memory_get_code_bitmap_fine_direct;
        *(undefined4 *)(param_1 + 0xfccf8) = 0x7fffff;
        *(long *)(param_1 + 0xfcd00) = *(long *)(param_1 + 0xfba38) + 0x800000;
        *(undefined2 *)(param_1 + 0xfcd50) = 0;
        uVar2 = 0;
        *(long *)(param_1 + 0xfcd18) = *(long *)(param_1 + 0xfba38) + 0x800000;
        *(long *)(param_1 + 0xfcd30) = *(long *)(param_1 + 0xaf170) + 0x200;
        *(long *)(param_1 + 0xfcd38) = *(long *)(param_1 + 0xef1b0) + 0x80000;
        *(code **)(param_1 + 0xfcd40) = memory_get_code_bitmap_coarse_direct;
        *(code **)(param_1 + 0xfcd48) = memory_get_code_bitmap_fine_direct;
        *(undefined4 *)(param_1 + 0xfcd58) = 0x7fffff;
        *(long *)(param_1 + 0xfcd60) = *(long *)(param_1 + 0xfba38) + 0x1000000;
        *(undefined2 *)(param_1 + 0xfcdb0) = 0;
        *(long *)(param_1 + 0xfcd78) = *(long *)(param_1 + 0xfba38) + 0x1000000;
        *(long *)(param_1 + 0xfcd90) = *(long *)(param_1 + 0xaf170) + 0x400;
        *(long *)(param_1 + 0xfcd98) = *(long *)(param_1 + 0xef1b0) + 0x100000;
        *(code **)(param_1 + 0xfcda0) = memory_get_code_bitmap_coarse_direct;
        *(code **)(param_1 + 0xfcda8) = memory_get_code_bitmap_fine_direct;
        *(undefined4 *)(param_1 + 0xfcdb8) = 0x7fffff;
        *(long *)(param_1 + 0xfcdc0) = *(long *)(param_1 + 0xfba38) + 0x1800000;
        *(undefined2 *)(param_1 + 0xfce10) = 0;
        *(long *)(param_1 + 0xfcdd8) = *(long *)(param_1 + 0xfba38) + 0x1800000;
        *(long *)(param_1 + 0xfcdf0) = *(long *)(param_1 + 0xaf170) + 0x600;
        *(long *)(param_1 + 0xfcdf8) = *(long *)(param_1 + 0xef1b0) + 0x180000;
        *(code **)(param_1 + 0xfce00) = memory_get_code_bitmap_coarse_direct;
        *(code **)(param_1 + 0xfce08) = memory_get_code_bitmap_fine_direct;
      }
    }
  }
  return uVar2;
}


