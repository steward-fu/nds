/*
 * Ghidra decompilation
 *
 * Function : disasm_logical_immediate
 * Address  : 00196a70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong disasm_logical_immediate(int param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined auVar42 [16];
  undefined auVar43 [16];
  
  if (param_1 == 0) {
    uVar6 = 5 - (int)LZCOUNT(~param_3 << 0x1a);
    uVar1 = 1 << (ulong)(uVar6 & 0x1f);
    param_3 = uVar1 - 1 & param_3;
    uVar7 = 0;
    if (uVar1 != 0) {
      uVar7 = 0x40 / uVar1;
    }
    if (param_3 == 0x3f) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar5 = uVar1 - 1 & (uint)param_2;
      uVar2 = (ulong)((1 << (ulong)(param_3 + 1 & 0x1f)) + -1);
      uVar2 = uVar2 >> ((ulong)uVar5 & 0x3f) | uVar2 << ((ulong)(uVar1 - uVar5) & 0x3f);
    }
    if (0x40 < uVar1) {
      return 0;
    }
  }
  else {
    if ((param_3 & 0x3f) == 0x3f) {
      return 0xffffffffffffffff;
    }
    uVar7 = 1;
    uVar6 = 6;
    uVar2 = (ulong)((1 << (ulong)((param_3 & 0x3f) + 1 & 0x1f)) + -1);
    uVar2 = uVar2 >> (param_2 & 0x3f) | uVar2 << 0x40 - (param_2 & 0x3f);
  }
  uVar1 = uVar7;
  if (uVar7 == 0) {
    uVar1 = 1;
  }
  if (uVar7 < 0xb) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    auVar42._4_4_ = uVar6;
    auVar42._0_4_ = uVar6;
    auVar42._8_4_ = uVar6;
    auVar42._12_4_ = uVar6;
    auVar10._8_8_ = uVar2;
    auVar10._0_8_ = uVar2;
    uVar5 = uVar1 >> 2;
    auVar11 = NEON_sshl(_DAT_0021dca0,auVar42,4);
    auVar8._0_8_ = auVar11._0_8_ & 0xffffffff;
    auVar8._8_8_ = auVar11._0_8_ >> 0x20;
    auVar12._0_8_ = auVar11._8_8_ & 0xffffffff;
    auVar12._8_8_ = auVar11._8_8_ >> 0x20;
    auVar8 = NEON_sshl(auVar10,auVar8,8);
    auVar12 = NEON_sshl(auVar10,auVar12,8);
    auVar11[0] = auVar8[0] | auVar12[0];
    auVar11[1] = auVar8[1] | auVar12[1];
    auVar11[2] = auVar8[2] | auVar12[2];
    auVar11[3] = auVar8[3] | auVar12[3];
    auVar11[4] = auVar8[4] | auVar12[4];
    auVar11[5] = auVar8[5] | auVar12[5];
    auVar11[6] = auVar8[6] | auVar12[6];
    auVar11[7] = auVar8[7] | auVar12[7];
    auVar11[8] = auVar8[8] | auVar12[8];
    auVar11[9] = auVar8[9] | auVar12[9];
    auVar11[10] = auVar8[10] | auVar12[10];
    auVar11[11] = auVar8[11] | auVar12[11];
    auVar11[12] = auVar8[12] | auVar12[12];
    auVar11[13] = auVar8[13] | auVar12[13];
    auVar11[14] = auVar8[14] | auVar12[14];
    auVar11[15] = auVar8[15] | auVar12[15];
    if (uVar5 != 1) {
      auVar8 = NEON_sshl(_DAT_00228150,auVar42,4);
      auVar28._0_8_ = auVar8._0_8_ & 0xffffffff;
      auVar28._8_8_ = auVar8._0_8_ >> 0x20;
      auVar13._0_8_ = auVar8._8_8_ & 0xffffffff;
      auVar13._8_8_ = auVar8._8_8_ >> 0x20;
      auVar12 = NEON_sshl(auVar10,auVar28,8);
      auVar8 = NEON_sshl(auVar10,auVar13,8);
      auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
      auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
      auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
      auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
      auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
      auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
      auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
      auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
      auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
      auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
      auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
      auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
      auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
      auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
      auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
      auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
      if (uVar5 != 2) {
        auVar8 = NEON_sshl(_DAT_00228160,auVar42,4);
        auVar29._0_8_ = auVar8._0_8_ & 0xffffffff;
        auVar29._8_8_ = auVar8._0_8_ >> 0x20;
        auVar14._0_8_ = auVar8._8_8_ & 0xffffffff;
        auVar14._8_8_ = auVar8._8_8_ >> 0x20;
        auVar12 = NEON_sshl(auVar10,auVar29,8);
        auVar8 = NEON_sshl(auVar10,auVar14,8);
        auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
        auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
        auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
        auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
        auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
        auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
        auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
        auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
        auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
        auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
        auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
        auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
        auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
        auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
        auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
        auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
        if (uVar5 != 3) {
          auVar8 = NEON_sshl(_DAT_00228170,auVar42,4);
          auVar30._0_8_ = auVar8._0_8_ & 0xffffffff;
          auVar30._8_8_ = auVar8._0_8_ >> 0x20;
          auVar15._0_8_ = auVar8._8_8_ & 0xffffffff;
          auVar15._8_8_ = auVar8._8_8_ >> 0x20;
          auVar12 = NEON_sshl(auVar10,auVar30,8);
          auVar8 = NEON_sshl(auVar10,auVar15,8);
          auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
          auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
          auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
          auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
          auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
          auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
          auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
          auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
          auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
          auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
          auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
          auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
          auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
          auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
          auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
          auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
          if (uVar5 != 4) {
            auVar8 = NEON_sshl(_DAT_00228180,auVar42,4);
            auVar31._0_8_ = auVar8._0_8_ & 0xffffffff;
            auVar31._8_8_ = auVar8._0_8_ >> 0x20;
            auVar16._0_8_ = auVar8._8_8_ & 0xffffffff;
            auVar16._8_8_ = auVar8._8_8_ >> 0x20;
            auVar12 = NEON_sshl(auVar10,auVar31,8);
            auVar8 = NEON_sshl(auVar10,auVar16,8);
            auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
            auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
            auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
            auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
            auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
            auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
            auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
            auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
            auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
            auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
            auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
            auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
            auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
            auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
            auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
            auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
            if (uVar5 != 5) {
              auVar8 = NEON_sshl(_DAT_00228190,auVar42,4);
              auVar32._0_8_ = auVar8._0_8_ & 0xffffffff;
              auVar32._8_8_ = auVar8._0_8_ >> 0x20;
              auVar17._0_8_ = auVar8._8_8_ & 0xffffffff;
              auVar17._8_8_ = auVar8._8_8_ >> 0x20;
              auVar12 = NEON_sshl(auVar10,auVar32,8);
              auVar8 = NEON_sshl(auVar10,auVar17,8);
              auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
              auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
              auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
              auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
              auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
              auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
              auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
              auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
              auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
              auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
              auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
              auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
              auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
              auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
              auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
              auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
              if (uVar5 != 6) {
                auVar8 = NEON_sshl(_DAT_002281a0,auVar42,4);
                auVar33._0_8_ = auVar8._0_8_ & 0xffffffff;
                auVar33._8_8_ = auVar8._0_8_ >> 0x20;
                auVar18._0_8_ = auVar8._8_8_ & 0xffffffff;
                auVar18._8_8_ = auVar8._8_8_ >> 0x20;
                auVar12 = NEON_sshl(auVar10,auVar33,8);
                auVar8 = NEON_sshl(auVar10,auVar18,8);
                auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
                auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
                auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
                auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
                auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
                auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
                auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
                auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
                auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
                auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
                auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
                auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
                auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
                auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
                auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
                auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
                if (uVar5 != 7) {
                  auVar8 = NEON_sshl(_DAT_002281b0,auVar42,4);
                  auVar34._0_8_ = auVar8._0_8_ & 0xffffffff;
                  auVar34._8_8_ = auVar8._0_8_ >> 0x20;
                  auVar19._0_8_ = auVar8._8_8_ & 0xffffffff;
                  auVar19._8_8_ = auVar8._8_8_ >> 0x20;
                  auVar12 = NEON_sshl(auVar10,auVar34,8);
                  auVar8 = NEON_sshl(auVar10,auVar19,8);
                  auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
                  auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
                  auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
                  auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
                  auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
                  auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
                  auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
                  auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
                  auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
                  auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
                  auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
                  auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
                  auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
                  auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
                  auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
                  auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
                  if (uVar5 != 8) {
                    auVar8 = NEON_sshl(_DAT_002281c0,auVar42,4);
                    auVar35._0_8_ = auVar8._0_8_ & 0xffffffff;
                    auVar35._8_8_ = auVar8._0_8_ >> 0x20;
                    auVar20._0_8_ = auVar8._8_8_ & 0xffffffff;
                    auVar20._8_8_ = auVar8._8_8_ >> 0x20;
                    auVar12 = NEON_sshl(auVar10,auVar35,8);
                    auVar8 = NEON_sshl(auVar10,auVar20,8);
                    auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
                    auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
                    auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
                    auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
                    auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
                    auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
                    auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
                    auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
                    auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
                    auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
                    auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
                    auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
                    auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
                    auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
                    auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
                    auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
                    if (uVar5 != 9) {
                      auVar8 = NEON_sshl(_DAT_002281d0,auVar42,4);
                      auVar36._0_8_ = auVar8._0_8_ & 0xffffffff;
                      auVar36._8_8_ = auVar8._0_8_ >> 0x20;
                      auVar21._0_8_ = auVar8._8_8_ & 0xffffffff;
                      auVar21._8_8_ = auVar8._8_8_ >> 0x20;
                      auVar12 = NEON_sshl(auVar10,auVar36,8);
                      auVar8 = NEON_sshl(auVar10,auVar21,8);
                      auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
                      auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
                      auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
                      auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
                      auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
                      auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
                      auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
                      auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
                      auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
                      auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
                      auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
                      auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
                      auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
                      auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
                      auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
                      auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
                      if (uVar5 != 10) {
                        auVar8 = NEON_sshl(_DAT_002281e0,auVar42,4);
                        auVar37._0_8_ = auVar8._0_8_ & 0xffffffff;
                        auVar37._8_8_ = auVar8._0_8_ >> 0x20;
                        auVar22._0_8_ = auVar8._8_8_ & 0xffffffff;
                        auVar22._8_8_ = auVar8._8_8_ >> 0x20;
                        auVar12 = NEON_sshl(auVar10,auVar37,8);
                        auVar8 = NEON_sshl(auVar10,auVar22,8);
                        auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
                        auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
                        auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
                        auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
                        auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
                        auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
                        auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
                        auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
                        auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
                        auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
                        auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
                        auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
                        auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
                        auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
                        auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
                        auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
                        if (uVar5 != 0xb) {
                          auVar8 = NEON_sshl(_DAT_002281f0,auVar42,4);
                          auVar38._0_8_ = auVar8._0_8_ & 0xffffffff;
                          auVar38._8_8_ = auVar8._0_8_ >> 0x20;
                          auVar23._0_8_ = auVar8._8_8_ & 0xffffffff;
                          auVar23._8_8_ = auVar8._8_8_ >> 0x20;
                          auVar12 = NEON_sshl(auVar10,auVar38,8);
                          auVar8 = NEON_sshl(auVar10,auVar23,8);
                          auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
                          auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
                          auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
                          auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
                          auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
                          auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
                          auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
                          auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
                          auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
                          auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
                          auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
                          auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
                          auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
                          auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
                          auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
                          auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
                          if (uVar5 != 0xc) {
                            auVar8 = NEON_sshl(_DAT_00228200,auVar42,4);
                            auVar39._0_8_ = auVar8._0_8_ & 0xffffffff;
                            auVar39._8_8_ = auVar8._0_8_ >> 0x20;
                            auVar24._0_8_ = auVar8._8_8_ & 0xffffffff;
                            auVar24._8_8_ = auVar8._8_8_ >> 0x20;
                            auVar12 = NEON_sshl(auVar10,auVar39,8);
                            auVar8 = NEON_sshl(auVar10,auVar24,8);
                            auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
                            auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
                            auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
                            auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
                            auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
                            auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
                            auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
                            auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
                            auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
                            auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
                            auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
                            auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
                            auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
                            auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
                            auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
                            auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
                            if (uVar5 != 0xd) {
                              auVar8 = NEON_sshl(_DAT_00228210,auVar42,4);
                              auVar40._0_8_ = auVar8._0_8_ & 0xffffffff;
                              auVar40._8_8_ = auVar8._0_8_ >> 0x20;
                              auVar25._0_8_ = auVar8._8_8_ & 0xffffffff;
                              auVar25._8_8_ = auVar8._8_8_ >> 0x20;
                              auVar12 = NEON_sshl(auVar10,auVar40,8);
                              auVar8 = NEON_sshl(auVar10,auVar25,8);
                              auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
                              auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
                              auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
                              auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
                              auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
                              auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
                              auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
                              auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
                              auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
                              auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
                              auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
                              auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
                              auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
                              auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
                              auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
                              auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
                              if (uVar5 != 0xe) {
                                auVar8 = NEON_sshl(_DAT_00228220,auVar42,4);
                                auVar41._0_8_ = auVar8._0_8_ & 0xffffffff;
                                auVar41._8_8_ = auVar8._0_8_ >> 0x20;
                                auVar26._0_8_ = auVar8._8_8_ & 0xffffffff;
                                auVar26._8_8_ = auVar8._8_8_ >> 0x20;
                                auVar12 = NEON_sshl(auVar10,auVar41,8);
                                auVar8 = NEON_sshl(auVar10,auVar26,8);
                                auVar11[0] = auVar11[0] | auVar12[0] | auVar8[0];
                                auVar11[1] = auVar11[1] | auVar12[1] | auVar8[1];
                                auVar11[2] = auVar11[2] | auVar12[2] | auVar8[2];
                                auVar11[3] = auVar11[3] | auVar12[3] | auVar8[3];
                                auVar11[4] = auVar11[4] | auVar12[4] | auVar8[4];
                                auVar11[5] = auVar11[5] | auVar12[5] | auVar8[5];
                                auVar11[6] = auVar11[6] | auVar12[6] | auVar8[6];
                                auVar11[7] = auVar11[7] | auVar12[7] | auVar8[7];
                                auVar11[8] = auVar11[8] | auVar12[8] | auVar8[8];
                                auVar11[9] = auVar11[9] | auVar12[9] | auVar8[9];
                                auVar11[10] = auVar11[10] | auVar12[10] | auVar8[10];
                                auVar11[11] = auVar11[11] | auVar12[11] | auVar8[11];
                                auVar11[12] = auVar11[12] | auVar12[12] | auVar8[12];
                                auVar11[13] = auVar11[13] | auVar12[13] | auVar8[13];
                                auVar11[14] = auVar11[14] | auVar12[14] | auVar8[14];
                                auVar11[15] = auVar11[15] | auVar12[15] | auVar8[15];
                                if (uVar5 == 0x10) {
                                  auVar8 = NEON_sshl(_DAT_00228230,auVar42,4);
                                  auVar27._0_8_ = auVar8._8_8_ & 0xffffffff;
                                  auVar27._8_8_ = auVar8._8_8_ >> 0x20;
                                  auVar43._0_8_ = auVar8._0_8_ & 0xffffffff;
                                  auVar43._8_8_ = auVar8._0_8_ >> 0x20;
                                  auVar12 = NEON_sshl(auVar10,auVar27,8);
                                  auVar8 = NEON_sshl(auVar10,auVar43,8);
                                  auVar9[0] = auVar12[0] | auVar8[0] | auVar11[0];
                                  auVar9[1] = auVar12[1] | auVar8[1] | auVar11[1];
                                  auVar9[2] = auVar12[2] | auVar8[2] | auVar11[2];
                                  auVar9[3] = auVar12[3] | auVar8[3] | auVar11[3];
                                  auVar9[4] = auVar12[4] | auVar8[4] | auVar11[4];
                                  auVar9[5] = auVar12[5] | auVar8[5] | auVar11[5];
                                  auVar9[6] = auVar12[6] | auVar8[6] | auVar11[6];
                                  auVar9[7] = auVar12[7] | auVar8[7] | auVar11[7];
                                  auVar9[8] = auVar12[8] | auVar8[8] | auVar11[8];
                                  auVar9[9] = auVar12[9] | auVar8[9] | auVar11[9];
                                  auVar9[10] = auVar12[10] | auVar8[10] | auVar11[10];
                                  auVar9[11] = auVar12[11] | auVar8[11] | auVar11[11];
                                  auVar9[12] = auVar12[12] | auVar8[12] | auVar11[12];
                                  auVar9[13] = auVar12[13] | auVar8[13] | auVar11[13];
                                  auVar9[14] = auVar12[14] | auVar8[14] | auVar11[14];
                                  auVar9[15] = auVar12[15] | auVar8[15] | auVar11[15];
                                  auVar8 = NEON_ext(auVar9,ZEXT816(0),8,1);
                                  uVar3 = CONCAT17(auVar9[7] | auVar8[7],
                                                   CONCAT16(auVar9[6] | auVar8[6],
                                                            CONCAT15(auVar9[5] | auVar8[5],
                                                                     CONCAT14(auVar9[4] | auVar8[4],
                                                                              CONCAT13(auVar9[3] |
                                                                                       auVar8[3],
                                                                                       CONCAT12(
                                                  auVar9[2] | auVar8[2],
                                                  CONCAT11(auVar9[1] | auVar8[1],
                                                           auVar9[0] | auVar8[0])))))));
                                  goto joined_r0x00196efc;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar5 = uVar1 & 0xfffffffc;
    auVar8 = NEON_ext(auVar11,ZEXT816(0),8,1);
    uVar3 = CONCAT17(auVar11[7] | auVar8[7],
                     CONCAT16(auVar11[6] | auVar8[6],
                              CONCAT15(auVar11[5] | auVar8[5],
                                       CONCAT14(auVar11[4] | auVar8[4],
                                                CONCAT13(auVar11[3] | auVar8[3],
                                                         CONCAT12(auVar11[2] | auVar8[2],
                                                                  CONCAT11(auVar11[1] | auVar8[1],
                                                                           auVar11[0] | auVar8[0])))
                                               ))));
    if ((uVar1 & 0xffffff83) == 0) goto joined_r0x00196efc;
  }
  uVar3 = uVar3 | uVar2 << ((ulong)(uVar5 << (ulong)(uVar6 & 0x1f)) & 0x3f);
  if (uVar5 + 1 < uVar7) {
    uVar3 = uVar3 | uVar2 << ((ulong)(uVar5 + 1 << (ulong)(uVar6 & 0x1f)) & 0x3f);
    if (uVar5 + 2 < uVar7) {
      uVar3 = uVar3 | uVar2 << ((ulong)(uVar5 + 2 << (ulong)(uVar6 & 0x1f)) & 0x3f);
      if (uVar5 + 3 < uVar7) {
        uVar3 = uVar3 | uVar2 << ((ulong)(uVar5 + 3 << (ulong)(uVar6 & 0x1f)) & 0x3f);
        if (uVar5 + 4 < uVar7) {
          uVar3 = uVar3 | uVar2 << ((ulong)(uVar5 + 4 << (ulong)(uVar6 & 0x1f)) & 0x3f);
          if (uVar5 + 5 < uVar7) {
            uVar3 = uVar3 | uVar2 << ((ulong)(uVar5 + 5 << (ulong)(uVar6 & 0x1f)) & 0x3f);
            if (uVar5 + 6 < uVar7) {
              uVar3 = uVar3 | uVar2 << ((ulong)(uVar5 + 6 << (ulong)(uVar6 & 0x1f)) & 0x3f);
              if (uVar5 + 7 < uVar7) {
                uVar3 = uVar3 | uVar2 << ((ulong)(uVar5 + 7 << (ulong)(uVar6 & 0x1f)) & 0x3f);
                if (uVar5 + 8 < uVar7) {
                  uVar4 = uVar3 | uVar2 << ((ulong)(uVar5 + 8 << (ulong)(uVar6 & 0x1f)) & 0x3f);
                  uVar3 = uVar4 | uVar2 << ((ulong)(uVar5 + 9 << (ulong)(uVar6 & 0x1f)) & 0x3f);
                  if (uVar7 <= uVar5 + 9) {
                    uVar3 = uVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
joined_r0x00196efc:
  if (param_1 == 0) {
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}


