/*
 * Ghidra decompilation
 *
 * Function : render_scanline_affine_setup_arrays_extended
 * Address  : 001a3780
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int render_scanline_affine_setup_arrays_extended
              (long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 local_250 [36];
  undefined8 local_130 [37];
  long local_8;
  
  sVar2 = *(short *)(param_1 + 0x9e);
  local_8 = ___stack_chk_guard;
  uVar12 = 0;
  sVar3 = *(short *)(param_1 + 0xa0);
  uVar11 = *(uint *)(param_1 + 0x50);
  uVar4 = 0;
  iVar7 = (int)sVar2;
  if (sVar2 != 0) {
    iVar23 = (int)(param_7 + param_9 * sVar2) >> 0xb;
    if (iVar7 < 0) {
      uVar9 = (param_7 & 0x7ff) - iVar7;
      uVar4 = ((int)param_7 >> 0xb) - iVar23;
    }
    else {
      uVar9 = (iVar7 - (param_7 & 0x7ff)) + 0x7ff;
      uVar4 = iVar23 - ((int)param_7 >> 0xb);
    }
    uVar10 = *(uint *)(param_1 + 0x4c);
    uVar12 = (ulong)uVar9 * (ulong)uVar10 >> 0xb;
    uVar9 = (uint)uVar12;
    if (uVar4 != 0) {
      if (uVar4 - 1 < 0xf) {
        uVar8 = 0;
      }
      else {
        uVar17 = uVar10 + uVar10 + uVar9;
        iVar24 = uVar10 * 0x10;
        iVar23 = uVar10 * 4;
        puVar5 = local_250;
        uVar15 = uVar9;
        iVar7 = uVar10 + uVar9;
        uVar16 = uVar10 + uVar17;
        do {
          iVar18 = iVar23 + uVar15 + iVar23;
          iVar19 = iVar23 + iVar7 + iVar23;
          iVar20 = iVar23 + uVar17 + iVar23;
          iVar21 = iVar23 + uVar16 + iVar23;
          puVar6 = puVar5 + 2;
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
          *puVar5 = CONCAT17((char)(ushort)(uVar16 + iVar23 >> 0x14),
                             CONCAT16((char)(ushort)(uVar17 + iVar23 >> 0x14),
                                      CONCAT15((char)(ushort)((uint)(iVar7 + iVar23) >> 0x14),
                                               CONCAT14((char)(ushort)(uVar15 + iVar23 >> 0x14),
                                                        CONCAT13((char)(uVar16 >> 0x14),
                                                                 CONCAT12((char)(uVar17 >> 0x14),
                                                                          CONCAT11((char)(ushort)((
                                                  uint)iVar7 >> 0x14),(char)(uVar15 >> 0x14))))))));
          puVar5 = puVar6;
          uVar15 = uVar15 + iVar24;
          iVar7 = iVar7 + iVar24;
          uVar17 = uVar17 + iVar24;
          uVar16 = uVar16 + iVar24;
        } while (puVar6 != local_250 + (ulong)((uVar4 >> 4) - 1) * 2 + 2);
        uVar15 = uVar4 & 0xfffffff0;
        uVar8 = (ulong)uVar15;
        uVar9 = uVar9 + uVar10 * uVar15;
        if (uVar4 == uVar15) goto LAB_001a3a40;
      }
      iVar7 = (int)uVar8;
      uVar12 = (ulong)(iVar7 + 1U);
      *(char *)((long)local_250 + uVar8) = (char)(uVar9 >> 0x14);
      if (iVar7 + 1U < uVar4) {
        *(char *)((long)local_250 + uVar12) = (char)(uVar10 + uVar9 >> 0x14);
        uVar12 = (ulong)(iVar7 + 2U);
        uVar9 = uVar10 + uVar10 + uVar9;
        if (iVar7 + 2U < uVar4) {
          *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
          uVar12 = (ulong)(iVar7 + 3U);
          uVar9 = uVar10 + uVar9;
          if (iVar7 + 3U < uVar4) {
            *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
            uVar12 = (ulong)(iVar7 + 4U);
            uVar9 = uVar10 + uVar9;
            if (iVar7 + 4U < uVar4) {
              *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
              uVar12 = (ulong)(iVar7 + 5U);
              uVar9 = uVar10 + uVar9;
              if (iVar7 + 5U < uVar4) {
                *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
                uVar12 = (ulong)(iVar7 + 6U);
                uVar9 = uVar10 + uVar9;
                if (iVar7 + 6U < uVar4) {
                  *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
                  uVar12 = (ulong)(iVar7 + 7U);
                  uVar9 = uVar10 + uVar9;
                  if (iVar7 + 7U < uVar4) {
                    *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
                    uVar12 = (ulong)(iVar7 + 8U);
                    uVar9 = uVar10 + uVar9;
                    if (iVar7 + 8U < uVar4) {
                      *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
                      uVar12 = (ulong)(iVar7 + 9U);
                      uVar9 = uVar10 + uVar9;
                      if (iVar7 + 9U < uVar4) {
                        *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
                        uVar12 = (ulong)(iVar7 + 10U);
                        uVar9 = uVar10 + uVar9;
                        if (iVar7 + 10U < uVar4) {
                          *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
                          uVar12 = (ulong)(iVar7 + 0xbU);
                          uVar9 = uVar10 + uVar9;
                          if (iVar7 + 0xbU < uVar4) {
                            *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
                            uVar12 = (ulong)(iVar7 + 0xcU);
                            uVar9 = uVar10 + uVar9;
                            if (iVar7 + 0xcU < uVar4) {
                              *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
                              uVar12 = (ulong)(iVar7 + 0xdU);
                              uVar9 = uVar10 + uVar9;
                              if (iVar7 + 0xdU < uVar4) {
                                *(char *)((long)local_250 + uVar12) = (char)(uVar9 >> 0x14);
                                if (iVar7 + 0xeU < uVar4) {
                                  *(char *)((long)local_250 + (ulong)(iVar7 + 0xeU)) =
                                       (char)(uVar10 + uVar9 >> 0x14);
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
LAB_001a3a40:
  uVar9 = 0;
  iVar7 = (int)sVar3;
  if (sVar3 != 0) {
    iVar23 = (int)(param_8 + param_9 * iVar7) >> 0xb;
    if (sVar3 < 0) {
      uVar10 = (param_8 & 0x7ff) - iVar7;
      uVar9 = ((int)param_8 >> 0xb) - iVar23;
    }
    else {
      uVar10 = ((int)sVar3 - (param_8 & 0x7ff)) + 0x7ff;
      uVar9 = iVar23 - ((int)param_8 >> 0xb);
    }
    uVar12 = (ulong)uVar10 * (ulong)uVar11 >> 0xb;
    uVar10 = (uint)uVar12;
    if (uVar9 != 0) {
      if (uVar9 - 1 < 0xf) {
        uVar8 = 0;
      }
      else {
        uVar17 = uVar11 + uVar11 + uVar10;
        iVar18 = uVar11 * 0x10;
        iVar24 = uVar11 * 4;
        puVar5 = local_130;
        uVar15 = uVar10;
        iVar23 = uVar11 + uVar10;
        uVar16 = uVar11 + uVar17;
        do {
          iVar19 = iVar24 + uVar15 + iVar24;
          iVar20 = iVar24 + iVar23 + iVar24;
          iVar21 = iVar24 + uVar17 + iVar24;
          iVar22 = iVar24 + uVar16 + iVar24;
          puVar6 = puVar5 + 2;
          puVar5[1] = CONCAT17((char)(ushort)((uint)(iVar24 + iVar22) >> 0x14),
                               CONCAT16((char)(ushort)((uint)(iVar24 + iVar21) >> 0x14),
                                        CONCAT15((char)(ushort)((uint)(iVar24 + iVar20) >> 0x14),
                                                 CONCAT14((char)(ushort)((uint)(iVar24 + iVar19) >>
                                                                        0x14),
                                                          CONCAT13((char)(ushort)((uint)iVar22 >>
                                                                                 0x14),
                                                                   CONCAT12((char)(ushort)((uint)
                                                  iVar21 >> 0x14),
                                                  CONCAT11((char)(ushort)((uint)iVar20 >> 0x14),
                                                           (char)(ushort)((uint)iVar19 >> 0x14))))))
                                       ));
          *puVar5 = CONCAT17((char)(ushort)(uVar16 + iVar24 >> 0x14),
                             CONCAT16((char)(ushort)(uVar17 + iVar24 >> 0x14),
                                      CONCAT15((char)(ushort)((uint)(iVar23 + iVar24) >> 0x14),
                                               CONCAT14((char)(ushort)(uVar15 + iVar24 >> 0x14),
                                                        CONCAT13((char)(uVar16 >> 0x14),
                                                                 CONCAT12((char)(uVar17 >> 0x14),
                                                                          CONCAT11((char)(ushort)((
                                                  uint)iVar23 >> 0x14),(char)(uVar15 >> 0x14))))))))
          ;
          puVar5 = puVar6;
          uVar15 = uVar15 + iVar18;
          iVar23 = iVar23 + iVar18;
          uVar17 = uVar17 + iVar18;
          uVar16 = uVar16 + iVar18;
        } while (puVar6 != local_130 + (ulong)((uVar9 >> 4) - 1) * 2 + 2);
        uVar15 = uVar9 & 0xfffffff0;
        uVar8 = (ulong)uVar15;
        uVar10 = uVar10 + uVar11 * uVar15;
        if (uVar15 == uVar9) goto LAB_001a3c98;
      }
      iVar23 = (int)uVar8;
      uVar15 = iVar23 + 1;
      uVar12 = (ulong)uVar15;
      *(char *)((long)local_130 + uVar8) = (char)(uVar10 >> 0x14);
      if (uVar15 < uVar9) {
        *(char *)((long)local_130 + (ulong)uVar15) = (char)(uVar11 + uVar10 >> 0x14);
        uVar12 = (ulong)(iVar23 + 2U);
        uVar10 = uVar11 + uVar11 + uVar10;
        if (iVar23 + 2U < uVar9) {
          *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
          uVar12 = (ulong)(iVar23 + 3U);
          uVar10 = uVar11 + uVar10;
          if (iVar23 + 3U < uVar9) {
            *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
            uVar15 = iVar23 + 4;
            uVar12 = (ulong)uVar15;
            uVar10 = uVar11 + uVar10;
            if (uVar15 < uVar9) {
              *(char *)((long)local_130 + (ulong)uVar15) = (char)(uVar10 >> 0x14);
              uVar12 = (ulong)(iVar23 + 5U);
              uVar10 = uVar11 + uVar10;
              if (iVar23 + 5U < uVar9) {
                *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
                uVar12 = (ulong)(iVar23 + 6U);
                uVar10 = uVar11 + uVar10;
                if (iVar23 + 6U < uVar9) {
                  *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
                  uVar12 = (ulong)(iVar23 + 7U);
                  uVar10 = uVar11 + uVar10;
                  if (iVar23 + 7U < uVar9) {
                    *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
                    uVar12 = (ulong)(iVar23 + 8U);
                    uVar10 = uVar11 + uVar10;
                    if (iVar23 + 8U < uVar9) {
                      *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
                      uVar12 = (ulong)(iVar23 + 9U);
                      uVar10 = uVar11 + uVar10;
                      if (iVar23 + 9U < uVar9) {
                        *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
                        uVar12 = (ulong)(iVar23 + 10U);
                        uVar10 = uVar11 + uVar10;
                        if (iVar23 + 10U < uVar9) {
                          *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
                          uVar12 = (ulong)(iVar23 + 0xbU);
                          uVar10 = uVar11 + uVar10;
                          if (iVar23 + 0xbU < uVar9) {
                            *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
                            uVar12 = (ulong)(iVar23 + 0xcU);
                            uVar10 = uVar11 + uVar10;
                            if (iVar23 + 0xcU < uVar9) {
                              *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
                              uVar12 = (ulong)(iVar23 + 0xdU);
                              uVar10 = uVar11 + uVar10;
                              if (iVar23 + 0xdU < uVar9) {
                                *(char *)((long)local_130 + uVar12) = (char)(uVar10 >> 0x14);
                                if (iVar23 + 0xeU < uVar9) {
                                  *(char *)((long)local_130 + (ulong)(iVar23 + 0xeU)) =
                                       (char)(uVar11 + uVar10 >> 0x14);
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
LAB_001a3c98:
  iVar23 = render_scanline_affine_merge_tile_widths_c
                     (uVar12,local_250,local_130,param_2,uVar4,uVar9);
  if (iVar23 == 0) {
    iVar24 = 1;
    iVar18 = 0;
  }
  else {
    iVar18 = 0;
    pbVar13 = param_2;
    pbVar14 = param_2;
    uVar11 = 0x100;
    do {
      bVar1 = *pbVar13;
      *pbVar14 = bVar1;
      iVar24 = iVar18 + 1;
      if (bVar1 != uVar11) {
        iVar24 = iVar18 + 2;
        pbVar14 = pbVar14 + 1;
        iVar18 = iVar18 + 1;
      }
      pbVar13 = pbVar13 + 1;
      uVar11 = (uint)bVar1;
    } while (pbVar13 != param_2 + (ulong)(iVar23 - 1) + 1);
  }
  render_scanline_affine_setup_map_indexes_extended_asm
            (param_2,param_3,iVar18,param_7,param_8,(int)sVar2,(int)sVar3,
             *(undefined *)(param_1 + 0xab),*(undefined *)(param_1 + 0xac));
  render_scanline_affine_load_tile_map_entries_extended_asm(param_3,param_4,iVar18);
  render_scanline_affine_setup_flip_masks_asm(param_6,param_3,iVar18);
  render_scanline_affine_diff_tile_widths_asm(param_2,iVar18,param_9);
  render_scanline_affine_setup_tile_offsets_asm(param_5,param_7,param_8,(int)sVar2,iVar7,param_9);
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


