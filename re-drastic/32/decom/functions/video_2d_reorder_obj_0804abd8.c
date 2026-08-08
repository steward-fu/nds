/*
 * Ghidra decompilation
 *
 * Function : video_2d_reorder_obj
 * Address  : 0804abd8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_reorder_obj(video_2d_struct *video_2d)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  u16 uVar5;
  u16 uVar6;
  u16 uVar7;
  short sVar8;
  short sVar9;
  byte bVar10;
  u32 uVar11;
  uint uVar12;
  u32 obj_attribute_1;
  uint uVar13;
  int iVar14;
  u32 obj_row_pitch;
  s32 source_x;
  int iVar15;
  s32 source;
  u32 obj_priority_1;
  byte bVar16;
  uint uVar17;
  u32 obj_size;
  u32 obj_priority;
  u32 obj_display_type;
  u32 obj_palette_number;
  u32 max_x;
  s32 dx;
  u32 clip_pixels_1;
  vram_map_type puVar18;
  u32 obj_coverage_bit;
  u32 coverage_map;
  byte bVar19;
  u8 *obj_scanline_priority_counts_ptr;
  int iVar20;
  u32 clip_pixels_2;
  u16 *puVar21;
  int iVar22;
  int iVar23;
  u16 *puVar24;
  u16 *extended_obj_palette;
  u8 *__s;
  uint uVar25;
  u32 obj_width;
  u16 *puVar26;
  s16 *affine_params;
  u32 obj_base_offset;
  u32 scanline_number;
  u32 clip_pixels;
  video_struct *pvVar27;
  uint uVar28;
  u32 display_control;
  s32 dy;
  uint uVar29;
  u32 base_offset;
  byte bVar30;
  uint uVar31;
  u32 obj_attribute_2;
  u16 *puVar32;
  u32 obj_layer_coverage;
  int iVar33;
  int iVar34;
  uint uVar35;
  s64 *_edge_base;
  uint uVar36;
  uint uVar37;
  u32 obj_x;
  u8 (*obj_scanline_priority_list_ptr) [128];
  bool bVar38;
  u32 obj_layer_base;
  u32 obj_layer_priority;
  s16 obj_x_s16;
  uint local_a8;
  int local_a4;
  uint local_9c;
  uint local_98;
  uint local_8c;
  u32 middle_x;
  s32 source_y;
  int local_80;
  int local_7c;
  u32 obj_tile_shift;
  u16 *obj_palette;
  u8 obj_layer_indexes [13];
  int local_2c;
  
  puVar21 = video_2d->palette;
  uVar28 = video_2d->display_control;
  puVar32 = video_2d->oam + 4;
  if ((uVar28 & 0x10) == 0) {
    iVar22 = 5;
  }
  else {
    iVar22 = ((uVar28 << 10) >> 0x1e) + 5;
  }
  local_2c = __stack_chk_guard;
  if (video_2d->engine_number == '\x01') {
    iVar23 = 0x600000;
  }
  else {
    iVar23 = 0x400000;
  }
  if ((int)uVar28 < 0) {
    puVar24 = video_2d->extended_obj_palette;
  }
  else {
    puVar24 = (u16 *)0x0;
  }
  extended_obj_palette = (u16 *)&video_2d->obj_set;
  __s = (video_2d->obj_set).scanline_flags;
  memset((video_2d->obj_set).scanline_priority_counts,0,0x3c0);
  memset(__s,0,0xc0);
  (video_2d->obj_set).obj_layer_ptr = (u16 *)0x0;
  if ((uVar28 & 0x60) == 0x20) {
    obj_layer_coverage = 0;
    iVar14 = 0;
    _obj_x_s16 = 0;
    local_a8 = 0;
    puVar26 = puVar32;
    iVar34 = 0;
    do {
      uVar2 = puVar26[-3];
      iVar33 = iVar34;
      if ((uVar2 & 0x13f) == 0) {
        uVar29 = (uint)puVar26[-4];
        uVar35 = uVar29 & 0x3f;
        if ((puVar26[-4] & 0x3f) != 0) {
          uVar35 = 1;
        }
        if (0xbf < (uVar29 & 0xff)) {
          uVar35 = uVar35 | 1;
        }
        if ((((uVar35 == 0) && ((uVar29 & 0xff00) == 0xc00)) && ((uVar2 & 0xfe00) == 0xc000)) &&
           (uVar35 = (uint)puVar26[-2], (uVar35 & 0xf000) == 0xf000)) {
          uVar29 = (uVar29 & 0xff) >> 6;
          uVar17 = ((uint)uVar2 << 0x17) >> 0x1d;
          uVar12 = (uVar35 << 0x14) >> 0x1e;
          uVar31 = (uVar35 & 0x3ff) - (uVar29 << 8 | uVar17 << 3);
          uVar35 = uVar31;
          uVar36 = uVar12;
          if ((iVar14 == 0) ||
             (uVar35 = _obj_x_s16, uVar36 = local_a8, uVar31 == _obj_x_s16 && uVar12 == local_a8)) {
            local_a8 = uVar36;
            _obj_x_s16 = uVar35;
            uVar35 = (1 << uVar17) << (uVar29 << 2);
            if ((uVar35 & obj_layer_coverage) == 0) {
              obj_layer_coverage = obj_layer_coverage | uVar35;
              iVar33 = iVar34 + 1;
              obj_layer_indexes[iVar34] = (u8)iVar14;
            }
            if (obj_layer_coverage == 0xfff) {
              pvVar27 = video_2d->video;
              if (pvVar27->vram_bank_maps[0].address_space_type == VRAM_ADDRESS_SPACE_ARM9) {
                if (iVar23 == pvVar27->vram_bank_maps[0].region_offset * 0x4000) {
                  iVar34 = 0;
                }
                else {
                  iVar34 = 0xff;
                }
              }
              else {
                iVar34 = 0xff;
              }
              if ((pvVar27->vram_bank_maps[1].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
                 (iVar23 == pvVar27->vram_bank_maps[1].region_offset * 0x4000)) {
                iVar34 = 1;
              }
              if ((pvVar27->vram_bank_maps[2].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
                 (iVar23 == pvVar27->vram_bank_maps[2].region_offset * 0x4000)) {
                iVar34 = 2;
                if (pvVar27->vram_bank_maps[3].address_space_type == VRAM_ADDRESS_SPACE_ARM9) {
LAB_0804b688:
                  if (iVar23 != pvVar27->vram_bank_maps[3].region_offset * 0x4000)
                  goto LAB_0804b5ec;
                  iVar34 = 3;
                }
              }
              else {
                if (pvVar27->vram_bank_maps[3].address_space_type == VRAM_ADDRESS_SPACE_ARM9)
                goto LAB_0804b688;
LAB_0804b5ec:
                if (iVar34 == 0xff) break;
              }
              (video_2d->obj_set).obj_layer_hires_ptr = (u16 *)0x0;
              iVar14 = (_obj_x_s16 & 0x1f) + (_obj_x_s16 >> 5) * 0x100;
              if (((uint)(iVar14 * 8) < 0x4001) &&
                 (coverage_map = 0x3f << ((uint)(iVar14 * 0x10) >> 0xe & 0xff) &
                                 ~(uint)(pvVar27->capture_settings).hires_valid[iVar34],
                 coverage_map == 0)) {
                (video_2d->obj_set).obj_layer_hires_ptr =
                     (pvVar27->capture_settings).hires_bank_ptrs[iVar34] + iVar14 * 0x18;
              }
              (video_2d->obj_set).obj_layer_ptr =
                   (u16 *)(video_2d->vram_map + iVar23 + iVar14 * 0x10);
              (video_2d->obj_set).obj_layer_priority = (u8)local_a8;
              goto LAB_0804acb8;
            }
          }
        }
      }
      iVar14 = iVar14 + 1;
      puVar26 = puVar26 + 4;
      iVar34 = iVar33;
    } while (iVar14 != 0x80);
  }
  iVar33 = 0;
LAB_0804acb8:
  uVar35 = 0;
  local_8c = 0xffff;
  middle_x = 0xffff;
  obj_layer_indexes[iVar33] = 0xff;
  iVar34 = 0;
  source_y = 0xffff;
  _edge_base = (s64 *)extended_obj_palette;
  do {
    if (obj_layer_indexes[iVar34] == uVar35) {
      iVar34 = iVar34 + 1;
    }
    else {
      uVar2 = puVar32[-4];
      uVar29 = (uint)uVar2;
      if ((uVar2 >> 0xe != 3) && ((uVar29 & 0x300) != 0x200)) {
        uVar3 = puVar32[-3];
        uVar12 = (uint)uVar3;
        local_9c = uVar29 & 0xff;
        bVar16 = 0;
        uVar17 = (uint)(uVar2 >> 0xe) << 2 | (uint)(uVar3 >> 0xe);
        uVar36 = (uint)video_2d_reorder_obj::obj_size_table[uVar17][1];
        if ((uVar2 & 0x200) != 0) {
          uVar36 = uVar36 << 1;
        }
        if ((local_9c < 0xc0) || (0xff < local_9c + uVar36)) {
          uVar37 = uVar12 & 0x1ff;
          uVar4 = puVar32[-2];
          uVar31 = (uint)uVar4;
          bVar1 = video_2d_reorder_obj::obj_size_table[uVar17][0];
          uVar25 = (uint)bVar1;
          uVar17 = local_8c;
          uVar11 = middle_x;
          uVar13 = source_y;
          if (((uVar3 & 0x1ff) != 0 || (uVar2 & 0xff) != 0) ||
             (uVar17 = uVar29, uVar11 = uVar12, uVar13 = uVar31,
             uVar31 != source_y || (uVar29 != local_8c || uVar12 != middle_x))) {
            source_y = uVar13;
            middle_x = uVar11;
            local_8c = uVar17;
            uVar17 = uVar25;
            if ((uVar2 & 0x200) != 0) {
              uVar17 = uVar25 << 1;
            }
            if ((uVar37 < 0x100) || (0x1ff < uVar17 + uVar37)) {
              local_a4 = (int)(uVar37 << 0x17) >> 0x17;
              sVar8 = (short)local_9c;
              *(short *)(_edge_base + 8) = sVar8;
              *(undefined *)((int)_edge_base + 0x4b) = 0;
              local_98 = (uVar31 << 0x14) >> 0x1e;
              *(undefined *)((int)_edge_base + 0x4c) = 0;
              if ((uVar2 & 0x100) == 0) {
                if ((uVar3 & 0x1000) == 0) {
                  bVar16 = 0;
                }
                else {
                  bVar16 = 4;
                }
                if ((uVar3 & 0x2000) != 0) {
                  *(short *)(_edge_base + 8) = sVar8 + -1 + (short)uVar36;
                  *(undefined *)((int)_edge_base + 0x4c) = 1;
                }
LAB_0804b098:
                _obj_x_s16 = uVar17;
                uVar17 = (uVar29 << 0x14) >> 0x1e;
                if (uVar17 != 3) goto LAB_0804af88;
LAB_0804b0a8:
                uVar12 = uVar31 & 0x3ff;
                if (uVar4 >> 0xc == 0) goto LAB_0804af08;
                *(byte *)((int)_edge_base + 0x4b) = (byte)(uVar4 >> 0xc) * '\x02' + '\x01';
                if ((uVar28 & 0x40) == 0) {
                  if ((uVar28 & 0x20) == 0) {
                    *(undefined2 *)((int)_edge_base + 0x3c) = 0x100;
                    uVar12 = ((uVar31 & 0xf) + (uVar12 >> 4) * 0x80) * 0x10;
                  }
                  else {
                    *(undefined2 *)((int)_edge_base + 0x3c) = 0x200;
                    uVar12 = ((uVar31 & 0x1f) + (uVar12 >> 5) * 0x100) * 0x10;
                  }
                }
                else {
                  uVar12 = uVar12 << (7U - ((int)(uVar28 << 9) >> 0x1f) & 0xff);
                  *(ushort *)((int)_edge_base + 0x3c) = (ushort)bVar1 << 1;
                }
                if ((bVar16 & 8) == 0) {
                  if ((bVar16 & 4) == 0) {
                    if (local_a4 + 7 < 0 != SCARRY4(local_a4,7)) {
                      uVar29 = -local_a4 & 0xfffffff8;
                      uVar12 = uVar12 + uVar29 * 2;
                      _obj_x_s16 = _obj_x_s16 - uVar29;
                      local_a4 = (int)(short)((short)local_a4 + (short)uVar29);
                    }
                  }
                  else {
                    uVar12 = uVar12 + (uVar25 + 0x7fffffff) * 2;
                    if (local_a4 + 7 < 0 != SCARRY4(local_a4,7)) {
                      uVar29 = -local_a4 & 0xfffffff8;
                      uVar12 = uVar12 + uVar29 * -2;
                      _obj_x_s16 = _obj_x_s16 - uVar29;
                      local_a4 = (int)(short)((short)uVar29 + (short)local_a4);
                    }
                  }
                  if (0x100 < local_a4 + _obj_x_s16) {
                    _obj_x_s16 = 0x107U - local_a4 & 0xfffffff8;
                  }
                }
                bVar19 = bVar16 | 2;
                bVar30 = 2;
              }
              else {
                uVar13 = (uVar12 << 0x12) >> 0x1b;
                puVar26 = video_2d->oam;
                _obj_x_s16 = uVar17 >> 1;
                uVar5 = puVar26[uVar13 * 0x10 + 0xb];
                iVar14 = (int)(short)uVar5;
                iVar33 = (int)(short)puVar26[uVar13 * 0x10 + 3];
                uVar12 = uVar36 >> 1;
                uVar6 = puVar26[uVar13 * 0x10 + 0xf];
                uVar7 = puVar26[uVar13 * 0x10 + 7];
                *(u16 *)((int)_edge_base + 0x42) = puVar26[uVar13 * 0x10 + 3];
                *(u16 *)((int)_edge_base + 0x44) = uVar5;
                *(u16 *)((int)_edge_base + 0x46) = uVar7;
                *(u16 *)(_edge_base + 9) = uVar6;
                sVar9 = (short)((int)(uVar37 << 0x17) >> 0x17);
                if ((iVar33 != 0x100 || iVar14 != 0) || (uVar7 != 0 || uVar6 != 0x100)) {
                  uVar5 = puVar26[uVar13 * 0x10 + 7];
                  iVar20 = _obj_x_s16 << 8;
                  local_7c = (uVar36 >> 1) << 8;
                  *(u16 *)((int)_edge_base + 0x46) = uVar5;
                  *(u16 *)(_edge_base + 9) = puVar26[uVar13 * 0x10 + 0xf];
                  if ((uVar2 & 0x200) == 0) {
                    iVar15 = iVar20;
                    iVar20 = uVar17 << 8;
                    local_80 = local_7c;
                    local_7c = uVar36 << 8;
                  }
                  else {
                    iVar15 = iVar20 >> 1;
                    local_80 = local_7c >> 1;
                  }
                  source = iVar15 - iVar33 * _obj_x_s16;
                  local_80 = local_80 - iVar14 * _obj_x_s16;
                  _obj_x_s16 = uVar17;
                  if (local_a4 + 7 < 0 != SCARRY4(local_a4,7)) {
                    uVar12 = -local_a4 & 0xfffffff8;
                    local_a4 = (int)(short)((short)uVar12 + sVar9);
                    source = uVar12 * iVar33 + source;
                    local_80 = uVar12 * iVar14 + local_80;
                    _obj_x_s16 = uVar17 - uVar12;
                  }
                  if (0x100 < local_a4 + _obj_x_s16) {
                    _obj_x_s16 = 0x107U - local_a4 & 0xfffffff8;
                  }
                  *(short *)(_edge_base + 7) = (short)source;
                  *(short *)((int)_edge_base + 0x3a) = (short)local_80;
                  *(short *)(_edge_base + 8) = sVar8 + (short)(uVar36 >> 1);
                  video_2d_obj_affine_setup_edges
                            (source,iVar33,iVar20 + -1,(int)(short)uVar5,_edge_base,_edge_base + 2,
                             _edge_base + 1);
                  video_2d_obj_affine_setup_edges
                            (local_80,iVar14,local_7c + -1,(int)*(short *)(_edge_base + 9),
                             _edge_base + 3,_edge_base + 5,_edge_base + 4);
                  bVar16 = 8;
                  uVar17 = _obj_x_s16;
                  goto LAB_0804b098;
                }
                if ((uVar2 & 0x200) == 0) goto LAB_0804b098;
                local_9c = local_9c + (uVar36 >> 2);
                *(short *)(_edge_base + 8) = (short)local_9c;
                local_a4 = (int)(short)(sVar9 + (short)(uVar17 >> 2));
                if ((((0xbf < local_9c) && (uVar12 + local_9c < 0x100)) || (0xff < local_a4)) ||
                   ((int)(local_a4 + _obj_x_s16) < 1)) goto LAB_0804af08;
                uVar17 = (uVar29 << 0x14) >> 0x1e;
                bVar16 = 0;
                uVar36 = uVar12;
                if (uVar17 == 3) goto LAB_0804b0a8;
LAB_0804af88:
                uVar12 = uVar31 & 0x3ff;
                iVar14 = -((int)(uVar29 << 0x12) >> 0x1f);
                bVar19 = (byte)((uVar29 << 0x12) >> 0x1f) | bVar16;
                if (uVar17 == 1) {
                  uVar31 = (uVar29 << 0x14) >> 0x1e;
                  *(undefined *)((int)_edge_base + 0x4b) = 0x80;
                }
                bVar30 = (byte)uVar31;
                uVar12 = uVar12 << iVar22;
                if ((uVar17 != 1) && (bVar30 = 0, (uVar29 << 0x14) >> 0x1e == 2)) {
                  local_98 = 4;
                }
                if ((uVar28 & 0x10) == 0) {
                  *(undefined2 *)((int)_edge_base + 0x3c) = 0x400;
                  if (iVar14 == 0) {
                    if ((bVar16 & 4) != 0) goto LAB_0804b3dc;
                    iVar14 = 0;
                  }
                  else {
                    uVar12 = uVar12 & ~(1 << iVar22);
                    if ((bVar16 & 4) == 0) goto LAB_0804b3e8;
                    iVar14 = 1;
                    uVar12 = uVar12 + ((bVar1 >> 3) + 0x3ffffff) * 0x40;
                  }
                }
                else {
                  bVar10 = bVar1 >> 3;
                  if (iVar14 == 0) {
                    bVar38 = (bVar16 & 4) == 0;
                    if (bVar38) {
                      iVar14 = 0;
                    }
                    *(ushort *)((int)_edge_base + 0x3c) = (ushort)bVar10 << 5;
                    if (!bVar38) {
LAB_0804b3dc:
                      uVar12 = uVar12 + ((bVar1 >> 3) + 0x7ffffff) * 0x20;
                    }
                  }
                  else {
                    *(ushort *)((int)_edge_base + 0x3c) = (ushort)bVar10 << 6;
                    if ((bVar16 & 4) == 0) {
LAB_0804b3e8:
                      iVar14 = 1;
                    }
                    else {
                      iVar14 = 1;
                      uVar12 = uVar12 + (bVar10 + 0x3ffffff) * 0x40;
                    }
                  }
                }
                if ((bVar16 & 8) == 0) {
                  if (local_a4 + 7 < 0 != SCARRY4(local_a4,7)) {
                    uVar29 = -local_a4 & 0xfffffff8;
                    local_a4 = (int)(short)((short)uVar29 + (short)local_a4);
                    iVar33 = uVar29 << 2;
                    if (iVar14 != 0) {
                      iVar33 = uVar29 << 3;
                    }
                    _obj_x_s16 = _obj_x_s16 - uVar29;
                    if ((bVar16 & 4) != 0) {
                      iVar33 = -iVar33;
                    }
                    uVar12 = uVar12 + iVar33;
                  }
                  if (0x100 < local_a4 + _obj_x_s16) {
                    _obj_x_s16 = 0x107U - local_a4 & 0xfffffff8;
                  }
                }
              }
              if (_obj_x_s16 != 0) {
                puVar18 = video_2d->vram_map;
                *(byte *)((int)_edge_base + 0x4a) = bVar19;
                *(char *)((int)_edge_base + 0x4d) = (char)_obj_x_s16;
                *(vram_map_type *)((int)_edge_base + 0x34) = puVar18 + iVar23 + uVar12;
                *(undefined2 *)((int)_edge_base + 0x3e) = (undefined2)local_a4;
                if ((uVar2 & 0x2000) == 0) {
                  *(u16 **)(_edge_base + 6) = puVar21 + 0x100 + (uint)(uVar4 >> 0xc) * 0x10;
                }
                else {
                  puVar26 = puVar21 + 0x100;
                  if (puVar24 != (u16 *)0x0) {
                    puVar26 = puVar24 + (uint)(uVar4 >> 0xc) * 0x100;
                  }
                  *(u16 **)(_edge_base + 6) = puVar26;
                }
                iVar14 = local_98 * 0xc0 + 0x20800;
                if (0xbf < local_9c) {
                  local_9c = local_9c - 0x100;
                  *(short *)(_edge_base + 8) = *(short *)(_edge_base + 8) + -0x100;
                }
                uVar36 = local_9c + uVar36;
                do {
                  uVar29 = local_9c & 0xff;
                  if (uVar29 < 0xc0) {
                    bVar16 = *(byte *)((int)extended_obj_palette + uVar29 + iVar14);
                    *(char *)((int)extended_obj_palette +
                             (uint)bVar16 + uVar29 * 0x80 + local_98 * 0x6000 + 0x2800) =
                         (char)uVar35;
                    *(byte *)((int)extended_obj_palette + uVar29 + iVar14) = bVar16 + 1;
                    __s[uVar29] = bVar30 | __s[uVar29];
                  }
                  local_9c = local_9c + 1;
                } while (local_9c != uVar36);
              }
            }
          }
        }
      }
    }
LAB_0804af08:
    uVar35 = uVar35 + 1;
    puVar32 = puVar32 + 4;
    _edge_base = _edge_base + 10;
    if (uVar35 == 0x80) {
      if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


