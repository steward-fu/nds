/*
 * Ghidra decompilation
 *
 * Function : video_3d_clear_scanlines_4x
 * Address  : 080767f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_clear_scanlines_4x(video_3d_render_target_struct *render_target,u32 y,u32 height)

{
  undefined auVar1 [16];
  ushort uVar2;
  u32 *color_buffer;
  u32 uVar3;
  u32 clear_pixel;
  u32 clear_pixel_1;
  u32 *puVar4;
  int iVar5;
  u32 clear_id;
  u32 clear_id_1;
  u32 clear_id_3;
  uint uVar6;
  u32 clear_image_x_offset;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  u32 *puVar12;
  video_3d_render_target_struct *pvVar13;
  u8 *puVar14;
  u16 *clear_color;
  u8 *puVar15;
  u16 *clear_depth;
  uint uVar16;
  int iVar17;
  undefined *puVar18;
  u32 clear_id_2;
  uint uVar19;
  video_struct *pvVar20;
  video_struct *video;
  u32 *local_40;
  u32 *local_3c;
  u32 *local_38;
  u32 *local_34;
  
  puVar12 = render_target->depth_buffer_tile;
  pvVar20 = render_target->video;
  if (((pvVar20->video_3d).display_3d_control & 0x4000) == 0) {
    render_polygon_set_buffer32(render_target,(pvVar20->video_3d).clear_color,height << 9);
    render_polygon_set_buffer32(puVar12,(pvVar20->video_3d).clear_depth_id,height << 9);
    return;
  }
  puVar14 = pvVar20->texture_slots[2];
  puVar15 = pvVar20->texture_slots[3];
  uVar2 = render_target->geometry->clear_image_offset;
  iVar17 = y + (uVar2 >> 8);
  uVar6 = uVar2 & 0xff;
  if (puVar14 == (u8 *)0x0 || puVar15 == (u8 *)0x0) {
    if (puVar14 == (u8 *)0x0) {
      if (puVar15 == (u8 *)0x0) {
        if (height != 0) {
          auVar1 = SIMDExpandImmediate(0,6,0x80);
          pvVar13 = (video_3d_render_target_struct *)(render_target->depth_buffer_tile + 4);
          uVar6 = (pvVar20->video_3d).clear_depth_id & 0x3f000000 | 0xfffe00;
          puVar12 = render_target->color_buffer_tile + 4;
          local_40 = (u32 *)0x0;
          do {
            puVar18 = &pvVar13[-1].field_0x240b0;
            if (puVar18 < puVar12 && render_target < pvVar13) {
              puVar10 = (undefined4 *)&render_target[-1].field_0x240bc;
              puVar14 = &pvVar13[-1].disable_edge_marking;
              do {
                puVar10 = puVar10 + 1;
                *puVar10 = 0x80000000;
                puVar14 = puVar14 + 4;
                *(uint *)puVar14 = uVar6;
              } while (puVar10 != render_target->color_buffer_tile + 0x1ff);
            }
            else {
              uVar11 = ((int)render_target << 0x1d) >> 0x1f & 3;
              uVar19 = uVar11;
              if (uVar11 == 0) {
                iVar7 = 0x200;
                uVar8 = 0x80;
                local_3c = (u32 *)0x200;
                iVar17 = iVar7;
              }
              else {
                ((video_3d_render_target_struct *)(puVar12 + -4))->color_buffer_tile[0] = 0x80000000
                ;
                *(uint *)&pvVar13[-1].field_0x240b0 = uVar6;
                if (uVar11 == 1) {
                  iVar17 = 0x1ff;
                }
                else {
                  puVar12[-3] = 0x80000000;
                  *(uint *)&pvVar13[-1].field_0x240b4 = uVar6;
                  if (uVar11 == 3) {
                    iVar17 = 0x1fd;
                    puVar12[-2] = 0x80000000;
                    *(uint *)&pvVar13[-1].field_0x240b8 = uVar6;
                  }
                  else {
                    iVar17 = 0x1fe;
                    uVar19 = 2;
                  }
                }
                local_3c = (u32 *)(0x200 - uVar11);
                uVar8 = 0x7f;
                iVar7 = 0x1fc;
              }
              uVar16 = 0;
              puVar9 = (undefined8 *)(puVar18 + uVar11 * 4);
              puVar4 = render_target->color_buffer_tile + uVar11;
              do {
                uVar16 = uVar16 + 1;
                *(longlong *)puVar4 = auVar1._0_8_;
                *(longlong *)(puVar4 + 2) = auVar1._8_8_;
                *puVar9 = 0;
                puVar9[1] = 0;
                puVar9 = puVar9 + 2;
                puVar4 = puVar4 + 4;
              } while (uVar16 < uVar8);
              iVar5 = iVar7 + uVar19;
              if ((u32 *)iVar7 != local_3c) {
                render_target->color_buffer_tile[iVar5] = 0x80000000;
                *(uint *)(puVar18 + iVar5 * 4) = uVar6;
                if (iVar17 - iVar7 != 1) {
                  render_target->color_buffer_tile[iVar5 + 1] = 0x80000000;
                  *(uint *)(puVar18 + (iVar5 + 1) * 4) = uVar6;
                  if (iVar17 - iVar7 != 2) {
                    render_target->color_buffer_tile[iVar5 + 2] = 0x80000000;
                    *(uint *)(puVar18 + (iVar5 + 2) * 4) = uVar6;
                  }
                }
              }
            }
            render_target =
                 (video_3d_render_target_struct *)(render_target->color_buffer_tile + 0x200);
            puVar12 = puVar12 + 0x200;
            pvVar13 = (video_3d_render_target_struct *)(pvVar13->color_buffer_tile + 0x200);
            local_40 = (u32 *)((int)local_40 + 1);
          } while ((u32 *)height != local_40);
        }
      }
      else {
        uVar19 = (pvVar20->video_3d).clear_depth_id;
        if (height != 0) {
          iVar7 = iVar17 + height;
          do {
            puVar4 = puVar12;
            uVar11 = uVar6;
            pvVar13 = render_target;
            do {
              uVar8 = uVar19 & 0x3f000000 |
                      (*(ushort *)
                        (puVar15 + ((uint)(iVar17 << 0x17) >> 0x18) * 0x200 + (uVar11 & 0xff) * 2) &
                      0x7fff) << 9;
              uVar3 = (uint)(*(ushort *)
                              (puVar15 +
                              ((uint)(iVar17 << 0x17) >> 0x18) * 0x200 + (uVar11 & 0xff) * 2) >> 0xf
                            ) << 0x1f;
              *(u32 *)((int)render_target + uVar11 * 8 + uVar6 * -8) = uVar3;
              puVar12[uVar6 * -2 + uVar11 * 2] = uVar8;
              uVar11 = uVar11 + 1;
              pvVar13->color_buffer_tile[1] = uVar3;
              puVar4[1] = uVar8;
              puVar4 = puVar4 + 2;
              pvVar13 = (video_3d_render_target_struct *)(pvVar13->color_buffer_tile + 2);
            } while (uVar11 != uVar6 + 0x100);
            iVar17 = iVar17 + 1;
            render_target =
                 (video_3d_render_target_struct *)(render_target->color_buffer_tile + 0x200);
            puVar12 = puVar12 + 0x200;
          } while (iVar17 != iVar7);
        }
      }
    }
    else if (height != 0) {
      local_40 = render_target->color_buffer_tile + 1;
      uVar19 = (pvVar20->video_3d).clear_depth_id & 0x3f000000 | 0xfffe00;
      local_3c = render_target->depth_buffer_tile + 1;
      iVar7 = iVar17 + height;
      do {
        uVar11 = uVar6;
        puVar12 = local_40;
        puVar4 = local_3c;
        do {
          uVar8 = uVar11 & 0xff;
          uVar11 = uVar11 + 1;
          uVar3 = texture_cache_build_pixel_embedded_alpha
                            ((uint)*(ushort *)
                                    (puVar14 + ((uint)(iVar17 << 0x17) >> 0x18) * 0x200 + uVar8 * 2)
                            );
          clear_pixel = uVar3 | 0x80000000;
          ((video_3d_render_target_struct *)(puVar12 + -1))->color_buffer_tile[0] = clear_pixel;
          puVar4[-1] = uVar19;
          *puVar12 = clear_pixel;
          *puVar4 = uVar19;
          puVar12 = puVar12 + 2;
          puVar4 = puVar4 + 2;
        } while (uVar11 != uVar6 + 0x100);
        iVar17 = iVar17 + 1;
        local_40 = local_40 + 0x200;
        local_3c = local_3c + 0x200;
      } while (iVar17 != iVar7);
    }
  }
  else {
    uVar19 = (pvVar20->video_3d).clear_depth_id;
    if (height != 0) {
      local_38 = render_target->color_buffer_tile + 1;
      local_34 = render_target->depth_buffer_tile + 1;
      local_3c = (u32 *)iVar17;
      do {
        puVar12 = local_34;
        puVar4 = local_38;
        uVar11 = uVar6;
        do {
          uVar8 = uVar11 & 0xff;
          uVar11 = uVar11 + 1;
          iVar7 = ((uint)((int)local_3c << 0x17) >> 0x18) * 0x200 + uVar8 * 2;
          uVar3 = texture_cache_build_pixel_embedded_alpha((uint)*(ushort *)(puVar14 + iVar7));
          uVar16 = uVar19 & 0x3f000000 | (*(ushort *)(puVar15 + iVar7) & 0x7fff) << 9;
          uVar8 = uVar3 | (uint)(*(ushort *)(puVar15 + iVar7) >> 0xf) << 0x1f;
          ((video_3d_render_target_struct *)(puVar4 + -1))->color_buffer_tile[0] = uVar8;
          puVar12[-1] = uVar16;
          *puVar4 = uVar8;
          *puVar12 = uVar16;
          puVar12 = puVar12 + 2;
          puVar4 = puVar4 + 2;
        } while (uVar6 + 0x100 != uVar11);
        local_3c = (u32 *)((int)local_3c + 1);
        local_38 = local_38 + 0x200;
        local_34 = local_34 + 0x200;
      } while ((u32 *)(iVar17 + height) != local_3c);
    }
  }
  return;
}


