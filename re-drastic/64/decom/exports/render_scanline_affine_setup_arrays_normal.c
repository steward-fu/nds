/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_arrays_normal
 * Address  : 001a3df0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int render_scanline_affine_setup_arrays_normal
              (long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 local_250 [36];
  undefined8 local_130 [37];
  long local_8;
  
  sVar2 = *(short *)(param_1 + 0x9e);
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  sVar3 = *(short *)(param_1 + 0xa0);
  uVar9 = *(uint *)(param_1 + 0x50);
  uVar6 = 0;
  iVar7 = (int)sVar2;
  if (sVar2 != 0) {
    iVar22 = (int)(param_7 + param_9 * sVar2) >> 0xb;
    if (iVar7 < 0) {
      uVar11 = (param_7 & 0x7ff) - iVar7;
      uVar6 = ((int)param_7 >> 0xb) - iVar22;
    }
    else {
      uVar11 = (iVar7 - (param_7 & 0x7ff)) + 0x7ff;
      uVar6 = iVar22 - ((int)param_7 >> 0xb);
    }
    uVar8 = *(uint *)(param_1 + 0x4c);
    uVar11 = (uint)((ulong)uVar11 * (ulong)uVar8 >> 0xb);
    if (uVar6 != 0) {
      if (uVar6 - 1 < 0xf) {
        uVar10 = 0;
      }
      else {
        uVar16 = uVar8 + uVar8 + uVar11;
        iVar23 = uVar8 * 0x10;
        iVar22 = uVar8 * 4;
        puVar5 = local_250;
        uVar14 = uVar11;
        iVar7 = uVar8 + uVar11;
        uVar15 = uVar8 + uVar16;
        do {
          iVar17 = iVar22 + uVar14 + iVar22;
          iVar18 = iVar22 + iVar7 + iVar22;
          iVar19 = iVar22 + uVar16 + iVar22;
          iVar20 = iVar22 + uVar15 + iVar22;
          puVar4 = puVar5 + 2;
          puVar5[1] = CONCAT17((char)(ushort)((uint)(iVar22 + iVar20) >> 0x14),
                               CONCAT16((char)(ushort)((uint)(iVar22 + iVar19) >> 0x14),
                                        CONCAT15((char)(ushort)((uint)(iVar22 + iVar18) >> 0x14),
                                                 CONCAT14((char)(ushort)((uint)(iVar22 + iVar17) >>
                                                                        0x14),
                                                          CONCAT13((char)(ushort)((uint)iVar20 >>
                                                                                 0x14),
                                                                   CONCAT12((char)(ushort)((uint)
                                                  iVar19 >> 0x14),
                                                  CONCAT11((char)(ushort)((uint)iVar18 >> 0x14),
                                                           (char)(ushort)((uint)iVar17 >> 0x14))))))
                                       ));
          *puVar5 = CONCAT17((char)(ushort)(uVar15 + iVar22 >> 0x14),
                             CONCAT16((char)(ushort)(uVar16 + iVar22 >> 0x14),
                                      CONCAT15((char)(ushort)((uint)(iVar7 + iVar22) >> 0x14),
                                               CONCAT14((char)(ushort)(uVar14 + iVar22 >> 0x14),
                                                        CONCAT13((char)(uVar15 >> 0x14),
                                                                 CONCAT12((char)(uVar16 >> 0x14),
                                                                          CONCAT11((char)(ushort)((
                                                  uint)iVar7 >> 0x14),(char)(uVar14 >> 0x14))))))));
          puVar5 = puVar4;
          uVar14 = uVar14 + iVar23;
          iVar7 = iVar7 + iVar23;
          uVar16 = uVar16 + iVar23;
          uVar15 = uVar15 + iVar23;
        } while (puVar4 != local_250 + (ulong)((uVar6 >> 4) - 1) * 2 + 2);
        uVar14 = uVar6 & 0xfffffff0;
        uVar10 = (ulong)uVar14;
        uVar11 = uVar11 + uVar8 * uVar14;
        if (uVar6 == uVar14) goto LAB_001a40b0;
      }
      iVar7 = (int)uVar10;
      *(char *)((long)local_250 + uVar10) = (char)(uVar11 >> 0x14);
      if (iVar7 + 1U < uVar6) {
        *(char *)((long)local_250 + (ulong)(iVar7 + 1U)) = (char)(uVar8 + uVar11 >> 0x14);
        uVar11 = uVar8 + uVar8 + uVar11;
        if (iVar7 + 2U < uVar6) {
          *(char *)((long)local_250 + (ulong)(iVar7 + 2U)) = (char)(uVar11 >> 0x14);
          uVar11 = uVar8 + uVar11;
          if (iVar7 + 3U < uVar6) {
            *(char *)((long)local_250 + (ulong)(iVar7 + 3U)) = (char)(uVar11 >> 0x14);
            uVar11 = uVar8 + uVar11;
            if (iVar7 + 4U < uVar6) {
              *(char *)((long)local_250 + (ulong)(iVar7 + 4U)) = (char)(uVar11 >> 0x14);
              uVar11 = uVar8 + uVar11;
              if (iVar7 + 5U < uVar6) {
                *(char *)((long)local_250 + (ulong)(iVar7 + 5U)) = (char)(uVar11 >> 0x14);
                uVar11 = uVar8 + uVar11;
                if (iVar7 + 6U < uVar6) {
                  *(char *)((long)local_250 + (ulong)(iVar7 + 6U)) = (char)(uVar11 >> 0x14);
                  uVar11 = uVar8 + uVar11;
                  if (iVar7 + 7U < uVar6) {
                    *(char *)((long)local_250 + (ulong)(iVar7 + 7U)) = (char)(uVar11 >> 0x14);
                    uVar11 = uVar8 + uVar11;
                    if (iVar7 + 8U < uVar6) {
                      *(char *)((long)local_250 + (ulong)(iVar7 + 8U)) = (char)(uVar11 >> 0x14);
                      uVar11 = uVar8 + uVar11;
                      if (iVar7 + 9U < uVar6) {
                        *(char *)((long)local_250 + (ulong)(iVar7 + 9U)) = (char)(uVar11 >> 0x14);
                        uVar11 = uVar8 + uVar11;
                        if (iVar7 + 10U < uVar6) {
                          *(char *)((long)local_250 + (ulong)(iVar7 + 10U)) = (char)(uVar11 >> 0x14)
                          ;
                          uVar11 = uVar8 + uVar11;
                          if (iVar7 + 0xbU < uVar6) {
                            *(char *)((long)local_250 + (ulong)(iVar7 + 0xbU)) =
                                 (char)(uVar11 >> 0x14);
                            uVar11 = uVar8 + uVar11;
                            if (iVar7 + 0xcU < uVar6) {
                              *(char *)((long)local_250 + (ulong)(iVar7 + 0xcU)) =
                                   (char)(uVar11 >> 0x14);
                              uVar11 = uVar8 + uVar11;
                              if (iVar7 + 0xdU < uVar6) {
                                *(char *)((long)local_250 + (ulong)(iVar7 + 0xdU)) =
                                     (char)(uVar11 >> 0x14);
                                uVar10 = (ulong)(iVar7 + 0xeU);
                                if (iVar7 + 0xeU < uVar6) {
                                  *(char *)((long)local_250 + uVar10) =
                                       (char)(uVar8 + uVar11 >> 0x14);
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
  }
LAB_001a40b0:
  uVar11 = 0;
  iVar7 = (int)sVar3;
  if (sVar3 != 0) {
    iVar22 = (int)(param_8 + param_9 * iVar7) >> 0xb;
    if (sVar3 < 0) {
      uVar8 = (param_8 & 0x7ff) - iVar7;
      uVar11 = ((int)param_8 >> 0xb) - iVar22;
    }
    else {
      uVar8 = ((int)sVar3 - (param_8 & 0x7ff)) + 0x7ff;
      uVar11 = iVar22 - ((int)param_8 >> 0xb);
    }
    uVar10 = (ulong)uVar8 * (ulong)uVar9 >> 0xb;
    uVar8 = (uint)uVar10;
    if (uVar11 != 0) {
      if (uVar11 - 1 < 0xf) {
        uVar14 = 0;
      }
      else {
        uVar16 = uVar9 + uVar9 + uVar8;
        iVar17 = uVar9 * 0x10;
        iVar23 = uVar9 * 4;
        puVar5 = local_130;
        uVar14 = uVar8;
        iVar22 = uVar9 + uVar8;
        uVar15 = uVar9 + uVar16;
        do {
          iVar18 = iVar23 + uVar14 + iVar23;
          iVar19 = iVar23 + iVar22 + iVar23;
          iVar20 = iVar23 + uVar16 + iVar23;
          iVar21 = iVar23 + uVar15 + iVar23;
          puVar4 = puVar5 + 2;
          puVar5[1] = CONCAT17((char)(ushort)((uint)(iVar23 + iVar21) >> 0x14),
                               CONCAT16((char)(ushort)((uint)(iVar23 + iVar20) >> 0x14),
                                        CONCAT15((char)(ushort)((uint)(iVar23 + iVar19) >> 0x14),
                                                 CONCAT14((char)(ushort)((uint)(iVar23 + iVar18) >>
                                                                        0x14),
                                                          CONCAT13((char)(ushort)((uint)iVar21 >>
                                                                                 0x14),
                                                                   CONCAT12((char)(ushort)((uint)
                                                  iVar20 >> 0x14),
                                                  CONCAT11((char)(ushort)((uint)iVar19 >> 0x14),
                                                           (char)(ushort)((uint)iVar18 >> 0x14))))))
                                       ));
          *puVar5 = CONCAT17((char)(ushort)(uVar15 + iVar23 >> 0x14),
                             CONCAT16((char)(ushort)(uVar16 + iVar23 >> 0x14),
                                      CONCAT15((char)(ushort)((uint)(iVar22 + iVar23) >> 0x14),
                                               CONCAT14((char)(ushort)(uVar14 + iVar23 >> 0x14),
                                                        CONCAT13((char)(uVar15 >> 0x14),
                                                                 CONCAT12((char)(uVar16 >> 0x14),
                                                                          CONCAT11((char)(ushort)((
                                                  uint)iVar22 >> 0x14),(char)(uVar14 >> 0x14))))))))
          ;
          puVar5 = puVar4;
          uVar14 = uVar14 + iVar17;
          iVar22 = iVar22 + iVar17;
          uVar16 = uVar16 + iVar17;
          uVar15 = uVar15 + iVar17;
        } while (puVar4 != local_130 + (ulong)((uVar11 >> 4) - 1) * 2 + 2);
        uVar14 = uVar11 & 0xfffffff0;
        uVar8 = uVar8 + uVar9 * uVar14;
        uVar10 = (ulong)uVar8;
        if (uVar14 == uVar11) goto LAB_001a4308;
      }
      *(char *)((long)local_130 + (ulong)uVar14) = (char)(uVar8 >> 0x14);
      uVar8 = uVar9 + uVar8;
      uVar10 = (ulong)uVar8;
      if (uVar14 + 1 < uVar11) {
        *(char *)((long)local_130 + (ulong)(uVar14 + 1)) = (char)(uVar8 >> 0x14);
        uVar8 = uVar9 + uVar8;
        uVar10 = (ulong)uVar8;
        if (uVar14 + 2 < uVar11) {
          *(char *)((long)local_130 + (ulong)(uVar14 + 2)) = (char)(uVar8 >> 0x14);
          uVar8 = uVar9 + uVar8;
          uVar10 = (ulong)uVar8;
          if (uVar14 + 3 < uVar11) {
            *(char *)((long)local_130 + (ulong)(uVar14 + 3)) = (char)(uVar8 >> 0x14);
            uVar8 = uVar9 + uVar8;
            uVar10 = (ulong)uVar8;
            if (uVar14 + 4 < uVar11) {
              *(char *)((long)local_130 + (ulong)(uVar14 + 4)) = (char)(uVar8 >> 0x14);
              uVar8 = uVar9 + uVar8;
              uVar10 = (ulong)uVar8;
              if (uVar14 + 5 < uVar11) {
                *(char *)((long)local_130 + (ulong)(uVar14 + 5)) = (char)(uVar8 >> 0x14);
                uVar8 = uVar9 + uVar8;
                uVar10 = (ulong)uVar8;
                if (uVar14 + 6 < uVar11) {
                  *(char *)((long)local_130 + (ulong)(uVar14 + 6)) = (char)(uVar8 >> 0x14);
                  uVar8 = uVar9 + uVar8;
                  uVar10 = (ulong)uVar8;
                  if (uVar14 + 7 < uVar11) {
                    *(char *)((long)local_130 + (ulong)(uVar14 + 7)) = (char)(uVar8 >> 0x14);
                    uVar8 = uVar9 + uVar8;
                    uVar10 = (ulong)uVar8;
                    if (uVar14 + 8 < uVar11) {
                      *(char *)((long)local_130 + (ulong)(uVar14 + 8)) = (char)(uVar8 >> 0x14);
                      uVar8 = uVar9 + uVar8;
                      uVar10 = (ulong)uVar8;
                      if (uVar14 + 9 < uVar11) {
                        *(char *)((long)local_130 + (ulong)(uVar14 + 9)) = (char)(uVar8 >> 0x14);
                        uVar8 = uVar9 + uVar8;
                        uVar10 = (ulong)uVar8;
                        if (uVar14 + 10 < uVar11) {
                          *(char *)((long)local_130 + (ulong)(uVar14 + 10)) = (char)(uVar8 >> 0x14);
                          uVar8 = uVar9 + uVar8;
                          uVar10 = (ulong)uVar8;
                          if (uVar14 + 0xb < uVar11) {
                            *(char *)((long)local_130 + (ulong)(uVar14 + 0xb)) =
                                 (char)(uVar8 >> 0x14);
                            uVar8 = uVar9 + uVar8;
                            uVar10 = (ulong)uVar8;
                            if (uVar14 + 0xc < uVar11) {
                              *(char *)((long)local_130 + (ulong)(uVar14 + 0xc)) =
                                   (char)(uVar8 >> 0x14);
                              uVar8 = uVar9 + uVar8;
                              uVar10 = (ulong)uVar8;
                              if (uVar14 + 0xd < uVar11) {
                                *(char *)((long)local_130 + (ulong)(uVar14 + 0xd)) =
                                     (char)(uVar8 >> 0x14);
                                uVar10 = (ulong)(uVar9 + uVar8);
                                if (uVar14 + 0xe < uVar11) {
                                  uVar9 = uVar9 + uVar8 >> 0x14;
                                  uVar10 = (ulong)uVar9;
                                  *(char *)((long)local_130 + (ulong)(uVar14 + 0xe)) = (char)uVar9;
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
  }
LAB_001a4308:
  iVar22 = render_scanline_affine_merge_tile_widths_c
                     (local_250,local_130,param_2,uVar6,uVar11,uVar10);
  if (iVar22 == 0) {
    iVar23 = 1;
    iVar17 = 0;
  }
  else {
    iVar17 = 0;
    pbVar12 = param_2;
    pbVar13 = param_2;
    uVar9 = 0x100;
    do {
      bVar1 = *pbVar12;
      *pbVar13 = bVar1;
      iVar23 = iVar17 + 1;
      if (bVar1 != uVar9) {
        iVar23 = iVar17 + 2;
        pbVar13 = pbVar13 + 1;
        iVar17 = iVar17 + 1;
      }
      pbVar12 = pbVar12 + 1;
      uVar9 = (uint)bVar1;
    } while (pbVar12 != param_2 + (ulong)(iVar22 - 1) + 1);
  }
  render_scanline_affine_setup_map_indexes_normal_asm
            (param_2,param_3,iVar17,param_7,param_8,(int)sVar2,(int)sVar3,
             *(undefined *)(param_1 + 0xab),*(undefined *)(param_1 + 0xac));
  render_scanline_affine_load_tile_map_entries_normal_asm(param_3,param_4,iVar17);
  render_scanline_affine_diff_tile_widths_asm(param_2,iVar17,param_9);
  render_scanline_affine_setup_tile_offsets_asm(param_5,param_7,param_8,(int)sVar2,iVar7,param_9);
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar23;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


