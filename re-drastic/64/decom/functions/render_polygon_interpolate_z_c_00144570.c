/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_z_c
 * Address  : 00144570
 * Program  : drastic64
 */


void render_polygon_interpolate_z_c(undefined8 *param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  
  if (param_3 != 0) {
    puVar10 = (uint *)(param_2 + 0x160);
    do {
      uVar2 = *(ushort *)(puVar10 + 0x134);
      puVar11 = puVar10 + 1;
      uVar9 = (ulong)*puVar10 * 0x40000000;
      lVar8 = (ulong)*(uint *)(param_4 + (ulong)uVar2 * 4) * (long)(int)puVar10[0x2c];
      lVar1 = lVar8 + 0x3fffffff;
      if (-1 < (int)puVar10[0x2c]) {
        lVar1 = lVar8;
      }
      if (uVar2 != 0) {
        uVar3 = uVar2 - 1;
        uVar12 = (uint)uVar2;
        if (uVar3 < 4) {
          uVar4 = 0;
          puVar5 = param_1;
LAB_00144640:
          *(int *)puVar5 = (int)(uVar9 >> 0x1e);
          if (uVar4 + 1 <= (uint)uVar2 && uVar12 != uVar4 + 1) {
            *(int *)((long)puVar5 + 4) = (int)(uVar9 + lVar1 >> 0x1e);
            uVar9 = uVar9 + lVar1 + lVar1;
            if (uVar4 + 2 < uVar12) {
              *(int *)(puVar5 + 1) = (int)(uVar9 >> 0x1e);
              if (uVar4 + 3 < uVar12) {
                *(int *)((long)puVar5 + 0xc) = (int)(lVar1 + uVar9 >> 0x1e);
              }
            }
          }
        }
        else {
          lVar8 = NEON_shl(lVar1,2);
          puVar5 = param_1;
          uVar7 = uVar9;
          uVar13 = uVar9 + lVar1;
          do {
            puVar6 = puVar5 + 2;
            puVar5[1] = CONCAT44((int)(uVar13 + lVar1 * 2 >> 0x1e),(int)(uVar7 + lVar1 * 2 >> 0x1e))
            ;
            *puVar5 = CONCAT44((int)(uVar13 >> 0x1e),(int)(uVar7 >> 0x1e));
            puVar5 = puVar6;
            uVar7 = uVar7 + lVar8;
            uVar13 = uVar13 + lVar8;
          } while (puVar6 != param_1 + (ulong)((uVar2 >> 2) - 1) * 2 + 2);
          uVar7 = (ulong)uVar2 & 0xfffc;
          uVar9 = uVar9 + uVar7 * lVar1;
          uVar4 = uVar2 & 0xfffffffc;
          puVar5 = (undefined8 *)((long)param_1 + uVar7 * 4);
          if ((uVar2 & 3) != 0) goto LAB_00144640;
        }
        param_1 = (undefined8 *)((long)param_1 + (ulong)uVar3 * 4 + 4);
      }
      puVar10 = puVar11;
    } while (puVar11 != (uint *)(param_2 + ((ulong)(param_3 - 1) + 0x59) * 4));
  }
  return;
}


