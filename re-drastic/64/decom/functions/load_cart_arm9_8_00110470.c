/*
 * Ghidra decompilation
 *
 * Function : load_cart_arm9_8
 * Address  : 00110470
 * Program  : drastic64
 */


long load_cart_arm9_8(long param_1)

{
  return -((ulong)~(*(uint *)(param_1 + 0x1b274) >> 7) & 1);
}


