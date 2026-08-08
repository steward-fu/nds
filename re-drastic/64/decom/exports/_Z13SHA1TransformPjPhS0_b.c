/*
 * Ghidra decompilation
 *
 * Function : _Z13SHA1TransformPjPhS0_b
 * Address  : 001c6f90
 * Program  : drastic64
 */


/* SHA1Transform(unsigned int*, unsigned char*, unsigned char*, bool) */

void SHA1Transform(uint *param_1,uchar *param_2,uchar *param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
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
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  
  if (param_4) {
    uVar25 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 8) = uVar25;
    uVar25 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x18) = uVar25;
    uVar25 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x28) = uVar25;
    uVar25 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x38) = uVar25;
    param_3 = param_2;
  }
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar9 = uVar4 >> 2 | uVar4 << 0x1e;
  uVar5 = (*(uint *)param_3 & 0xff00ff00) >> 8 | (*(uint *)param_3 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar4 = ((uVar1 ^ uVar3) & uVar4 ^ uVar3) + (uVar2 >> 0x1b | uVar2 << 5) + param_1[4] + 0x5a827999
          + uVar5;
  uVar10 = uVar2 >> 2 | uVar2 << 0x1e;
  uVar6 = (*(uint *)((long)param_3 + 4) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 4) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar11 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = ((uVar1 ^ uVar9) & uVar2 ^ uVar1) + uVar6 + uVar3 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar3 = (*(uint *)((long)param_3 + 8) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 8) & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar12 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = ((uVar9 ^ uVar10) & uVar4 ^ uVar9) + uVar3 + uVar1 + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = (*(uint *)((long)param_3 + 0xc) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0xc) & 0xff00ff) << 8;
  uVar7 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar13 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar2 = ((uVar10 ^ uVar11) & uVar2 ^ uVar10) + uVar7 + uVar9 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar1 = (*(uint *)((long)param_3 + 0x10) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x10) & 0xff00ff) << 8;
  uVar9 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar14 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = ((uVar11 ^ uVar12) & uVar4 ^ uVar11) + uVar9 + uVar10 + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = (*(uint *)((long)param_3 + 0x14) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x14) & 0xff00ff) << 8;
  uVar10 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = ((uVar12 ^ uVar13) & uVar2 ^ uVar12) + uVar11 + uVar10 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar15 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = (*(uint *)((long)param_3 + 0x18) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x18) & 0xff00ff) << 8;
  uVar11 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar4 = ((uVar13 ^ uVar14) & uVar4 ^ uVar13) + uVar12 + uVar11 + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar16 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = (*(uint *)((long)param_3 + 0x1c) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x1c) & 0xff00ff) << 8;
  uVar12 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = ((uVar14 ^ uVar15) & uVar2 ^ uVar14) + uVar13 + uVar12 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar17 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = (*(uint *)((long)param_3 + 0x20) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x20) & 0xff00ff) << 8;
  uVar13 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar4 = ((uVar15 ^ uVar16) & uVar4 ^ uVar15) + uVar14 + uVar13 + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar18 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = (*(uint *)((long)param_3 + 0x24) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x24) & 0xff00ff) << 8;
  uVar14 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = ((uVar16 ^ uVar17) & uVar2 ^ uVar16) + uVar15 + uVar14 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar19 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = (*(uint *)((long)param_3 + 0x28) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x28) & 0xff00ff) << 8;
  uVar15 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar4 = ((uVar17 ^ uVar18) & uVar4 ^ uVar17) + uVar16 + uVar15 + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = (*(uint *)((long)param_3 + 0x2c) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x2c) & 0xff00ff) << 8;
  uVar16 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = ((uVar18 ^ uVar19) & uVar2 ^ uVar18) + uVar17 + uVar16 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = (*(uint *)((long)param_3 + 0x30) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x30) & 0xff00ff) << 8;
  uVar17 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (*(uint *)((long)param_3 + 0x34) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x34) & 0xff00ff) << 8;
  uVar8 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar4 = ((uVar19 ^ uVar20) & uVar4 ^ uVar19) + uVar18 + uVar17 + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = (*(uint *)((long)param_3 + 0x38) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x38) & 0xff00ff) << 8;
  uVar18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar2 = ((uVar20 ^ uVar21) & uVar2 ^ uVar20) + uVar19 + uVar8 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = (*(uint *)((long)param_3 + 0x3c) & 0xff00ff00) >> 8 |
          (*(uint *)((long)param_3 + 0x3c) & 0xff00ff) << 8;
  uVar19 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar4 = ((uVar21 ^ uVar22) & uVar4 ^ uVar21) + uVar20 + uVar18 + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar13 ^ uVar8 ^ uVar5 ^ uVar3;
  uVar5 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = ((uVar22 ^ uVar23) & uVar2 ^ uVar22) + uVar21 + uVar19 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar14 ^ uVar18 ^ uVar6 ^ uVar7;
  uVar6 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = ((uVar23 ^ uVar20) & uVar4 ^ uVar23) + uVar22 + uVar5 + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar15 ^ uVar19 ^ uVar3 ^ uVar9;
  uVar3 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = ((uVar20 ^ uVar21) & uVar2 ^ uVar20) + uVar23 + uVar6 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar16 ^ uVar5 ^ uVar7 ^ uVar10;
  uVar7 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = ((uVar21 ^ uVar22) & uVar4 ^ uVar21) + uVar20 + uVar3 + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar17 ^ uVar6 ^ uVar9 ^ uVar11;
  uVar9 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = ((uVar22 ^ uVar23) & uVar2 ^ uVar22) + uVar21 + uVar7 + 0x5a827999 +
          (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar8 ^ uVar3 ^ uVar10 ^ uVar12;
  uVar10 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar23 ^ uVar20 ^ uVar4) + uVar22 + uVar9 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar18 ^ uVar7 ^ uVar11 ^ uVar13;
  uVar11 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar20 ^ uVar21 ^ uVar2) + uVar23 + uVar10 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar19 ^ uVar9 ^ uVar12 ^ uVar14;
  uVar12 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar21 ^ uVar22 ^ uVar4) + uVar20 + uVar11 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar5 ^ uVar10 ^ uVar13 ^ uVar15;
  uVar13 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar22 ^ uVar23 ^ uVar2) + uVar21 + uVar12 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar6 ^ uVar11 ^ uVar14 ^ uVar16;
  uVar14 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar23 ^ uVar20 ^ uVar4) + uVar22 + uVar13 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar3 ^ uVar12 ^ uVar15 ^ uVar17;
  uVar15 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar20 ^ uVar21 ^ uVar2) + uVar23 + uVar14 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar7 ^ uVar13 ^ uVar16 ^ uVar8;
  uVar16 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar21 ^ uVar22 ^ uVar4) + uVar20 + uVar15 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar9 ^ uVar14 ^ uVar17 ^ uVar18;
  uVar17 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar22 ^ uVar23 ^ uVar2) + uVar21 + uVar16 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar10 ^ uVar15 ^ uVar8 ^ uVar19;
  uVar8 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar23 ^ uVar20 ^ uVar4) + uVar22 + uVar17 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar11 ^ uVar16 ^ uVar18 ^ uVar5;
  uVar18 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar20 ^ uVar21 ^ uVar2) + uVar23 + uVar8 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar12 ^ uVar17 ^ uVar19 ^ uVar6;
  uVar19 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar21 ^ uVar22 ^ uVar4) + uVar20 + uVar18 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar13 ^ uVar8 ^ uVar5 ^ uVar3;
  uVar24 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar22 ^ uVar23 ^ uVar2) + uVar21 + uVar19 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar14 ^ uVar18 ^ uVar6 ^ uVar7;
  uVar6 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar23 ^ uVar20 ^ uVar4) + uVar22 + uVar24 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar15 ^ uVar19 ^ uVar3 ^ uVar9;
  uVar22 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar20 ^ uVar5 ^ uVar2) + uVar23 + uVar6 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar23 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar16 ^ uVar24 ^ uVar7 ^ uVar10;
  uVar7 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar5 ^ uVar21 ^ uVar4) + uVar20 + uVar22 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar20 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar17 ^ uVar6 ^ uVar9 ^ uVar11;
  uVar9 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar21 ^ uVar23 ^ uVar2) + uVar5 + uVar7 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar8 ^ uVar22 ^ uVar10 ^ uVar12;
  uVar10 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar23 ^ uVar20 ^ uVar4) + uVar21 + uVar9 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar3 = uVar18 ^ uVar7 ^ uVar11 ^ uVar13;
  uVar11 = uVar3 >> 0x1f | uVar3 << 1;
  uVar2 = (uVar20 ^ uVar5 ^ uVar2) + uVar23 + uVar10 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar21 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar3 = uVar19 ^ uVar9 ^ uVar12 ^ uVar14;
  uVar4 = (uVar5 ^ uVar1 ^ uVar4) + uVar20 + uVar11 + 0x6ed9eba1 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar12 = uVar3 >> 0x1f | uVar3 << 1;
  uVar3 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = (uVar1 ^ uVar21 ^ uVar2) + uVar5 + uVar12 + 0x6ed9eba1 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar5 = uVar24 ^ uVar10 ^ uVar13 ^ uVar15;
  uVar13 = uVar5 >> 0x1f | uVar5 << 1;
  uVar20 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar5 = uVar6 ^ uVar11 ^ uVar14 ^ uVar16;
  uVar1 = ((uVar4 | uVar3) & uVar21 | uVar4 & uVar3) + (uVar2 >> 0x1b | uVar2 * 0x20) +
          uVar13 + 0x8f1bbcdc + uVar1;
  uVar14 = uVar5 >> 0x1f | uVar5 << 1;
  uVar5 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar4 = ((uVar2 | uVar20) & uVar3 | uVar2 & uVar20) + uVar21 + uVar14 + 0x8f1bbcdc +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar2 = uVar22 ^ uVar12 ^ uVar15 ^ uVar17;
  uVar15 = uVar2 >> 0x1f | uVar2 << 1;
  uVar21 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar2 = uVar7 ^ uVar13 ^ uVar16 ^ uVar8;
  uVar3 = ((uVar1 | uVar5) & uVar20 | uVar1 & uVar5) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar15 + 0x8f1bbcdc + uVar3;
  uVar16 = uVar2 >> 0x1f | uVar2 << 1;
  uVar2 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = ((uVar4 | uVar21) & uVar5 | uVar4 & uVar21) + uVar20 + uVar16 + 0x8f1bbcdc +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar1 = uVar9 ^ uVar14 ^ uVar17 ^ uVar18;
  uVar17 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar20 = uVar1 >> 0x1f | uVar1 << 1;
  uVar1 = uVar10 ^ uVar15 ^ uVar8 ^ uVar19;
  uVar5 = ((uVar3 | uVar2) & uVar21 | uVar3 & uVar2) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar20 + 0x8f1bbcdc + uVar5;
  uVar8 = uVar1 >> 0x1f | uVar1 << 1;
  uVar1 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = ((uVar4 | uVar17) & uVar2 | uVar4 & uVar17) + uVar21 + uVar8 + 0x8f1bbcdc +
          (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar3 = uVar11 ^ uVar16 ^ uVar18 ^ uVar24;
  uVar18 = uVar3 >> 0x1f | uVar3 << 1;
  uVar21 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar3 = uVar12 ^ uVar20 ^ uVar19 ^ uVar6;
  uVar2 = ((uVar5 | uVar1) & uVar17 | uVar5 & uVar1) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar18 + 0x8f1bbcdc + uVar2;
  uVar19 = uVar3 >> 0x1f | uVar3 << 1;
  uVar3 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = ((uVar4 | uVar21) & uVar1 | uVar4 & uVar21) + uVar17 + uVar19 + 0x8f1bbcdc +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar5 = uVar13 ^ uVar8 ^ uVar24 ^ uVar22;
  uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar23 = uVar5 >> 0x1f | uVar5 << 1;
  uVar5 = uVar14 ^ uVar18 ^ uVar6 ^ uVar7;
  uVar1 = ((uVar2 | uVar3) & uVar21 | uVar2 & uVar3) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar23 + 0x8f1bbcdc + uVar1;
  uVar6 = uVar5 >> 0x1f | uVar5 << 1;
  uVar2 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = ((uVar4 | uVar17) & uVar3 | uVar4 & uVar17) + uVar21 + uVar6 + 0x8f1bbcdc +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar5 = uVar15 ^ uVar19 ^ uVar22 ^ uVar9;
  uVar21 = uVar5 >> 0x1f | uVar5 << 1;
  uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar5 = uVar16 ^ uVar23 ^ uVar7 ^ uVar10;
  uVar3 = ((uVar1 | uVar2) & uVar17 | uVar1 & uVar2) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar21 + 0x8f1bbcdc + uVar3;
  uVar7 = uVar5 >> 0x1f | uVar5 << 1;
  uVar1 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = ((uVar4 | uVar22) & uVar2 | uVar4 & uVar22) + uVar17 + uVar7 + 0x8f1bbcdc +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar5 = uVar20 ^ uVar6 ^ uVar9 ^ uVar11;
  uVar9 = uVar5 >> 0x1f | uVar5 << 1;
  uVar17 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar5 = uVar8 ^ uVar21 ^ uVar10 ^ uVar12;
  uVar2 = ((uVar3 | uVar1) & uVar22 | uVar3 & uVar1) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar9 + 0x8f1bbcdc + uVar2;
  uVar10 = uVar5 >> 0x1f | uVar5 << 1;
  uVar3 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = ((uVar4 | uVar17) & uVar1 | uVar4 & uVar17) + uVar22 + uVar10 + 0x8f1bbcdc +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar5 = uVar18 ^ uVar7 ^ uVar11 ^ uVar13;
  uVar11 = uVar5 >> 0x1f | uVar5 << 1;
  uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar5 = uVar19 ^ uVar9 ^ uVar12 ^ uVar14;
  uVar1 = ((uVar2 | uVar3) & uVar17 | uVar2 & uVar3) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar11 + 0x8f1bbcdc + uVar1;
  uVar12 = uVar5 >> 0x1f | uVar5 << 1;
  uVar2 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = ((uVar4 | uVar22) & uVar3 | uVar4 & uVar22) + uVar17 + uVar12 + 0x8f1bbcdc +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar5 = uVar23 ^ uVar10 ^ uVar13 ^ uVar15;
  uVar13 = uVar5 >> 0x1f | uVar5 << 1;
  uVar17 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar5 = uVar6 ^ uVar11 ^ uVar14 ^ uVar16;
  uVar3 = ((uVar1 | uVar2) & uVar22 | uVar1 & uVar2) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar13 + 0x8f1bbcdc + uVar3;
  uVar5 = uVar5 >> 0x1f | uVar5 << 1;
  uVar14 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar4 = ((uVar4 | uVar17) & uVar2 | uVar4 & uVar17) + uVar22 + uVar5 + 0x8f1bbcdc +
          (uVar3 >> 0x1b | uVar3 * 0x20);
  uVar1 = uVar21 ^ uVar12 ^ uVar15 ^ uVar20;
  uVar15 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar22 = uVar1 >> 0x1f | uVar1 << 1;
  uVar1 = uVar7 ^ uVar13 ^ uVar16 ^ uVar8;
  uVar16 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = ((uVar3 | uVar14) & uVar17 | uVar3 & uVar14) + (uVar4 >> 0x1b | uVar4 * 0x20) +
          uVar22 + 0x8f1bbcdc + uVar2;
  uVar3 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar9 ^ uVar5 ^ uVar20 ^ uVar18;
  uVar20 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = ((uVar4 | uVar15) & uVar14 | uVar4 & uVar15) + uVar17 + uVar16 + 0x8f1bbcdc +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar10 ^ uVar22 ^ uVar8 ^ uVar19;
  uVar8 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar15 ^ uVar3 ^ uVar2) + uVar14 + uVar20 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar14 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar11 ^ uVar16 ^ uVar18 ^ uVar23;
  uVar18 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar3 ^ uVar17 ^ uVar4) + uVar15 + uVar8 + 0xca62c1d6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar15 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar12 ^ uVar20 ^ uVar19 ^ uVar6;
  uVar19 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar17 ^ uVar14 ^ uVar2) + uVar3 + uVar18 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar3 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar13 ^ uVar8 ^ uVar23 ^ uVar21;
  uVar23 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar14 ^ uVar15 ^ uVar4) + uVar17 + uVar19 + 0xca62c1d6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar5 ^ uVar18 ^ uVar6 ^ uVar7;
  uVar6 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar15 ^ uVar3 ^ uVar2) + uVar14 + uVar23 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar14 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar22 ^ uVar19 ^ uVar21 ^ uVar9;
  uVar21 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar3 ^ uVar17 ^ uVar4) + uVar15 + uVar6 + 0xca62c1d6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar15 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar16 ^ uVar23 ^ uVar7 ^ uVar10;
  uVar7 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar17 ^ uVar14 ^ uVar2) + uVar3 + uVar21 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar3 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar9 ^ uVar11 ^ uVar20 ^ uVar6;
  uVar9 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar14 ^ uVar15 ^ uVar4) + uVar17 + uVar7 + 0xca62c1d6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar10 ^ uVar12 ^ uVar8 ^ uVar21;
  uVar10 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar15 ^ uVar3 ^ uVar2) + uVar14 + uVar9 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar14 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar11 ^ uVar13 ^ uVar18 ^ uVar7;
  uVar11 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar3 ^ uVar17 ^ uVar4) + uVar15 + uVar10 + 0xca62c1d6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar15 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar12 ^ uVar5 ^ uVar19 ^ uVar9;
  uVar12 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar17 ^ uVar14 ^ uVar2) + uVar3 + uVar11 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar1 = uVar13 ^ uVar22 ^ uVar23 ^ uVar10;
  uVar3 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar13 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar14 ^ uVar15 ^ uVar4) + uVar17 + uVar12 + 0xca62c1d6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar5 ^ uVar16 ^ uVar6 ^ uVar11;
  uVar5 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar15 ^ uVar3 ^ uVar2) + uVar14 + uVar13 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar14 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar22 ^ uVar20 ^ uVar21 ^ uVar12;
  uVar22 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar3 ^ uVar17 ^ uVar4) + uVar15 + uVar5 + 0xca62c1d6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar15 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar1 = uVar16 ^ uVar8 ^ uVar7 ^ uVar13;
  uVar16 = uVar1 >> 0x1f | uVar1 << 1;
  uVar2 = (uVar17 ^ uVar14 ^ uVar2) + uVar3 + uVar22 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar24 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar20 ^ uVar18 ^ uVar9 ^ uVar5;
  uVar20 = uVar1 >> 0x1f | uVar1 << 1;
  uVar4 = (uVar14 ^ uVar15 ^ uVar4) + uVar17 + uVar16 + 0xca62c1d6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = uVar8 ^ uVar19 ^ uVar10 ^ uVar22;
  uVar17 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = (uVar15 ^ uVar24 ^ uVar2) + uVar14 + uVar20 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar14 = uVar1 >> 0x1f | uVar1 << 1;
  uVar8 = uVar4 >> 2 | uVar4 * 0x40000000;
  uVar1 = uVar18 ^ uVar23 ^ uVar11 ^ uVar16;
  uVar3 = uVar19 ^ uVar6 ^ uVar12 ^ uVar20;
  uVar4 = (uVar24 ^ uVar17 ^ uVar4) + uVar15 + uVar14 + 0xca62c1d6 + (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  *(uint *)param_3 = uVar23;
  *(uint *)((long)param_3 + 4) = uVar6;
  *(uint *)((long)param_3 + 8) = uVar21;
  *(uint *)((long)param_3 + 0xc) = uVar7;
  *(uint *)((long)param_3 + 0x10) = uVar9;
  *(uint *)((long)param_3 + 0x14) = uVar10;
  *(uint *)((long)param_3 + 0x18) = uVar11;
  *(uint *)((long)param_3 + 0x1c) = uVar12;
  *(uint *)((long)param_3 + 0x20) = uVar13;
  *(uint *)((long)param_3 + 0x24) = uVar5;
  uVar3 = uVar3 >> 0x1f | uVar3 << 1;
  *(uint *)((long)param_3 + 0x28) = uVar22;
  *(uint *)((long)param_3 + 0x2c) = uVar16;
  *(uint *)((long)param_3 + 0x30) = uVar20;
  *(uint *)((long)param_3 + 0x34) = uVar14;
  *(uint *)((long)param_3 + 0x38) = uVar1;
  *(uint *)((long)param_3 + 0x3c) = uVar3;
  uVar1 = (uVar17 ^ uVar8 ^ uVar2) + uVar24 + uVar1 + 0xca62c1d6 + (uVar4 >> 0x1b | uVar4 * 0x20);
  uVar2 = uVar2 >> 2 | uVar2 * 0x40000000;
  *param_1 = *param_1 + 0xca62c1d6 + uVar17 + uVar3 +
             (uVar8 ^ uVar2 ^ uVar4) + (uVar1 >> 0x1b | uVar1 * 0x20);
  param_1[1] = param_1[1] + uVar1;
  param_1[2] = param_1[2] + (uVar4 >> 2 | uVar4 * 0x40000000);
  param_1[3] = param_1[3] + uVar2;
  param_1[4] = param_1[4] + uVar8;
  return;
}


