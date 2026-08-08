/*
 * Ghidra decompilation
 *
 * Function : video_3d_clear_scanlines_1x
 * Address  : 08072fd4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_clear_scanlines_1x(video_3d_render_target_struct *render_target,u32 y,u32 height)

{
  undefined auVar1 [16];
  ushort uVar2;
  u32 *color_buffer;
  u32 uVar3;
  u32 clear_id_1;
  u32 clear_pixel;
  int iVar4;
  uint uVar5;
  u32 clear_image_x_offset;
  u32 clear_id_3;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  u32 *puVar10;
  u8 *puVar11;
  u16 *clear_color;
  u32 clear_id_2;
  u8 *puVar12;
  u16 *clear_depth;
  uint uVar13;
  u32 clear_id;
  uint uVar14;
  undefined *puVar15;
  uint *puVar16;
  u32 *puVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  video_struct *pvVar21;
  video_struct *video;
  int *piVar22;
  int iVar23;
  video_3d_render_target_struct *pvVar24;
  u32 *local_40;
  uint *local_3c;
  u32 *local_38;
  uint *local_34;
  
  pvVar21 = render_target->video;
  if (((pvVar21->video_3d).display_3d_control & 0x4000) == 0) {
    render_polygon_set_buffer32(render_target,(pvVar21->video_3d).clear_color,height << 8);
    render_polygon_set_buffer32
              (render_target->depth_buffer_tile,(pvVar21->video_3d).clear_depth_id,height << 8);
    return;
  }
  puVar11 = pvVar21->texture_slots[2];
  puVar12 = pvVar21->texture_slots[3];
  uVar2 = render_target->geometry->clear_image_offset;
  uVar14 = y + (uVar2 >> 8);
  uVar5 = uVar2 & 0xff;
  if (puVar11 == (u8 *)0x0 || puVar12 == (u8 *)0x0) {
    if (puVar11 == (u8 *)0x0) {
      if (puVar12 == (u8 *)0x0) {
        if (height != 0) {
          auVar1 = SIMDExpandImmediate(0,6,0x80);
          pvVar24 = (video_3d_render_target_struct *)(render_target->depth_buffer_tile + 4);
          uVar5 = (pvVar21->video_3d).clear_depth_id & 0x3f000000 | 0xfffe00;
          puVar17 = render_target->color_buffer_tile + 4;
          local_40 = (u32 *)0x0;
          do {
            puVar15 = &pvVar24[-1].field_0x240b0;
            if (puVar15 < puVar17 && render_target < pvVar24) {
              puVar9 = (undefined4 *)&render_target[-1].field_0x240bc;
              puVar11 = &pvVar24[-1].disable_edge_marking;
              do {
                puVar9 = puVar9 + 1;
                *puVar9 = 0x80000000;
                puVar11 = puVar11 + 4;
                *(uint *)puVar11 = uVar5;
              } while (puVar9 != render_target->color_buffer_tile + 0xff);
            }
            else {
              uVar13 = ((int)render_target << 0x1d) >> 0x1f & 3;
              uVar14 = uVar13;
              if (uVar13 == 0) {
                iVar19 = 0x100;
                uVar6 = 0x40;
                local_3c = (uint *)0x100;
                iVar23 = iVar19;
              }
              else {
                ((video_3d_render_target_struct *)(puVar17 + -4))->color_buffer_tile[0] = 0x80000000
                ;
                *(uint *)&pvVar24[-1].field_0x240b0 = uVar5;
                if (uVar13 == 1) {
                  iVar23 = 0xff;
                }
                else {
                  puVar17[-3] = 0x80000000;
                  *(uint *)&pvVar24[-1].field_0x240b4 = uVar5;
                  if (uVar13 == 3) {
                    iVar23 = 0xfd;
                    puVar17[-2] = 0x80000000;
                    *(uint *)&pvVar24[-1].field_0x240b8 = uVar5;
                  }
                  else {
                    iVar23 = 0xfe;
                    uVar14 = 2;
                  }
                }
                local_3c = (uint *)(0x100 - uVar13);
                uVar6 = 0x3f;
                iVar19 = 0xfc;
              }
              uVar20 = 0;
              puVar8 = (undefined8 *)(puVar15 + uVar13 * 4);
              puVar10 = render_target->color_buffer_tile + uVar13;
              do {
                uVar20 = uVar20 + 1;
                *(longlong *)puVar10 = auVar1._0_8_;
                *(longlong *)(puVar10 + 2) = auVar1._8_8_;
                *puVar8 = 0;
                puVar8[1] = 0;
                puVar8 = puVar8 + 2;
                puVar10 = puVar10 + 4;
              } while (uVar20 < uVar6);
              iVar4 = iVar19 + uVar14;
              if ((uint *)iVar19 != local_3c) {
                render_target->color_buffer_tile[iVar4] = 0x80000000;
                *(uint *)(puVar15 + iVar4 * 4) = uVar5;
                if (iVar23 - iVar19 != 1) {
                  render_target->color_buffer_tile[iVar4 + 1] = 0x80000000;
                  *(uint *)(puVar15 + (iVar4 + 1) * 4) = uVar5;
                  if (iVar23 - iVar19 != 2) {
                    render_target->color_buffer_tile[iVar4 + 2] = 0x80000000;
                    *(uint *)(puVar15 + (iVar4 + 2) * 4) = uVar5;
                  }
                }
              }
            }
            render_target =
                 (video_3d_render_target_struct *)(render_target->color_buffer_tile + 0x100);
            puVar17 = puVar17 + 0x100;
            pvVar24 = (video_3d_render_target_struct *)(pvVar24->color_buffer_tile + 0x100);
            local_40 = (u32 *)((int)local_40 + 1);
          } while ((u32 *)height != local_40);
        }
      }
      else {
        uVar13 = (pvVar21->video_3d).clear_depth_id;
        if (height != 0) {
          piVar18 = (int *)&render_target[-1].field_0x240bc;
          uVar6 = uVar14 + height;
          puVar17 = render_target->color_buffer_tile + 0x3fff;
          do {
            uVar20 = uVar5;
            piVar22 = piVar18;
            puVar10 = puVar17;
            do {
              uVar7 = uVar20 & 0xff;
              uVar20 = uVar20 + 1;
              uVar2 = *(ushort *)(puVar12 + (uVar14 & 0xff) * 0x200 + uVar7 * 2);
              piVar22 = piVar22 + 1;
              *piVar22 = (uint)(uVar2 >> 0xf) << 0x1f;
              puVar10 = puVar10 + 1;
              *puVar10 = uVar13 & 0x3f000000 | (uVar2 & 0x7fff) << 9;
            } while (uVar20 != uVar5 + 0x100);
            uVar14 = uVar14 + 1;
            piVar18 = piVar18 + 0x100;
            puVar17 = puVar17 + 0x100;
          } while (uVar14 != uVar6);
        }
      }
    }
    else {
      uVar13 = (pvVar21->video_3d).clear_depth_id;
      if (height != 0) {
        local_3c = (uint *)&render_target[-1].field_0x240bc;
        uVar6 = uVar14 + height;
        local_40 = render_target->color_buffer_tile + 0x3fff;
        do {
          puVar16 = local_3c;
          puVar17 = local_40;
          uVar20 = uVar5;
          do {
            uVar7 = uVar20 & 0xff;
            uVar20 = uVar20 + 1;
            uVar3 = texture_cache_build_pixel_embedded_alpha
                              ((uint)*(ushort *)(puVar11 + (uVar14 & 0xff) * 0x200 + uVar7 * 2));
            puVar16 = puVar16 + 1;
            *puVar16 = uVar3 | 0x80000000;
            puVar17 = puVar17 + 1;
            *puVar17 = uVar13 & 0x3f000000 | 0xfffe00;
          } while (uVar20 != uVar5 + 0x100);
          uVar14 = uVar14 + 1;
          local_3c = local_3c + 0x100;
          local_40 = local_40 + 0x100;
        } while (uVar14 != uVar6);
      }
    }
  }
  else {
    uVar13 = (pvVar21->video_3d).clear_depth_id;
    if (height != 0) {
      local_34 = (uint *)&render_target[-1].field_0x240bc;
      local_38 = render_target->color_buffer_tile + 0x3fff;
      local_3c = (uint *)uVar14;
      do {
        puVar17 = local_38;
        puVar16 = local_34;
        uVar6 = uVar5;
        do {
          uVar20 = uVar6 & 0xff;
          uVar6 = uVar6 + 1;
          iVar23 = ((uint)local_3c & 0xff) * 0x200 + uVar20 * 2;
          uVar3 = texture_cache_build_pixel_embedded_alpha((uint)*(ushort *)(puVar11 + iVar23));
          uVar2 = *(ushort *)(puVar12 + iVar23);
          puVar16 = puVar16 + 1;
          *puVar16 = uVar3 | (uint)(uVar2 >> 0xf) << 0x1f;
          puVar17 = puVar17 + 1;
          *puVar17 = uVar13 & 0x3f000000 | (uVar2 & 0x7fff) << 9;
        } while (uVar6 != uVar5 + 0x100);
        local_3c = (uint *)((int)local_3c + 1);
        local_34 = local_34 + 0x100;
        local_38 = local_38 + 0x100;
      } while (local_3c != (uint *)(uVar14 + height));
    }
  }
  return;
}


