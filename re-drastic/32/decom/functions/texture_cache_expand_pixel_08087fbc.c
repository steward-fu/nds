/*
 * Ghidra decompilation
 *
 * Function : texture_cache_expand_pixel
 * Address  : 08087fbc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 texture_cache_expand_pixel(u32 pixel)

{
  return ((pixel << 0x11) >> 0x1b) << 0x10 | ((pixel << 0x16) >> 0x1b) << 8 | pixel & 0x1f;
}


