/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_perspective_coefficients_asm
 * Address  : 00199d50
 * Program  : drastic64
 */


void render_polygon_setup_perspective_coefficients_asm
               (int *param_1,float *param_2,float *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar6 = NEON_fmov(0x41000000,4);
  piVar3 = param_1 + 0x2c;
  piVar4 = param_1 + 0x18c;
  do {
    uVar8 = NEON_scvtf((ulong)CONCAT24(*(ushort *)piVar4,*param_1 + *piVar3),4);
    fVar7 = (float)uVar8 * (float)((ulong)uVar8 >> 0x20);
    uVar8 = NEON_scvtf(CONCAT44(*param_1,*piVar3),4);
    fVar18 = (float)uVar8;
    fVar10 = fVar7 - fVar18 * 0.0;
    fVar11 = fVar7 - fVar18 * 1.0;
    fVar12 = fVar7 - fVar18 * 2.0;
    fVar13 = fVar7 - fVar18 * 3.0;
    fVar14 = fVar7 - fVar18 * 4.0;
    fVar15 = fVar7 - fVar18 * 5.0;
    fVar16 = fVar7 - fVar18 * 6.0;
    fVar7 = fVar7 - fVar18 * 7.0;
    fVar9 = (float)((ulong)uVar8 >> 0x20);
    fVar19 = fVar9 * 0.0;
    fVar20 = fVar9 * 1.0;
    fVar21 = fVar9 * 2.0;
    fVar22 = fVar9 * 3.0;
    fVar23 = fVar9 * 4.0;
    fVar24 = fVar9 * 5.0;
    fVar25 = fVar9 * 6.0;
    fVar26 = fVar9 * 7.0;
    fVar17 = (float)uVar6 * fVar18;
    fVar28 = (float)((ulong)uVar6 >> 0x20);
    fVar18 = fVar28 * fVar18;
    fVar27 = (float)uVar6 * fVar9;
    fVar28 = fVar28 * fVar9;
    uVar5 = (uint)*(ushort *)piVar4;
    do {
      *param_3 = fVar10;
      param_3[1] = fVar11;
      param_3[2] = fVar12;
      param_3[3] = fVar13;
      param_3[4] = fVar14;
      param_3[5] = fVar15;
      param_3[6] = fVar16;
      param_3[7] = fVar7;
      param_3 = param_3 + 8;
      *param_2 = fVar19;
      param_2[1] = fVar20;
      param_2[2] = fVar21;
      param_2[3] = fVar22;
      param_2[4] = fVar23;
      param_2[5] = fVar24;
      param_2[6] = fVar25;
      param_2[7] = fVar26;
      param_2 = param_2 + 8;
      fVar10 = fVar10 - fVar17;
      fVar11 = fVar11 - fVar18;
      fVar12 = fVar12 - fVar17;
      fVar13 = fVar13 - fVar18;
      fVar14 = fVar14 - fVar17;
      fVar15 = fVar15 - fVar18;
      fVar16 = fVar16 - fVar17;
      fVar7 = fVar7 - fVar18;
      fVar19 = fVar19 + fVar27;
      fVar20 = fVar20 + fVar28;
      fVar21 = fVar21 + fVar27;
      fVar22 = fVar22 + fVar28;
      fVar23 = fVar23 + fVar27;
      fVar24 = fVar24 + fVar28;
      fVar25 = fVar25 + fVar27;
      fVar26 = fVar26 + fVar28;
      uVar2 = uVar5 - 8;
      bVar1 = 7 < (int)uVar5;
      uVar5 = uVar2;
    } while (uVar2 != 0 && bVar1);
    param_3 = param_3 + (int)uVar2;
    param_2 = param_2 + (int)uVar2;
    param_4 = param_4 + -1;
    param_1 = param_1 + 1;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (param_4 != 0);
  return;
}


