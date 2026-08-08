/*
 * Ghidra decompilation
 *
 * Function : matrix_multiply_4x4_by_3x3
 * Address  : 08079230
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void matrix_multiply_4x4_by_3x3(s32 *dest,s32 *source_a,s32 *source_b)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  s32 b12;
  int iVar7;
  s32 sVar8;
  int iVar9;
  s32 a10;
  int iVar10;
  s32 a33;
  int iVar11;
  s32 a13;
  s32 sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  s32 sVar18;
  int iVar19;
  s32 b11;
  int iVar20;
  s32 a00;
  int iVar21;
  s32 a12;
  int iVar22;
  int iVar23;
  int iVar24;
  s32 b10;
  int iVar25;
  int iVar26;
  s32 b02;
  s32 a01;
  s32 a02;
  int iStack_9c;
  s32 a03;
  int iStack_94;
  s32 a22;
  int iStack_8c;
  s32 a23;
  s32 a11;
  s32 a20;
  s32 a21;
  s32 b20;
  s32 b21;
  s32 a30;
  s32 a31;
  s32 a32;
  s32 b22;
  uint local_30;
  int iStack_2c;
  
  iVar10 = *source_b;
  iVar9 = source_a[4];
  iVar21 = source_a[6];
  iVar4 = source_a[5];
  iVar11 = source_b[1];
  iVar20 = *source_a;
  a12 = source_a[7];
  iVar19 = source_b[4];
  iVar22 = source_b[7];
  iVar13 = source_a[1];
  iVar5 = source_b[6];
  iVar14 = source_a[2];
  iVar23 = source_a[3];
  iVar24 = source_b[3];
  iVar25 = source_a[8];
  iVar26 = source_b[2];
  iVar15 = source_a[9];
  iVar16 = source_a[10];
  iVar17 = source_a[0xb];
  iVar6 = source_b[5];
  iVar7 = source_b[8];
  sVar8 = source_a[0xc];
  lVar1 = (longlong)iVar25 * (longlong)iVar26 +
          (longlong)iVar20 * (longlong)iVar10 + (longlong)iVar9 * (longlong)iVar11;
  sVar12 = source_a[0xd];
  sVar18 = source_a[0xe];
  dest[0xf] = source_a[0xf];
  local_30 = (uint)lVar1;
  iStack_2c = (int)((ulonglong)lVar1 >> 0x20);
  *dest = local_30 >> 0xc | iStack_2c << 0x14;
  lVar1 = (longlong)iVar26 * (longlong)iVar15 +
          (longlong)iVar10 * (longlong)iVar13 + (longlong)iVar11 * (longlong)iVar4;
  lVar2 = (longlong)iVar26 * (longlong)iVar16 +
          (longlong)iVar10 * (longlong)iVar14 + (longlong)iVar11 * (longlong)iVar21;
  dest[1] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  dest[2] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  lVar1 = (longlong)iVar26 * (longlong)iVar17 +
          (longlong)iVar10 * (longlong)iVar23 + (longlong)iVar11 * (longlong)a12;
  dest[3] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)iVar25 * (longlong)iVar6 +
          (longlong)iVar20 * (longlong)iVar24 + (longlong)iVar9 * (longlong)iVar19;
  lVar2 = (longlong)iVar25 * (longlong)iVar7 +
          (longlong)iVar20 * (longlong)iVar5 + (longlong)iVar9 * (longlong)iVar22;
  lVar3 = (longlong)iVar15 * (longlong)iVar6 +
          (longlong)iVar13 * (longlong)iVar24 + (longlong)iVar4 * (longlong)iVar19;
  dest[4] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  lVar1 = (longlong)iVar16 * (longlong)iVar6 +
          (longlong)iVar14 * (longlong)iVar24 + (longlong)iVar21 * (longlong)iVar19;
  dest[5] = (uint)lVar3 >> 0xc | (int)((ulonglong)lVar3 >> 0x20) << 0x14;
  dest[8] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  lVar2 = (longlong)iVar17 * (longlong)iVar6 +
          (longlong)iVar23 * (longlong)iVar24 + (longlong)a12 * (longlong)iVar19;
  dest[0xd] = sVar12;
  dest[0xe] = sVar18;
  lVar3 = (longlong)iVar15 * (longlong)iVar7 +
          (longlong)iVar13 * (longlong)iVar5 + (longlong)iVar4 * (longlong)iVar22;
  dest[6] = (uint)lVar1 >> 0xc | (int)((ulonglong)lVar1 >> 0x20) << 0x14;
  a02 = (s32)lVar3;
  iStack_9c = (int)((ulonglong)lVar3 >> 0x20);
  lVar1 = (longlong)iVar16 * (longlong)iVar7 +
          (longlong)iVar14 * (longlong)iVar5 + (longlong)iVar21 * (longlong)iVar22;
  dest[7] = (uint)lVar2 >> 0xc | (int)((ulonglong)lVar2 >> 0x20) << 0x14;
  lVar2 = (longlong)iVar17 * (longlong)iVar7 +
          (longlong)iVar23 * (longlong)iVar5 + (longlong)a12 * (longlong)iVar22;
  a03 = (s32)lVar1;
  iStack_94 = (int)((ulonglong)lVar1 >> 0x20);
  dest[9] = (uint)a02 >> 0xc | iStack_9c << 0x14;
  a22 = (s32)lVar2;
  iStack_8c = (int)((ulonglong)lVar2 >> 0x20);
  dest[0xc] = sVar8;
  dest[10] = (uint)a03 >> 0xc | iStack_94 << 0x14;
  dest[0xb] = (uint)a22 >> 0xc | iStack_8c << 0x14;
  return;
}


