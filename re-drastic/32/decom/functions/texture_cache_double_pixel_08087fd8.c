/*
 * Ghidra decompilation
 *
 * Function : texture_cache_double_pixel
 * Address  : 08087fd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 texture_cache_double_pixel(u32 pixel)

{
  return (pixel + 0x1f1f1f >> 5 & 0x10101) + pixel * 2;
}


