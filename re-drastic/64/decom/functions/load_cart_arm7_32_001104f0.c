/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm7_32
 * Address  : 001104f0
 * Program  : drastic64
 */


long load_cart_arm7_32(long param_1)

{
  return -((ulong)(*(uint *)(param_1 + 0x1b274) >> 7) & 1);
}


