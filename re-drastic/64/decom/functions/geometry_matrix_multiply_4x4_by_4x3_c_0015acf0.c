/*
 * Ghidra decompilation
 *
 * Function : geometry_matrix_multiply_4x4_by_4x3_c
 * Address  : 0015acf0
 * Program  : drastic64
 */


void geometry_matrix_multiply_4x4_by_4x3_c
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
  int iVar19;
  undefined8 uVar18;
  int iVar20;
  int iVar22;
  undefined8 uVar21;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  
  iVar14 = (int)((ulong)param_3[4] >> 0x20);
  iVar15 = (int)param_3[5];
  iVar7 = (int)*param_2;
  iVar8 = (int)((ulong)*param_2 >> 0x20);
  iVar20 = (int)param_3[3];
  iVar1 = (int)param_2[1];
  iVar4 = (int)((ulong)param_2[1] >> 0x20);
  iVar22 = (int)((ulong)param_3[3] >> 0x20);
  iVar23 = (int)*param_3;
  iVar26 = (int)((ulong)param_3[1] >> 0x20);
  iVar11 = (int)param_2[2];
  iVar12 = (int)((ulong)param_2[2] >> 0x20);
  iVar2 = (int)param_2[3];
  iVar5 = (int)((ulong)param_2[3] >> 0x20);
  iVar24 = (int)((ulong)*param_3 >> 0x20);
  iVar16 = (int)((ulong)param_3[5] >> 0x20);
  iVar17 = (int)param_3[2];
  iVar25 = (int)param_3[1];
  iVar13 = (int)param_3[4];
  iVar19 = (int)((ulong)param_3[2] >> 0x20);
  iVar9 = (int)param_2[4];
  iVar10 = (int)((ulong)param_2[4] >> 0x20);
  iVar3 = (int)param_2[5];
  iVar6 = (int)((ulong)param_2[5] >> 0x20);
  uVar21 = param_2[7];
  uVar18 = param_2[6];
  param_1[1] = CONCAT44((int)((long)iVar4 * (long)iVar23 + (long)iVar5 * (long)iVar24 +
                              (long)iVar6 * (long)iVar25 >> 0xc),
                        (int)((long)iVar1 * (long)iVar23 + (long)iVar2 * (long)iVar24 +
                              (long)iVar3 * (long)iVar25 >> 0xc));
  *param_1 = CONCAT44((int)((long)iVar8 * (long)iVar23 + (long)iVar12 * (long)iVar24 +
                            (long)iVar10 * (long)iVar25 >> 0xc),
                      (int)((long)iVar7 * (long)iVar23 + (long)iVar11 * (long)iVar24 +
                            (long)iVar9 * (long)iVar25 >> 0xc));
  param_1[3] = CONCAT44((int)((long)iVar4 * (long)iVar26 + (long)iVar5 * (long)iVar17 +
                              (long)iVar6 * (long)iVar19 >> 0xc),
                        (int)((long)iVar1 * (long)iVar26 + (long)iVar2 * (long)iVar17 +
                              (long)iVar3 * (long)iVar19 >> 0xc));
  param_1[2] = CONCAT44((int)((long)iVar8 * (long)iVar26 + (long)iVar12 * (long)iVar17 +
                              (long)iVar10 * (long)iVar19 >> 0xc),
                        (int)((long)iVar7 * (long)iVar26 + (long)iVar11 * (long)iVar17 +
                              (long)iVar9 * (long)iVar19 >> 0xc));
  param_1[5] = CONCAT44((int)((long)iVar4 * (long)iVar20 + (long)iVar5 * (long)iVar22 +
                              (long)iVar6 * (long)iVar13 >> 0xc),
                        (int)((long)iVar1 * (long)iVar20 + (long)iVar2 * (long)iVar22 +
                              (long)iVar3 * (long)iVar13 >> 0xc));
  param_1[4] = CONCAT44((int)((long)iVar8 * (long)iVar20 + (long)iVar12 * (long)iVar22 +
                              (long)iVar10 * (long)iVar13 >> 0xc),
                        (int)((long)iVar7 * (long)iVar20 + (long)iVar11 * (long)iVar22 +
                              (long)iVar9 * (long)iVar13 >> 0xc));
  param_1[7] = CONCAT44((int)((long)iVar4 * (long)iVar14 + (long)iVar5 * (long)iVar15 +
                              (long)iVar6 * (long)iVar16 >> 0xc) + (int)((ulong)uVar21 >> 0x20),
                        (int)((long)iVar1 * (long)iVar14 + (long)iVar2 * (long)iVar15 +
                              (long)iVar3 * (long)iVar16 >> 0xc) + (int)uVar21);
  param_1[6] = CONCAT44((int)((long)iVar8 * (long)iVar14 + (long)iVar12 * (long)iVar15 +
                              (long)iVar10 * (long)iVar16 >> 0xc) + (int)((ulong)uVar18 >> 0x20),
                        (int)((long)iVar7 * (long)iVar14 + (long)iVar11 * (long)iVar15 +
                              (long)iVar9 * (long)iVar16 >> 0xc) + (int)uVar18);
  return;
}


