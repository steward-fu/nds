/*
 * Ghidra decompilation
 *
 * Function : render_scanline_bitmap_16bpp
 * Address  : 08043948
 * Program  : drastic
 */


/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

void render_scanline_bitmap_16bpp
               (video_2d_bg_layer_struct *bg_layer,u16 *render_buffer,u32 *render_visibility,
               u32 line)

{
  byte bVar1;
  sbyte sVar2;
  u16 uVar3;
  s32 source;
  s32 source_x;
  u16 *puVar4;
  u32 *puVar5;
  s32 width;
  uint uVar6;
  u32 wrap_mask_x;
  s32 edge_x1;
  s32 edge_y2;
  u16 *puVar7;
  s32 right_edge_1;
  uint uVar8;
  u32 wrap_mask_y;
  s32 left_edge;
  s32 left_edge_1;
  s32 right_edge;
  undefined8 *puVar9;
  uint uVar10;
  s32 pixel_x;
  uint uVar11;
  u32 right_block;
  uint uVar12;
  s32 edge_y1;
  uint uVar13;
  int iVar14;
  s32 source_y;
  int iVar15;
  u32 *puVar16;
  int iVar17;
  s32 dx;
  uint uVar18;
  int iVar19;
  s32 dy;
  u32 map_pitch_shift;
  vram_map_type puVar20;
  byte *pbVar21;
  u32 uVar22;
  int iVar23;
  int iVar24;
  u16 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  u32 block;
  byte *pbVar28;
  undefined8 *puVar29;
  u32 right_block_1;
  undefined8 uVar30;
  undefined8 uVar31;
  s64 sVar32;
  uint local_2a8;
  s32 edge_x2;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 local_274;
  u16 pixel_visibility_buffer [256];
  int local_6c;
  
  iVar17 = (int)bg_layer->affine_dx;
  iVar19 = (int)bg_layer->affine_dy;
  puVar20 = bg_layer->vram_map;
  uVar22 = bg_layer->bitmap_base;
  sVar2 = bg_layer->bitmap_pitch_shift;
  uVar8 = (uint)bg_layer->bitmap_wrap_mask_y;
  source = bg_layer->affine_current_x;
  iVar14 = bg_layer->affine_current_y;
  uVar6 = (uint)bg_layer->bitmap_wrap_mask_x;
  local_6c = __stack_chk_guard;
  if (iVar17 == 0x100 && iVar19 == 0) {
    uVar13 = iVar14 >> 8;
    uVar11 = source >> 8;
    if ((bg_layer->bg_control & 0x2000) != 0) {
      puVar4 = (u16 *)((int)&local_274 + 2);
      do {
        uVar10 = uVar6 & uVar11;
        uVar11 = uVar10 + 1;
        uVar3 = *(u16 *)(puVar20 + uVar22 + (uVar10 + ((uVar8 & uVar13) << sVar2)) * 2);
        puVar4 = puVar4 + 1;
        *puVar4 = uVar3;
        *render_buffer = uVar3;
        render_buffer = render_buffer + 1;
      } while (pixel_visibility_buffer + 0xff != puVar4);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
    *(undefined8 *)render_visibility = 0;
    *(undefined8 *)(render_visibility + 2) = 0;
    *(undefined8 *)(render_visibility + 4) = 0;
    *(undefined8 *)(render_visibility + 6) = 0;
    puVar5 = render_visibility;
    if (((uint)(uVar8 < uVar13) | uVar13 >> 0x1f) == 0) {
      uVar6 = uVar6 - uVar11;
      uVar8 = -uVar11 & ~((int)-uVar11 >> 0x1f);
      if (0xfe < (int)uVar6) {
        uVar6 = 0xff;
      }
      uVar10 = uVar8 & 7;
      iVar14 = uVar11 + uVar8;
      puVar5 = (u32 *)(uVar6 - uVar8);
      puVar4 = render_buffer + uVar8;
      if (-1 < (int)puVar5) {
        iVar19 = uVar13 << sVar2;
        iVar17 = (iVar14 + iVar19) * 2;
        uVar13 = (int)puVar5 + 1;
        iVar15 = uVar22 + iVar17;
        puVar25 = (u16 *)(puVar20 + iVar15);
        if (uVar13 < 0xd ||
            puVar4 < puVar20 + uVar22 + 0x10 + iVar17 && puVar25 < render_buffer + uVar8 + 8) {
          puVar7 = pixel_visibility_buffer + (uVar10 - 1);
          do {
            uVar3 = *puVar25;
            puVar7 = puVar7 + 1;
            *puVar7 = uVar3;
            *puVar4 = uVar3;
            puVar4 = puVar4 + 1;
            puVar25 = puVar25 + 1;
          } while (puVar7 != pixel_visibility_buffer + uVar10 + (int)puVar5);
        }
        else {
          uVar11 = -((uint)((int)puVar25 * 0x20000000) >> 0x1e) & 7;
          if (uVar13 <= uVar11) {
            uVar11 = uVar13;
          }
          puVar16 = puVar5;
          puVar25 = puVar4;
          puVar7 = pixel_visibility_buffer + uVar10;
          iVar17 = iVar14;
          if (uVar11 != 0) {
            uVar3 = *(u16 *)(puVar20 + iVar15);
            local_274 = pixel_visibility_buffer + uVar10 + 1;
            puVar16 = (u32 *)((int)puVar5 + -1);
            iVar17 = iVar14 + 1;
            pixel_visibility_buffer[uVar10] = uVar3;
            puVar25 = puVar4 + 1;
            *puVar4 = uVar3;
            puVar7 = local_274;
            if (uVar11 != 1) {
              puVar7 = pixel_visibility_buffer + uVar10 + 2;
              puVar25 = puVar4 + 2;
              uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17) * 2);
              puVar16 = (u32 *)((int)puVar5 + -2);
              iVar17 = iVar14 + 2;
              puVar4[1] = uVar3;
              pixel_visibility_buffer[uVar10 + 1] = uVar3;
              if (uVar11 != 2) {
                puVar7 = pixel_visibility_buffer + uVar10 + 3;
                puVar25 = puVar4 + 3;
                uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17) * 2);
                puVar16 = (u32 *)((int)puVar5 + -3);
                iVar17 = iVar14 + 3;
                puVar4[2] = uVar3;
                pixel_visibility_buffer[uVar10 + 2] = uVar3;
                if (uVar11 != 3) {
                  puVar7 = pixel_visibility_buffer + uVar10 + 4;
                  puVar25 = puVar4 + 4;
                  uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17) * 2);
                  puVar16 = puVar5 + -1;
                  iVar17 = iVar14 + 4;
                  puVar4[3] = uVar3;
                  pixel_visibility_buffer[uVar10 + 3] = uVar3;
                  if (uVar11 != 4) {
                    puVar7 = pixel_visibility_buffer + uVar10 + 5;
                    puVar25 = puVar4 + 5;
                    uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17) * 2);
                    puVar16 = (u32 *)((int)puVar5 + -5);
                    iVar17 = iVar14 + 5;
                    puVar4[4] = uVar3;
                    pixel_visibility_buffer[uVar10 + 4] = uVar3;
                    if (uVar11 != 5) {
                      puVar7 = pixel_visibility_buffer + uVar10 + 6;
                      puVar25 = puVar4 + 6;
                      uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17) * 2);
                      puVar16 = (u32 *)((int)puVar5 + -6);
                      iVar17 = iVar14 + 6;
                      puVar4[5] = uVar3;
                      pixel_visibility_buffer[uVar10 + 5] = uVar3;
                      if (uVar11 == 7) {
                        iVar26 = iVar19 + iVar17;
                        iVar17 = iVar14 + 7;
                        puVar16 = (u32 *)((int)puVar5 + -7);
                        uVar3 = *(u16 *)(puVar20 + uVar22 + iVar26 * 2);
                        puVar25 = puVar4 + 7;
                        puVar4[6] = uVar3;
                        pixel_visibility_buffer[uVar10 + 6] = uVar3;
                        puVar7 = pixel_visibility_buffer + uVar10 + 7;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar18 = ((uVar13 - uVar11) - 8 >> 3) + 1;
          if (6 < (int)puVar5 - uVar11) {
            puVar9 = (undefined8 *)(pixel_visibility_buffer + uVar10 + uVar11);
            puVar27 = (undefined8 *)(render_buffer + uVar11 + uVar8);
            puVar29 = (undefined8 *)(puVar20 + uVar11 * 2 + iVar15);
            uVar12 = 0;
            do {
              uVar30 = *puVar29;
              uVar31 = puVar29[1];
              uVar12 = uVar12 + 1;
              puVar29 = puVar29 + 2;
              *puVar9 = uVar30;
              puVar9[1] = uVar31;
              puVar9 = puVar9 + 2;
              *puVar27 = uVar30;
              puVar27[1] = uVar31;
              puVar27 = puVar27 + 2;
            } while (uVar12 < uVar18);
            iVar17 = iVar17 + uVar18 * 8;
            puVar16 = puVar16 + uVar18 * -2;
            puVar25 = puVar25 + uVar18 * 8;
            puVar7 = puVar7 + uVar18 * 8;
            if (uVar18 * 8 - (uVar13 - uVar11) == 0) goto LAB_0804440c;
          }
          uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar17 + iVar19) * 2);
          *puVar7 = uVar3;
          *puVar25 = uVar3;
          if (puVar16 != (u32 *)0x0) {
            uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar17 + 1 + iVar19) * 2);
            puVar7[1] = uVar3;
            puVar25[1] = uVar3;
            if (puVar16 != (u32 *)0x1) {
              uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17 + 2) * 2);
              puVar7[2] = uVar3;
              puVar25[2] = uVar3;
              if (puVar16 != (u32 *)0x2) {
                uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17 + 3) * 2);
                puVar7[3] = uVar3;
                puVar25[3] = uVar3;
                if (puVar16 != (u32 *)0x3) {
                  uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17 + 4) * 2);
                  puVar7[4] = uVar3;
                  puVar25[4] = uVar3;
                  if (puVar16 != (u32 *)0x4) {
                    uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17 + 5) * 2);
                    puVar7[5] = uVar3;
                    puVar25[5] = uVar3;
                    if (puVar16 != (u32 *)0x5) {
                      uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar19 + iVar17 + 6) * 2);
                      puVar7[6] = uVar3;
                      puVar25[6] = uVar3;
                    }
                  }
                }
              }
            }
          }
        }
