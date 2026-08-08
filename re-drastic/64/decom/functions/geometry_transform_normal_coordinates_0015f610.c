/*
 * Ghidra decompilation
 *
 * Function : geometry_transform_normal_coordinates
 * Address  : 0015f610
 * Program  : drastic64
 */


void geometry_transform_normal_coordinates
               (undefined2 *param_1,long param_2,int *param_3,uint param_4)

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
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  
  if (param_4 != 0) {
    iVar1 = *param_3;
    iVar4 = param_3[1];
    lVar14 = 0;
    iVar7 = param_3[2];
    iVar2 = param_3[4];
    iVar5 = param_3[5];
    iVar8 = param_3[6];
    iVar3 = param_3[8];
    iVar6 = param_3[9];
    iVar9 = param_3[10];
    do {
      uVar11 = (ulong)*(uint *)(param_2 + lVar14 * 4);
      lVar14 = lVar14 + 1;
      iVar13 = (int)((long)(uVar11 << 0x2c) >> 0x36);
      iVar12 = (int)((long)(uVar11 << 0x36) >> 0x36);
      iVar10 = (int)((long)(uVar11 << 0x22) >> 0x36);
      *param_1 = (short)((long)iVar2 * (long)iVar13 + (long)iVar1 * (long)iVar12 +
                         (long)iVar3 * (long)iVar10 >> 0xc);
      param_1[0x48] =
           (short)((long)iVar13 * (long)iVar5 + (long)iVar12 * (long)iVar4 +
                   (long)iVar10 * (long)iVar6 >> 0xc);
      param_1[0x90] =
           (short)((long)iVar13 * (long)iVar8 + (long)iVar12 * (long)iVar7 +
                   (long)iVar10 * (long)iVar9 >> 0xc);
      param_1 = param_1 + 1;
    } while ((uint)lVar14 < param_4);
  }
  return;
}


