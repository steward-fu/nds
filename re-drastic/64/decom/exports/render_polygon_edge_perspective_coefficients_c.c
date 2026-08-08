/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_perspective_coefficients_c
 * Address  : 0014be20
 * Program  : drastic64
 */


void render_polygon_edge_perspective_coefficients_c
               (float *param_1,int **param_2,byte *param_3,uint param_4,int param_5)

{
  uint **ppuVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  byte *pbVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = **param_2;
  uVar3 = *param_2[1];
  iVar5 = iVar2 - uVar3;
  fVar11 = (float)iVar2;
  fVar10 = (float)NEON_fmadd((float)(ulong)uVar3,
                             (float)((uint)*(ushort *)((long)param_2[1] + 6) -
                                    (uint)*(ushort *)((long)*param_2 + 6)),(float)(iVar5 * param_5))
  ;
  fVar9 = (float)param_5 * fVar11;
  param_2 = param_2 + 2;
  if (*param_3 != 0) {
    uVar3 = *param_3 - 1;
    pfVar6 = param_1;
    do {
      *pfVar6 = fVar9;
      pfVar6[1] = fVar10;
      pfVar6 = pfVar6 + 2;
      fVar9 = fVar9 + fVar11;
      fVar10 = fVar10 + (float)iVar5;
    } while (param_1 + (ulong)uVar3 * 2 + 2 != pfVar6);
    param_1 = param_1 + (long)(int)uVar3 * 2 + 2;
  }
  if (1 < param_4) {
    pbVar8 = param_3 + 1;
    do {
      piVar7 = *param_2;
      ppuVar1 = (uint **)(param_2 + 1);
      param_2 = param_2 + 2;
      uVar3 = **ppuVar1;
      iVar2 = *piVar7;
      fVar9 = (float)((uint)*(ushort *)((long)*ppuVar1 + 6) - (uint)*(ushort *)((long)piVar7 + 6)) *
              (float)(ulong)uVar3;
      if (*pbVar8 != 0) {
        uVar4 = *pbVar8 - 1;
        fVar10 = 0.0;
        pfVar6 = param_1;
        do {
          *pfVar6 = fVar10;
          pfVar6[1] = fVar9;
          pfVar6 = pfVar6 + 2;
          fVar10 = fVar10 + (float)iVar2;
          fVar9 = fVar9 + (float)(iVar2 - uVar3);
        } while (pfVar6 != param_1 + (ulong)uVar4 * 2 + 2);
        param_1 = param_1 + (long)(int)uVar4 * 2 + 2;
      }
      pbVar8 = pbVar8 + 1;
    } while (param_3 + (ulong)(param_4 - 2) + 2 != pbVar8);
  }
  return;
}


