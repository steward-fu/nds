/*
 * Ghidra decompilation
 *
 * Function : _render_scanline_affine_setup_map_indexes_normal
 * Address  : 080b8e98
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void _render_scanline_affine_setup_map_indexes_normal
               (u8 *tile_widths,u16 *map_indexes,u32 tiles,u32 source_x,u32 source_y,u32 dx,u32 dy,
               u32 wrap_mask,u32 map_pitch_shift)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  ushort uVar6;
  u16 *puVar7;
  uint uVar9;
  undefined (*pauVar10) [16];
  u32 uVar11;
  uint uVar12;
  undefined auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  u16 *puVar8;
  
  uVar6 = (ushort)wrap_mask;
  *map_indexes = (uVar6 & (ushort)(source_x >> 0xb)) +
                 (short)((wrap_mask & source_y >> 0xb) << (map_pitch_shift & 0xff));
  if (tiles != 0) {
    puVar8 = (u16 *)tile_widths;
    if (tiles < 0x12 ||
        map_indexes + 1 < tile_widths + tiles && tile_widths < map_indexes + tiles + 1) {
      do {
        puVar7 = (u16 *)((int)puVar8 + 1);
        map_indexes = map_indexes + 1;
        *map_indexes = (uVar6 & (ushort)(*(byte *)puVar8 * dx + source_x >> 0xb)) +
                       (short)((wrap_mask & *(byte *)puVar8 * dy + source_y >> 0xb) <<
                              (map_pitch_shift & 0xff));
        puVar8 = puVar7;
      } while (puVar7 != (u16 *)(tile_widths + tiles));
    }
    else {
      uVar9 = -((uint)((int)(map_indexes + 1) * 0x20000000) >> 0x1e) & 7;
      if (tiles <= uVar9) {
        uVar9 = tiles;
      }
      uVar11 = uVar9;
      if ((((uVar9 != 0) &&
           (map_indexes[1] =
                 (uVar6 & (ushort)(*tile_widths * dx + source_x >> 0xb)) +
                 (short)((wrap_mask & *tile_widths * dy + source_y >> 0xb) <<
                        (map_pitch_shift & 0xff)), uVar9 != 1)) &&
          (map_indexes[2] =
                (uVar6 & (ushort)(tile_widths[1] * dx + source_x >> 0xb)) +
                (short)((wrap_mask & tile_widths[1] * dy + source_y >> 0xb) <<
                       (map_pitch_shift & 0xff)), uVar9 != 2)) &&
         (((map_indexes[3] =
                 (uVar6 & (ushort)(tile_widths[2] * dx + source_x >> 0xb)) +
                 (short)((wrap_mask & tile_widths[2] * dy + source_y >> 0xb) <<
                        (map_pitch_shift & 0xff)), uVar9 != 3 &&
           (map_indexes[4] =
                 (uVar6 & (ushort)(tile_widths[3] * dx + source_x >> 0xb)) +
                 (short)((wrap_mask & tile_widths[3] * dy + source_y >> 0xb) <<
                        (map_pitch_shift & 0xff)), uVar9 != 4)) &&
          (map_indexes[5] =
                (uVar6 & (ushort)(tile_widths[4] * dx + source_x >> 0xb)) +
                (short)((wrap_mask & tile_widths[4] * dy + source_y >> 0xb) <<
                       (map_pitch_shift & 0xff)), uVar9 != 5)))) {
        map_indexes[6] =
             (uVar6 & (ushort)(tile_widths[5] * dx + source_x >> 0xb)) +
             (short)((wrap_mask & tile_widths[5] * dy + source_y >> 0xb) << (map_pitch_shift & 0xff)
                    );
        if (uVar9 == 7) {
          map_indexes[7] =
               (uVar6 & (ushort)(tile_widths[6] * dx + source_x >> 0xb)) +
               (short)((wrap_mask & tile_widths[6] * dy + source_y >> 0xb) <<
                      (map_pitch_shift & 0xff));
        }
        else {
          uVar11 = 6;
        }
      }
      uVar12 = ((tiles - uVar9) - 0x10 >> 4) + 1;
      iVar1 = uVar12 * 0x10;
      if (0xe < (tiles - 1) - uVar9) {
        auVar2._4_4_ = dx;
        auVar2._0_4_ = dx;
        auVar2._8_8_ = 0;
        auVar2 = auVar2 & auVar2 << 0x40;
        auVar3._4_4_ = wrap_mask;
        auVar3._0_4_ = wrap_mask;
        auVar3._8_8_ = 0;
        auVar3 = auVar3 & auVar3 << 0x40;
        pauVar10 = (undefined (*) [16])(tile_widths + uVar9);
        auVar4._4_4_ = dy;
        auVar4._0_4_ = dy;
        auVar4._8_8_ = 0;
        auVar4 = auVar4 & auVar4 << 0x40;
        auVar5._4_4_ = map_pitch_shift;
        auVar5._0_4_ = map_pitch_shift;
        auVar5._8_8_ = 0;
        auVar5 = auVar5 & auVar5 << 0x40;
        uVar9 = 0;
        puVar8 = map_indexes + uVar9 + 0x11;
        do {
          auVar17 = *pauVar10;
          uVar9 = uVar9 + 1;
          pauVar10 = pauVar10 + 1;
          auVar21 = VectorCopyLong(auVar17._0_8_,1,1);
          auVar17 = VectorCopyLong(auVar17._8_8_,1,1);
          auVar13 = VectorCopyLong(auVar21._0_8_,2,1);
          auVar22 = VectorCopyLong(auVar21._8_8_,2,1);
          auVar21 = VectorCopyLong(auVar17._0_8_,2,1);
          auVar18 = VectorCopyLong(auVar17._8_8_,2,1);
          auVar19 = VectorMultiplyAccumulate(auVar13,auVar4,4,0);
          auVar17 = VectorMultiplyAccumulate(auVar22,auVar4,4,0);
          auVar22 = VectorMultiplyAccumulate(auVar22,auVar2,4,0);
          auVar13 = VectorMultiplyAccumulate(auVar13,auVar2,4,0);
          auVar20 = VectorShiftRight(auVar19,0xb);
          auVar23 = VectorMultiplyAccumulate(auVar21,auVar2,4,0);
          auVar17 = VectorShiftRight(auVar17,0xb);
          auVar21 = VectorMultiplyAccumulate(auVar21,auVar4,4,0);
          auVar19 = VectorShiftRight(auVar22,0xb);
          auVar16 = VectorShiftRight(auVar13,0xb);
          auVar22 = VectorShiftLeft(auVar20 & auVar3,auVar5,4,0);
          auVar13 = VectorShiftRight(auVar21,0xb);
          auVar20 = VectorMultiplyAccumulate(auVar18,auVar4,4,0);
          auVar17 = VectorShiftLeft(auVar17 & auVar3,auVar5,4,0);
          auVar18 = VectorMultiplyAccumulate(auVar18,auVar2,4,0);
          auVar21 = VectorShiftRight(auVar23,0xb);
          auVar16._0_8_ = VectorCopyNarrow(auVar16 & auVar3,4);
          auVar16._8_8_ = VectorCopyNarrow(auVar19 & auVar3,4);
          uVar14 = VectorCopyNarrow(auVar22,4);
          uVar15 = VectorCopyNarrow(auVar17,4);
          auVar19 = VectorShiftRight(auVar20,0xb);
          auVar17._8_8_ = uVar15;
          auVar17._0_8_ = uVar14;
          auVar22 = VectorAdd(auVar17,auVar16,2);
          auVar17 = VectorShiftLeft(auVar13 & auVar3,auVar5,4,0);
          auVar13 = VectorShiftRight(auVar18,0xb);
          *(longlong *)(puVar8 + -0x10) = auVar22._0_8_;
          *(longlong *)(puVar8 + -0xc) = auVar22._8_8_;
          auVar22 = VectorShiftLeft(auVar19 & auVar3,auVar5,4,0);
          auVar21._0_8_ = VectorCopyNarrow(auVar21 & auVar3,4);
          auVar21._8_8_ = VectorCopyNarrow(auVar13 & auVar3,4);
          auVar13._0_8_ = VectorCopyNarrow(auVar17,4);
          auVar13._8_8_ = VectorCopyNarrow(auVar22,4);
          auVar17 = VectorAdd(auVar13,auVar21,2);
          *(longlong *)(puVar8 + -8) = auVar17._0_8_;
          *(longlong *)(puVar8 + -4) = auVar17._8_8_;
          puVar8 = puVar8 + 0x10;
        } while (uVar9 < uVar12);
        uVar11 = uVar11 + iVar1;
        if (tiles - uVar9 == iVar1) {
          return;
        }
      }
      uVar9 = uVar11 + 1;
      map_indexes[uVar9] =
           (uVar6 & (ushort)(tile_widths[uVar11] * dx + source_x >> 0xb)) +
           (short)((wrap_mask & tile_widths[uVar11] * dy + source_y >> 0xb) <<
                  (map_pitch_shift & 0xff));
      if (uVar9 < tiles) {
        map_indexes[uVar11 + 2] =
             (uVar6 & (ushort)(tile_widths[uVar9] * dx + source_x >> 0xb)) +
             (short)((wrap_mask & tile_widths[uVar9] * dy + source_y >> 0xb) <<
                    (map_pitch_shift & 0xff));
        if (uVar11 + 2 < tiles) {
          map_indexes[uVar11 + 3] =
               (uVar6 & (ushort)(tile_widths[uVar11 + 2] * dx + source_x >> 0xb)) +
               (short)((wrap_mask & tile_widths[uVar11 + 2] * dy + source_y >> 0xb) <<
                      (map_pitch_shift & 0xff));
          if (uVar11 + 3 < tiles) {
            map_indexes[uVar11 + 4] =
                 (uVar6 & (ushort)(tile_widths[uVar11 + 3] * dx + source_x >> 0xb)) +
                 (short)((wrap_mask & tile_widths[uVar11 + 3] * dy + source_y >> 0xb) <<
                        (map_pitch_shift & 0xff));
            if (uVar11 + 4 < tiles) {
              map_indexes[uVar11 + 5] =
                   (uVar6 & (ushort)(tile_widths[uVar11 + 4] * dx + source_x >> 0xb)) +
                   (short)((wrap_mask & tile_widths[uVar11 + 4] * dy + source_y >> 0xb) <<
                          (map_pitch_shift & 0xff));
              if (uVar11 + 5 < tiles) {
                map_indexes[uVar11 + 6] =
                     (uVar6 & (ushort)(tile_widths[uVar11 + 5] * dx + source_x >> 0xb)) +
                     (short)((wrap_mask & tile_widths[uVar11 + 5] * dy + source_y >> 0xb) <<
                            (map_pitch_shift & 0xff));
                if (uVar11 + 6 < tiles) {
                  map_indexes[uVar11 + 7] =
                       (uVar6 & (ushort)(tile_widths[uVar11 + 6] * dx + source_x >> 0xb)) +
                       (short)((wrap_mask & tile_widths[uVar11 + 6] * dy + source_y >> 0xb) <<
                              (map_pitch_shift & 0xff));
                  if (uVar11 + 7 < tiles) {
                    map_indexes[uVar11 + 8] =
                         (uVar6 & (ushort)(tile_widths[uVar11 + 7] * dx + source_x >> 0xb)) +
                         (short)((wrap_mask & tile_widths[uVar11 + 7] * dy + source_y >> 0xb) <<
                                (map_pitch_shift & 0xff));
                    if (uVar11 + 8 < tiles) {
                      map_indexes[uVar11 + 9] =
                           (uVar6 & (ushort)(tile_widths[uVar11 + 8] * dx + source_x >> 0xb)) +
                           (short)((wrap_mask & tile_widths[uVar11 + 8] * dy + source_y >> 0xb) <<
                                  (map_pitch_shift & 0xff));
                      if (uVar11 + 9 < tiles) {
                        map_indexes[uVar11 + 10] =
                             (uVar6 & (ushort)(tile_widths[uVar11 + 9] * dx + source_x >> 0xb)) +
                             (short)((wrap_mask & tile_widths[uVar11 + 9] * dy + source_y >> 0xb) <<
                                    (map_pitch_shift & 0xff));
                        if (uVar11 + 10 < tiles) {
                          map_indexes[uVar11 + 0xb] =
                               (uVar6 & (ushort)(tile_widths[uVar11 + 10] * dx + source_x >> 0xb)) +
                               (short)((wrap_mask & tile_widths[uVar11 + 10] * dy + source_y >> 0xb)
                                      << (map_pitch_shift & 0xff));
                          if (uVar11 + 0xb < tiles) {
                            map_indexes[uVar11 + 0xc] =
                                 (uVar6 & (ushort)(tile_widths[uVar11 + 0xb] * dx + source_x >> 0xb)
                                 ) + (short)((wrap_mask &
                                             tile_widths[uVar11 + 0xb] * dy + source_y >> 0xb) <<
                                            (map_pitch_shift & 0xff));
                            if (uVar11 + 0xc < tiles) {
                              map_indexes[uVar11 + 0xd] =
                                   (uVar6 & (ushort)(tile_widths[uVar11 + 0xc] * dx + source_x >>
                                                    0xb)) +
                                   (short)((wrap_mask &
                                           tile_widths[uVar11 + 0xc] * dy + source_y >> 0xb) <<
                                          (map_pitch_shift & 0xff));
                              if (uVar11 + 0xd < tiles) {
                                map_indexes[uVar11 + 0xe] =
                                     (uVar6 & (ushort)(tile_widths[uVar11 + 0xd] * dx + source_x >>
                                                      0xb)) +
                                     (short)((wrap_mask &
                                             tile_widths[uVar11 + 0xd] * dy + source_y >> 0xb) <<
                                            (map_pitch_shift & 0xff));
                                if (uVar11 + 0xe < tiles) {
                                  map_indexes[uVar11 + 0xf] =
                                       (uVar6 & (ushort)(tile_widths[uVar11 + 0xe] * dx + source_x
                                                        >> 0xb)) +
                                       (short)((wrap_mask &
                                               tile_widths[uVar11 + 0xe] * dy + source_y >> 0xb) <<
                                              (map_pitch_shift & 0xff));
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


