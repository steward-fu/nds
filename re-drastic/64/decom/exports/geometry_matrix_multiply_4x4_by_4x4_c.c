/*
 * Ghidra decompilation
 *
 * Function : geometry_matrix_multiply_4x4_by_4x4_c
 * Address  : 0015abc0
 * Program  : drastic64
 */


void geometry_matrix_multiply_4x4_by_4x4_c
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  iVar29 = (int)*param_3;
  iVar25 = (int)param_3[2];
  iVar17 = (int)param_3[6];
  iVar21 = (int)param_3[4];
  iVar30 = (int)((ulong)*param_3 >> 0x20);
  iVar26 = (int)((ulong)param_3[2] >> 0x20);
  iVar22 = (int)((ulong)param_3[4] >> 0x20);
  iVar18 = (int)((ulong)param_3[6] >> 0x20);
  iVar9 = (int)*param_2;
  iVar10 = (int)((ulong)*param_2 >> 0x20);
  iVar1 = (int)param_2[1];
  iVar5 = (int)((ulong)param_2[1] >> 0x20);
  iVar31 = (int)param_3[1];
  iVar27 = (int)param_3[3];
  iVar11 = (int)param_2[2];
  iVar14 = (int)((ulong)param_2[2] >> 0x20);
  iVar2 = (int)param_2[3];
  iVar6 = (int)((ulong)param_2[3] >> 0x20);
  iVar23 = (int)param_3[5];
  iVar19 = (int)param_3[7];
  iVar32 = (int)((ulong)param_3[1] >> 0x20);
  iVar28 = (int)((ulong)param_3[3] >> 0x20);
  iVar24 = (int)((ulong)param_3[5] >> 0x20);
  iVar20 = (int)((ulong)param_3[7] >> 0x20);
  iVar12 = (int)param_2[4];
  iVar15 = (int)((ulong)param_2[4] >> 0x20);
  iVar3 = (int)param_2[5];
  iVar7 = (int)((ulong)param_2[5] >> 0x20);
  iVar13 = (int)param_2[6];
  iVar16 = (int)((ulong)param_2[6] >> 0x20);
  iVar4 = (int)param_2[7];
  iVar8 = (int)((ulong)param_2[7] >> 0x20);
  param_1[1] = CONCAT44((int)((long)iVar5 * (long)iVar29 + (long)iVar6 * (long)iVar30 +
                              (long)iVar7 * (long)iVar31 + (long)iVar8 * (long)iVar32 >> 0xc),
                        (int)((long)iVar1 * (long)iVar29 + (long)iVar2 * (long)iVar30 +
                              (long)iVar3 * (long)iVar31 + (long)iVar4 * (long)iVar32 >> 0xc));
  *param_1 = CONCAT44((int)((long)iVar10 * (long)iVar29 + (long)iVar14 * (long)iVar30 +
                            (long)iVar15 * (long)iVar31 + (long)iVar16 * (long)iVar32 >> 0xc),
                      (int)((long)iVar9 * (long)iVar29 + (long)iVar11 * (long)iVar30 +
                            (long)iVar12 * (long)iVar31 + (long)iVar13 * (long)iVar32 >> 0xc));
  param_1[3] = CONCAT44((int)((long)iVar5 * (long)iVar25 + (long)iVar6 * (long)iVar26 +
                              (long)iVar7 * (long)iVar27 + (long)iVar8 * (long)iVar28 >> 0xc),
                        (int)((long)iVar1 * (long)iVar25 + (long)iVar2 * (long)iVar26 +
                              (long)iVar3 * (long)iVar27 + (long)iVar4 * (long)iVar28 >> 0xc));
  param_1[2] = CONCAT44((int)((long)iVar10 * (long)iVar25 + (long)iVar14 * (long)iVar26 +
                              (long)iVar15 * (long)iVar27 + (long)iVar16 * (long)iVar28 >> 0xc),
                        (int)((long)iVar9 * (long)iVar25 + (long)iVar11 * (long)iVar26 +
                              (long)iVar12 * (long)iVar27 + (long)iVar13 * (long)iVar28 >> 0xc));
  param_1[5] = CONCAT44((int)((long)iVar5 * (long)iVar21 + (long)iVar6 * (long)iVar22 +
                              (long)iVar7 * (long)iVar23 + (long)iVar8 * (long)iVar24 >> 0xc),
                        (int)((long)iVar1 * (long)iVar21 + (long)iVar2 * (long)iVar22 +
                              (long)iVar3 * (long)iVar23 + (long)iVar4 * (long)iVar24 >> 0xc));
  param_1[4] = CONCAT44((int)((long)iVar10 * (long)iVar21 + (long)iVar14 * (long)iVar22 +
                              (long)iVar15 * (long)iVar23 + (long)iVar16 * (long)iVar24 >> 0xc),
                        (int)((long)iVar9 * (long)iVar21 + (long)iVar11 * (long)iVar22 +
                              (long)iVar12 * (long)iVar23 + (long)iVar13 * (long)iVar24 >> 0xc));
  param_1[7] = CONCAT44((int)((long)iVar5 * (long)iVar17 + (long)iVar6 * (long)iVar18 +
                              (long)iVar7 * (long)iVar19 + (long)iVar8 * (long)iVar20 >> 0xc),
                        (int)((long)iVar1 * (long)iVar17 + (long)iVar2 * (long)iVar18 +
                              (long)iVar3 * (long)iVar19 + (long)iVar4 * (long)iVar20 >> 0xc));
  param_1[6] = CONCAT44((int)((long)iVar10 * (long)iVar17 + (long)iVar14 * (long)iVar18 +
                              (long)iVar15 * (long)iVar19 + (long)iVar16 * (long)iVar20 >> 0xc),
                        (int)((long)iVar9 * (long)iVar17 + (long)iVar11 * (long)iVar18 +
                              (long)iVar12 * (long)iVar19 + (long)iVar13 * (long)iVar20 >> 0xc));
  return;
}


