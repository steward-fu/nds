/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_interpolate_w_c
 * Address  : 0014c170
 * Program  : drastic64
 */


void render_polygon_edge_interpolate_w_c
               (long param_1,undefined8 *param_2,undefined8 *param_3,byte *param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar10;
  
  if (param_5 != 0) {
    pbVar1 = param_4 + (ulong)(param_5 - 1) + 1;
    uVar12 = 0;
    do {
      bVar4 = *param_4;
      uVar11 = (uint)bVar4;
      iVar3 = **(int **)(param_1 + (ulong)uVar12 * 8);
      iVar6 = **(int **)(param_1 + (ulong)(uVar12 + 1) * 8) - iVar3;
      if (bVar4 != 0) {
        iVar5 = bVar4 - 1;
        puVar8 = param_2;
        puVar9 = param_3;
        iVar7 = iVar5;
        if (iVar5 < 7) {
LAB_0014c24c:
          *(int *)puVar8 = iVar3 + (int)((long)(int)*(short *)puVar9 * (long)iVar6 >> 0xf);
          if ((((iVar7 != 0) &&
               (*(int *)((long)puVar8 + 4) =
                     iVar3 + (int)((long)(int)*(short *)((long)puVar9 + 2) * (long)iVar6 >> 0xf),
               uVar11 != 2)) &&
              (*(int *)(puVar8 + 1) =
                    iVar3 + (int)((long)(int)*(short *)((long)puVar9 + 4) * (long)iVar6 >> 0xf),
              uVar11 != 3)) &&
             (((*(int *)((long)puVar8 + 0xc) =
                     iVar3 + (int)((long)(int)*(short *)((long)puVar9 + 6) * (long)iVar6 >> 0xf),
               uVar11 != 4 &&
               (*(int *)(puVar8 + 2) =
                     iVar3 + (int)((long)(int)*(short *)(puVar9 + 1) * (long)iVar6 >> 0xf),
               uVar11 != 5)) &&
              (*(int *)((long)puVar8 + 0x14) =
                    iVar3 + (int)((long)(int)*(short *)((long)puVar9 + 10) * (long)iVar6 >> 0xf),
              uVar11 != 6)))) {
            *(int *)(puVar8 + 3) =
                 iVar3 + (int)((long)(int)*(short *)((long)puVar9 + 0xc) * (long)iVar6 >> 0xf);
          }
        }
        else {
          do {
            puVar10 = puVar9 + 2;
            uVar14 = puVar9[1];
            uVar13 = *puVar9;
            puVar8[1] = CONCAT44((int)((long)(int)(short)((ulong)uVar13 >> 0x30) * (long)iVar6 >>
                                      0xf) + iVar3,
                                 (int)((long)(int)(short)((ulong)uVar13 >> 0x20) * (long)iVar6 >>
                                      0xf) + iVar3);
            *puVar8 = CONCAT44((int)((long)(int)(short)((ulong)uVar13 >> 0x10) * (long)iVar6 >> 0xf)
                               + iVar3,(int)((long)(int)(short)uVar13 * (long)iVar6 >> 0xf) + iVar3)
            ;
            puVar8[3] = CONCAT44((int)((long)(int)(short)((ulong)uVar14 >> 0x30) * (long)iVar6 >>
                                      0xf) + iVar3,
                                 (int)((long)(int)(short)((ulong)uVar14 >> 0x20) * (long)iVar6 >>
                                      0xf) + iVar3);
            puVar8[2] = CONCAT44((int)((long)(int)(short)((ulong)uVar14 >> 0x10) * (long)iVar6 >>
                                      0xf) + iVar3,
                                 (int)((long)(int)(short)uVar14 * (long)iVar6 >> 0xf) + iVar3);
            puVar8 = puVar8 + 4;
            puVar9 = puVar10;
          } while (puVar10 != param_3 + (ulong)(bVar4 >> 3) * 2);
          uVar2 = bVar4 & 0xfffffff8;
          uVar11 = bVar4 - uVar2;
          if (uVar2 != bVar4) {
            puVar8 = (undefined8 *)((long)param_2 + ((ulong)bVar4 & 0xfffffff8) * 4);
            puVar9 = (undefined8 *)((long)param_3 + ((ulong)bVar4 & 0xfffffff8) * 2);
            iVar7 = uVar11 - 1;
            goto LAB_0014c24c;
          }
        }
        param_3 = (undefined8 *)((long)param_3 + ((long)iVar5 + 1) * 2);
        param_2 = (undefined8 *)((long)param_2 + ((long)iVar5 + 1) * 4);
      }
      param_4 = param_4 + 1;
      uVar12 = uVar12 + 2;
    } while (pbVar1 != param_4);
  }
  return;
}


