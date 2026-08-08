/*
 * Ghidra decompilation
 *
 * Function : render_polygon_interpolate_w_c
 * Address  : 001443b0
 * Program  : drastic64
 */


void render_polygon_interpolate_w_c
               (undefined8 *param_1,int *param_2,undefined8 *param_3,int param_4)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar9;
  
  if (param_4 != 0) {
    piVar2 = param_2 + (ulong)(param_4 - 1) + 1;
    do {
      uVar5 = *(ushort *)(param_2 + 0x18c);
      iVar3 = *param_2;
      iVar4 = param_2[0x2c];
      param_2 = param_2 + 1;
      if (uVar5 != 0) {
        uVar6 = uVar5 - 1;
        if (uVar6 < 7) {
          uVar11 = 0;
          puVar7 = param_3;
          puVar8 = param_1;
LAB_0014446c:
          *(int *)puVar8 = iVar3 + (int)((long)(int)*(short *)puVar7 * (long)iVar4 >> 0xf);
          if ((uVar11 + 1 < (uint)uVar5) &&
             (*(int *)((long)puVar8 + 4) =
                   iVar3 + (int)((long)(int)*(short *)((long)puVar7 + 2) * (long)iVar4 >> 0xf),
             uVar11 + 2 < (uint)uVar5)) {
            uVar10 = (uint)uVar5;
            *(int *)(puVar8 + 1) =
                 iVar3 + (int)((long)(int)*(short *)((long)puVar7 + 4) * (long)iVar4 >> 0xf);
            if ((uVar11 + 3 < uVar10) &&
               (((*(int *)((long)puVar8 + 0xc) =
                       iVar3 + (int)((long)(int)*(short *)((long)puVar7 + 6) * (long)iVar4 >> 0xf),
                 uVar11 + 4 < uVar10 &&
                 (*(int *)(puVar8 + 2) =
                       iVar3 + (int)((long)(int)*(short *)(puVar7 + 1) * (long)iVar4 >> 0xf),
                 uVar11 + 5 < uVar10)) &&
                (*(int *)((long)puVar8 + 0x14) =
                      iVar3 + (int)((long)(int)*(short *)((long)puVar7 + 10) * (long)iVar4 >> 0xf),
                uVar11 + 6 < uVar10)))) {
              *(int *)(puVar8 + 3) =
                   iVar3 + (int)((long)(int)*(short *)((long)puVar7 + 0xc) * (long)iVar4 >> 0xf);
            }
          }
        }
        else {
          puVar7 = param_1;
          puVar8 = param_3;
          do {
            puVar9 = puVar8 + 2;
            uVar13 = puVar8[1];
            uVar12 = *puVar8;
            puVar7[1] = CONCAT44((int)((long)(int)(short)((ulong)uVar12 >> 0x30) * (long)iVar4 >>
                                      0xf) + iVar3,
                                 (int)((long)(int)(short)((ulong)uVar12 >> 0x20) * (long)iVar4 >>
                                      0xf) + iVar3);
            *puVar7 = CONCAT44((int)((long)(int)(short)((ulong)uVar12 >> 0x10) * (long)iVar4 >> 0xf)
                               + iVar3,(int)((long)(int)(short)uVar12 * (long)iVar4 >> 0xf) + iVar3)
            ;
            puVar7[3] = CONCAT44((int)((long)(int)(short)((ulong)uVar13 >> 0x30) * (long)iVar4 >>
                                      0xf) + iVar3,
                                 (int)((long)(int)(short)((ulong)uVar13 >> 0x20) * (long)iVar4 >>
                                      0xf) + iVar3);
            puVar7[2] = CONCAT44((int)((long)(int)(short)((ulong)uVar13 >> 0x10) * (long)iVar4 >>
                                      0xf) + iVar3,
                                 (int)((long)(int)(short)uVar13 * (long)iVar4 >> 0xf) + iVar3);
            puVar7 = puVar7 + 4;
            puVar8 = puVar9;
          } while (puVar9 != param_3 + (ulong)((uVar5 >> 3) - 1) * 2 + 2);
          uVar11 = uVar5 & 0xfffffff8;
          puVar7 = (undefined8 *)((long)param_3 + ((ulong)uVar5 & 0xfff8) * 2);
          puVar8 = (undefined8 *)((long)param_1 + ((ulong)uVar5 & 0xfff8) * 4);
          if ((uVar5 & 7) != 0) goto LAB_0014446c;
        }
        lVar1 = (ulong)uVar6 + 1;
        param_3 = (undefined8 *)((long)param_3 + lVar1 * 2);
        param_1 = (undefined8 *)((long)param_1 + lVar1 * 4);
      }
    } while (param_2 != piVar2);
  }
  return;
}


