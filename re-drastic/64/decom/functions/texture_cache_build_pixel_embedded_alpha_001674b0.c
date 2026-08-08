/*
 * Ghidra decompilation
 *
 * Function : texture_cache_build_pixel_embedded_alpha
 * Address  : 001674b0
 * Program  : drastic64
 */


uint texture_cache_build_pixel_embedded_alpha(ulong param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)(param_1 >> 5) & 0x1f) << 8 | ((uint)(param_1 >> 10) & 0x1f) << 0x10 |
          (uint)param_1 & 0x1f;
  return (uVar1 + 0x1f1f1f >> 5 & 0x10101) + uVar1 * 2 | ((uint)param_1 >> 0xf) * 0x1f000000;
}


