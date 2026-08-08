/*
 * Ghidra decompilation
 *
 * Function : sha256_transform
 * Address  : 080e88c0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void sha256_transform(sha256_context *ctx)

{
  uint32 *puVar1;
  uint32 *puVar2;
  undefined auVar3 [16];
  uint32 uVar4;
  uint32 uVar5;
  uint32 uVar6;
  uint32 uVar7;
  uint32 uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint32 uVar11;
  undefined8 *puVar12;
  uint T1;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint32 uVar19;
  uint32 uVar20;
  uint uVar21;
  uint uVar22;
  undefined8 in_d16;
  undefined8 uVar25;
  ulonglong uVar26;
  undefined auVar23 [16];
  undefined auVar24 [16];
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint32 *H;
  uint32 v [8];
  uint32 W [64];
  undefined8 uStack_30;
  
  uStack_30._4_4_ = __stack_chk_guard;
  if (ctx == (sha256_context *)0x0) {
    cleandata(v,0x20);
    cleandata(W,0x100);
  }
  else {
    pbVar10 = ctx->Data;
    puVar9 = (undefined8 *)W;
    puVar12 = (undefined8 *)(W + 0x10);
    W[0] = (uint)pbVar10[1] << 0x10 | (uint)*pbVar10 << 0x18 | (uint)pbVar10[3] |
           (uint)pbVar10[2] << 8;
    W[1] = (uint)pbVar10[5] << 0x10 | (uint)pbVar10[4] << 0x18 | (uint)pbVar10[7] |
           (uint)pbVar10[6] << 8;
    W[2] = (uint)pbVar10[9] << 0x10 | (uint)pbVar10[8] << 0x18 | (uint)pbVar10[0xb] |
           (uint)pbVar10[10] << 8;
    W[3] = (uint)pbVar10[0xd] << 0x10 | (uint)pbVar10[0xc] << 0x18 | (uint)pbVar10[0xf] |
           (uint)pbVar10[0xe] << 8;
    W[4] = (uint)pbVar10[0x11] << 0x10 | (uint)pbVar10[0x10] << 0x18 | (uint)pbVar10[0x13] |
           (uint)pbVar10[0x12] << 8;
    W[5] = (uint)pbVar10[0x15] << 0x10 | (uint)pbVar10[0x14] << 0x18 | (uint)pbVar10[0x17] |
           (uint)pbVar10[0x16] << 8;
    W[6] = (uint)pbVar10[0x19] << 0x10 | (uint)pbVar10[0x18] << 0x18 | (uint)pbVar10[0x1b] |
           (uint)pbVar10[0x1a] << 8;
    W[7] = (uint)pbVar10[0x1d] << 0x10 | (uint)pbVar10[0x1c] << 0x18 | (uint)pbVar10[0x1f] |
           (uint)pbVar10[0x1e] << 8;
    W[8] = (uint)pbVar10[0x21] << 0x10 | (uint)pbVar10[0x20] << 0x18 | (uint)pbVar10[0x23] |
           (uint)pbVar10[0x22] << 8;
    W[9] = (uint)pbVar10[0x25] << 0x10 | (uint)pbVar10[0x24] << 0x18 | (uint)pbVar10[0x27] |
           (uint)pbVar10[0x26] << 8;
    W[10] = (uint)pbVar10[0x29] << 0x10 | (uint)pbVar10[0x28] << 0x18 | (uint)pbVar10[0x2b] |
            (uint)pbVar10[0x2a] << 8;
    W[11] = (uint)pbVar10[0x2d] << 0x10 | (uint)pbVar10[0x2c] << 0x18 | (uint)pbVar10[0x2f] |
            (uint)pbVar10[0x2e] << 8;
    W[12] = (uint)pbVar10[0x31] << 0x10 | (uint)pbVar10[0x30] << 0x18 | (uint)pbVar10[0x33] |
            (uint)pbVar10[0x32] << 8;
    W[13] = (uint)pbVar10[0x35] << 0x10 | (uint)pbVar10[0x34] << 0x18 | (uint)pbVar10[0x37] |
            (uint)pbVar10[0x36] << 8;
    W[14] = (uint)pbVar10[0x39] << 0x10 | (uint)pbVar10[0x38] << 0x18 | (uint)pbVar10[0x3b] |
            (uint)pbVar10[0x3a] << 8;
    W[15] = (uint)pbVar10[0x3c] << 0x18 | (uint)pbVar10[0x3d] << 0x10 | (uint)pbVar10[0x3f] |
            (uint)pbVar10[0x3e] << 8;
    auVar24._4_4_ = W[15];
    auVar24._0_4_ = W[14];
    auVar24._8_8_ = in_d16;
    do {
      uVar30 = *puVar9;
      puVar9 = puVar9 + 1;
      uVar31 = auVar24._0_8_;
      uVar27 = VectorShiftRight(uVar31,0x13);
      uVar25 = *(undefined8 *)((int)puVar12 + -0x3c);
      uVar28 = VectorShiftRight(uVar31,0x11);
      uVar37 = VectorShiftLeft(uVar31,0xd,0x20,0);
      uVar36 = VectorShiftLeft(uVar31,0xf,0x20,0);
      uVar33 = VectorShiftRight(uVar31,10);
      uVar32 = VectorShiftLeft(uVar25,0xe,0x20,0);
      uVar29 = VectorShiftRight(uVar25,0x12);
      uVar31 = VectorAdd(*(undefined8 *)((int)puVar12 + -0x1c),uVar30,4);
      uVar35 = VectorShiftLeft(uVar25,0x19,0x20,0);
      uVar34 = VectorShiftRight(uVar25,7);
      uVar26 = VectorShiftRight(uVar25,3);
      uVar31 = VectorAdd((uVar37 | uVar27) ^ (uVar36 | uVar28) ^ uVar33,uVar31,4);
      auVar24._8_8_ = (uVar32 | uVar29) ^ (uVar35 | uVar34) ^ uVar26;
      auVar24._0_8_ = VectorAdd(uVar31,auVar24._8_8_,4);
      *puVar12 = auVar24._0_8_;
      puVar12 = puVar12 + 1;
    } while (puVar12 != &uStack_30);
    iVar14 = 0;
    auVar24 = *(undefined (*) [16])(ctx->H + 4);
    uVar4 = ctx->H[2];
    uVar5 = ctx->H[1];
    uVar6 = ctx->H[6];
    uVar7 = ctx->H[5];
    uVar19 = ctx->H[7];
    uVar20 = ctx->H[3];
    uVar8 = ctx->H[4];
    uVar11 = ctx->H[0];
    do {
      uVar22 = uVar11;
      uVar21 = uVar8;
      uVar18 = uVar7;
      uVar17 = uVar6;
      uVar16 = uVar5;
      uVar15 = uVar4;
      puVar1 = K + iVar14;
      puVar2 = W + iVar14;
      iVar14 = iVar14 + 1;
      iVar13 = ((uVar21 >> 0xb | uVar21 << 0x15) ^ (uVar21 >> 6 | uVar21 << 0x1a) ^
               (uVar21 >> 0x19 | uVar21 << 7)) + *puVar1 + *puVar2 +
               (uVar17 & ~uVar21 ^ uVar21 & uVar18) + uVar19;
      uVar8 = iVar13 + uVar20;
      uVar11 = ((uVar22 >> 0xd | uVar22 << 0x13) ^ (uVar22 >> 2 | uVar22 << 0x1e) ^
               (uVar22 >> 0x16 | uVar22 << 10)) + (uVar16 & uVar15 ^ (uVar15 ^ uVar16) & uVar22) +
               iVar13;
      uVar4 = uVar16;
      uVar5 = uVar22;
      uVar6 = uVar18;
      uVar7 = uVar21;
      uVar19 = uVar17;
      uVar20 = uVar15;
    } while (iVar14 != 0x40);
    auVar3._4_4_ = uVar22;
    auVar3._0_4_ = uVar11;
    auVar3._8_4_ = uVar16;
    auVar3._12_4_ = uVar15;
    auVar23 = VectorAdd(*(undefined (*) [16])ctx->H,auVar3,4);
    *(longlong *)ctx->H = auVar23._0_8_;
    *(longlong *)(ctx->H + 2) = auVar23._8_8_;
    auVar23._4_4_ = uVar21;
    auVar23._0_4_ = uVar8;
    auVar23._8_4_ = uVar18;
    auVar23._12_4_ = uVar17;
    auVar24 = VectorAdd(auVar23,auVar24,4);
    *(longlong *)(ctx->H + 4) = auVar24._0_8_;
    *(longlong *)(ctx->H + 6) = auVar24._8_8_;
  }
  if (uStack_30._4_4_ != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


