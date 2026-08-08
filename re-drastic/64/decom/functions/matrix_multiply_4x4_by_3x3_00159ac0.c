/*
 * Ghidra decompilation
 *
 * Function : matrix_multiply_4x4_by_3x3
 * Address  : 00159ac0
 * Program  : drastic64
 */


void matrix_multiply_4x4_by_3x3(undefined4 *param_1,int *param_2,int *param_3)

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
  undefined8 uVar22;
  undefined8 uVar23;
  
  iVar1 = *param_3;
  iVar11 = param_3[1];
  iVar2 = param_3[2];
  iVar12 = param_3[3];
  iVar3 = param_3[6];
  iVar13 = param_3[7];
  iVar4 = *param_2;
  iVar14 = param_2[1];
  iVar5 = param_3[4];
  iVar15 = param_3[5];
  iVar6 = param_2[4];
  iVar16 = param_2[5];
  iVar7 = param_2[2];
  iVar17 = param_2[3];
  iVar8 = param_2[6];
  iVar18 = param_2[7];
  iVar9 = param_2[8];
  iVar19 = param_2[9];
  iVar10 = param_2[10];
  iVar20 = param_2[0xb];
  iVar21 = param_3[8];
  uVar23 = *(undefined8 *)(param_2 + 0xe);
  uVar22 = *(undefined8 *)(param_2 + 0xc);
  *param_1 = (int)((long)iVar4 * (long)iVar1 + (long)iVar6 * (long)iVar11 +
                   (long)iVar9 * (long)iVar2 >> 0xc);
  param_1[1] = (int)((long)iVar1 * (long)iVar14 + (long)iVar11 * (long)iVar16 +
                     (long)iVar2 * (long)iVar19 >> 0xc);
  param_1[2] = (int)((long)iVar1 * (long)iVar7 + (long)iVar11 * (long)iVar8 +
                     (long)iVar2 * (long)iVar10 >> 0xc);
  param_1[3] = (int)((long)iVar1 * (long)iVar17 + (long)iVar11 * (long)iVar18 +
                     (long)iVar2 * (long)iVar20 >> 0xc);
  param_1[4] = (int)((long)iVar4 * (long)iVar12 + (long)iVar6 * (long)iVar5 +
                     (long)iVar9 * (long)iVar15 >> 0xc);
  param_1[5] = (int)((long)iVar14 * (long)iVar12 + (long)iVar16 * (long)iVar5 +
                     (long)iVar19 * (long)iVar15 >> 0xc);
  param_1[6] = (int)((long)iVar7 * (long)iVar12 + (long)iVar8 * (long)iVar5 +
                     (long)iVar10 * (long)iVar15 >> 0xc);
  param_1[7] = (int)((long)iVar17 * (long)iVar12 + (long)iVar18 * (long)iVar5 +
                     (long)iVar20 * (long)iVar15 >> 0xc);
  param_1[8] = (int)((long)iVar4 * (long)iVar3 + (long)iVar6 * (long)iVar13 +
                     (long)iVar9 * (long)iVar21 >> 0xc);
  param_1[9] = (int)((long)iVar14 * (long)iVar3 + (long)iVar16 * (long)iVar13 +
                     (long)iVar19 * (long)iVar21 >> 0xc);
  param_1[10] = (int)((long)iVar7 * (long)iVar3 + (long)iVar8 * (long)iVar13 +
                      (long)iVar10 * (long)iVar21 >> 0xc);
  param_1[0xb] = (int)((long)iVar17 * (long)iVar3 + (long)iVar18 * (long)iVar13 +
                       (long)iVar20 * (long)iVar21 >> 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar23;
  *(undefined8 *)(param_1 + 0xc) = uVar22;
  return;
}


