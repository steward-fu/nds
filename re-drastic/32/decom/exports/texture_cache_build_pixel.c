/*
 * Ghidra decompilation
 *
 * Function : texture_cache_build_pixel
 * Address  : 08087ff8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 texture_cache_build_pixel(u32 pixel)

{
  uint uVar1;
  
  uVar1 = ((pixel << 0x11) >> 0x1b) << 0x10 | ((pixel << 0x16) >> 0x1b) << 8 | pixel & 0x1f;
  return (uVar1 + 0x1f1f1f >> 5 & 0x10101) + uVar1 * 2;
}


