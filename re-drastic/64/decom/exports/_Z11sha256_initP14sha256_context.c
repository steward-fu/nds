/*
 * Ghidra decompilation
 *
 * Function : _Z11sha256_initP14sha256_context
 * Address  : 001c8670
 * Program  : drastic64
 */


/* sha256_init(sha256_context*) */

void sha256_init(sha256_context *param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0xa54ff53a3c6ef372;
  *(undefined8 *)param_1 = 0xbb67ae856a09e667;
  *(undefined8 *)(param_1 + 0x18) = 0x5be0cd191f83d9ab;
  *(undefined8 *)(param_1 + 0x10) = 0x9b05688c510e527f;
  return;
}


