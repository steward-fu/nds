/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_perspective_coefficients_asm
 * Address  : 0019abd0
 * Program  : drastic64
 */


void render_polygon_edge_perspective_coefficients_asm
               (float *param_1,int **param_2,byte *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int **ppiVar5;
  byte *pbVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  iVar2 = **param_2;
  iVar3 = *param_2[1];
  uVar21 = NEON_scvtf(CONCAT44((uint)*(ushort *)((long)param_2[1] + 6) -
                               (uint)*(ushort *)((long)*param_2 + 6),iVar3),4);
  uVar16 = NEON_scvtf(CONCAT44(iVar2 - iVar3,iVar2),4);
  uVar22 = NEON_scvtf(CONCAT44(param_5,param_5),4);
  fVar14 = (float)uVar16;
  fVar17 = fVar14 + fVar14;
  fVar15 = (float)((ulong)uVar16 >> 0x20);
  fVar18 = fVar15 + fVar15;
  fVar19 = fVar17 + fVar17;
  fVar20 = fVar18 + fVar18;
  fVar8 = (float)uVar21 * 0.0 + (float)uVar22 * fVar14;
  fVar9 = (float)uVar21 * (float)((ulong)uVar21 >> 0x20) + (float)((ulong)uVar22 >> 0x20) * fVar15;
  fVar10 = fVar8 + fVar14;
  fVar11 = fVar9 + fVar15;
  fVar12 = fVar8 + fVar17;
  fVar13 = fVar9 + fVar18;
  fVar14 = fVar8 + fVar14 + fVar17;
  fVar15 = fVar9 + fVar15 + fVar18;
  uVar7 = (uint)*param_3;
  do {
    *param_1 = fVar8;
    param_1[1] = fVar9;
    param_1[2] = fVar10;
    param_1[3] = fVar11;
    param_1[4] = fVar12;
    param_1[5] = fVar13;
    param_1[6] = fVar14;
    param_1[7] = fVar15;
    param_1 = param_1 + 8;
    fVar8 = fVar8 + fVar19;
    fVar9 = fVar9 + fVar20;
    fVar10 = fVar10 + fVar19;
    fVar11 = fVar11 + fVar20;
    fVar12 = fVar12 + fVar19;
    fVar13 = fVar13 + fVar20;
    fVar14 = fVar14 + fVar19;
    fVar15 = fVar15 + fVar20;
    uVar4 = uVar7 - 4;
    bVar1 = 3 < (int)uVar7;
    uVar7 = uVar4;
  } while (uVar4 != 0 && bVar1);
  param_1 = param_1 + (long)(int)uVar4 * 2;
  ppiVar5 = param_2 + 2;
  pbVar6 = param_3 + 1;
  for (param_4 = param_4 + -1; param_4 != 0; param_4 = param_4 + -1) {
    iVar2 = **ppiVar5;
    iVar3 = *ppiVar5[1];
    uVar21 = NEON_scvtf(CONCAT44((uint)*(ushort *)((long)ppiVar5[1] + 6) -
                                 (uint)*(ushort *)((long)*ppiVar5 + 6),iVar3),4);
    uVar16 = NEON_scvtf(CONCAT44(iVar2 - iVar3,iVar2),4);
    fVar14 = (float)uVar16;
    fVar17 = fVar14 + fVar14;
    fVar15 = (float)((ulong)uVar16 >> 0x20);
    fVar18 = fVar15 + fVar15;
    fVar8 = (float)uVar21 * 0.0;
    fVar9 = (float)uVar21 * (float)((ulong)uVar21 >> 0x20);
    fVar19 = fVar17 + fVar17;
    fVar20 = fVar18 + fVar18;
    fVar10 = fVar8 + fVar14;
    fVar11 = fVar9 + fVar15;
    fVar12 = fVar8 + fVar17;
    fVar13 = fVar9 + fVar18;
    fVar14 = fVar8 + fVar14 + fVar17;
    fVar15 = fVar9 + fVar15 + fVar18;
    uVar7 = (uint)*pbVar6;
    do {
      *param_1 = fVar8;
      param_1[1] = fVar9;
      param_1[2] = fVar10;
      param_1[3] = fVar11;
      param_1[4] = fVar12;
      param_1[5] = fVar13;
      param_1[6] = fVar14;
      param_1[7] = fVar15;
      param_1 = param_1 + 8;
      fVar8 = fVar8 + fVar19;
      fVar9 = fVar9 + fVar20;
      fVar10 = fVar10 + fVar19;
      fVar11 = fVar11 + fVar20;
      fVar12 = fVar12 + fVar19;
      fVar13 = fVar13 + fVar20;
      fVar14 = fVar14 + fVar19;
      fVar15 = fVar15 + fVar20;
      uVar4 = uVar7 - 4;
      bVar1 = 3 < (int)uVar7;
      uVar7 = uVar4;
    } while (uVar4 != 0 && bVar1);
    param_1 = param_1 + (long)(int)uVar4 * 2;
    ppiVar5 = ppiVar5 + 2;
    pbVar6 = pbVar6 + 1;
  }
  return;
}


