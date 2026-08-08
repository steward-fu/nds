/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm7_8
 * Address  : 001104d0
 * Program  : drastic64
 */


long load_cart_arm7_8(long param_1)

{
  return -((ulong)(*(uint *)(param_1 + 0x1b274) >> 7) & 1);
}


