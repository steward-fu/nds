/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm7_16
 * Address  : 001104e0
 * Program  : drastic64
 */


long load_cart_arm7_16(long param_1)

{
  return -((ulong)(*(uint *)(param_1 + 0x1b274) >> 7) & 1);
}


