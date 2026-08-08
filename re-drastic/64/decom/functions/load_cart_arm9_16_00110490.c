/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm9_16
 * Address  : 00110490
 * Program  : drastic64
 */


long load_cart_arm9_16(long param_1)

{
  return -((ulong)~(*(uint *)(param_1 + 0x1b274) >> 7) & 1);
}


