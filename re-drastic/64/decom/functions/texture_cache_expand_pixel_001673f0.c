/*
 * Ghidra decompilation
 *
 * Function : texture_cache_expand_pixel
 * Address  : 001673f0
 * Program  : drastic64
 */


uint texture_cache_expand_pixel(uint param_1)

{
  return (param_1 >> 5 & 0x1f) << 8 | (param_1 >> 10 & 0x1f) << 0x10 | param_1 & 0x1f;
}


