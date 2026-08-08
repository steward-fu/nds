/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_perspective_coefficients_c
 * Address  : 00144050
 * Program  : drastic64
 */


void render_polygon_setup_perspective_coefficients_c
               (int *param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  
  if (param_4 != 0) {
    piVar1 = param_1 + (ulong)(param_4 - 1) + 1;
    do {
      iVar9 = *param_1;
      iVar10 = param_1[0x2c];
      uVar2 = *(ushort *)(param_1 + 0x18c);
      fVar7 = (float)(iVar9 + iVar10) * (float)(ulong)uVar2;
      if (uVar2 != 0) {
        uVar6 = (ulong)(uVar2 - 1);
        fVar8 = 0.0;
        uVar4 = 0;
        do {
          *(float *)(param_2 + uVar4 * 4) = fVar8;
          *(float *)(param_3 + uVar4 * 4) = fVar7;
          bVar3 = uVar6 != uVar4;
          fVar8 = fVar8 + (float)iVar9;
          fVar7 = fVar7 - (float)iVar10;
          uVar4 = uVar4 + 1;
        } while (bVar3);
        lVar5 = (uVar6 + 1) * 4;
        param_2 = param_2 + lVar5;
        param_3 = param_3 + lVar5;
      }
      param_1 = param_1 + 1;
    } while (param_1 != piVar1);
  }
  return;
}


