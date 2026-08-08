/*
 * Ghidra decompilation
 *
 * Function : texture_cache_build_pixel_paletted_alpha
 * Address  : 00167500
 * Program  : drastic64
 */


uint texture_cache_build_pixel_paletted_alpha(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 5 & 0x1f) << 8 | (param_1 >> 10 & 0x1f) << 0x10 | param_1 & 0x1f;
  if (param_2 != 0) {
    param_2 = 0x1f000000;
  }
  return (uVar1 + 0x1f1f1f >> 5 & 0x10101) + uVar1 * 2 | param_2;
}


