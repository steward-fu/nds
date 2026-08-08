/*
 * Ghidra decompilation
 *
 * Function : sha256_init
 * Address  : 080e8df8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void sha256_init(sha256_context *ctx)

{
  *(undefined8 *)ctx->H = 0xbb67ae856a09e667;
  *(undefined8 *)(ctx->H + 2) = 0xa54ff53a3c6ef372;
  *(undefined8 *)(ctx->H + 4) = 0x9b05688c510e527f;
  *(undefined8 *)(ctx->H + 6) = 0x5be0cd191f83d9ab;
  ctx->Count = 0;
  return;
}