LAB_0804440c:
        if (uVar8 >> 3 <= uVar6 >> 3) {
          puVar4 = pixel_visibility_buffer;
          pbVar21 = (byte *)((int)render_visibility + (uVar8 >> 3));
          do {
            puVar4 = puVar4 + 8;
            uVar13 = (*(uint *)(puVar4 + -6) & 0x80008000) >> 0xd |
                     (*(uint *)(puVar4 + -8) & 0x80008000) >> 0xf |
                     (*(uint *)(puVar4 + -4) & 0x80008000) >> 0xb |
                     (*(uint *)(puVar4 + -2) & 0x80008000) >> 9;
            pbVar28 = pbVar21 + 1;
            *pbVar21 = (byte)uVar13 | (byte)(uVar13 >> 0xf);
            pbVar21 = pbVar28;
          } while ((uint)((int)pbVar28 - (int)render_visibility) <= uVar6 >> 3);
        }
        uVar13 = uVar6 + 7;
        if (-1 < (int)uVar6) {
          uVar13 = uVar6;
        }
        uVar11 = uVar6 & 7;
        if ((int)uVar6 < 1) {
          uVar11 = -(-uVar6 & 7);
        }
        puVar5 = (u32 *)0xfe;
        *(byte *)((int)render_visibility + ((int)uVar8 >> 3)) =
             *(byte *)((int)render_visibility + ((int)uVar8 >> 3)) & (byte)(0xff << uVar10);
        *(byte *)((int)render_visibility + ((int)uVar13 >> 3)) =
             *(byte *)((int)render_visibility + ((int)uVar13 >> 3)) &
             ~(byte)(0xfe << (uVar11 & 0xff));
      }
    }
  }
  else {
    if ((bg_layer->bg_control & 0x2000) != 0) {
      puVar4 = (u16 *)((int)&local_274 + 2);
      do {
        uVar13 = iVar14 >> 8;
        uVar11 = source >> 8;
        iVar14 = iVar14 + iVar19;
        source = source + iVar17;
        uVar3 = *(u16 *)(puVar20 + uVar22 + ((uVar6 & uVar11) + ((uVar8 & uVar13) << sVar2)) * 2);
        puVar4 = puVar4 + 1;
        *puVar4 = uVar3;
        *render_buffer = uVar3;
        render_buffer = render_buffer + 1;
      } while (puVar4 != pixel_visibility_buffer + 0xff);
      return;
    }
    if (bg_layer->affine_settings_dirty != '\0') {
      video_2d_bg_layer_affine_setup_edges
                (source,iVar17,uVar6 * 0x100 + 0xff,(int)bg_layer->affine_dmx,
                 &bg_layer->affine_edge_current_x,&bg_layer->affine_edge_step_x,
                 &bg_layer->affine_edge_width_x);
      video_2d_bg_layer_affine_setup_edges
                (bg_layer->affine_current_y,(int)bg_layer->affine_dy,uVar8 * 0x100 + 0xff,
                 (int)bg_layer->affine_dmy,&bg_layer->affine_edge_current_y,
                 &bg_layer->affine_edge_step_y,&bg_layer->affine_edge_width_y);
      bg_layer->affine_settings_dirty = '\0';
    }
    iVar26 = *(int *)((int)&bg_layer->affine_edge_current_x + 4);
    uVar6 = *(uint *)&bg_layer->affine_edge_current_y;
    left_edge = *(int *)((int)&bg_layer->affine_edge_current_y + 4);
    right_edge = *(int *)((int)&bg_layer->affine_edge_width_x + 4) + iVar26 +
                 (uint)CARRY4(*(uint *)&bg_layer->affine_edge_width_x,
                              *(uint *)&bg_layer->affine_edge_current_x);
    puVar5 = (u32 *)(*(uint *)&bg_layer->affine_edge_width_y + uVar6);
    iVar15 = *(int *)((int)&bg_layer->affine_edge_width_y + 4) + left_edge +
             (uint)CARRY4(*(uint *)&bg_layer->affine_edge_width_y,uVar6);
    uVar30 = VectorAdd(bg_layer->affine_edge_step_x,bg_layer->affine_edge_current_x,8);
    sVar32 = VectorAdd(bg_layer->affine_edge_step_y,bg_layer->affine_edge_current_y,8);
    if (left_edge < iVar26) {
      left_edge = iVar26;
    }
    bg_layer->affine_edge_current_y = sVar32;
    local_290 = (undefined4)uVar30;
    uStack_28c = (undefined4)((ulonglong)uVar30 >> 0x20);
    if (iVar15 < right_edge) {
      right_edge = iVar15;
    }
    *(undefined4 *)&bg_layer->affine_edge_current_x = local_290;
    *(undefined4 *)((int)&bg_layer->affine_edge_current_x + 4) = uStack_28c;
    *(undefined8 *)render_visibility = 0;
    *(undefined8 *)(render_visibility + 2) = 0;
    *(undefined8 *)(render_visibility + 4) = 0;
    *(undefined8 *)(render_visibility + 6) = 0;
    if (left_edge <= right_edge) {
      if (left_edge < 0) {
        if (-1 < right_edge) {
          left_edge = 0;
          iVar15 = 0;
          iVar24 = 0;
          local_2a8 = 0;
          iVar23 = 0;
          puVar4 = pixel_visibility_buffer;
          bVar1 = 0xff;
          iVar26 = left_edge;
          goto LAB_08043f24;
        }
      }
      else if (((uint)(0xff < left_edge) | (uint)right_edge >> 0x1f) == 0) {
        iVar23 = left_edge * iVar17;
        iVar24 = left_edge * iVar19;
        bVar1 = (byte)(0xff << (left_edge & 7U));
        local_2a8 = (uint)left_edge >> 3;
        puVar4 = pixel_visibility_buffer + (left_edge & 7U);
        iVar15 = left_edge << 1;
        iVar26 = left_edge >> 3;
LAB_08043f24:
        if (0xfe < right_edge) {
          right_edge = 0xff;
        }
        iVar14 = iVar14 + iVar24;
        iVar23 = source + iVar23;
        if (-1 < right_edge - left_edge) {
          puVar7 = puVar4 + -1;
          puVar25 = (u16 *)((int)render_buffer + iVar15);
          do {
            iVar15 = iVar14 >> 8;
            iVar24 = iVar23 >> 8;
            iVar14 = iVar14 + iVar19;
            iVar23 = iVar23 + iVar17;
            uVar3 = *(u16 *)(puVar20 + uVar22 + (iVar24 + (iVar15 << sVar2)) * 2);
            puVar7 = puVar7 + 1;
            *puVar7 = uVar3;
            *puVar25 = uVar3;
            puVar25 = puVar25 + 1;
          } while (puVar7 != puVar4 + (right_edge - left_edge));
        }
        if (local_2a8 <= (uint)right_edge >> 3) {
          puVar4 = pixel_visibility_buffer;
          pbVar21 = (byte *)((int)render_visibility + local_2a8);
          do {
            puVar4 = puVar4 + 8;
            uVar6 = (*(uint *)(puVar4 + -6) & 0x80008000) >> 0xd |
                    (*(uint *)(puVar4 + -8) & 0x80008000) >> 0xf |
                    (*(uint *)(puVar4 + -4) & 0x80008000) >> 0xb |
                    (*(uint *)(puVar4 + -2) & 0x80008000) >> 9;
            pbVar28 = pbVar21 + 1;
            *pbVar21 = (byte)uVar6 | (byte)(uVar6 >> 0xf);
            pbVar21 = pbVar28;
          } while ((uint)((int)pbVar28 - (int)render_visibility) <= (uint)right_edge >> 3);
        }
        puVar5 = (u32 *)0xfe;
        *(byte *)((int)render_visibility + iVar26) =
             bVar1 & *(byte *)((int)render_visibility + iVar26);
        *(byte *)((int)render_visibility + (right_edge >> 3)) =
             *(byte *)((int)render_visibility + (right_edge >> 3)) &
             ~(byte)(0xfe << (right_edge & 7U));
        if (local_6c == __stack_chk_guard) {
          fflush(stdout);
          return;
        }
        goto LAB_080445bc;
      }
    }
  }
  if (local_6c == __stack_chk_guard) {
    return;
  }
LAB_080445bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}


