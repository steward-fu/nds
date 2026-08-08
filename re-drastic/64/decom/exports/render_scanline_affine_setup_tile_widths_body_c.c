/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_tile_widths_body_c
 * Address  : 001a2160
 * Program  : drastic64
 */


void render_scanline_affine_setup_tile_widths_body_c
               (undefined8 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  if (param_2 != 0) {
    if (param_2 - 1 < 0xf) {
      uVar9 = 0;
    }
    else {
      uVar3 = param_4 + param_3 + param_4;
      iVar12 = param_4 * 0x10;
      iVar8 = param_4 * 4;
      puVar1 = param_1;
      uVar9 = param_3;
      uVar10 = param_3 + param_4;
      uVar11 = param_4 + uVar3;
      do {
        iVar4 = iVar8 + uVar9 + iVar8;
        iVar5 = iVar8 + uVar10 + iVar8;
        iVar6 = iVar8 + uVar3 + iVar8;
        iVar7 = iVar8 + uVar11 + iVar8;
        puVar2 = puVar1 + 2;
        puVar1[1] = CONCAT17((char)(ushort)((uint)(iVar8 + iVar7) >> 0x14),
                             CONCAT16((char)(ushort)((uint)(iVar8 + iVar6) >> 0x14),
                                      CONCAT15((char)(ushort)((uint)(iVar8 + iVar5) >> 0x14),
                                               CONCAT14((char)(ushort)((uint)(iVar8 + iVar4) >> 0x14
                                                                      ),
                                                        CONCAT13((char)(ushort)((uint)iVar7 >> 0x14)
                                                                 ,CONCAT12((char)(ushort)((uint)
                                                  iVar6 >> 0x14),
                                                  CONCAT11((char)(ushort)((uint)iVar5 >> 0x14),
                                                           (char)(ushort)((uint)iVar4 >> 0x14)))))))
                            );
        *puVar1 = CONCAT17((char)(ushort)(uVar11 + iVar8 >> 0x14),
                           CONCAT16((char)(ushort)(uVar3 + iVar8 >> 0x14),
                                    CONCAT15((char)(ushort)(uVar10 + iVar8 >> 0x14),
                                             CONCAT14((char)(ushort)(uVar9 + iVar8 >> 0x14),
                                                      CONCAT13((char)(uVar11 >> 0x14),
                                                               CONCAT12((char)(uVar3 >> 0x14),
                                                                        CONCAT11((char)(uVar10 >>
                                                                                       0x14),
                                                                                 (char)(uVar9 >> 
                                                  0x14))))))));
        puVar1 = puVar2;
        uVar9 = uVar9 + iVar12;
        uVar10 = uVar10 + iVar12;
        uVar3 = uVar3 + iVar12;
        uVar11 = uVar11 + iVar12;
      } while (puVar2 != param_1 + (ulong)((param_2 >> 4) - 1) * 2 + 2);
      uVar9 = param_2 & 0xfffffff0;
      param_3 = param_3 + param_4 * uVar9;
      if (param_2 == uVar9) {
        return;
      }
    }
    *(char *)((long)param_1 + (ulong)uVar9) = (char)(param_3 >> 0x14);
    if (uVar9 + 1 < param_2) {
      *(char *)((long)param_1 + (ulong)(uVar9 + 1)) = (char)(param_4 + param_3 >> 0x14);
      uVar10 = param_4 + param_4 + param_3;
      if (uVar9 + 2 < param_2) {
        *(char *)((long)param_1 + (ulong)(uVar9 + 2)) = (char)(uVar10 >> 0x14);
        uVar10 = param_4 + uVar10;
        if (uVar9 + 3 < param_2) {
          *(char *)((long)param_1 + (ulong)(uVar9 + 3)) = (char)(uVar10 >> 0x14);
          uVar10 = param_4 + uVar10;
          if (uVar9 + 4 < param_2) {
            *(char *)((long)param_1 + (ulong)(uVar9 + 4)) = (char)(uVar10 >> 0x14);
            uVar10 = param_4 + uVar10;
            if (uVar9 + 5 < param_2) {
              *(char *)((long)param_1 + (ulong)(uVar9 + 5)) = (char)(uVar10 >> 0x14);
              uVar10 = param_4 + uVar10;
              if (uVar9 + 6 < param_2) {
                *(char *)((long)param_1 + (ulong)(uVar9 + 6)) = (char)(uVar10 >> 0x14);
                uVar10 = param_4 + uVar10;
                if (uVar9 + 7 < param_2) {
                  *(char *)((long)param_1 + (ulong)(uVar9 + 7)) = (char)(uVar10 >> 0x14);
                  uVar10 = param_4 + uVar10;
                  if (uVar9 + 8 < param_2) {
                    *(char *)((long)param_1 + (ulong)(uVar9 + 8)) = (char)(uVar10 >> 0x14);
                    uVar10 = param_4 + uVar10;
                    if (uVar9 + 9 < param_2) {
                      *(char *)((long)param_1 + (ulong)(uVar9 + 9)) = (char)(uVar10 >> 0x14);
                      uVar10 = param_4 + uVar10;
                      if (uVar9 + 10 < param_2) {
                        *(char *)((long)param_1 + (ulong)(uVar9 + 10)) = (char)(uVar10 >> 0x14);
                        uVar10 = param_4 + uVar10;
                        if (uVar9 + 0xb < param_2) {
                          *(char *)((long)param_1 + (ulong)(uVar9 + 0xb)) = (char)(uVar10 >> 0x14);
                          uVar10 = param_4 + uVar10;
                          if (uVar9 + 0xc < param_2) {
                            *(char *)((long)param_1 + (ulong)(uVar9 + 0xc)) = (char)(uVar10 >> 0x14)
                            ;
                            uVar10 = param_4 + uVar10;
                            if (uVar9 + 0xd < param_2) {
                              *(char *)((long)param_1 + (ulong)(uVar9 + 0xd)) =
                                   (char)(uVar10 >> 0x14);
                              if (uVar9 + 0xe < param_2) {
                                *(char *)((long)param_1 + (ulong)(uVar9 + 0xe)) =
                                     (char)(param_4 + uVar10 >> 0x14);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


