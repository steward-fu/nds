/*
 * Ghidra decompilation
 *
 * Function : get_screen_bytes_per_pixel
 * Address  : 0018aab0
 * Program  : drastic64
 */


undefined4 get_screen_bytes_per_pixel(void)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (DAT_040315d4._4_4_ == 0) {
    uVar1 = DAT_040315a8;
  }
  return uVar1;
}


