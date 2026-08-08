/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_tile_widths
 * Address  : 001a2390
 * Program  : drastic64
 */


uint render_scanline_affine_setup_tile_widths
               (int param_1,uint param_2,int param_3,undefined8 *param_4,uint param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar6 = (int)(param_2 + param_3 * param_1) >> 0xb;
  if (param_1 < 0) {
    uVar4 = (param_2 & 0x7ff) - param_1;
    uVar1 = ((int)param_2 >> 0xb) - iVar6;
  }
  else {
    uVar4 = (param_1 + 0x7ff) - (param_2 & 0x7ff);
    uVar1 = iVar6 - ((int)param_2 >> 0xb);
  }
  uVar4 = (uint)((ulong)uVar4 * (ulong)param_5 >> 0xb);
  if (uVar1 != 0) {
    if (uVar1 - 1 < 0xf) {
      uVar5 = 0;
    }
    else {
      uVar8 = param_5 + param_5 + uVar4;
      iVar14 = param_5 * 0x10;
      iVar13 = param_5 * 4;
      puVar2 = param_4;
      uVar5 = uVar4;
      iVar6 = param_5 + uVar4;
      uVar7 = param_5 + uVar8;
      do {
        iVar9 = iVar13 + uVar5 + iVar13;
        iVar10 = iVar13 + iVar6 + iVar13;
        iVar11 = iVar13 + uVar8 + iVar13;
        iVar12 = iVar13 + uVar7 + iVar13;
        puVar3 = puVar2 + 2;
        puVar2[1] = CONCAT17((char)(ushort)((uint)(iVar13 + iVar12) >> 0x14),
                             CONCAT16((char)(ushort)((uint)(iVar13 + iVar11) >> 0x14),
                                      CONCAT15((char)(ushort)((uint)(iVar13 + iVar10) >> 0x14),
                                               CONCAT14((char)(ushort)((uint)(iVar13 + iVar9) >>
                                                                      0x14),
                                                        CONCAT13((char)(ushort)((uint)iVar12 >> 0x14
                                                                               ),
                                                                 CONCAT12((char)(ushort)((uint)
                                                  iVar11 >> 0x14),
                                                  CONCAT11((char)(ushort)((uint)iVar10 >> 0x14),
                                                           (char)(ushort)((uint)iVar9 >> 0x14)))))))
                            );
        *puVar2 = CONCAT17((char)(ushort)(uVar7 + iVar13 >> 0x14),
                           CONCAT16((char)(ushort)(uVar8 + iVar13 >> 0x14),
                                    CONCAT15((char)(ushort)((uint)(iVar6 + iVar13) >> 0x14),
                                             CONCAT14((char)(ushort)(uVar5 + iVar13 >> 0x14),
                                                      CONCAT13((char)(uVar7 >> 0x14),
                                                               CONCAT12((char)(uVar8 >> 0x14),
                                                                        CONCAT11((char)(ushort)((
                                                  uint)iVar6 >> 0x14),(char)(uVar5 >> 0x14))))))));
        puVar2 = puVar3;
        uVar5 = uVar5 + iVar14;
        iVar6 = iVar6 + iVar14;
        uVar8 = uVar8 + iVar14;
        uVar7 = uVar7 + iVar14;
      } while (puVar3 != param_4 + (ulong)((uVar1 >> 4) - 1) * 2 + 2);
      uVar5 = uVar1 & 0xfffffff0;
      uVar4 = uVar4 + param_5 * uVar5;
      if (uVar5 == uVar1) {
        return uVar1;
      }
    }
    *(char *)((long)param_4 + (ulong)uVar5) = (char)(uVar4 >> 0x14);
    if (uVar5 + 1 < uVar1) {
      *(char *)((long)param_4 + (ulong)(uVar5 + 1)) = (char)(param_5 + uVar4 >> 0x14);
      uVar4 = param_5 + param_5 + uVar4;
      if (uVar5 + 2 < uVar1) {
        *(char *)((long)param_4 + (ulong)(uVar5 + 2)) = (char)(uVar4 >> 0x14);
        uVar4 = param_5 + uVar4;
        if (uVar5 + 3 < uVar1) {
          *(char *)((long)param_4 + (ulong)(uVar5 + 3)) = (char)(uVar4 >> 0x14);
          uVar4 = param_5 + uVar4;
          if (uVar5 + 4 < uVar1) {
            *(char *)((long)param_4 + (ulong)(uVar5 + 4)) = (char)(uVar4 >> 0x14);
            uVar4 = param_5 + uVar4;
            if (uVar5 + 5 < uVar1) {
              *(char *)((long)param_4 + (ulong)(uVar5 + 5)) = (char)(uVar4 >> 0x14);
              uVar4 = param_5 + uVar4;
              if (uVar5 + 6 < uVar1) {
                *(char *)((long)param_4 + (ulong)(uVar5 + 6)) = (char)(uVar4 >> 0x14);
                uVar4 = param_5 + uVar4;
                if (uVar5 + 7 < uVar1) {
                  *(char *)((long)param_4 + (ulong)(uVar5 + 7)) = (char)(uVar4 >> 0x14);
                  uVar4 = param_5 + uVar4;
                  if (uVar5 + 8 < uVar1) {
                    *(char *)((long)param_4 + (ulong)(uVar5 + 8)) = (char)(uVar4 >> 0x14);
                    uVar4 = param_5 + uVar4;
                    if (uVar5 + 9 < uVar1) {
                      *(char *)((long)param_4 + (ulong)(uVar5 + 9)) = (char)(uVar4 >> 0x14);
                      uVar4 = param_5 + uVar4;
                      if (uVar5 + 10 < uVar1) {
                        *(char *)((long)param_4 + (ulong)(uVar5 + 10)) = (char)(uVar4 >> 0x14);
                        uVar4 = param_5 + uVar4;
                        if (uVar5 + 0xb < uVar1) {
                          *(char *)((long)param_4 + (ulong)(uVar5 + 0xb)) = (char)(uVar4 >> 0x14);
                          uVar4 = param_5 + uVar4;
                          if (uVar5 + 0xc < uVar1) {
                            *(char *)((long)param_4 + (ulong)(uVar5 + 0xc)) = (char)(uVar4 >> 0x14);
                            uVar4 = param_5 + uVar4;
                            if (uVar5 + 0xd < uVar1) {
                              *(char *)((long)param_4 + (ulong)(uVar5 + 0xd)) =
                                   (char)(uVar4 >> 0x14);
                              if (uVar5 + 0xe < uVar1) {
                                *(char *)((long)param_4 + (ulong)(uVar5 + 0xe)) =
                                     (char)(param_5 + uVar4 >> 0x14);
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
  return uVar1;
}


