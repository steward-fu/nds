/*
 * Ghidra decompilation
 *
 * Function : texture_cache_double_pixel
 * Address  : 00167410
 * Program  : drastic64
 */


int texture_cache_double_pixel(int param_1)

{
  return (param_1 + 0x1f1f1fU >> 5 & 0x10101) + param_1 * 2;
}


