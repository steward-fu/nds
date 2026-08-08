/*
 * Ghidra decompilation
 *
 * Function : update_frame_3d_1x
 * Address  : 08074a70
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void update_frame_3d_1x(video_struct *video,u32 skip_frame)

{
  u8 uVar1;
  u8 uVar2;
  u8 uVar3;
  u8 uVar4;
  u8 uVar5;
  u8 uVar6;
  u8 uVar7;
  texture_cache_struct *texture_cache;
  u32 uVar8;
  video_3d_struct *__dest;
  u32 *__src;
  config_struct *pcVar9;
  geometry_polygon_list_struct *polygon_list;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  u32 buffer_page_flip;
  geometry_vertex_struct *vertexes;
  pthread_mutex_t *ppVar13;
  video_3d_struct *video_3d_00;
  video_3d_struct *video_3d;
  geometry_struct *geometry;
  geometry_polygon_list_struct *alpha_polygon_list;
  u32 batch_threads_count;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  u32 fog_entry;
  uint uVar19;
  undefined auVar20 [16];
  u8 local_2c;
  
  video_3d_00 = &video->video_3d;
  texture_cache = (video->geometry).texture_cache;
  uVar12 = (video->video_3d).display_3d_control & 0x4000;
  if ((uVar12 != 0) && (uVar12 = texture_cache->texture_slots_dirty & 0xffff0000, uVar12 != 0)) {
    uVar12 = 1;
  }
  uVar8 = update_texture_cache(texture_cache);
  pcVar9 = video->config;
  if (uVar8 != 0) {
    uVar12 = 1;
  }
  if (pcVar9->threaded_3d == 0) {
    uVar14 = (video->geometry).display_3d_control;
    (video->video_3d).display_3d_control = uVar14;
    if ((uVar14 & 4) == 0) {
      (video->video_3d).alpha_test_reference = 0;
    }
    else {
      (video->video_3d).alpha_test_reference = (uint)(video->geometry).alpha_test_reference;
    }
    __dest = (video_3d_struct *)(video->video_3d).color_buffer_render;
    if (skip_frame == 0) {
      if ((video->geometry).update_framebuffer == '\0') {
        uVar12 = (uVar12 ^ 1) & 1;
      }
      else {
        uVar12 = 0;
      }
      if (uVar12 == 0) goto LAB_08074bdc;
    }
    if (pcVar9->threaded_3d == 0) {
      return;
    }
  }
  else {
    if (video_3d_00 == (video_3d_struct *)(video->video_3d).color_buffer_scan) {
      __dest = (video_3d_struct *)(video->video_3d).color_buffer_b;
      (video->video_3d).color_buffer_render = (u32 *)__dest;
    }
    else {
      (video->video_3d).color_buffer_render = video_3d_00->color_buffer_a;
      __dest = video_3d_00;
    }
    if (skip_frame == 0) {
      if ((video->geometry).update_framebuffer == '\0') {
        uVar12 = (uVar12 ^ 1) & 1;
      }
      else {
        uVar12 = 0;
      }
      if (uVar12 == 0) {
LAB_08074bdc:
        (video->video_3d).color_buffer_last_rendered = __dest->color_buffer_a;
        (video->geometry).update_framebuffer = '\0';
        geometry = &video->geometry;
        uVar12 = (video->geometry).buffer_page ^ 1;
        if (((video->video_3d).display_3d_control & 0x80) != 0) {
          uVar18 = *(uint *)(video->geometry).fog_table;
          (video->video_3d).fog_table_constant = 0xffffffff;
          uVar15 = *(uint *)((video->geometry).fog_table + 4);
          uVar17 = *(uint *)((video->geometry).fog_table + 8);
          uVar14 = *(uint *)((video->geometry).fog_table + 0xc);
          uVar16 = *(uint *)((video->geometry).fog_table + 0x18);
          uVar10 = *(uint *)((video->geometry).fog_table + 0x10);
          uVar19 = *(uint *)((video->geometry).fog_table + 0x1c);
          uVar11 = *(uint *)((video->geometry).fog_table + 0x14);
          if (((uVar19 & uVar15 & uVar17 & uVar14 & uVar18 & uVar10 & uVar11 & uVar16) ==
               (uVar19 | uVar18 | uVar15 | uVar17 | uVar14 | uVar10 | uVar11 | uVar16)) &&
             ((uVar19 >> 8 & ~(uVar19 & 0xff & uVar19 >> 0x10)) == 0)) {
            (video->video_3d).fog_table_constant = uVar19 >> 8;
          }
          auVar20 = VectorSub(*(undefined (*) [16])((video->geometry).fog_table + 1),
                              *(undefined (*) [16])(video->geometry).fog_table,1);
          *(longlong *)(video->geometry).fog_diff_table = auVar20._0_8_;
          *(longlong *)((video->geometry).fog_diff_table + 8) = auVar20._8_8_;
          uVar1 = (video->geometry).fog_table[0x11];
          uVar2 = (video->geometry).fog_table[0x12];
          uVar3 = (video->geometry).fog_table[0x13];
          uVar4 = (video->geometry).fog_table[0x14];
          uVar5 = (video->geometry).fog_table[0x16];
          uVar6 = (video->geometry).fog_table[0x15];
          (video->geometry).fog_diff_table[0x10] = uVar1 - (video->geometry).fog_table[0x10];
          uVar7 = (video->geometry).fog_table[0x17];
          (video->geometry).fog_diff_table[0x11] = uVar2 - uVar1;
          uVar1 = (video->geometry).fog_table[0x18];
          (video->geometry).fog_diff_table[0x12] = uVar3 - uVar2;
          uVar2 = (video->geometry).fog_table[0x1a];
          (video->geometry).fog_diff_table[0x13] = uVar4 - uVar3;
          local_2c = uVar7 - uVar5;
          uVar3 = (video->geometry).fog_table[0x19];
          (video->geometry).fog_diff_table[0x14] = uVar6 - uVar4;
          uVar4 = (video->geometry).fog_table[0x1b];
          (video->geometry).fog_diff_table[0x15] = uVar5 - uVar6;
          uVar5 = (video->geometry).fog_table[0x1c];
          (video->geometry).fog_diff_table[0x16] = local_2c;
          uVar6 = (video->geometry).fog_table[0x1d];
          (video->geometry).fog_diff_table[0x17] = uVar1 - uVar7;
          uVar7 = (video->geometry).fog_table[0x1e];
          (video->geometry).fog_diff_table[0x18] = uVar3 - uVar1;
          (video->geometry).fog_diff_table[0x19] = uVar2 - uVar3;
          (video->geometry).fog_diff_table[0x1a] = uVar4 - uVar2;
          (video->geometry).fog_diff_table[0x1b] = uVar5 - uVar4;
          (video->geometry).fog_diff_table[0x1c] = uVar6 - uVar5;
          (video->geometry).fog_diff_table[0x1d] = uVar7 - uVar6;
          (video->geometry).fog_diff_table[0x1e] = (video->geometry).fog_table[0x1f] - uVar7;
        }
        uVar14 = 1;
        video_3d_bin_polygons_y_sort_1x
                  (geometry,(video->video_3d).polygon_bins,geometry->polygon_list + uVar12,
                   geometry->vertex_list[uVar12].vertexes,0);
        video_3d_bin_polygons_1x
                  (geometry,(video->video_3d).alpha_polygon_bins,
                   geometry->alpha_polygon_list + uVar12,geometry->vertex_list[uVar12].vertexes,1);
        pcVar9 = video->config;
        (video->video_3d).render_targets[0].disable_edge_marking = (u8)pcVar9->disable_edge_marking;
        uVar12 = pcVar9->batch_threads_3d_count;
        uVar1 = (u8)uVar12;
        if (uVar12 < 2) {
          (video->video_3d).render_targets[0].bin_interleave = uVar1;
          video_3d_render_bins_1x((video->video_3d).render_targets);
        }
        else {
          ppVar13 = (pthread_mutex_t *)&(video->video_3d).render_targets[1].mutex_render_begin;
          while( true ) {
            uVar8 = pcVar9->disable_edge_marking;
            *(u8 *)((int)ppVar13 + 0x97) = uVar1;
            uVar14 = uVar14 + 1;
            *(char *)((int)ppVar13 + 0x98) = (char)uVar8;
            pthread_mutex_lock(ppVar13);
            *(undefined *)((int)ppVar13 + 0x94) = 1;
            pthread_cond_signal((pthread_cond_t *)((int)ppVar13 + 0x34));
            pthread_mutex_unlock(ppVar13);
            ppVar13 = ppVar13 + 0x1808;
            if (uVar12 == uVar14) break;
            pcVar9 = video->config;
          }
          (video->video_3d).render_targets[0].bin_interleave = uVar1;
          uVar14 = 1;
          ppVar13 = (pthread_mutex_t *)&(video->video_3d).render_targets[1].mutex_render_done;
          video_3d_render_bins_1x((video->video_3d).render_targets);
          do {
            pthread_mutex_lock(ppVar13);
            if (*(char *)((int)ppVar13 + 0x7d) == '\0') {
              do {
                pthread_cond_wait((pthread_cond_t *)((int)ppVar13 + 0x4c),ppVar13);
              } while (*(char *)((int)ppVar13 + 0x7d) == '\0');
            }
            *(undefined *)((int)ppVar13 + 0x7d) = 0;
            uVar14 = uVar14 + 1;
            pthread_mutex_unlock(ppVar13);
            ppVar13 = ppVar13 + 0x1808;
          } while (uVar12 != uVar14);
        }
        uVar12 = (video->video_3d).display_3d_control;
        if ((uVar12 & 0x20) == 0) {
          return;
        }
        if (video->config->disable_edge_marking != 0) {
          return;
        }
        uVar12 = (uVar12 << 0x18) >> 0x1e;
        if (uVar12 != 2) {
          if (uVar12 != 3) {
            video_3d_resolve_bin_edge_mark_gaps_1x(video_3d_00);
            return;
          }
          video_3d_resolve_bin_edge_mark_fog_alpha_gaps_1x(video_3d_00);
          return;
        }
        video_3d_resolve_bin_edge_mark_fog_full_gaps_1x(video_3d_00);
        return;
      }
    }
  }
  __src = (video->video_3d).color_buffer_last_rendered;
  if ((video_3d_struct *)__src == __dest) {
    return;
  }
  memcpy(__dest,__src,0x30000);
  return;
}


