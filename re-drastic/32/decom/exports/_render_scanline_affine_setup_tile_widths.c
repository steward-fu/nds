/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_affine_setup_tile_widths
 * Address  : 080b8988
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 _render_scanline_affine_setup_tile_widths(s32 d,s32 s,u32 width,u8 *tile_widths,u32 dp_inv)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  u32 uVar4;
  u32 tiles;
  u32 s_a;
  u32 s_b;
  u32 tile_width;
  uint uVar5;
  u32 s_frac;
  u32 diff_step;
  uint uVar6;
  int iVar7;
  uint uVar8;
  u32 uVar9;
  undefined8 *puVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  
  if (d != 0) {
    uVar5 = s & 0x7ff;
    if (d < 0) {
      uVar5 = uVar5 - d;
    }
    iVar1 = (int)(d * width + s) >> 0xb;
    if (d < 0) {
      tiles = (s >> 0xb) - iVar1;
    }
    else {
      tiles = iVar1 - (s >> 0xb);
      uVar5 = (d - uVar5) + 0x7ff;
    }
    uVar5 = (uint)((ulonglong)dp_inv * (ulonglong)uVar5) >> 0xb |
            (int)((ulonglong)dp_inv * (ulonglong)uVar5 >> 0x20) << 0x15;
    d = tiles;
    if (tiles != 0) {
      uVar9 = -((uint)tile_widths & 7) & 0xf;
      if (tiles <= uVar9) {
        uVar9 = tiles;
      }
      uVar4 = tiles;
      if ((tiles < 0x12) || (uVar4 = uVar9, uVar9 != 0)) {
        uVar6 = uVar5 >> 0x14;
        uVar5 = dp_inv + uVar5;
        *tile_widths = (u8)uVar6;
        uVar9 = uVar4;
        if (uVar4 != 1) {
          uVar6 = uVar5 >> 0x14;
          uVar5 = uVar5 + dp_inv;
          tile_widths[1] = (u8)uVar6;
          if (uVar4 != 2) {
            uVar6 = uVar5 >> 0x14;
            uVar5 = uVar5 + dp_inv;
            tile_widths[2] = (u8)uVar6;
            if (uVar4 != 3) {
              uVar6 = uVar5 >> 0x14;
              uVar5 = uVar5 + dp_inv;
              tile_widths[3] = (u8)uVar6;
              if (uVar4 != 4) {
                uVar6 = uVar5 >> 0x14;
                uVar5 = uVar5 + dp_inv;
                tile_widths[4] = (u8)uVar6;
                if (uVar4 != 5) {
                  uVar6 = uVar5 >> 0x14;
                  uVar5 = uVar5 + dp_inv;
                  tile_widths[5] = (u8)uVar6;
                  if (uVar4 != 6) {
                    uVar6 = uVar5 >> 0x14;
                    uVar5 = uVar5 + dp_inv;
                    tile_widths[6] = (u8)uVar6;
                    if (uVar4 != 7) {
                      uVar6 = uVar5 >> 0x14;
                      uVar5 = uVar5 + dp_inv;
                      tile_widths[7] = (u8)uVar6;
                      if (uVar4 != 8) {
                        uVar6 = uVar5 >> 0x14;
                        uVar5 = uVar5 + dp_inv;
                        tile_widths[8] = (u8)uVar6;
                        if (uVar4 != 9) {
                          uVar6 = uVar5 >> 0x14;
                          uVar5 = uVar5 + dp_inv;
                          tile_widths[9] = (u8)uVar6;
                          if (uVar4 == 10) {
                            uVar9 = 10;
                          }
                          else {
                            uVar6 = uVar5 >> 0x14;
                            uVar5 = uVar5 + dp_inv;
                            tile_widths[10] = (u8)uVar6;
                            if (uVar4 != 0xb) {
                              uVar6 = uVar5 >> 0x14;
                              uVar5 = uVar5 + dp_inv;
                              tile_widths[0xb] = (u8)uVar6;
                              if (uVar4 != 0xc) {
                                uVar6 = uVar5 >> 0x14;
                                uVar5 = uVar5 + dp_inv;
                                tile_widths[0xc] = (u8)uVar6;
                                if (uVar4 != 0xd) {
                                  uVar6 = uVar5 >> 0x14;
                                  uVar5 = uVar5 + dp_inv;
                                  tile_widths[0xd] = (u8)uVar6;
                                  if (uVar4 != 0xe) {
                                    uVar6 = uVar5 >> 0x14;
                                    uVar5 = uVar5 + dp_inv;
                                    tile_widths[0xe] = (u8)uVar6;
                                    if (uVar4 != 0xf) {
                                      uVar6 = uVar5 >> 0x14;
                                      uVar5 = uVar5 + dp_inv;
                                      tile_widths[0xf] = (u8)uVar6;
                                      if (uVar4 == 0x11) {
                                        uVar6 = uVar5 >> 0x14;
                                        uVar5 = uVar5 + dp_inv;
                                        tile_widths[0x10] = (u8)uVar6;
                                      }
                                      else {
                                        uVar9 = 0x10;
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
        if (tiles == uVar4) {
          return tiles;
        }
      }
      uVar6 = ((tiles - uVar4) - 0x10 >> 4) + 1;
      iVar1 = uVar6 * 0x10;
      if (0xe < (tiles - 1) - uVar4) {
        auVar2._4_4_ = dp_inv << 2;
        auVar2._0_4_ = dp_inv << 2;
        auVar2._8_8_ = 0;
        auVar2 = auVar2 & auVar2 << 0x40;
        iVar7 = dp_inv + dp_inv + uVar5;
        auVar3._4_4_ = dp_inv << 4;
        auVar3._0_4_ = dp_inv << 4;
        auVar3._8_8_ = 0;
        uVar8 = 0;
        auVar11._4_4_ = dp_inv + uVar5;
        auVar11._0_4_ = uVar5;
        auVar11._8_4_ = iVar7;
        auVar11._12_4_ = dp_inv + iVar7;
        puVar10 = (undefined8 *)(tile_widths + uVar4);
        do {
          auVar13 = VectorAdd(auVar11,auVar2,4);
          auVar17 = VectorShiftRight(auVar11,0x14);
          uVar8 = uVar8 + 1;
          auVar11 = VectorAdd(auVar3 & auVar3 << 0x40,auVar11,4);
          auVar12 = VectorAdd(auVar2,auVar13,4);
          auVar13 = VectorShiftRight(auVar13,0x14);
          auVar14 = VectorAdd(auVar2,auVar12,4);
          uVar15 = VectorCopyNarrow(auVar17,4);
          uVar16 = VectorCopyNarrow(auVar13,4);
          auVar12 = VectorShiftRight(auVar12,0x14);
          auVar13 = VectorShiftRight(auVar14,0x14);
          auVar14._0_8_ = VectorCopyNarrow(auVar12,4);
          auVar14._8_8_ = VectorCopyNarrow(auVar13,4);
          auVar12._8_8_ = uVar16;
          auVar12._0_8_ = uVar15;
          uVar15 = VectorCopyNarrow(auVar12,2);
          uVar16 = VectorCopyNarrow(auVar14,2);
          *puVar10 = uVar15;
          puVar10[1] = uVar16;
          puVar10 = puVar10 + 2;
        } while (uVar8 < uVar6);
        uVar5 = iVar1 * dp_inv + uVar5;
        uVar9 = uVar9 + iVar1;
        if (tiles - uVar4 == iVar1) {
          return tiles;
        }
      }
      tile_widths[uVar9] = (u8)(uVar5 >> 0x14);
      if (uVar9 + 1 < tiles) {
        uVar6 = dp_inv + dp_inv + uVar5;
        tile_widths[uVar9 + 1] = (u8)(dp_inv + uVar5 >> 0x14);
        if (uVar9 + 2 < tiles) {
          uVar5 = dp_inv + uVar6;
          tile_widths[uVar9 + 2] = (u8)(uVar6 >> 0x14);
          if (uVar9 + 3 < tiles) {
            uVar6 = dp_inv + uVar5;
            tile_widths[uVar9 + 3] = (u8)(uVar5 >> 0x14);
            if (uVar9 + 4 < tiles) {
              uVar5 = dp_inv + uVar6;
              tile_widths[uVar9 + 4] = (u8)(uVar6 >> 0x14);
              if (uVar9 + 5 < tiles) {
                uVar6 = dp_inv + uVar5;
                tile_widths[uVar9 + 5] = (u8)(uVar5 >> 0x14);
                if (uVar9 + 6 < tiles) {
                  uVar5 = dp_inv + uVar6;
                  tile_widths[uVar9 + 6] = (u8)(uVar6 >> 0x14);
                  if (uVar9 + 7 < tiles) {
                    uVar6 = dp_inv + uVar5;
                    tile_widths[uVar9 + 7] = (u8)(uVar5 >> 0x14);
                    if (uVar9 + 8 < tiles) {
                      uVar5 = dp_inv + uVar6;
                      tile_widths[uVar9 + 8] = (u8)(uVar6 >> 0x14);
                      if (uVar9 + 9 < tiles) {
                        uVar6 = dp_inv + uVar5;
                        tile_widths[uVar9 + 9] = (u8)(uVar5 >> 0x14);
                        if (uVar9 + 10 < tiles) {
                          uVar5 = dp_inv + uVar6;
                          tile_widths[uVar9 + 10] = (u8)(uVar6 >> 0x14);
                          if (uVar9 + 0xb < tiles) {
                            uVar6 = dp_inv + uVar5;
                            tile_widths[uVar9 + 0xb] = (u8)(uVar5 >> 0x14);
                            if (uVar9 + 0xc < tiles) {
                              uVar5 = dp_inv + uVar6;
                              tile_widths[uVar9 + 0xc] = (u8)(uVar6 >> 0x14);
                              if (uVar9 + 0xd < tiles) {
                                uVar8 = uVar9 + 0xe;
                                uVar6 = dp_inv + uVar5;
                                if (uVar8 < tiles) {
                                  uVar6 = uVar6 >> 0x14;
                                }
                                tile_widths[uVar9 + 0xd] = (u8)(uVar5 >> 0x14);
                                if (uVar8 < tiles) {
                                  tile_widths[uVar8] = (u8)uVar6;
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
  return d;
}


