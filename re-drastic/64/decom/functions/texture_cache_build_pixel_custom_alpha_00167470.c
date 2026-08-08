/*
 * Ghidra decompilation
 *
 * Function : texture_cache_build_pixel_custom_alpha
 * Address  : 00167470
 * Program  : drastic64
 */


uint texture_cache_build_pixel_custom_alpha(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 5 & 0x1f) << 8 | (param_1 >> 10 & 0x1f) << 0x10 | param_1 & 0x1f;
  return (uVar1 + 0x1f1f1f >> 5 & 0x10101) + uVar1 * 2 | param_2 << 0x18;
}


