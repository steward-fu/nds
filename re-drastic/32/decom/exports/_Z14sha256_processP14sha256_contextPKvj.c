/*
 * Ghidra decompilation
 *
 * Function : _Z14sha256_processP14sha256_contextPKvj
 * Address  : 080e8e40
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void sha256_process(sha256_context *ctx,void *Data,size_t Size)

{
  sha256_context *ctx_00;
  byte *Src;
  uint uVar1;
  int iVar2;
  size_t CopySize;
  byte *unaff_r5;
  uint unaff_r9;
  
  uVar1 = *(uint *)&ctx->Count;
  iVar2 = *(int *)((int)&ctx->Count + 4);
  ctx_00 = (sha256_context *)(uVar1 + Size);
  if (Size != 0) {
    unaff_r9 = uVar1 & 0x3f;
    unaff_r5 = ctx->Buffer;
  }
  *(sha256_context **)&ctx->Count = ctx_00;
  *(uint *)((int)&ctx->Count + 4) = iVar2 + (uint)CARRY4(uVar1,Size);
  if (Size != 0) {
    do {
      while( true ) {
        ctx_00 = (sha256_context *)(unaff_r5 + unaff_r9);
        uVar1 = 0x40 - unaff_r9;
        if (Size <= 0x40 - unaff_r9) {
          uVar1 = Size;
        }
        if (uVar1 == 0x40) {
          ctx->Data = (byte *)Data;
        }
        else {
          ctx->Data = unaff_r5;
          ctx_00 = (sha256_context *)memcpy(ctx_00,Data,uVar1);
        }
        unaff_r9 = unaff_r9 + uVar1;
        Data = (void *)((int)Data + uVar1);
        Size = Size - uVar1;
        if (unaff_r9 != 0x40) break;
        unaff_r9 = 0;
        ctx_00 = ctx;
        sha256_transform(ctx);
        if (Size == 0) goto LAB_080e8ee0;
      }
    } while (Size != 0);
  }
LAB_080e8ee0:
  sha256_transform(ctx_00);
  return;
}


