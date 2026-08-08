/*
 * Ghidra decompilation
 *
 * Function : video_3d_bin_polygons_y_sort_4x
 * Address  : 0807571c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_bin_polygons_y_sort_4x
               (geometry_struct *geometry,video_3d_polygon_bin_struct *polygon_bins,
               geometry_polygon_list_struct *polygon_list,geometry_vertex_struct *base_vertexes)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  u32 *puVar7;
  uint uVar8;
  ushort *puVar9;
  geometry_vertex_struct *vertexes_00;
  u32 polygon_index;
  geometry_vertex_struct *pgVar10;
  u32 max_y_1;
  u32 bin_bitmap_max;
  u32 bin_bitmap;
  short *psVar11;
  u32 uVar12;
  geometry_vertex_struct *vertexes;
  geometry_polygon_struct *polygon;
  u16 *polygon_sort_scanline;
  s32 max_y;
  uint uVar13;
  s32 min_y;
  uint uVar14;
  geometry_struct *geometry_00;
  u16 *puVar15;
  u16 *puVar16;
  u32 vertex_count;
  uint uVar17;
  s32 current_y;
  u32 polygon_render_flags;
  uint uVar18;
  u32 *puVar19;
  u32 new_texture_image_param;
  uint uVar20;
  u32 new_texture_palette_offset;
  u32 w_or;
  u32 w_and;
  uint uVar21;
  u16 *polygon_sort_scanline_1;
  u32 min_y_index;
  uint local_80;
  uint local_7c;
  u32 max_y_2;
  uint local_58;
  geometry_vertex_struct *local_54;
  texture_cache_element_struct *local_50;
  
  puVar19 = &polygon_bins->offset;
  puVar7 = &polygon_list->offset;
  uVar12 = *puVar7;
  *puVar19 = 0;
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
  if (uVar12 != 0) {
    min_y_index = 0;
    local_58 = 0xffffffff;
    local_54 = (geometry_vertex_struct *)0xffffffff;
    local_50 = (texture_cache_element_struct *)0x0;
    geometry_00 = (geometry_struct *)polygon_list;
    do {
      local_7c = (geometry_00->primitive_queue).input_x[2];
      uVar1 = *(ushort *)((int)(geometry_00->primitive_queue).input_x + 0x12);
      uVar17 = local_7c & 0xf;
      polygon = (geometry_polygon_struct *)(base_vertexes + uVar1);
      uVar5 = *(ushort *)&polygon->flags;
      uVar2 = *(ushort *)((int)&polygon->flags + 2);
      if (uVar17 - 2 < 7) {
        uVar21 = (uint)*(ushort *)((int)&polygon[1].texture_image_param + 2);
        uVar13 = (uint)*(ushort *)((int)&polygon->attribute + 2);
        uVar8 = base_vertexes[uVar1].w;
        uVar1 = *(ushort *)((int)&polygon[1].attribute + 2);
        uVar18._0_2_ = polygon->texture_palette_offset;
        uVar18._2_2_ = polygon->vertex_base;
        if (0x17f < uVar21) {
          uVar21 = 0x180;
        }
        local_80 = (uint)(uVar21 < uVar13);
        *(short *)((int)&polygon[1].texture_image_param + 2) = (short)uVar21;
        uVar14 = uVar13;
        if (uVar21 < uVar13) {
          uVar14 = uVar21;
        }
        if (uVar13 < uVar21) {
          uVar13 = uVar21;
        }
        uVar21 = uVar8 & uVar18;
        uVar8 = uVar8 | uVar18;
        uVar6 = uVar5 & *(ushort *)&polygon[1].attribute;
        uVar5 = uVar5 | *(ushort *)&polygon[1].attribute;
        uVar4 = uVar2 & uVar1;
        vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
        uVar2 = uVar2 | uVar1;
        pgVar10 = (geometry_vertex_struct *)(uint)uVar2;
        if (uVar17 != 2) {
          uVar18 = (uint)polygon[1].vertex_base;
          if (uVar18 < 0x181) {
            if (uVar18 < uVar14) {
              local_80 = 2;
              uVar14 = uVar18;
            }
          }
          else {
            polygon[1].vertex_base = 0x180;
            uVar18 = 0x180;
          }
          if (uVar13 < uVar18) {
            uVar13 = uVar18;
          }
          uVar1 = *(ushort *)((int)&polygon[2].texture_image_param + 2);
          uVar6 = uVar6 & *(ushort *)&polygon[2].texture_image_param;
          uVar5 = *(ushort *)&polygon[2].texture_image_param | uVar5;
          uVar21 = uVar21 & (uint)polygon[1].texture_cache_element;
          uVar8 = uVar8 | (uint)polygon[1].texture_cache_element;
          uVar4 = uVar4 & uVar1;
          vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
          uVar1 = uVar1 | uVar2;
          pgVar10 = (geometry_vertex_struct *)(uint)uVar1;
          if (uVar17 != 3) {
            uVar18 = (uint)*(ushort *)((int)&polygon[2].texture_cache_element + 2);
            if (uVar18 < 0x181) {
              if (uVar18 < uVar14) {
                local_80 = 3;
                uVar14 = uVar18;
              }
            }
            else {
              *(undefined2 *)((int)&polygon[2].texture_cache_element + 2) = 0x180;
              uVar18 = 0x180;
            }
            if (uVar13 < uVar18) {
              uVar13 = uVar18;
            }
            uVar4 = uVar4 & polygon[2].vertex_base;
            uVar1 = uVar1 | polygon[2].vertex_base;
            uVar21 = uVar21 & polygon[2].flags;
            uVar8 = uVar8 | polygon[2].flags;
            uVar6 = uVar6 & polygon[2].texture_palette_offset;
            uVar5 = uVar5 | polygon[2].texture_palette_offset;
            if (uVar17 != 4) {
              uVar18 = (uint)*(ushort *)((int)&polygon[3].flags + 2);
              if (uVar18 < 0x181) {
                if (uVar18 < uVar14) {
                  local_80 = 4;
                  uVar14 = uVar18;
                }
              }
              else {
                *(undefined2 *)((int)&polygon[3].flags + 2) = 0x180;
                uVar18 = 0x180;
              }
              if (uVar13 < uVar18) {
                uVar13 = uVar18;
              }
              uVar2 = *(ushort *)((int)&polygon[3].texture_cache_element + 2);
              uVar6 = uVar6 & *(ushort *)&polygon[3].texture_cache_element;
              uVar5 = uVar5 | *(ushort *)&polygon[3].texture_cache_element;
              uVar21 = uVar21 & polygon[3].attribute;
              uVar8 = uVar8 | polygon[3].attribute;
              uVar4 = uVar4 & uVar2;
              uVar1 = uVar1 | uVar2;
              if (uVar17 != 5) {
                uVar18 = (uint)*(ushort *)((int)&polygon[4].attribute + 2);
                if (uVar18 < 0x181) {
                  if (uVar18 < uVar14) {
                    local_80 = 5;
                    uVar14 = uVar18;
                  }
                }
                else {
                  *(undefined2 *)((int)&polygon[4].attribute + 2) = 0x180;
                  uVar18 = 0x180;
                }
                if (uVar13 < uVar18) {
                  uVar13 = uVar18;
                }
                uVar2 = *(ushort *)((int)&polygon[4].flags + 2);
                uVar6 = uVar6 & *(ushort *)&polygon[4].flags;
                uVar5 = uVar5 | *(ushort *)&polygon[4].flags;
                uVar21 = uVar21 & polygon[4].texture_image_param;
                uVar8 = uVar8 | polygon[4].texture_image_param;
                uVar4 = uVar4 & uVar2;
                vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
                uVar1 = uVar1 | uVar2;
                pgVar10 = (geometry_vertex_struct *)(uint)uVar1;
                if (uVar17 != 6) {
                  uVar18 = (uint)*(ushort *)((int)&polygon[5].texture_image_param + 2);
                  if (uVar18 < 0x181) {
                    if (uVar18 < uVar14) {
                      local_80 = 6;
                      uVar14 = uVar18;
                    }
                  }
                  else {
                    uVar18 = 0x180;
                    *(undefined2 *)((int)&polygon[5].texture_image_param + 2) = 0x180;
                  }
                  uVar2 = *(ushort *)((int)&polygon[5].attribute + 2);
                  if (uVar13 < uVar18) {
                    uVar13 = uVar18;
                  }
                  uVar20._0_2_ = polygon[4].texture_palette_offset;
                  uVar20._2_2_ = polygon[4].vertex_base;
                  uVar4 = uVar4 & uVar2;
                  vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
                  uVar1 = uVar1 | uVar2;
                  pgVar10 = (geometry_vertex_struct *)(uint)uVar1;
                  uVar21 = uVar21 & uVar20;
                  uVar8 = uVar8 | uVar20;
                  uVar6 = uVar6 & *(ushort *)&polygon[5].attribute;
                  uVar5 = *(ushort *)&polygon[5].attribute | uVar5;
                  if (uVar17 == 8) {
                    uVar18 = (uint)polygon[5].vertex_base;
                    if (uVar18 < 0x181) {
                      if (uVar18 < uVar14) {
                        local_80 = 7;
                        uVar14 = uVar18;
                      }
                    }
                    else {
                      polygon[5].vertex_base = 0x180;
                      uVar18 = 0x180;
                    }
                    if (uVar13 < uVar18) {
                      uVar13 = uVar18;
                    }
                    uVar2 = *(ushort *)((int)&polygon[6].texture_image_param + 2);
                    uVar6 = uVar6 & *(ushort *)&polygon[6].texture_image_param;
                    uVar5 = uVar5 | *(ushort *)&polygon[6].texture_image_param;
                    uVar21 = uVar21 & (uint)polygon[5].texture_cache_element;
                    uVar8 = uVar8 | (uint)polygon[5].texture_cache_element;
                    vertexes_00 = (geometry_vertex_struct *)(uint)(uVar4 & uVar2);
                    pgVar10 = (geometry_vertex_struct *)(uint)(uVar1 | uVar2);
                  }
                }
                goto LAB_08075a18;
              }
            }
            pgVar10 = (geometry_vertex_struct *)(uint)uVar1;
            vertexes_00 = (geometry_vertex_struct *)(uint)uVar4;
          }
        }
LAB_08075a18:
        if (uVar14 == uVar13) {
          uVar12 = *puVar7;
        }
        else {
          polygon_render_flags = (u32)polygon_sort_scanline_1;
          if (vertexes_00 == pgVar10) {
            polygon_render_flags = (uint)polygon_sort_scanline_1 | 4;
          }
          if ((geometry->last_render_settings & 2) == 0) {
            if (uVar6 == uVar5) {
              polygon_render_flags = polygon_render_flags | 0x10;
            }
            if (uVar21 == uVar8) {
              polygon_render_flags = polygon_render_flags | 0x20;
            }
          }
          else {
            if (uVar21 == uVar8) {
              polygon_render_flags = polygon_render_flags | 0x30;
            }
            polygon_render_flags = polygon_render_flags | 8;
          }
          uVar8 = (geometry_00->primitive_queue).input_x[0];
          if (((uVar8 & 0x1c000000) != 0) &&
             ((uint)((geometry_00->primitive_queue).input_x[1] << 0x1a) >> 0x1e != 3)) {
            pgVar10 = (geometry_vertex_struct *)
                      (uint)*(ushort *)((geometry_00->primitive_queue).input_x + 4);
            polygon_render_flags = polygon_render_flags | 2;
            vertexes_00 = local_54;
            if (pgVar10 != local_54 || local_58 != uVar8) {
              vertexes_00 = pgVar10;
              local_50 = texture_cache_lookup(geometry->texture_cache,uVar8,(u32)pgVar10);
              local_7c = (geometry_00->primitive_queue).input_x[2];
              local_58 = uVar8;
              local_54 = pgVar10;
            }
            (geometry_00->primitive_queue).input_x[3] = (s32)local_50;
          }
          uVar13 = local_7c | uVar13 << 0x17 | polygon_render_flags << 8;
          (geometry_00->primitive_queue).input_x[2] = uVar13;
          if (uVar17 == 4) {
            if ((local_7c & 0x40) == 0) {
              local_80 = local_80 << 0x10;
              uVar13 = uVar13 | 0x200000;
            }
            else {
              if (local_80 == 2) {
                if (*(ushort *)((int)&polygon[2].texture_cache_element + 2) == uVar14) {
                  local_80 = 0x30000;
                }
                else {
                  local_80 = 0x20000;
                }
              }
              else {
                local_80 = local_80 << 0x10;
              }
              uVar13 = uVar13 | 0x480000;
            }
            (geometry_00->primitive_queue).input_x[2] = uVar13 | local_80;
            render_sprite_check(geometry_00,polygon,vertexes_00);
          }
          else {
            (geometry_00->primitive_queue).input_x[2] = local_80 << 0x10 | uVar17 << 0x13 | uVar13;
          }
          uVar12 = *puVar7;
          sVar3 = video_3d_bin_polygons_y_sort_4x::polygon_sort_counts[uVar14];
          video_3d_bin_polygons_y_sort_4x::polygon_sort_counts[uVar14] = sVar3 + 1;
          video_3d_bin_polygons_y_sort_4x::polygon_sort_list[uVar14][sVar3] = (u16)min_y_index;
        }
      }
      geometry_00 = (geometry_struct *)((geometry_00->primitive_queue).input_x + 5);
      min_y_index = min_y_index + 1;
    } while (min_y_index < uVar12);
  }
  polygon_sort_scanline = video_3d_bin_polygons_y_sort_4x::polygon_sort_list[0x180];
  puVar15 = (u16 *)(video_3d_bin_polygons_y_sort_4x::polygon_sort_counts + 0x180);
  do {
    if (0 < (short)*puVar15) {
      puVar9 = polygon_sort_scanline + (short)*puVar15;
      do {
        puVar9 = puVar9 + -1;
        uVar1 = *puVar9;
        uVar17 = polygon_list->polygons[uVar1].flags >> 0x17;
        if (0x17f < uVar17) {
          uVar17 = 0x180;
        }
        sVar3 = video_3d_bin_polygons_y_sort_4x::polygon_sort_counts[uVar17];
        video_3d_bin_polygons_y_sort_4x::polygon_sort_counts[uVar17] = sVar3 + 1;
        video_3d_bin_polygons_y_sort_4x::polygon_sort_list[uVar17][sVar3] = uVar1;
      } while (polygon_sort_scanline != puVar9);
    }
    polygon_sort_scanline = polygon_sort_scanline + -0x800;
    puVar16 = puVar15 + -1;
    *puVar15 = 0;
    puVar15 = puVar16;
  } while (puVar16 != video_3d_bin_polygons_y_sort_1x::polygon_sort_list[0xc0] + 0x7ff);
  local_58 = 0;
  min_y_index = 0x82246d0;
  local_54 = (geometry_vertex_struct *)(video_3d_bin_polygons_y_sort_4x::polygon_sort_counts + 1);
  do {
    if (0 < *(short *)local_54) {
      puVar9 = (ushort *)(min_y_index + *(short *)local_54 * 2);
      do {
        puVar9 = puVar9 + -1;
        uVar1 = *puVar9;
        uVar17 = 0xfffU >> (0xb - (local_58 >> 5) & 0xff) &
                 0xfff << (base_vertexes
                           [(*(ushort *)((int)&polygon_list->polygons[uVar1].flags + 2) & 7) +
                            (uint)polygon_list->polygons[uVar1].vertex_base].y >> 5 & 0xff);
        if ((uVar17 & 1) != 0) {
          uVar12 = *puVar19;
          polygon_bins->indexes[uVar12] = uVar1;
          *puVar19 = uVar12 + 1;
        }
        if ((uVar17 & 2) != 0) {
          uVar12 = polygon_bins[1].offset;
          *(ushort *)((int)puVar19 + uVar12 * 2 + 4) = uVar1;
          polygon_bins[1].offset = uVar12 + 1;
        }
        if ((uVar17 & 4) != 0) {
          uVar12 = polygon_bins[2].offset;
          polygon_bins[2].indexes[uVar12] = uVar1;
          polygon_bins[2].offset = uVar12 + 1;
        }
        if ((uVar17 & 8) != 0) {
          uVar12 = polygon_bins[3].offset;
          polygon_bins[3].indexes[uVar12] = uVar1;
          polygon_bins[3].offset = uVar12 + 1;
        }
        if ((uVar17 & 0x10) != 0) {
          uVar12 = polygon_bins[4].offset;
          polygon_bins[4].indexes[uVar12] = uVar1;
          polygon_bins[4].offset = uVar12 + 1;
        }
        if ((uVar17 & 0x20) != 0) {
          uVar12 = polygon_bins[5].offset;
          polygon_bins[5].indexes[uVar12] = uVar1;
          polygon_bins[5].offset = uVar12 + 1;
        }
        if ((uVar17 & 0x40) != 0) {
          uVar12 = polygon_bins[6].offset;
          polygon_bins[6].indexes[uVar12] = uVar1;
          polygon_bins[6].offset = uVar12 + 1;
        }
        if ((uVar17 & 0x80) != 0) {
          uVar12 = polygon_bins[7].offset;
          polygon_bins[7].indexes[uVar12] = uVar1;
          polygon_bins[7].offset = uVar12 + 1;
        }
        if ((uVar17 & 0x100) != 0) {
          uVar12 = polygon_bins[8].offset;
          polygon_bins[8].indexes[uVar12] = uVar1;
          polygon_bins[8].offset = uVar12 + 1;
        }
        if ((uVar17 & 0x200) != 0) {
          uVar12 = polygon_bins[9].offset;
          polygon_bins[9].indexes[uVar12] = uVar1;
          polygon_bins[9].offset = uVar12 + 1;
        }
        if ((uVar17 & 0x400) != 0) {
          uVar12 = polygon_bins[10].offset;
          polygon_bins[10].indexes[uVar12] = uVar1;
          polygon_bins[10].offset = uVar12 + 1;
        }
        if ((uVar17 & 0x800) != 0) {
          uVar12 = polygon_bins[0xb].offset;
          polygon_bins[0xb].indexes[uVar12] = uVar1;
          polygon_bins[0xb].offset = uVar12 + 1;
        }
      } while (puVar9 != (ushort *)min_y_index);
    }
    psVar11 = (short *)((int)local_54 + 2);
    *(short *)local_54 = 0;
    min_y_index = min_y_index + 0x1000;
    local_58 = local_58 + 1;
    local_54 = (geometry_vertex_struct *)psVar11;
  } while (psVar11 != (short *)&DAT_082236ca);
  video_3d_bin_polygons_y_sort_4x::polygon_sort_counts[0] = 0;
  return;
}


