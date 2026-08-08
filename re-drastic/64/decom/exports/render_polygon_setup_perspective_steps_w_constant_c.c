/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_perspective_steps_w_constant_c
 * Address  : 00144240
 * Program  : drastic64
 */


void render_polygon_setup_perspective_steps_w_constant_c
               (undefined8 *param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  puVar9 = (ushort *)(param_2 + 0x630);
  if (param_3 != 0) {
    do {
      uVar3 = *puVar9;
      uVar5 = (ulong)uVar3;
      iVar2 = *(int *)(param_4 + uVar5 * 4);
      if (uVar3 != 0) {
        uVar4 = uVar3 - 1;
        if (uVar4 < 7) {
          iVar10 = 0;
          puVar7 = param_1;
LAB_00144304:
          *(short *)puVar7 = (short)((uint)iVar10 >> 0x10);
          iVar8 = (int)uVar5;
          if (iVar8 != 1) {
            *(short *)((long)puVar7 + 2) = (short)((uint)(iVar2 + iVar10) >> 0x10);
            iVar10 = iVar2 + iVar2 + iVar10;
            if (iVar8 != 2) {
              *(short *)((long)puVar7 + 4) = (short)((uint)iVar10 >> 0x10);
              iVar10 = iVar2 + iVar10;
              if (iVar8 != 3) {
                *(short *)((long)puVar7 + 6) = (short)((uint)iVar10 >> 0x10);
                iVar10 = iVar2 + iVar10;
                if (iVar8 != 4) {
                  *(short *)(puVar7 + 1) = (short)((uint)iVar10 >> 0x10);
                  iVar10 = iVar2 + iVar10;
                  if (iVar8 != 5) {
                    *(short *)((long)puVar7 + 10) = (short)((uint)iVar10 >> 0x10);
                    if (iVar8 != 6) {
                      *(short *)((long)puVar7 + 0xc) = (short)((uint)(iVar2 + iVar10) >> 0x10);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iVar14 = iVar2 * 8;
          iVar13 = iVar2 * 4;
          uVar1 = (uVar3 - 8 >> 3) + 1;
          uVar6 = 0;
          puVar7 = param_1;
          iVar10 = 0;
          iVar8 = iVar2;
          iVar11 = iVar2 * 2;
          iVar12 = iVar2 * 3;
          do {
            uVar6 = uVar6 + 1;
            puVar7[1] = CONCAT26((short)((uint)(iVar12 + iVar13) >> 0x10),
                                 CONCAT24((short)((uint)(iVar11 + iVar13) >> 0x10),
                                          CONCAT22((short)((uint)(iVar8 + iVar13) >> 0x10),
                                                   (short)((uint)(iVar10 + iVar13) >> 0x10))));
            *puVar7 = CONCAT26((short)((uint)iVar12 >> 0x10),
                               CONCAT24((short)((uint)iVar11 >> 0x10),
                                        CONCAT22((short)((uint)iVar8 >> 0x10),
                                                 (short)((uint)iVar10 >> 0x10))));
            puVar7 = puVar7 + 2;
            iVar10 = iVar10 + iVar14;
            iVar8 = iVar8 + iVar14;
            iVar11 = iVar11 + iVar14;
            iVar12 = iVar12 + iVar14;
          } while (uVar6 < uVar1);
          uVar6 = (uint)uVar3 + uVar1 * -8;
          uVar5 = (ulong)uVar6;
          iVar10 = iVar2 * uVar1 * 8;
          puVar7 = (undefined8 *)((long)param_1 + (ulong)(uVar1 * 8) * 2);
          if (uVar6 != 0) goto LAB_00144304;
        }
        param_1 = (undefined8 *)((long)param_1 + (ulong)uVar4 * 2 + 2);
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != (ushort *)(param_2 + ((ulong)(param_3 - 1) + 0x18d) * 4));
  }
  return;
}


