/*
 * Ghidra decompilation
 *
 * Function : _Z11sha256_doneP14sha256_contextPh
 * Address  : 080e8efc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void sha256_done(sha256_context *ctx,byte *Digest)

{
  sha256_context *ctx_00;
  byte *pbVar1;
  uint uVar2;
  uint BufPos;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)&ctx->Count;
  iVar4 = *(int *)((int)&ctx->Count + 4);
  ctx->Data = ctx->Buffer;
  uVar2 = uVar3 & 0x3f;
  iVar4 = iVar4 << 3;
  ctx->Buffer[uVar2] = 0x80;
  while (uVar2 = uVar2 + 1, uVar2 != 0x38) {
    while (uVar2 = uVar2 & 0x3f, uVar2 == 0) {
      sha256_transform(ctx);
      ctx->Buffer[0] = '\0';
      uVar2 = 1;
    }
    ctx->Buffer[uVar2] = '\0';
  }
  ctx->Buffer[0x3d] = (byte)((uVar3 << 0xb) >> 0x18);
  ctx->Buffer[0x3f] = (byte)((uVar3 << 0x1b) >> 0x18);
  ctx->Buffer[0x39] = (byte)((uint)iVar4 >> 0x10);
  ctx->Buffer[0x3e] = (byte)((uVar3 << 0x13) >> 0x18);
  ctx->Buffer[0x38] = (byte)((uint)iVar4 >> 0x18);
  ctx->Buffer[0x3a] = (byte)((uint)iVar4 >> 8);
  ctx->Buffer[0x3b] = (byte)iVar4 | (byte)(uVar3 >> 0x1d);
  ctx->Buffer[0x3c] = (byte)((uVar3 << 3) >> 0x18);
  sha256_transform(ctx);
  pbVar1 = Digest + -1;
  uVar2 = 0;
  do {
    uVar3 = ~uVar2;
    ctx_00 = *(sha256_context **)((int)ctx->H + (uVar2 & 0xfffffffc));
    uVar2 = uVar2 + 1;
    pbVar1 = pbVar1 + 1;
    *pbVar1 = (byte)((uint)ctx_00 >> ((uVar3 & 3) << 3));
  } while (uVar2 != 0x20);
  *(undefined8 *)ctx->H = 0xbb67ae856a09e667;
  *(undefined8 *)(ctx->H + 2) = 0xa54ff53a3c6ef372;
  *(undefined8 *)(ctx->H + 4) = 0x9b05688c510e527f;
  *(undefined8 *)(ctx->H + 6) = 0x5be0cd191f83d9ab;
  ctx->Count = 0;
  sha256_transform(ctx_00);
  cleandata(ctx->Buffer,0x40);
  return;
}


