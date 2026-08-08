/*
 * Ghidra decompilation
 *
 * Function : video_3d_bin_polygons_y_sort_1x
 * Address  : 08071f04
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_bin_polygons_y_sort_1x
               (geometry_struct *geometry,video_3d_polygon_bin_struct *polygon_bins,
               geometry_polygon_list_struct *polygon_list,geometry_vertex_struct *base_vertexes,
               u32 polygon_alpha)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  u32 uVar6;
  ushort uVar7;
  u32 *puVar8;
  uint uVar9;
  ushort *puVar10;
  geometry_vertex_struct *vertexes_00;
  u32 polygon_index;
  geometry_vertex_struct *pgVar11;
  u32 max_y_1;
  u32 bin_bitmap_max;
  u32 bin_bitmap;
  geometry_vertex_struct *vertexes;
  geometry_polygon_struct *polygon;
  u16 *polygon_sort_scanline;
  s32 max_y;
  geometry_struct *geometry_00;
  s32 min_y;
  uint uVar12;
  u32 vertex_count;
  uint uVar13;
  short *psVar14;
  short *psVar15;
  s32 current_y;
  u32 polygon_render_flags;
  uint uVar16;
  u32 *puVar17;
  u32 new_texture_image_param;
  uint uVar18;
  u32 new_texture_palette_offset;
  uint uVar19;
  u32 w_or;
  u32 w_and;
  uint uVar20;
  u16 *polygon_sort_scanline_1;
  u32 min_y_index;
  uint local_7c;
  uint local_78;
  u32 max_y_2;
  uint local_58;
  geometry_vertex_struct *local_54;
  texture_cache_element_struct *local_50;
  
  puVar17 = &polygon_bins->offset;
  puVar8 = &polygon_list->offset;
  uVar19 = *puVar8;
  *puVar17 = 0;
  polygon_bins[1].offset = 0;
  polygon_bins[2].offset = 0;
  polygon_bins[3].offset = 0;
  polygon_bins[4].offset = 0;
  polygon_bins[5].offset = 0;
  polygon_bins[6].offset = 0;
  polygon_bins[7].offset = 0;
  polygon_bins[8].offset = 0;
  polygon_bins[9].offset = 0;
  polygon_bins[10].offset = 0;
  polygon_bins[0xb].offset = 0;
  if (uVar19 != 0) {
    min_y_index = 0;
    local_58 = 0xffffffff;
    local_54 = (geometry_vertex_struct *)0xffffffff;
    local_50 = (texture_cache_element_struct *)0x0;
    geometry_00 = (geometry_struct *)polygon_list;
    do {
      local_78 = (geometry_00->primitive_queue).input_x[2];
      uVar1 = *(ushort *)((int)(geometry_00->primitive_queue).input_x + 0x12);
      uVar13 = local_78 & 0xf;
      polygon = (geometry_polygon_struct *)(base_vertexes + uVar1);
      uVar5 = *(ushort *)&polygon->flags;
      uVar2 = *(ushort *)((int)&polygon->flags + 2);
      if (uVar13 - 2 < 7) {
        uVar20 = (uint)*(ushort *)((int)&polygon[1].texture_image_param + 2);
        uVar19 = (uint)*(ushort *)((int)&polygon->attribute + 2);
        uVar9 = base_vertexes[uVar1].w;
        uVar1 = *(ushort *)((int)&polygon[1].attribute + 2);
        uVar16._0_2_ = polygon->texture_palette_offset;
        uVar16._2_2_ = polygon->vertex_base;
        if (0xbf < uVar20) {
          uVar20 = 0xc0;
        }
        local_7c = (uint)(uVar20 < uVar19);
        *(short *)((int)&polygon[1].texture_image_param + 2) = (short)uVar20;
        uVar12 = uVar19;
        if (uVar20 < uVar19) {
          uVar12 = uVar20;
        }
        if (uVar19 < uVar20) {
          uVar19 = uVar20;
        }
        uVar20 = uVar9 & uVar16;
        uVar9 = uVar9 | uVar16;
        uVar7 = uVar5 & *(ushort *)&polygon[1].attribute;
        uVar5 = uVar5 | *(ushort *)&polygon[1].attribute;
        uVar4 = uVar2 & uVar1;
        vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
        uVar2 = uVar2 | uVar1;
        pgVar11 = (geometry_vertex_struct *)(uint)uVar2;
        if (uVar13 != 2) {
          uVar16 = (uint)polygon[1].vertex_base;
          if (uVar16 < 0xc1) {
            if (uVar16 < uVar12) {
              local_7c = 2;
              uVar12 = uVar16;
            }
          }
          else {
            polygon[1].vertex_base = 0xc0;
            uVar16 = 0xc0;
          }
          if (uVar19 < uVar16) {
            uVar19 = uVar16;
          }
          uVar1 = *(ushort *)((int)&polygon[2].texture_image_param + 2);
          uVar7 = uVar7 & *(ushort *)&polygon[2].texture_image_param;
          uVar5 = *(ushort *)&polygon[2].texture_image_param | uVar5;
          uVar20 = uVar20 & (uint)polygon[1].texture_cache_element;
          uVar9 = uVar9 | (uint)polygon[1].texture_cache_element;
          uVar4 = uVar4 & uVar1;
          vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
          uVar1 = uVar1 | uVar2;
          pgVar11 = (geometry_vertex_struct *)(uint)uVar1;
          if (uVar13 != 3) {
            uVar16 = (uint)*(ushort *)((int)&polygon[2].texture_cache_element + 2);
            if (uVar16 < 0xc1) {
              if (uVar16 < uVar12) {
                local_7c = 3;
                uVar12 = uVar16;
              }
            }
            else {
              *(undefined2 *)((int)&polygon[2].texture_cache_element + 2) = 0xc0;
              uVar16 = 0xc0;
            }
            if (uVar19 < uVar16) {
              uVar19 = uVar16;
            }
            uVar4 = uVar4 & polygon[2].vertex_base;
            uVar1 = uVar1 | polygon[2].vertex_base;
            uVar20 = uVar20 & polygon[2].flags;
            uVar9 = uVar9 | polygon[2].flags;
            uVar7 = uVar7 & polygon[2].texture_palette_offset;
            uVar5 = uVar5 | polygon[2].texture_palette_offset;
            if (uVar13 != 4) {
              uVar16 = (uint)*(ushort *)((int)&polygon[3].flags + 2);
              if (uVar16 < 0xc1) {
                if (uVar16 < uVar12) {
                  local_7c = 4;
                  uVar12 = uVar16;
                }
              }
              else {
                *(undefined2 *)((int)&polygon[3].flags + 2) = 0xc0;
                uVar16 = 0xc0;
              }
              if (uVar19 < uVar16) {
                uVar19 = uVar16;
              }
              uVar2 = *(ushort *)((int)&polygon[3].texture_cache_element + 2);
              uVar7 = uVar7 & *(ushort *)&polygon[3].texture_cache_element;
              uVar5 = uVar5 | *(ushort *)&polygon[3].texture_cache_element;
              uVar20 = uVar20 & polygon[3].attribute;
              uVar9 = uVar9 | polygon[3].attribute;
              uVar4 = uVar4 & uVar2;
              uVar1 = uVar1 | uVar2;
              if (uVar13 != 5) {
                uVar16 = (uint)*(ushort *)((int)&polygon[4].attribute + 2);
                if (uVar16 < 0xc1) {
                  if (uVar16 < uVar12) {
                    local_7c = 5;
                    uVar12 = uVar16;
                  }
                }
                else {
                  *(undefined2 *)((int)&polygon[4].attribute + 2) = 0xc0;
                  uVar16 = 0xc0;
                }
                if (uVar19 < uVar16) {
                  uVar19 = uVar16;
                }
                uVar2 = *(ushort *)((int)&polygon[4].flags + 2);
                uVar7 = uVar7 & *(ushort *)&polygon[4].flags;
                uVar5 = uVar5 | *(ushort *)&polygon[4].flags;
                uVar20 = uVar20 & polygon[4].texture_image_param;
                uVar9 = uVar9 | polygon[4].texture_image_param;
                uVar4 = uVar4 & uVar2;
                vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
                uVar1 = uVar1 | uVar2;
                pgVar11 = (geometry_vertex_struct *)(uint)uVar1;
                if (uVar13 != 6) {
                  uVar16 = (uint)*(ushort *)((int)&polygon[5].texture_image_param + 2);
                  if (uVar16 < 0xc1) {
                    if (uVar16 < uVar12) {
                      local_7c = 6;
                      uVar12 = uVar16;
                    }
                  }
                  else {
                    uVar16 = 0xc0;
                    *(undefined2 *)((int)&polygon[5].texture_image_param + 2) = 0xc0;
                  }
                  uVar2 = *(ushort *)((int)&polygon[5].attribute + 2);
                  if (uVar19 < uVar16) {
                    uVar19 = uVar16;
                  }
                  uVar18._0_2_ = polygon[4].texture_palette_offset;
                  uVar18._2_2_ = polygon[4].vertex_base;
                  uVar4 = uVar4 & uVar2;
                  vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
                  uVar1 = uVar1 | uVar2;
                  pgVar11 = (geometry_vertex_struct *)(uint)uVar1;
                  uVar20 = uVar20 & uVar18;
                  uVar9 = uVar9 | uVar18;
                  uVar7 = uVar7 & *(ushort *)&polygon[5].attribute;
                  uVar5 = *(ushort *)&polygon[5].attribute | uVar5;
                  if (uVar13 == 8) {
                    uVar16 = (uint)polygon[5].vertex_base;
                    if (uVar16 < 0xc1) {
                      if (uVar16 < uVar12) {
                        local_7c = 7;
                        uVar12 = uVar16;
                      }
                    }
                    else {
                      polygon[5].vertex_base = 0xc0;
                      uVar16 = 0xc0;
                    }
                    if (uVar19 < uVar16) {
                      uVar19 = uVar16;
                    }
                    uVar2 = *(ushort *)((int)&polygon[6].texture_image_param + 2);
                    uVar7 = uVar7 & *(ushort *)&polygon[6].texture_image_param;
                    uVar5 = uVar5 | *(ushort *)&polygon[6].texture_image_param;
                    uVar20 = uVar20 & (uint)polygon[5].texture_cache_element;
                    uVar9 = uVar9 | (uint)polygon[5].texture_cache_element;
                    vertexes_00 = (geometry_vertex_struct *)(uint)(uVar4 & uVar2);
                    pgVar11 = (geometry_vertex_struct *)(uint)(uVar1 | uVar2);
                  }
                }
                goto LAB_08072204;
              }
            }
            pgVar11 = (geometry_vertex_struct *)(uint)uVar1;
            vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
          }
        }
LAB_08072204:
        if (uVar12 == uVar19) {
          uVar19 = *puVar8;
        }
        else {
          polygon_render_flags = polygon_alpha;
          if (vertexes_00 == pgVar11) {
            polygon_render_flags = polygon_alpha | 4;
          }
          if ((geometry->last_render_settings & 2) == 0) {
            if (uVar7 == uVar5) {
              polygon_render_flags = polygon_render_flags | 0x10;
            }
            if (uVar20 == uVar9) {
              polygon_render_flags = polygon_render_flags | 0x20;
            }
          }
          else {
            if (uVar20 == uVar9) {
              polygon_render_flags = polygon_render_flags | 0x30;
            }
            polygon_render_flags = polygon_render_flags | 8;
          }
          uVar9 = (geometry_00->primitive_queue).input_x[0];
          if (((uVar9 & 0x1c000000) != 0) &&
             ((uint)((geometry_00->primitive_queue).input_x[1] << 0x1a) >> 0x1e != 3)) {
            pgVar11 = (geometry_vertex_struct *)
                      (uint)*(ushort *)((geometry_00->primitive_queue).input_x + 4);
            polygon_render_flags = polygon_render_flags | 2;
            vertexes_00 = local_54;
            if (pgVar11 != local_54 || local_58 != uVar9) {
              vertexes_00 = pgVar11;
              local_50 = texture_cache_lookup(geometry->texture_cache,uVar9,(u32)pgVar11);
              local_78 = (geometry_00->primitive_queue).input_x[2];
              local_58 = uVar9;
              local_54 = pgVar11;
            }
            (geometry_00->primitive_queue).input_x[3] = (s32)local_50;
          }
          uVar19 = local_78 | uVar19 << 0x17 | polygon_render_flags << 8;
          (geometry_00->primitive_queue).input_x[2] = uVar19;
          if (uVar13 == 4) {
            if ((local_78 & 0x40) == 0) {
              local_7c = local_7c << 0x10;
              uVar19 = uVar19 | 0x200000;
            }
            else {
              if (local_7c == 2) {
                if (*(ushort *)((int)&polygon[2].texture_cache_element + 2) == uVar12) {
                  local_7c = 0x30000;
                }
                else {
                  local_7c = 0x20000;
                }
              }
              else {
                local_7c = local_7c << 0x10;
              }
              uVar19 = uVar19 | 0x480000;
            }
            (geometry_00->primitive_queue).input_x[2] = uVar19 | local_7c;
            render_sprite_check(geometry_00,polygon,vertexes_00);
          }
          else {
            (geometry_00->primitive_queue).input_x[2] = local_7c << 0x10 | uVar13 << 0x13 | uVar19;
          }
          uVar19 = *puVar8;
          sVar3 = video_3d_bin_polygons_y_sort_1x::polygon_sort_counts[uVar12];
          video_3d_bin_polygons_y_sort_1x::polygon_sort_counts[uVar12] = sVar3 + 1;
          video_3d_bin_polygons_y_sort_1x::polygon_sort_list[uVar12][sVar3] = (u16)min_y_index;
        }
      }
      geometry_00 = (geometry_struct *)((geometry_00->primitive_queue).input_x + 5);
      min_y_index = min_y_index + 1;
    } while (min_y_index < uVar19);
  }
  polygon_sort_scanline = video_3d_bin_polygons_y_sort_1x::polygon_sort_list[0xc0];
  psVar14 = video_3d_bin_polygons_y_sort_1x::polygon_sort_counts + 0xc0;
  do {
    if (0 < *psVar14) {
      puVar10 = polygon_sort_scanline + *psVar14;
      do {
        puVar10 = puVar10 + -1;
        uVar1 = *puVar10;
        uVar19 = polygon_list->polygons[uVar1].flags >> 0x17;
        if (0xbf < uVar19) {
          uVar19 = 0xc0;
        }
        sVar3 = video_3d_bin_polygons_y_sort_1x::polygon_sort_counts[uVar19];
        video_3d_bin_polygons_y_sort_1x::polygon_sort_counts[uVar19] = sVar3 + 1;
        video_3d_bin_polygons_y_sort_1x::polygon_sort_list[uVar19][sVar3] = uVar1;
      } while (polygon_sort_scanline != puVar10);
    }
    polygon_sort_scanline = polygon_sort_scanline + -0x800;
    psVar15 = psVar14 + -1;
    *psVar14 = 0;
    psVar14 = psVar15;
  } while (psVar15 != (short *)((int)&update_frame::lexical_block_1::last_instructions_arm9 + 6));
  min_y_index = 0x81633c8;
  local_54 = (geometry_vertex_struct *)(video_3d_bin_polygons_y_sort_1x::polygon_sort_counts + 1);
  local_58 = 0;
  do {
    if (0 < *(short *)local_54) {
      puVar10 = (ushort *)(min_y_index + *(short *)local_54 * 2);
      do {
        puVar10 = puVar10 + -1;
        uVar1 = *puVar10;
        uVar19 = 0xfffU >> (0xb - (local_58 >> 4) & 0xff) &
                 0xfff << (base_vertexes
                           [(*(ushort *)((int)&polygon_list->polygons[uVar1].flags + 2) & 7) +
                            (uint)polygon_list->polygons[uVar1].vertex_base].y >> 4 & 0xff);
        if ((uVar19 & 1) != 0) {
          uVar6 = *puVar17;
          polygon_bins->indexes[uVar6] = uVar1;
          *puVar17 = uVar6 + 1;
        }
        if ((uVar19 & 2) != 0) {
          uVar6 = polygon_bins[1].offset;
          *(ushort *)((int)puVar17 + uVar6 * 2 + 4) = uVar1;
          polygon_bins[1].offset = uVar6 + 1;
        }
        if ((uVar19 & 4) != 0) {
          uVar6 = polygon_bins[2].offset;
          polygon_bins[2].indexes[uVar6] = uVar1;
          polygon_bins[2].offset = uVar6 + 1;
        }
        if ((uVar19 & 8) != 0) {
          uVar6 = polygon_bins[3].offset;
          polygon_bins[3].indexes[uVar6] = uVar1;
          polygon_bins[3].offset = uVar6 + 1;
        }
        if ((uVar19 & 0x10) != 0) {
          uVar6 = polygon_bins[4].offset;
          polygon_bins[4].indexes[uVar6] = uVar1;
          polygon_bins[4].offset = uVar6 + 1;
        }
        if ((uVar19 & 0x20) != 0) {
          uVar6 = polygon_bins[5].offset;
          polygon_bins[5].indexes[uVar6] = uVar1;
          polygon_bins[5].offset = uVar6 + 1;
        }
        if ((uVar19 & 0x40) != 0) {
          uVar6 = polygon_bins[6].offset;
          polygon_bins[6].indexes[uVar6] = uVar1;
          polygon_bins[6].offset = uVar6 + 1;
        }
        if ((uVar19 & 0x80) != 0) {
          uVar6 = polygon_bins[7].offset;
          polygon_bins[7].indexes[uVar6] = uVar1;
          polygon_bins[7].offset = uVar6 + 1;
        }
        if ((uVar19 & 0x100) != 0) {
          uVar6 = polygon_bins[8].offset;
          polygon_bins[8].indexes[uVar6] = uVar1;
          polygon_bins[8].offset = uVar6 + 1;
        }
        if ((uVar19 & 0x200) != 0) {
          uVar6 = polygon_bins[9].offset;
          polygon_bins[9].indexes[uVar6] = uVar1;
          polygon_bins[9].offset = uVar6 + 1;
        }
        if ((uVar19 & 0x400) != 0) {
          uVar6 = polygon_bins[10].offset;
          polygon_bins[10].indexes[uVar6] = uVar1;
          polygon_bins[10].offset = uVar6 + 1;
        }
        if ((uVar19 & 0x800) != 0) {
          uVar6 = polygon_bins[0xb].offset;
          polygon_bins[0xb].indexes[uVar6] = uVar1;
          polygon_bins[0xb].offset = uVar6 + 1;
        }
      } while (puVar10 != (ushort *)min_y_index);
    }
    psVar14 = (short *)((int)local_54 + 2);
    *(short *)local_54 = 0;
    min_y_index = min_y_index + 0x1000;
    local_58 = local_58 + 1;
    local_54 = (geometry_vertex_struct *)psVar14;
  } while (psVar14 != (short *)0x81623c2);
  video_3d_bin_polygons_y_sort_1x::polygon_sort_counts[0] = 0;
  return;
}


