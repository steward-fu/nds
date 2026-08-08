/*
 * Ghidra decompilation
 *
 * Function : video_3d_render_bins_4x
 * Address  : 08077b80
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_render_bins_4x(video_3d_render_target_struct *render_target)

{
  u16 *puVar1;
  undefined auVar2 [16];
  int iVar3;
  u32 batch_size;
  u32 bin_index;
  u32 max_y;
  u32 uVar4;
  u32 clear_pixel;
  u32 clear_pixel_1;
  u32 *puVar5;
  u32 *puVar6;
  u32 min_y;
  u32 *color_buffer_dest;
  int iVar7;
  u32 *puVar8;
  u32 clear_image_x_offset;
  geometry_struct *pgVar9;
  int iVar10;
  video_struct **ppvVar11;
  geometry_struct *pgVar12;
  geometry_struct *geometry;
  geometry_vertex_struct *vertexes;
  u32 clear_id;
  uint uVar13;
  uint uVar14;
  u32 uVar15;
  u32 resolve_type;
  video_struct *pvVar16;
  u32 *puVar17;
  undefined4 *puVar18;
  video_struct *pvVar19;
  int iVar20;
  u8 *alpha_id;
  u32 clear_id_1;
  uint uVar21;
  u32 *puVar22;
  uint uVar23;
  u32 buffer_page_flip;
  u8 *puVar24;
  u16 *clear_color;
  video_3d_render_target_struct *pvVar25;
  video_3d_render_target_struct *pvVar26;
  u8 *puVar27;
  u16 *clear_depth;
  video_3d_render_target_struct *pvVar28;
  uint uVar29;
  u32 *depth_buffer;
  uint uVar30;
  u32 *puVar31;
  u32 *color_buffer;
  int iVar32;
  int local_84;
  u32 *local_7c;
  u32 *local_78;
  u32 *local_74;
  int local_58;
  video_3d_polygon_bin_struct *polygon_bins;
  video_3d_polygon_bin_struct *alpha_polygon_bins;
  
  ppvVar11 = &render_target->video;
  pvVar19 = *ppvVar11;
  uVar21 = (uint)render_target->bin_interleave;
  pgVar12 = render_target->geometry;
  uVar23 = pgVar12->buffer_page ^ 1;
  puVar31 = (pvVar19->video_3d).color_buffer_render;
  iVar3 = __aeabi_idiv(0xc,uVar21);
  if (iVar3 == 0) {
    return;
  }
  local_58 = 0;
  puVar8 = render_target->depth_buffer_tile;
  pgVar9 = pgVar12;
  pvVar16 = pvVar19;
  do {
    bin_index = local_58 * uVar21 + (uint)render_target->bin_base;
    uVar15 = bin_index * 0x20;
    if (((pvVar16->video_3d).display_3d_control & 0x4000) == 0) {
      render_polygon_set_buffer32(render_target,(pvVar16->video_3d).clear_color,0x4000);
      render_polygon_set_buffer32(puVar8,(pvVar16->video_3d).clear_depth_id,0x4000);
    }
    else {
      puVar24 = pvVar16->texture_slots[2];
      puVar27 = pvVar16->texture_slots[3];
      uVar21 = pgVar9->clear_image_offset & 0xff;
      local_84 = uVar15 + (pgVar9->clear_image_offset >> 8);
      if (puVar24 == (u8 *)0x0 || puVar27 == (u8 *)0x0) {
        if (puVar24 == (u8 *)0x0) {
          if (puVar27 == (u8 *)0x0) {
            auVar2 = SIMDExpandImmediate(0,6,0x80);
            puVar22 = render_target->color_buffer_tile + 4;
            pvVar25 = (video_3d_render_target_struct *)(render_target->depth_buffer_tile + 4);
            uVar21 = (pvVar16->video_3d).clear_depth_id & 0x3f000000 | 0xfffe00;
            pvVar28 = render_target;
            puVar5 = puVar8;
            if (puVar8 < puVar22 && render_target < pvVar25) goto LAB_08078288;
            do {
              uVar30 = ((int)pvVar28 << 0x1d) >> 0x1f & 3;
              uVar29 = uVar30;
              if (uVar30 == 0) {
                iVar7 = 0x200;
                uVar13 = 0x80;
                iVar20 = iVar7;
                iVar32 = iVar7;
              }
              else {
                ((video_3d_render_target_struct *)(puVar22 + -4))->color_buffer_tile[0] = 0x80000000
                ;
                *(uint *)&pvVar25[-1].field_0x240b0 = uVar21;
                if (uVar30 == 1) {
                  iVar7 = 0x1ff;
                }
                else {
                  puVar22[-3] = 0x80000000;
                  *(uint *)&pvVar25[-1].field_0x240b4 = uVar21;
                  if (uVar30 == 3) {
                    iVar7 = 0x1fd;
                    puVar22[-2] = 0x80000000;
                    *(uint *)&pvVar25[-1].field_0x240b8 = uVar21;
                  }
                  else {
                    iVar7 = 0x1fe;
                    uVar29 = 2;
                  }
                }
                uVar13 = 0x7f;
                iVar20 = 0x200 - uVar30;
                iVar32 = 0x1fc;
              }
              uVar14 = 0;
              puVar17 = puVar5 + uVar30;
              puVar6 = pvVar28->color_buffer_tile + uVar30;
              do {
                uVar14 = uVar14 + 1;
                *(longlong *)puVar6 = auVar2._0_8_;
                *(longlong *)(puVar6 + 2) = auVar2._8_8_;
                *(undefined8 *)puVar17 = 0;
                *(undefined8 *)(puVar17 + 2) = 0;
                puVar17 = puVar17 + 4;
                puVar6 = puVar6 + 4;
              } while (uVar14 < uVar13);
              iVar10 = uVar29 + iVar32;
              pvVar26 = pvVar25;
              if (iVar20 != iVar32) {
                pvVar28->color_buffer_tile[iVar10] = 0x80000000;
                puVar5[iVar10] = uVar21;
                if (iVar7 - iVar32 != 1) {
                  pvVar28->color_buffer_tile[iVar10 + 1] = 0x80000000;
                  puVar5[iVar10 + 1] = uVar21;
                  if (iVar7 - iVar32 != 2) {
                    pvVar28->color_buffer_tile[iVar10 + 2] = 0x80000000;
                    puVar5[iVar10 + 2] = uVar21;
                  }
                }
              }
              while( true ) {
                pvVar28 = (video_3d_render_target_struct *)(pvVar28->color_buffer_tile + 0x200);
                puVar22 = puVar22 + 0x200;
                pvVar25 = (video_3d_render_target_struct *)(pvVar26->color_buffer_tile + 0x200);
                if (pvVar28 == (video_3d_render_target_struct *)puVar8) goto LAB_08077d94;
                puVar5 = pvVar26->color_buffer_tile + 0x1fc;
                if (puVar22 <= puVar5 || pvVar25 <= pvVar28) break;
LAB_08078288:
                puVar18 = (undefined4 *)&pvVar28[-1].field_0x240bc;
                puVar24 = &pvVar25[-1].disable_edge_marking;
                do {
                  puVar18 = puVar18 + 1;
                  *puVar18 = 0x80000000;
                  puVar24 = puVar24 + 4;
                  *(uint *)puVar24 = uVar21;
                  pvVar26 = pvVar25;
                } while (pvVar28->color_buffer_tile + 0x1ff != puVar18);
              }
            } while( true );
          }
          uVar29 = (pvVar16->video_3d).clear_depth_id;
          depth_buffer = puVar8;
          pvVar28 = render_target;
          do {
            puVar5 = depth_buffer;
            uVar30 = uVar21;
            pvVar25 = pvVar28;
            do {
              uVar13 = uVar29 & 0x3f000000 |
                       (*(ushort *)
                         (puVar27 + ((uint)(local_84 << 0x17) >> 0x18) * 0x200 + (uVar30 & 0xff) * 2
                         ) & 0x7fff) << 9;
              uVar4 = (uint)(*(ushort *)
                              (puVar27 +
                              ((uint)(local_84 << 0x17) >> 0x18) * 0x200 + (uVar30 & 0xff) * 2) >>
                            0xf) << 0x1f;
              *(u32 *)((int)pvVar28 + uVar30 * 8 + uVar21 * -8) = uVar4;
              depth_buffer[uVar21 * -2 + uVar30 * 2] = uVar13;
              uVar30 = uVar30 + 1;
              pvVar25->color_buffer_tile[1] = uVar4;
              puVar5[1] = uVar13;
              puVar5 = puVar5 + 2;
              pvVar25 = (video_3d_render_target_struct *)(pvVar25->color_buffer_tile + 2);
            } while (uVar21 + 0x100 != uVar30);
            depth_buffer = depth_buffer + 0x200;
            pvVar28 = (video_3d_render_target_struct *)(pvVar28->color_buffer_tile + 0x200);
            local_84 = local_84 + 1;
          } while ((u32 *)render_target->polygon_alpha_id_tile != depth_buffer);
        }
        else {
          puVar5 = render_target->color_buffer_tile + 1;
          uVar29 = (pvVar16->video_3d).clear_depth_id & 0x3f000000 | 0xfffe00;
          local_7c = render_target->depth_buffer_tile + 1;
          do {
            uVar30 = uVar21;
            puVar22 = puVar5;
            puVar6 = local_7c;
            do {
              uVar13 = uVar30 & 0xff;
              uVar30 = uVar30 + 1;
              uVar4 = texture_cache_build_pixel_embedded_alpha
                                ((uint)*(ushort *)
                                        (puVar24 +
                                        ((uint)(local_84 << 0x17) >> 0x18) * 0x200 + uVar13 * 2));
              clear_pixel_1 = uVar4 | 0x80000000;
              ((video_3d_render_target_struct *)(puVar22 + -1))->color_buffer_tile[0] =
                   clear_pixel_1;
              puVar6[-1] = uVar29;
              *puVar22 = clear_pixel_1;
              *puVar6 = uVar29;
              puVar22 = puVar22 + 2;
              puVar6 = puVar6 + 2;
            } while (uVar30 != uVar21 + 0x100);
            puVar5 = puVar5 + 0x200;
            local_84 = local_84 + 1;
            local_7c = local_7c + 0x200;
          } while (render_target->depth_buffer_tile + 1 != puVar5);
        }
      }
      else {
        uVar29 = (pvVar16->video_3d).clear_depth_id;
        local_74 = render_target->color_buffer_tile + 1;
        local_7c = (u32 *)local_84;
        local_78 = render_target->depth_buffer_tile + 1;
        do {
          puVar5 = local_78;
          puVar22 = local_74;
          uVar30 = uVar21;
          do {
            uVar13 = uVar30 & 0xff;
            uVar30 = uVar30 + 1;
            iVar20 = ((uint)((int)local_7c << 0x17) >> 0x18) * 0x200 + uVar13 * 2;
            uVar4 = texture_cache_build_pixel_embedded_alpha((uint)*(ushort *)(puVar24 + iVar20));
            uVar14 = uVar29 & 0x3f000000 | (*(ushort *)(puVar27 + iVar20) & 0x7fff) << 9;
            uVar13 = uVar4 | (uint)(*(ushort *)(puVar27 + iVar20) >> 0xf) << 0x1f;
            ((video_3d_render_target_struct *)(puVar22 + -1))->color_buffer_tile[0] = uVar13;
            puVar5[-1] = uVar14;
            *puVar22 = uVar13;
            *puVar5 = uVar14;
            puVar5 = puVar5 + 2;
            puVar22 = puVar22 + 2;
          } while (uVar21 + 0x100 != uVar30);
          local_7c = (u32 *)((int)local_7c + 1);
          local_74 = local_74 + 0x200;
          local_78 = local_78 + 0x200;
        } while (render_target->depth_buffer_tile + 1 != local_74);
      }
    }
LAB_08077d94:
    uVar21 = 0;
    render_target->stencilling = 0xffffffff;
    render_target->fog_active = 0;
    puVar5 = &(pvVar19->video_3d).polygon_bins[bin_index].offset;
    if (*puVar5 != 0) {
      do {
        puVar1 = (pvVar19->video_3d).polygon_bins[bin_index].indexes + uVar21;
        uVar21 = uVar21 + 1;
        render_polygon_4x(render_target,pgVar12->polygon_list[uVar23].polygons + *puVar1,
                          pgVar12->vertex_list[uVar23].vertexes,uVar15,uVar15 + 0x20);
      } while (uVar21 < *puVar5);
    }
    if (pgVar12->alpha_polygon_list[uVar23].offset != 0) {
      alpha_id = render_target->polygon_alpha_id_tile;
      do {
        puVar24 = alpha_id + 0x200;
        render_polygon_set_buffer8(alpha_id,0xff);
        alpha_id = puVar24;
      } while ((video_struct **)puVar24 != ppvVar11);
      puVar5 = &(pvVar19->video_3d).alpha_polygon_bins[bin_index].offset;
      if (*puVar5 != 0) {
        uVar21 = 0;
        do {
          puVar1 = (pvVar19->video_3d).alpha_polygon_bins[bin_index].indexes + uVar21;
          uVar21 = uVar21 + 1;
          render_polygon_4x(render_target,pgVar12->alpha_polygon_list[uVar23].polygons + *puVar1,
                            pgVar12->vertex_list[uVar23].vertexes,uVar15,uVar15 + 0x20);
        } while (uVar21 < *puVar5);
      }
    }
    uVar15 = (pvVar19->video_3d).display_3d_control;
    puVar5 = puVar31 + bin_index * 0x4000;
    uVar21 = ((uVar15 << 0x1a) >> 0x1f) << 2;
    if (render_target->disable_edge_marking != '\0') {
      uVar21 = 0;
    }
    switch((uVar15 << 0x18) >> 0x1e | uVar21) {
    case 2:
      video_3d_resolve_bin_fog_full_4x(render_target,puVar5);
      break;
    case 3:
      video_3d_resolve_bin_fog_alpha_4x(render_target,puVar5);
      break;
    case 4:
    case 5:
      video_3d_resolve_bin_edge_mark_4x(render_target,puVar5,bin_index);
      break;
    case 6:
      video_3d_resolve_bin_edge_mark_fog_full_4x(render_target,puVar5,bin_index);
      break;
    case 7:
      video_3d_resolve_bin_edge_mark_fog_alpha_4x(render_target,puVar5,bin_index);
      break;
    default:
      video_3d_resolve_bin_4x(puVar5,render_target);
    }
    local_58 = local_58 + 1;
    if (iVar3 == local_58) {
      return;
    }
    uVar21 = (uint)render_target->bin_interleave;
    pvVar16 = *ppvVar11;
    pgVar9 = render_target->geometry;
  } while( true );
}


