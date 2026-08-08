/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_affine_setup_map_indexes_extended
 * Address  : 080b9440
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _render_scanline_affine_setup_map_indexes_extended
               (u8 *tile_widths,u16 *map_indexes,u32 tiles,u32 source_x,u32 source_y,u32 dx,u32 dy,
               u32 wrap_mask,u32 map_pitch_shift)

{
  uint uVar1;
  int iVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  ushort uVar7;
  u16 *puVar8;
  uint uVar10;
  undefined (*pauVar11) [16];
  u32 uVar12;
  uint uVar13;
  undefined auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined auVar24 [16];
  u16 *puVar9;
  
  uVar1 = wrap_mask << 1;
  uVar7 = (ushort)uVar1;
  *map_indexes = (uVar7 & (ushort)(source_x >> 10)) +
                 (short)((uVar1 & source_y >> 10) << (map_pitch_shift & 0xff));
  if (tiles != 0) {
    puVar9 = (u16 *)tile_widths;
    if (tiles < 0x12 ||
        map_indexes + 1 < tile_widths + tiles && tile_widths < map_indexes + tiles + 1) {
      do {
        puVar8 = (u16 *)((int)puVar9 + 1);
        map_indexes = map_indexes + 1;
        *map_indexes = (uVar7 & (ushort)(*(byte *)puVar9 * dx + source_x >> 10)) +
                       (short)((uVar1 & *(byte *)puVar9 * dy + source_y >> 10) <<
                              (map_pitch_shift & 0xff));
        puVar9 = puVar8;
      } while (puVar8 != (u16 *)(tile_widths + tiles));
    }
    else {
      uVar10 = -((uint)((int)(map_indexes + 1) * 0x20000000) >> 0x1e) & 7;
      if (tiles <= uVar10) {
        uVar10 = tiles;
      }
      uVar12 = uVar10;
      if ((((uVar10 != 0) &&
           (map_indexes[1] =
                 (uVar7 & (ushort)(*tile_widths * dx + source_x >> 10)) +
                 (short)((uVar1 & *tile_widths * dy + source_y >> 10) << (map_pitch_shift & 0xff)),
           uVar10 != 1)) &&
          (map_indexes[2] =
                (uVar7 & (ushort)(tile_widths[1] * dx + source_x >> 10)) +
                (short)((uVar1 & tile_widths[1] * dy + source_y >> 10) << (map_pitch_shift & 0xff)),
          uVar10 != 2)) &&
         (((map_indexes[3] =
                 (uVar7 & (ushort)(tile_widths[2] * dx + source_x >> 10)) +
                 (short)((uVar1 & tile_widths[2] * dy + source_y >> 10) << (map_pitch_shift & 0xff))
           , uVar10 != 3 &&
           (map_indexes[4] =
                 (uVar7 & (ushort)(tile_widths[3] * dx + source_x >> 10)) +
                 (short)((uVar1 & tile_widths[3] * dy + source_y >> 10) << (map_pitch_shift & 0xff))
           , uVar10 != 4)) &&
          (map_indexes[5] =
                (uVar7 & (ushort)(tile_widths[4] * dx + source_x >> 10)) +
                (short)((uVar1 & tile_widths[4] * dy + source_y >> 10) << (map_pitch_shift & 0xff)),
          uVar10 != 5)))) {
        map_indexes[6] =
             (uVar7 & (ushort)(tile_widths[5] * dx + source_x >> 10)) +
             (short)((uVar1 & tile_widths[5] * dy + source_y >> 10) << (map_pitch_shift & 0xff));
        if (uVar10 == 7) {
          map_indexes[7] =
               (uVar7 & (ushort)(tile_widths[6] * dx + source_x >> 10)) +
               (short)((uVar1 & tile_widths[6] * dy + source_y >> 10) << (map_pitch_shift & 0xff));
        }
        else {
          uVar12 = 6;
        }
      }
      uVar13 = ((tiles - uVar10) - 0x10 >> 4) + 1;
      iVar2 = uVar13 * 0x10;
      if (0xe < (tiles - 1) - uVar10) {
        auVar3._4_4_ = dx;
        auVar3._0_4_ = dx;
        auVar3._8_8_ = 0;
        auVar3 = auVar3 & auVar3 << 0x40;
        auVar4._4_4_ = uVar1;
        auVar4._0_4_ = uVar1;
        auVar4._8_8_ = 0;
        auVar4 = auVar4 & auVar4 << 0x40;
        pauVar11 = (undefined (*) [16])(tile_widths + uVar10);
        auVar5._4_4_ = dy;
        auVar5._0_4_ = dy;
        auVar5._8_8_ = 0;
        auVar5 = auVar5 & auVar5 << 0x40;
        auVar6._4_4_ = map_pitch_shift;
        auVar6._0_4_ = map_pitch_shift;
        auVar6._8_8_ = 0;
        auVar6 = auVar6 & auVar6 << 0x40;
        uVar10 = 0;
        puVar9 = map_indexes + uVar10 + 0x11;
        do {
          auVar18 = *pauVar11;
          uVar10 = uVar10 + 1;
          pauVar11 = pauVar11 + 1;
          auVar22 = VectorCopyLong(auVar18._0_8_,1,1);
          auVar18 = VectorCopyLong(auVar18._8_8_,1,1);
          auVar14 = VectorCopyLong(auVar22._0_8_,2,1);
          auVar23 = VectorCopyLong(auVar22._8_8_,2,1);
          auVar22 = VectorCopyLong(auVar18._0_8_,2,1);
          auVar19 = VectorCopyLong(auVar18._8_8_,2,1);
          auVar20 = VectorMultiplyAccumulate(auVar14,auVar5,4,0);
          auVar18 = VectorMultiplyAccumulate(auVar23,auVar5,4,0);
          auVar23 = VectorMultiplyAccumulate(auVar23,auVar3,4,0);
          auVar14 = VectorMultiplyAccumulate(auVar14,auVar3,4,0);
          auVar21 = VectorShiftRight(auVar20,10);
          auVar24 = VectorMultiplyAccumulate(auVar22,auVar3,4,0);
          auVar18 = VectorShiftRight(auVar18,10);
          auVar22 = VectorMultiplyAccumulate(auVar22,auVar5,4,0);
          auVar20 = VectorShiftRight(auVar23,10);
          auVar17 = VectorShiftRight(auVar14,10);
          auVar23 = VectorShiftLeft(auVar21 & auVar4,auVar6,4,0);
          auVar14 = VectorShiftRight(auVar22,10);
          auVar21 = VectorMultiplyAccumulate(auVar19,auVar5,4,0);
          auVar18 = VectorShiftLeft(auVar18 & auVar4,auVar6,4,0);
          auVar19 = VectorMultiplyAccumulate(auVar19,auVar3,4,0);
          auVar22 = VectorShiftRight(auVar24,10);
          auVar17._0_8_ = VectorCopyNarrow(auVar17 & auVar4,4);
          auVar17._8_8_ = VectorCopyNarrow(auVar20 & auVar4,4);
          uVar15 = VectorCopyNarrow(auVar23,4);
          uVar16 = VectorCopyNarrow(auVar18,4);
          auVar20 = VectorShiftRight(auVar21,10);
          auVar18._8_8_ = uVar16;
          auVar18._0_8_ = uVar15;
          auVar23 = VectorAdd(auVar18,auVar17,2);
          auVar18 = VectorShiftLeft(auVar14 & auVar4,auVar6,4,0);
          auVar14 = VectorShiftRight(auVar19,10);
          *(longlong *)(puVar9 + -0x10) = auVar23._0_8_;
          *(longlong *)(puVar9 + -0xc) = auVar23._8_8_;
          auVar23 = VectorShiftLeft(auVar20 & auVar4,auVar6,4,0);
          auVar22._0_8_ = VectorCopyNarrow(auVar22 & auVar4,4);
          auVar22._8_8_ = VectorCopyNarrow(auVar14 & auVar4,4);
          auVar14._0_8_ = VectorCopyNarrow(auVar18,4);
          auVar14._8_8_ = VectorCopyNarrow(auVar23,4);
          auVar18 = VectorAdd(auVar14,auVar22,2);
          *(longlong *)(puVar9 + -8) = auVar18._0_8_;
          *(longlong *)(puVar9 + -4) = auVar18._8_8_;
          puVar9 = puVar9 + 0x10;
        } while (uVar10 < uVar13);
        uVar12 = uVar12 + iVar2;
        if (tiles - uVar10 == iVar2) {
          return;
        }
      }
      uVar10 = uVar12 + 1;
      map_indexes[uVar10] =
           (uVar7 & (ushort)(tile_widths[uVar12] * dx + source_x >> 10)) +
           (short)((uVar1 & tile_widths[uVar12] * dy + source_y >> 10) << (map_pitch_shift & 0xff));
      if (uVar10 < tiles) {
        map_indexes[uVar12 + 2] =
             (uVar7 & (ushort)(tile_widths[uVar10] * dx + source_x >> 10)) +
             (short)((uVar1 & tile_widths[uVar10] * dy + source_y >> 10) << (map_pitch_shift & 0xff)
                    );
        if (uVar12 + 2 < tiles) {
          map_indexes[uVar12 + 3] =
               (uVar7 & (ushort)(tile_widths[uVar12 + 2] * dx + source_x >> 10)) +
               (short)((uVar1 & tile_widths[uVar12 + 2] * dy + source_y >> 10) <<
                      (map_pitch_shift & 0xff));
          if (uVar12 + 3 < tiles) {
            map_indexes[uVar12 + 4] =
                 (uVar7 & (ushort)(tile_widths[uVar12 + 3] * dx + source_x >> 10)) +
                 (short)((uVar1 & tile_widths[uVar12 + 3] * dy + source_y >> 10) <<
                        (map_pitch_shift & 0xff));
            if (uVar12 + 4 < tiles) {
              map_indexes[uVar12 + 5] =
                   (uVar7 & (ushort)(tile_widths[uVar12 + 4] * dx + source_x >> 10)) +
                   (short)((uVar1 & tile_widths[uVar12 + 4] * dy + source_y >> 10) <<
                          (map_pitch_shift & 0xff));
              if (uVar12 + 5 < tiles) {
                map_indexes[uVar12 + 6] =
                     (uVar7 & (ushort)(tile_widths[uVar12 + 5] * dx + source_x >> 10)) +
                     (short)((uVar1 & tile_widths[uVar12 + 5] * dy + source_y >> 10) <<
                            (map_pitch_shift & 0xff));
                if (uVar12 + 6 < tiles) {
                  map_indexes[uVar12 + 7] =
                       (uVar7 & (ushort)(tile_widths[uVar12 + 6] * dx + source_x >> 10)) +
                       (short)((uVar1 & tile_widths[uVar12 + 6] * dy + source_y >> 10) <<
                              (map_pitch_shift & 0xff));
                  if (uVar12 + 7 < tiles) {
                    map_indexes[uVar12 + 8] =
                         (uVar7 & (ushort)(tile_widths[uVar12 + 7] * dx + source_x >> 10)) +
                         (short)((uVar1 & tile_widths[uVar12 + 7] * dy + source_y >> 10) <<
                                (map_pitch_shift & 0xff));
                    if (uVar12 + 8 < tiles) {
                      map_indexes[uVar12 + 9] =
                           (uVar7 & (ushort)(tile_widths[uVar12 + 8] * dx + source_x >> 10)) +
                           (short)((uVar1 & tile_widths[uVar12 + 8] * dy + source_y >> 10) <<
                                  (map_pitch_shift & 0xff));
                      if (uVar12 + 9 < tiles) {
                        map_indexes[uVar12 + 10] =
                             (uVar7 & (ushort)(tile_widths[uVar12 + 9] * dx + source_x >> 10)) +
                             (short)((uVar1 & tile_widths[uVar12 + 9] * dy + source_y >> 10) <<
                                    (map_pitch_shift & 0xff));
                        if (uVar12 + 10 < tiles) {
                          map_indexes[uVar12 + 0xb] =
                               (uVar7 & (ushort)(tile_widths[uVar12 + 10] * dx + source_x >> 10)) +
                               (short)((uVar1 & tile_widths[uVar12 + 10] * dy + source_y >> 10) <<
                                      (map_pitch_shift & 0xff));
                          if (uVar12 + 0xb < tiles) {
                            map_indexes[uVar12 + 0xc] =
                                 (uVar7 & (ushort)(tile_widths[uVar12 + 0xb] * dx + source_x >> 10))
                                 + (short)((uVar1 & tile_widths[uVar12 + 0xb] * dy + source_y >> 10)
                                          << (map_pitch_shift & 0xff));
                            if (uVar12 + 0xc < tiles) {
                              map_indexes[uVar12 + 0xd] =
                                   (uVar7 & (ushort)(tile_widths[uVar12 + 0xc] * dx + source_x >> 10
                                                    )) +
                                   (short)((uVar1 & tile_widths[uVar12 + 0xc] * dy + source_y >> 10)
                                          << (map_pitch_shift & 0xff));
                              if (uVar12 + 0xd < tiles) {
                                map_indexes[uVar12 + 0xe] =
                                     (uVar7 & (ushort)(tile_widths[uVar12 + 0xd] * dx + source_x >>
                                                      10)) +
                                     (short)((uVar1 & tile_widths[uVar12 + 0xd] * dy + source_y >>
                                                      10) << (map_pitch_shift & 0xff));
                                if (uVar12 + 0xe < tiles) {
                                  map_indexes[uVar12 + 0xf] =
                                       (uVar7 & (ushort)(tile_widths[uVar12 + 0xe] * dx + source_x
                                                        >> 10)) +
                                       (short)((uVar1 & tile_widths[uVar12 + 0xe] * dy + source_y >>
                                                        10) << (map_pitch_shift & 0xff));
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
  return;
}


