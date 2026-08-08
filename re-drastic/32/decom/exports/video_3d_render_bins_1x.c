/*
 * Ghidra decompilation
 *
 * Function : video_3d_render_bins_1x
 * Address  : 08074338
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_render_bins_1x(video_3d_render_target_struct *render_target)

{
  u16 *puVar1;
  undefined auVar2 [16];
  ushort uVar3;
  int iVar4;
  u32 batch_size;
  u32 bin_index;
  u32 max_y;
  u32 uVar5;
  u32 clear_pixel;
  int *piVar6;
  u32 *puVar7;
  u32 min_y;
  u32 *color_buffer_dest;
  int iVar8;
  u32 *puVar9;
  u32 clear_image_x_offset;
  geometry_struct *pgVar10;
  int iVar11;
  geometry_struct *pgVar12;
  geometry_struct *geometry;
  geometry_vertex_struct *vertexes;
  uint uVar13;
  u32 uVar14;
  u32 resolve_type;
  video_struct *pvVar15;
  u32 *puVar16;
  undefined4 *puVar17;
  video_struct *pvVar18;
  int iVar19;
  u32 clear_id_1;
  uint uVar20;
  u8 *alpha_id;
  u32 *puVar21;
  uint uVar22;
  u32 buffer_page_flip;
  u8 *puVar23;
  u16 *clear_color;
  u32 *puVar24;
  video_3d_render_target_struct *pvVar25;
  video_3d_render_target_struct *pvVar26;
  u8 *puVar27;
  u16 *clear_depth;
  video_3d_render_target_struct *pvVar28;
  uint *puVar29;
  int *piVar30;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  u32 *puVar35;
  u32 *color_buffer;
  u32 *depth_buffer;
  int iVar36;
  u32 clear_id;
  uint local_84;
  u32 *local_7c;
  u32 *local_78;
  uint *local_74;
  int local_58;
  video_3d_polygon_bin_struct *polygon_bins;
  video_3d_polygon_bin_struct *alpha_polygon_bins;
  
  pvVar18 = render_target->video;
  uVar20 = (uint)render_target->bin_interleave;
  pgVar12 = render_target->geometry;
  uVar22 = pgVar12->buffer_page ^ 1;
  puVar35 = (pvVar18->video_3d).color_buffer_render;
  iVar4 = __aeabi_idiv(0xc,uVar20);
  if (iVar4 == 0) {
    return;
  }
  local_58 = 0;
  puVar9 = render_target->depth_buffer_tile;
  pgVar10 = pgVar12;
  pvVar15 = pvVar18;
  do {
    bin_index = local_58 * uVar20 + (uint)render_target->bin_base;
    uVar14 = bin_index * 0x10;
    if (((pvVar15->video_3d).display_3d_control & 0x4000) == 0) {
      render_polygon_set_buffer32(render_target,(pvVar15->video_3d).clear_color,0x1000);
      render_polygon_set_buffer32(puVar9,(pvVar15->video_3d).clear_depth_id,0x1000);
    }
    else {
      puVar23 = pvVar15->texture_slots[2];
      puVar27 = pvVar15->texture_slots[3];
      uVar20 = pgVar10->clear_image_offset & 0xff;
      local_84 = uVar14 + (pgVar10->clear_image_offset >> 8);
      if (puVar23 == (u8 *)0x0 || puVar27 == (u8 *)0x0) {
        if (puVar23 == (u8 *)0x0) {
          if (puVar27 == (u8 *)0x0) {
            auVar2 = SIMDExpandImmediate(0,6,0x80);
            puVar21 = render_target->color_buffer_tile + 4;
            pvVar25 = (video_3d_render_target_struct *)(render_target->depth_buffer_tile + 4);
            uVar20 = (pvVar15->video_3d).clear_depth_id & 0x3f000000 | 0xfffe00;
            pvVar28 = render_target;
            puVar24 = puVar9;
            if (puVar9 < puVar21 && render_target < pvVar25) goto LAB_08074a20;
            do {
              uVar33 = ((int)pvVar28 << 0x1d) >> 0x1f & 3;
              uVar31 = uVar33;
              if (uVar33 == 0) {
                iVar8 = 0x100;
                uVar13 = 0x40;
                iVar19 = iVar8;
                iVar36 = iVar8;
              }
              else {
                ((video_3d_render_target_struct *)(puVar21 + -4))->color_buffer_tile[0] = 0x80000000
                ;
                *(uint *)&pvVar25[-1].field_0x240b0 = uVar20;
                if (uVar33 == 1) {
                  iVar8 = 0xff;
                }
                else {
                  puVar21[-3] = 0x80000000;
                  *(uint *)&pvVar25[-1].field_0x240b4 = uVar20;
                  if (uVar33 == 3) {
                    iVar8 = 0xfd;
                    puVar21[-2] = 0x80000000;
                    *(uint *)&pvVar25[-1].field_0x240b8 = uVar20;
                  }
                  else {
                    iVar8 = 0xfe;
                    uVar31 = 2;
                  }
                }
                uVar13 = 0x3f;
                iVar19 = 0x100 - uVar33;
                iVar36 = 0xfc;
              }
              uVar34 = 0;
              puVar16 = puVar24 + uVar33;
              puVar7 = pvVar28->color_buffer_tile + uVar33;
              do {
                uVar34 = uVar34 + 1;
                *(longlong *)puVar7 = auVar2._0_8_;
                *(longlong *)(puVar7 + 2) = auVar2._8_8_;
                *(undefined8 *)puVar16 = 0;
                *(undefined8 *)(puVar16 + 2) = 0;
                puVar16 = puVar16 + 4;
                puVar7 = puVar7 + 4;
              } while (uVar34 < uVar13);
              iVar11 = uVar31 + iVar36;
              pvVar26 = pvVar25;
              if (iVar19 != iVar36) {
                pvVar28->color_buffer_tile[iVar11] = 0x80000000;
                puVar24[iVar11] = uVar20;
                if (iVar8 - iVar36 != 1) {
                  pvVar28->color_buffer_tile[iVar11 + 1] = 0x80000000;
                  puVar24[iVar11 + 1] = uVar20;
                  if (iVar8 - iVar36 != 2) {
                    pvVar28->color_buffer_tile[iVar11 + 2] = 0x80000000;
                    puVar24[iVar11 + 2] = uVar20;
                  }
                }
              }
              while( true ) {
                pvVar28 = (video_3d_render_target_struct *)(pvVar28->color_buffer_tile + 0x100);
                puVar21 = puVar21 + 0x100;
                pvVar25 = (video_3d_render_target_struct *)(pvVar26->color_buffer_tile + 0x100);
                if (pvVar28 ==
                    (video_3d_render_target_struct *)(render_target->color_buffer_tile + 0x1000))
                goto LAB_0807454c;
                puVar24 = pvVar26->color_buffer_tile + 0xfc;
                if (puVar21 <= puVar24 || pvVar25 <= pvVar28) break;
LAB_08074a20:
                puVar17 = (undefined4 *)&pvVar28[-1].field_0x240bc;
                puVar23 = &pvVar25[-1].disable_edge_marking;
                do {
                  puVar17 = puVar17 + 1;
                  *puVar17 = 0x80000000;
                  puVar23 = puVar23 + 4;
                  *(uint *)puVar23 = uVar20;
                  pvVar26 = pvVar25;
                } while (pvVar28->color_buffer_tile + 0xff != puVar17);
              }
            } while( true );
          }
          uVar31 = (pvVar15->video_3d).clear_depth_id;
          puVar24 = render_target->color_buffer_tile + 0x3fff;
          piVar30 = (int *)&render_target[-1].field_0x240bc;
          do {
            piVar6 = piVar30;
            uVar33 = uVar20;
            puVar21 = puVar24;
            do {
              uVar13 = uVar33 & 0xff;
              uVar33 = uVar33 + 1;
              uVar3 = *(ushort *)(puVar27 + (local_84 & 0xff) * 0x200 + uVar13 * 2);
              piVar6 = piVar6 + 1;
              *piVar6 = (uint)(uVar3 >> 0xf) << 0x1f;
              puVar21 = puVar21 + 1;
              *puVar21 = uVar31 & 0x3f000000 | (uVar3 & 0x7fff) << 9;
            } while (uVar20 + 0x100 != uVar33);
            piVar30 = piVar30 + 0x100;
            local_84 = local_84 + 1;
            puVar24 = puVar24 + 0x100;
          } while (render_target->color_buffer_tile + 0xfff != (u32 *)piVar30);
        }
        else {
          uVar31 = (pvVar15->video_3d).clear_depth_id;
          local_7c = render_target->color_buffer_tile + 0x3fff;
          puVar29 = (uint *)&render_target[-1].field_0x240bc;
          do {
            puVar32 = puVar29;
            puVar24 = local_7c;
            uVar33 = uVar20;
            do {
              uVar13 = uVar33 & 0xff;
              uVar33 = uVar33 + 1;
              uVar5 = texture_cache_build_pixel_embedded_alpha
                                ((uint)*(ushort *)(puVar23 + (local_84 & 0xff) * 0x200 + uVar13 * 2)
                                );
              puVar32 = puVar32 + 1;
              *puVar32 = uVar5 | 0x80000000;
              puVar24 = puVar24 + 1;
              *puVar24 = uVar31 & 0x3f000000 | 0xfffe00;
            } while (uVar33 != uVar20 + 0x100);
            puVar29 = puVar29 + 0x100;
            local_84 = local_84 + 1;
            local_7c = local_7c + 0x100;
          } while (render_target->color_buffer_tile + 0xfff != puVar29);
        }
      }
      else {
        uVar31 = (pvVar15->video_3d).clear_depth_id;
        local_78 = render_target->color_buffer_tile + 0x3fff;
        local_74 = (uint *)&render_target[-1].field_0x240bc;
        local_7c = (u32 *)local_84;
        do {
          puVar24 = local_78;
          puVar29 = local_74;
          uVar33 = uVar20;
          do {
            uVar13 = uVar33 & 0xff;
            uVar33 = uVar33 + 1;
            iVar19 = ((uint)local_7c & 0xff) * 0x200 + uVar13 * 2;
            uVar5 = texture_cache_build_pixel_embedded_alpha((uint)*(ushort *)(puVar23 + iVar19));
            uVar3 = *(ushort *)(puVar27 + iVar19);
            puVar29 = puVar29 + 1;
            *puVar29 = uVar5 | (uint)(uVar3 >> 0xf) << 0x1f;
            puVar24 = puVar24 + 1;
            *puVar24 = uVar31 & 0x3f000000 | (uVar3 & 0x7fff) << 9;
          } while (uVar20 + 0x100 != uVar33);
          local_7c = (u32 *)((int)local_7c + 1);
          local_74 = local_74 + 0x100;
          local_78 = local_78 + 0x100;
        } while (render_target->color_buffer_tile + 0xfff != local_74);
      }
    }
LAB_0807454c:
    uVar20 = 0;
    render_target->stencilling = 0xffffffff;
    render_target->fog_active = 0;
    puVar24 = &(pvVar18->video_3d).polygon_bins[bin_index].offset;
    if (*puVar24 != 0) {
      do {
        puVar1 = (pvVar18->video_3d).polygon_bins[bin_index].indexes + uVar20;
        uVar20 = uVar20 + 1;
        render_polygon_1x(render_target,pgVar12->polygon_list[uVar22].polygons + *puVar1,
                          pgVar12->vertex_list[uVar22].vertexes,uVar14,uVar14 + 0x10);
      } while (uVar20 < *puVar24);
    }
    if (pgVar12->alpha_polygon_list[uVar22].offset != 0) {
      puVar23 = render_target->polygon_alpha_id_tile;
      do {
        puVar27 = puVar23 + 0x100;
        render_polygon_set_buffer8(puVar23,0xff);
        puVar23 = puVar27;
      } while (puVar27 != render_target->polygon_alpha_id_tile + 0x1000);
      puVar24 = &(pvVar18->video_3d).alpha_polygon_bins[bin_index].offset;
      if (*puVar24 != 0) {
        uVar20 = 0;
        do {
          puVar1 = (pvVar18->video_3d).alpha_polygon_bins[bin_index].indexes + uVar20;
          uVar20 = uVar20 + 1;
          render_polygon_1x(render_target,pgVar12->alpha_polygon_list[uVar22].polygons + *puVar1,
                            pgVar12->vertex_list[uVar22].vertexes,uVar14,uVar14 + 0x10);
        } while (uVar20 < *puVar24);
      }
    }
    uVar14 = (pvVar18->video_3d).display_3d_control;
    puVar24 = puVar35 + bin_index * 0x1000;
    uVar20 = ((uVar14 << 0x1a) >> 0x1f) << 2;
    if (render_target->disable_edge_marking != '\0') {
      uVar20 = 0;
    }
    switch((uVar14 << 0x18) >> 0x1e | uVar20) {
    case 2:
      video_3d_resolve_bin_fog_full_1x(render_target,puVar24);
      break;
    case 3:
      video_3d_resolve_bin_fog_alpha_1x(render_target,puVar24);
      break;
    case 4:
    case 5:
      video_3d_resolve_bin_edge_mark_1x(render_target,puVar24,bin_index);
      break;
    case 6:
      video_3d_resolve_bin_edge_mark_fog_full_1x(render_target,puVar24,bin_index);
      break;
    case 7:
      video_3d_resolve_bin_edge_mark_fog_alpha_1x(render_target,puVar24,bin_index);
      break;
    default:
      video_3d_resolve_bin_1x(puVar24,render_target);
    }
    local_58 = local_58 + 1;
    if (iVar4 == local_58) {
      return;
    }
    uVar20 = (uint)render_target->bin_interleave;
    pvVar15 = render_target->video;
    pgVar10 = render_target->geometry;
  } while( true );
}


