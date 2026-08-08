/*
 * Ghidra decompilation
 *
 * Function : geometry_matrix_multiply_4x4_by_4x4_asm
 * Address  : 0019df08
 * Program  : drastic64
 */


void geometry_matrix_multiply_4x4_by_4x4_asm(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  
  iVar17 = *param_2;
  iVar18 = param_2[1];
  iVar19 = param_2[2];
  iVar20 = param_2[3];
  iVar21 = param_2[4];
  iVar22 = param_2[5];
  iVar23 = param_2[6];
  iVar24 = param_2[7];
  iVar25 = param_2[8];
  iVar26 = param_2[9];
  iVar27 = param_2[10];
  iVar28 = param_2[0xb];
  iVar29 = param_2[0xc];
  iVar30 = param_2[0xd];
  iVar31 = param_2[0xe];
  iVar32 = param_2[0xf];
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  iVar5 = param_3[4];
  iVar6 = param_3[5];
  iVar7 = param_3[6];
  iVar8 = param_3[7];
  iVar9 = param_3[8];
  iVar10 = param_3[9];
  iVar11 = param_3[10];
  iVar12 = param_3[0xb];
  iVar13 = param_3[0xc];
  iVar14 = param_3[0xd];
  iVar15 = param_3[0xe];
  iVar16 = param_3[0xf];
  *param_1 = (int)((ulong)((long)iVar17 * (long)iVar1 + (long)iVar21 * (long)iVar2 +
                           (long)iVar25 * (long)iVar3 + (long)iVar29 * (long)iVar4) >> 0xc);
  param_1[1] = (int)((ulong)((long)iVar18 * (long)iVar1 + (long)iVar22 * (long)iVar2 +
                             (long)iVar26 * (long)iVar3 + (long)iVar30 * (long)iVar4) >> 0xc);
  param_1[2] = (int)((ulong)((long)iVar19 * (long)iVar1 + (long)iVar23 * (long)iVar2 +
                             (long)iVar27 * (long)iVar3 + (long)iVar31 * (long)iVar4) >> 0xc);
  param_1[3] = (int)((ulong)((long)iVar20 * (long)iVar1 + (long)iVar24 * (long)iVar2 +
                             (long)iVar28 * (long)iVar3 + (long)iVar32 * (long)iVar4) >> 0xc);
  param_1[4] = (int)((ulong)((long)iVar17 * (long)iVar5 + (long)iVar21 * (long)iVar6 +
                             (long)iVar25 * (long)iVar7 + (long)iVar29 * (long)iVar8) >> 0xc);
  param_1[5] = (int)((ulong)((long)iVar18 * (long)iVar5 + (long)iVar22 * (long)iVar6 +
                             (long)iVar26 * (long)iVar7 + (long)iVar30 * (long)iVar8) >> 0xc);
  param_1[6] = (int)((ulong)((long)iVar19 * (long)iVar5 + (long)iVar23 * (long)iVar6 +
                             (long)iVar27 * (long)iVar7 + (long)iVar31 * (long)iVar8) >> 0xc);
  param_1[7] = (int)((ulong)((long)iVar20 * (long)iVar5 + (long)iVar24 * (long)iVar6 +
                             (long)iVar28 * (long)iVar7 + (long)iVar32 * (long)iVar8) >> 0xc);
  param_1[8] = (int)((ulong)((long)iVar17 * (long)iVar9 + (long)iVar21 * (long)iVar10 +
                             (long)iVar25 * (long)iVar11 + (long)iVar29 * (long)iVar12) >> 0xc);
  param_1[9] = (int)((ulong)((long)iVar18 * (long)iVar9 + (long)iVar22 * (long)iVar10 +
                             (long)iVar26 * (long)iVar11 + (long)iVar30 * (long)iVar12) >> 0xc);
  param_1[10] = (int)((ulong)((long)iVar19 * (long)iVar9 + (long)iVar23 * (long)iVar10 +
                              (long)iVar27 * (long)iVar11 + (long)iVar31 * (long)iVar12) >> 0xc);
  param_1[0xb] = (int)((ulong)((long)iVar20 * (long)iVar9 + (long)iVar24 * (long)iVar10 +
                               (long)iVar28 * (long)iVar11 + (long)iVar32 * (long)iVar12) >> 0xc);
  param_1[0xc] = (int)((ulong)((long)iVar17 * (long)iVar13 + (long)iVar21 * (long)iVar14 +
                               (long)iVar25 * (long)iVar15 + (long)iVar29 * (long)iVar16) >> 0xc);
  param_1[0xd] = (int)((ulong)((long)iVar18 * (long)iVar13 + (long)iVar22 * (long)iVar14 +
                               (long)iVar26 * (long)iVar15 + (long)iVar30 * (long)iVar16) >> 0xc);
  param_1[0xe] = (int)((ulong)((long)iVar19 * (long)iVar13 + (long)iVar23 * (long)iVar14 +
                               (long)iVar27 * (long)iVar15 + (long)iVar31 * (long)iVar16) >> 0xc);
  param_1[0xf] = (int)((ulong)((long)iVar20 * (long)iVar13 + (long)iVar24 * (long)iVar14 +
                               (long)iVar28 * (long)iVar15 + (long)iVar32 * (long)iVar16) >> 0xc);
  return;
}


