/*
 * Ghidra decompilation
 *
 * Function : texture_cache_build_pixel_paletted_alpha
 * Address  : 080880b0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 texture_cache_build_pixel_paletted_alpha(u32 pixel,u32 alpha_enable)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((pixel << 0x11) >> 0x1b) << 0x10 | ((pixel << 0x16) >> 0x1b) << 8 | pixel & 0x1f;
  if (alpha_enable == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1f000000;
  }
  return (uVar2 + 0x1f1f1f >> 5 & 0x10101) + uVar2 * 2 | uVar1;
}


