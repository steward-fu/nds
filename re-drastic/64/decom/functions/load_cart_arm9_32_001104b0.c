/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm9_32
 * Address  : 001104b0
 * Program  : drastic64
 */


long load_cart_arm9_32(long param_1)

{
  return -((ulong)~(*(uint *)(param_1 + 0x1b274) >> 7) & 1);
}


