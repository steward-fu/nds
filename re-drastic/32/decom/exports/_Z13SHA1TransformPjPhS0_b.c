/*
 * Ghidra decompilation
 *
 * Function : _Z13SHA1TransformPjPhS0_b
 * Address  : 080e6d60
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void SHA1Transform(uint32 *state,uchar *workspace,uchar *buffer,bool handsoff)

{
  uint uVar1;
  uint32 a;
  undefined4 uVar2;
  uint uVar3;
  uint32 d;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint32 b;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint32 c;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  uint uVar33;
  uint uVar34;
  undefined4 uVar35;
  CHAR64LONG16 *block;
  
  puVar23 = (uint *)buffer;
  if (handsoff) {
    puVar4 = (undefined4 *)buffer;
    puVar6 = (undefined4 *)workspace;
    do {
      puVar5 = puVar4 + 4;
      uVar35 = puVar4[1];
      uVar32 = puVar4[2];
      uVar2 = puVar4[3];
      *puVar6 = *puVar4;
      puVar6[1] = uVar35;
      puVar6[2] = uVar32;
      puVar6[3] = uVar2;
      puVar4 = puVar5;
      puVar6 = puVar6 + 4;
      puVar23 = (uint *)workspace;
    } while (puVar5 != (undefined4 *)(buffer + 0x40));
  }
  uVar7 = state[1];
  uVar10 = state[2];
  uVar3 = state[3];
  uVar16 = uVar7 >> 2 | uVar7 << 0x1e;
  uVar33 = *puVar23;
  uVar1 = *state;
  uVar12 = puVar23[3];
  uVar17 = puVar23[1];
  uVar13 = puVar23[4];
  uVar8 = puVar23[6];
  uVar11 = puVar23[5];
  uVar22 = uVar1 >> 2 | uVar1 << 0x1e;
  uVar14 = puVar23[10];
  uVar24 = puVar23[2];
  uVar9 = puVar23[7];
  uVar33 = uVar33 << 0x18 | (uVar33 >> 8 & 0xff) << 0x10 | (uVar33 >> 0x10 & 0xff) << 8 |
           uVar33 >> 0x18;
  uVar28 = uVar33 + state[4] + 0x5a827999 + (uVar1 >> 0x1b | uVar1 << 5) +
                    (uVar7 & (uVar10 ^ uVar3) ^ uVar3);
  uVar25 = uVar24 << 0x18 | (uVar24 >> 8 & 0xff) << 0x10 | (uVar24 >> 0x10 & 0xff) << 8 |
           uVar24 >> 0x18;
  uVar7 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar24 = uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18;
  uVar18 = puVar23[8];
  uVar17 = ((uVar10 ^ uVar16) & uVar1 ^ uVar10) + uVar3 + 0x5a827999 + uVar24 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar19 = puVar23[9];
  uVar20 = puVar23[0xb];
  uVar34 = puVar23[0xc];
  uVar26 = puVar23[0xd];
  uVar15 = puVar23[0xe];
  uVar21 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18;
  uVar1 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar10 = (uVar28 & (uVar16 ^ uVar22) ^ uVar16) + uVar10 + 0x5a827999 + uVar25 +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar29 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
  uVar12 = puVar23[0xf];
  uVar3 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar17 = (uVar17 & (uVar22 ^ uVar7) ^ uVar22) + uVar16 + 0x5a827999 + uVar29 +
           (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar11 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
           uVar11 >> 0x18;
  uVar10 = ((uVar7 ^ uVar1) & uVar10 ^ uVar7) + uVar22 + 0x5a827999 + uVar21 +
           (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar16 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar17 = ((uVar1 ^ uVar3) & uVar17 ^ uVar1) + uVar11 + 0x5a827999 + uVar7 +
           (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar13 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18
  ;
  uVar22 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar8 = ((uVar3 ^ uVar16) & uVar10 ^ uVar3) + uVar13 + 0x5a827999 + uVar1 +
          (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar7 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar27 = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18
  ;
  uVar18 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
           uVar18 >> 0x18;
  uVar17 = ((uVar16 ^ uVar22) & uVar17 ^ uVar16) + uVar27 + 0x5a827999 + uVar3 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar19 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18;
  uVar3 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar8 = ((uVar22 ^ uVar7) & uVar8 ^ uVar22) + uVar18 + 0x5a827999 + uVar16 +
          (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar14 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18;
  uVar17 = ((uVar7 ^ uVar1) & uVar17 ^ uVar7) + uVar19 + 0x5a827999 + uVar22 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar16 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar30 = uVar20 << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 | (uVar20 >> 0x10 & 0xff) << 8 |
           uVar20 >> 0x18;
  uVar8 = ((uVar1 ^ uVar3) & uVar8 ^ uVar1) + uVar14 + 0x5a827999 + uVar7 +
          (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar34 = uVar34 << 0x18 | (uVar34 >> 8 & 0xff) << 0x10 | (uVar34 >> 0x10 & 0xff) << 8 |
           uVar34 >> 0x18;
  uVar22 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar7 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar17 = ((uVar3 ^ uVar16) & uVar17 ^ uVar3) + uVar30 + 0x5a827999 + uVar1 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar28 = uVar26 << 0x18 | (uVar26 >> 8 & 0xff) << 0x10 | (uVar26 >> 0x10 & 0xff) << 8 |
           uVar26 >> 0x18;
  uVar9 = ((uVar16 ^ uVar22) & uVar8 ^ uVar16) + uVar34 + 0x5a827999 + uVar3 +
          (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar1 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar8 = ((uVar22 ^ uVar7) & uVar17 ^ uVar22) + uVar28 + 0x5a827999 + uVar16 +
          (uVar9 >> 0x1b | uVar9 * 0x20);
  uVar31 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  uVar3 = uVar33 ^ uVar25 ^ uVar18 ^ uVar28;
  uVar16 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar10 = ((uVar7 ^ uVar1) & uVar9 ^ uVar7) + uVar31 + 0x5a827999 + uVar22 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar26 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
           uVar12 >> 0x18;
  uVar22 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar17 = uVar24 ^ uVar29 ^ uVar19 ^ uVar31;
  uVar17 = uVar17 >> 0x1f | uVar17 << 1;
  uVar8 = ((uVar1 ^ uVar16) & uVar8 ^ uVar1) + uVar26 + 0x5a827999 + uVar7 +
          (uVar10 >> 0x1b | uVar10 * 0x20);
  uVar7 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar9 = uVar25 ^ uVar21 ^ uVar14 ^ uVar26;
  uVar33 = ((uVar16 ^ uVar22) & uVar10 ^ uVar16) + uVar3 + 0x5a827999 + uVar1 +
           (uVar8 >> 0x1b | uVar8 * 0x20);
  uVar1 = uVar8 >> 2 | uVar8 * 0x40000000;
  uVar12 = ((uVar22 ^ uVar7) & uVar8 ^ uVar22) + uVar17 + 0x5a827999 + uVar16 +
           (uVar33 >> 0x1b | uVar33 * 0x20);
  uVar16 = uVar9 >> 0x1f | uVar9 << 1;
  uVar8 = uVar33 >> 2 | uVar33 * 0x40000000;
  uVar9 = uVar21 ^ uVar13 ^ uVar34 ^ uVar17;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar24 = uVar29 ^ uVar11 ^ uVar30 ^ uVar3;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar10 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar33 = (uVar33 & (uVar7 ^ uVar1) ^ uVar7) + uVar16 + 0x5a827999 + uVar22 +
           (uVar12 >> 0x1b | uVar12 * 0x20);
  uVar22 = uVar11 ^ uVar27 ^ uVar28 ^ uVar16;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar12 = ((uVar1 ^ uVar8) & uVar12 ^ uVar1) + uVar24 + 0x5a827999 + uVar7 +
           (uVar33 >> 0x1b | uVar33 * 0x20);
  uVar7 = uVar33 >> 2 | uVar33 * 0x40000000;
  uVar11 = uVar13 ^ uVar18 ^ uVar31 ^ uVar24;
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar13 = (uVar8 ^ uVar10 ^ uVar33) + uVar9 + 0x6ed9eba1 + uVar1 + (uVar12 >> 0x1b | uVar12 * 0x20)
  ;
  uVar1 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar33 = uVar27 ^ uVar19 ^ uVar26 ^ uVar9;
  uVar33 = uVar33 >> 0x1f | uVar33 << 1;
  uVar15 = (uVar12 ^ uVar10 ^ uVar7) + uVar22 + 0x6ed9eba1 + uVar8 +
           (uVar13 >> 0x1b | uVar13 * 0x20);
  uVar8 = uVar13 >> 2 | uVar13 * 0x40000000;
  uVar12 = uVar18 ^ uVar14 ^ uVar3 ^ uVar22;
  uVar18 = (uVar7 ^ uVar1 ^ uVar13) + uVar11 + 0x6ed9eba1 + uVar10 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar10 = uVar12 >> 0x1f | uVar12 << 1;
  uVar12 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar15 = (uVar1 ^ uVar8 ^ uVar15) + uVar33 + 0x6ed9eba1 + uVar7 + (uVar18 >> 0x1b | uVar18 * 0x20)
  ;
  uVar7 = uVar18 >> 2 | uVar18 * 0x40000000;
  uVar13 = uVar19 ^ uVar30 ^ uVar17 ^ uVar11;
  uVar13 = uVar13 >> 0x1f | uVar13 << 1;
  uVar14 = uVar14 ^ uVar34 ^ uVar16 ^ uVar33;
  uVar19 = (uVar8 ^ uVar12 ^ uVar18) + uVar10 + 0x6ed9eba1 + uVar1 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  uVar1 = uVar14 >> 0x1f | uVar14 << 1;
  uVar18 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar20 = (uVar15 ^ uVar12 ^ uVar7) + uVar13 + 0x6ed9eba1 + uVar8 +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar8 = uVar34 ^ uVar31 ^ uVar9 ^ uVar13;
  uVar8 = uVar8 >> 0x1f | uVar8 << 1;
  uVar14 = uVar30 ^ uVar28 ^ uVar24 ^ uVar10;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar21 = (uVar7 ^ uVar18 ^ uVar19) + uVar1 + 0x6ed9eba1 + uVar12 +
           (uVar20 >> 0x1b | uVar20 * 0x20);
  uVar12 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar19 = uVar28 ^ uVar26 ^ uVar22 ^ uVar1;
  uVar19 = uVar19 >> 0x1f | uVar19 << 1;
  uVar34 = uVar31 ^ uVar3 ^ uVar11 ^ uVar14;
  uVar28 = (uVar20 ^ uVar18 ^ uVar15) + uVar14 + 0x6ed9eba1 + uVar7 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar7 = uVar34 >> 0x1f | uVar34 << 1;
  uVar20 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar21 = (uVar21 ^ uVar15 ^ uVar12) + uVar8 + 0x6ed9eba1 + uVar18 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar26 = uVar26 ^ uVar17 ^ uVar33 ^ uVar8;
  uVar18 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar26 = uVar26 >> 0x1f | uVar26 << 1;
  uVar34 = (uVar12 ^ uVar20 ^ uVar28) + uVar19 + 0x6ed9eba1 + uVar15 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar15 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar3 = uVar3 ^ uVar16 ^ uVar10 ^ uVar19;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar28 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar21 = (uVar21 ^ uVar20 ^ uVar18) + uVar7 + 0x6ed9eba1 + uVar12 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar12 = uVar17 ^ uVar24 ^ uVar13 ^ uVar7;
  uVar20 = (uVar18 ^ uVar15 ^ uVar34) + uVar26 + 0x6ed9eba1 + uVar20 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar17 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar34 = (uVar15 ^ uVar28 ^ uVar21) + uVar3 + 0x6ed9eba1 + uVar18 +
           (uVar20 >> 0x1b | uVar20 * 0x20);
  uVar16 = uVar16 ^ uVar9 ^ uVar1 ^ uVar26;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar18 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar24 = uVar24 ^ uVar22 ^ uVar14 ^ uVar3;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar21 = (uVar20 ^ uVar28 ^ uVar17) + uVar12 + 0x6ed9eba1 + uVar15 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar15 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar9 = uVar9 ^ uVar11 ^ uVar8 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar34 = (uVar17 ^ uVar18 ^ uVar34) + uVar16 + 0x6ed9eba1 + uVar28 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar20 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar22 = uVar22 ^ uVar33 ^ uVar19 ^ uVar16;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar21 = (uVar18 ^ uVar15 ^ uVar21) + uVar24 + 0x6ed9eba1 + uVar17 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar11 = uVar11 ^ uVar10 ^ uVar7 ^ uVar24;
  uVar17 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar28 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar34 = (uVar34 ^ uVar15 ^ uVar20) + uVar9 + 0x6ed9eba1 + uVar18 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar21 = (uVar21 ^ uVar20 ^ uVar17) + uVar22 + 0x6ed9eba1 + uVar15 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar18 = uVar33 ^ uVar13 ^ uVar26 ^ uVar9;
  uVar33 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar18 = uVar18 >> 0x1f | uVar18 << 1;
  uVar20 = (uVar17 ^ uVar28 ^ uVar34) + uVar11 + 0x6ed9eba1 + uVar20 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar15 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar10 = uVar10 ^ uVar1 ^ uVar3 ^ uVar22;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar34 = (uVar21 ^ uVar28 ^ uVar33) + uVar18 + 0x6ed9eba1 + uVar17 +
           (uVar20 >> 0x1b | uVar20 * 0x20);
  uVar17 = uVar13 ^ uVar14 ^ uVar12 ^ uVar11;
  uVar17 = uVar17 >> 0x1f | uVar17 << 1;
  uVar13 = uVar20 >> 2 | uVar20 * 0x40000000;
  uVar28 = ((uVar20 | uVar15) & uVar33 | uVar20 & uVar15) + uVar10 + 0x8f1bbcdc + uVar28 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar1 = uVar1 ^ uVar8 ^ uVar16 ^ uVar18;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar20 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar34 = ((uVar34 | uVar13) & uVar15 | uVar34 & uVar13) + uVar17 + 0x8f1bbcdc + uVar33 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar33 = uVar14 ^ uVar19 ^ uVar24 ^ uVar10;
  uVar33 = uVar33 >> 0x1f | uVar33 << 1;
  uVar14 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar21 = uVar8 ^ uVar7 ^ uVar9 ^ uVar17;
  uVar8 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar28 = ((uVar28 | uVar20) & uVar13 | uVar28 & uVar20) + uVar1 + 0x8f1bbcdc + uVar15 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar15 = uVar21 >> 0x1f | uVar21 << 1;
  uVar34 = ((uVar34 | uVar14) & uVar20 | uVar34 & uVar14) + uVar33 + 0x8f1bbcdc + uVar13 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar13 = uVar19 ^ uVar26 ^ uVar22 ^ uVar1;
  uVar13 = uVar13 >> 0x1f | uVar13 << 1;
  uVar19 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar28 = ((uVar28 | uVar8) & uVar14 | uVar28 & uVar8) + uVar15 + 0x8f1bbcdc + uVar20 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar7 = uVar7 ^ uVar3 ^ uVar11 ^ uVar33;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar20 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar34 = ((uVar34 | uVar19) & uVar8 | uVar34 & uVar19) + uVar13 + 0x8f1bbcdc + uVar14 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar14 = uVar26 ^ uVar12 ^ uVar18 ^ uVar15;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar26 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar28 = ((uVar28 | uVar20) & uVar19 | uVar28 & uVar20) + uVar7 + 0x8f1bbcdc + uVar8 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar8 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar3 = uVar3 ^ uVar16 ^ uVar10 ^ uVar13;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  uVar34 = ((uVar34 | uVar26) & uVar20 | uVar34 & uVar26) + uVar14 + 0x8f1bbcdc + uVar19 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar19 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar12 = uVar12 ^ uVar24 ^ uVar17 ^ uVar7;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar28 = ((uVar28 | uVar8) & uVar26 | uVar28 & uVar8) + uVar3 + 0x8f1bbcdc + uVar20 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar20 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar16 = uVar16 ^ uVar9 ^ uVar1 ^ uVar14;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar21 = ((uVar34 | uVar19) & uVar8 | uVar34 & uVar19) + uVar12 + 0x8f1bbcdc + uVar26 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar26 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar24 = uVar24 ^ uVar22 ^ uVar33 ^ uVar3;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar34 = ((uVar28 | uVar20) & uVar19 | uVar28 & uVar20) + uVar16 + 0x8f1bbcdc + uVar8 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar8 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar28 = ((uVar21 | uVar26) & uVar20 | uVar21 & uVar26) + uVar24 + 0x8f1bbcdc + uVar19 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar9 = uVar9 ^ uVar11 ^ uVar15 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  uVar22 = uVar22 ^ uVar18 ^ uVar13 ^ uVar16;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar19 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar34 = ((uVar34 | uVar8) & uVar26 | uVar34 & uVar8) + uVar9 + 0x8f1bbcdc + uVar20 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar20 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar11 = uVar11 ^ uVar10 ^ uVar7 ^ uVar24;
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar28 = ((uVar28 | uVar19) & uVar8 | uVar28 & uVar19) + uVar22 + 0x8f1bbcdc + uVar26 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar26 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar18 = uVar18 ^ uVar17 ^ uVar14 ^ uVar9;
  uVar18 = uVar18 >> 0x1f | uVar18 << 1;
  uVar21 = ((uVar34 | uVar20) & uVar19 | uVar34 & uVar20) + uVar11 + 0x8f1bbcdc + uVar8 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar10 = uVar10 ^ uVar1 ^ uVar3 ^ uVar22;
  uVar8 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar34 = ((uVar28 | uVar26) & uVar20 | uVar28 & uVar26) + uVar18 + 0x8f1bbcdc + uVar19 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar17 = uVar17 ^ uVar33 ^ uVar12 ^ uVar11;
  uVar17 = uVar17 >> 0x1f | uVar17 << 1;
  uVar19 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar28 = ((uVar21 | uVar8) & uVar26 | uVar21 & uVar8) + uVar10 + 0x8f1bbcdc + uVar20 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar1 = uVar1 ^ uVar15 ^ uVar16 ^ uVar18;
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uVar20 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar34 = ((uVar34 | uVar19) & uVar8 | uVar34 & uVar19) + uVar17 + 0x8f1bbcdc + uVar26 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar33 = uVar33 ^ uVar13 ^ uVar24 ^ uVar10;
  uVar33 = uVar33 >> 0x1f | uVar33 << 1;
  uVar26 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar21 = ((uVar28 | uVar20) & uVar19 | uVar28 & uVar20) + uVar1 + 0x8f1bbcdc + uVar8 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar8 = uVar15 ^ uVar7 ^ uVar9 ^ uVar17;
  uVar8 = uVar8 >> 0x1f | uVar8 << 1;
  uVar15 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar13 = uVar13 ^ uVar14 ^ uVar22 ^ uVar1;
  uVar13 = uVar13 >> 0x1f | uVar13 << 1;
  uVar28 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar34 = ((uVar34 | uVar26) & uVar20 | uVar34 & uVar26) + uVar33 + 0x8f1bbcdc + uVar19 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar21 = (uVar26 ^ uVar15 ^ uVar21) + uVar8 + 0xca62c1d6 + uVar20 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar7 = uVar7 ^ uVar3 ^ uVar11 ^ uVar33;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar14 = uVar14 ^ uVar12 ^ uVar18 ^ uVar8;
  uVar14 = uVar14 >> 0x1f | uVar14 << 1;
  uVar19 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar20 = uVar3 ^ uVar16 ^ uVar10 ^ uVar13;
  uVar3 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar20 = uVar20 >> 0x1f | uVar20 << 1;
  uVar34 = (uVar15 ^ uVar28 ^ uVar34) + uVar13 + 0xca62c1d6 + uVar26 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar26 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar21 = (uVar28 ^ uVar19 ^ uVar21) + uVar7 + 0xca62c1d6 + uVar15 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  *puVar23 = uVar20;
  uVar12 = uVar12 ^ uVar24 ^ uVar17 ^ uVar7;
  uVar12 = uVar12 >> 0x1f | uVar12 << 1;
  uVar34 = (uVar34 ^ uVar19 ^ uVar3) + uVar14 + 0xca62c1d6 + uVar28 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  puVar23[1] = uVar12;
  uVar16 = uVar16 ^ uVar9 ^ uVar1 ^ uVar14;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  puVar23[2] = uVar16;
  uVar15 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar28 = (uVar3 ^ uVar26 ^ uVar21) + uVar20 + 0xca62c1d6 + uVar19 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar19 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar24 = uVar24 ^ uVar22 ^ uVar33 ^ uVar20;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar34 = (uVar26 ^ uVar15 ^ uVar34) + uVar12 + 0xca62c1d6 + uVar3 +
           (uVar28 >> 0x1b | uVar28 * 0x20);
  uVar3 = uVar28 >> 2 | uVar28 * 0x40000000;
  uVar21 = (uVar15 ^ uVar19 ^ uVar28) + uVar16 + 0xca62c1d6 + uVar26 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  puVar23[3] = uVar24;
  uVar26 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar9 = uVar9 ^ uVar11 ^ uVar8 ^ uVar12;
  uVar9 = uVar9 >> 0x1f | uVar9 << 1;
  puVar23[4] = uVar9;
  uVar22 = uVar22 ^ uVar18 ^ uVar13 ^ uVar16;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar34 = (uVar19 ^ uVar3 ^ uVar34) + uVar24 + 0xca62c1d6 + uVar15 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  puVar23[5] = uVar22;
  uVar15 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar28 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar11 = uVar11 ^ uVar10 ^ uVar7 ^ uVar24;
  uVar11 = uVar11 >> 0x1f | uVar11 << 1;
  uVar19 = (uVar3 ^ uVar26 ^ uVar21) + uVar9 + 0xca62c1d6 + uVar19 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar34 = (uVar26 ^ uVar15 ^ uVar34) + uVar22 + 0xca62c1d6 + uVar3 +
           (uVar19 >> 0x1b | uVar19 * 0x20);
  uVar18 = uVar18 ^ uVar17 ^ uVar14 ^ uVar9;
  uVar3 = uVar19 >> 2 | uVar19 * 0x40000000;
  uVar18 = uVar18 >> 0x1f | uVar18 << 1;
  puVar23[6] = uVar11;
  puVar23[7] = uVar18;
  uVar10 = uVar10 ^ uVar1 ^ uVar20 ^ uVar22;
  uVar10 = uVar10 >> 0x1f | uVar10 << 1;
  uVar21 = (uVar15 ^ uVar28 ^ uVar19) + uVar11 + 0xca62c1d6 + uVar26 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar19 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar26 = uVar17 ^ uVar33 ^ uVar12 ^ uVar11;
  uVar17 = uVar21 >> 2 | uVar21 * 0x40000000;
  uVar26 = uVar26 >> 0x1f | uVar26 << 1;
  puVar23[8] = uVar10;
  uVar34 = (uVar28 ^ uVar3 ^ uVar34) + uVar18 + 0xca62c1d6 + uVar15 +
           (uVar21 >> 0x1b | uVar21 * 0x20);
  puVar23[9] = uVar26;
  uVar15 = (uVar3 ^ uVar19 ^ uVar21) + uVar10 + 0xca62c1d6 + uVar28 +
           (uVar34 >> 0x1b | uVar34 * 0x20);
  uVar16 = uVar1 ^ uVar8 ^ uVar16 ^ uVar18;
  uVar16 = uVar16 >> 0x1f | uVar16 << 1;
  uVar10 = uVar33 ^ uVar13 ^ uVar24 ^ uVar10;
  puVar23[10] = uVar16;
  uVar1 = uVar10 >> 0x1f | uVar10 << 1;
  uVar8 = uVar9 ^ uVar8 ^ uVar7 ^ uVar26;
  uVar8 = uVar8 >> 0x1f | uVar8 << 1;
  uVar9 = uVar34 >> 2 | uVar34 * 0x40000000;
  uVar33 = (uVar19 ^ uVar17 ^ uVar34) + uVar26 + 0xca62c1d6 + uVar3 +
           (uVar15 >> 0x1b | uVar15 * 0x20);
  puVar23[0xb] = uVar1;
  puVar23[0xc] = uVar8;
  uVar3 = uVar15 >> 2 | uVar15 * 0x40000000;
  uVar22 = uVar13 ^ uVar14 ^ uVar22 ^ uVar16;
  uVar22 = uVar22 >> 0x1f | uVar22 << 1;
  uVar7 = uVar7 ^ uVar20 ^ uVar11 ^ uVar1;
  uVar7 = uVar7 >> 0x1f | uVar7 << 1;
  uVar24 = uVar14 ^ uVar12 ^ uVar18 ^ uVar8;
  uVar24 = uVar24 >> 0x1f | uVar24 << 1;
  uVar10 = uVar33 >> 2 | uVar33 * 0x40000000;
  puVar23[0xd] = uVar22;
  uVar12 = (uVar15 ^ uVar17 ^ uVar9) + uVar16 + 0xca62c1d6 + uVar19 +
           (uVar33 >> 0x1b | uVar33 * 0x20);
  puVar23[0xe] = uVar7;
  puVar23[0xf] = uVar24;
  uVar11 = (uVar33 ^ uVar9 ^ uVar3) + uVar1 + 0xca62c1d6 + uVar17 + (uVar12 >> 0x1b | uVar12 * 0x20)
  ;
  uVar16 = uVar12 >> 2 | uVar12 * 0x40000000;
  uVar17 = (uVar3 ^ uVar10 ^ uVar12) + uVar8 + 0xca62c1d6 + uVar9 + (uVar11 >> 0x1b | uVar11 * 0x20)
  ;
  uVar1 = uVar11 >> 2 | uVar11 * 0x40000000;
  uVar3 = (uVar11 ^ uVar10 ^ uVar16) + uVar22 + 0xca62c1d6 + uVar3 +
          (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar22 = uVar17 >> 2 | uVar17 * 0x40000000;
  uVar7 = (uVar17 ^ uVar16 ^ uVar1) + uVar7 + 0xca62c1d6 + uVar10 + (uVar3 >> 0x1b | uVar3 * 0x20);
  state[2] = state[2] + (uVar3 >> 2 | uVar3 * 0x40000000);
  state[3] = state[3] + uVar22;
  *state = *state + 0xca62c1d6 + uVar24 + uVar16 + (uVar1 ^ uVar22 ^ uVar3) +
           (uVar7 >> 0x1b | uVar7 * 0x20);
  state[1] = state[1] + uVar7;
  state[4] = state[4] + uVar1;
  return;
}


