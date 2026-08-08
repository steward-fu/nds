/*
 * Ghidra decompilation
 *
 * Function : video_render_scanlines
 * Address  : 08035e38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_render_scanlines(video_struct *video,u32 scanline_end)

{
  memory_struct *memory_00;
  u8 *puVar1;
  uint uVar2;
  u32 bitmap_fine;
  int iVar3;
  u16 *puVar4;
  u8 **ppuVar5;
  u32 bitmap_coarse;
  pthread_mutex_t *__mutex;
  u32 *puVar6;
  u8 **ppuVar7;
  int iVar8;
  memory_struct *memory;
  
  bitmap_coarse = video->vram_map_dirty_bitmap_coarse;
  if (bitmap_coarse != 0) {
    memory_00 = video->memory;
    ppuVar7 = video->vram_map;
    puVar6 = video->vram_map_dirty_bitmap_fine;
    iVar8 = 0;
    do {
      if ((bitmap_coarse & 1) != 0) {
        ppuVar5 = ppuVar7;
        iVar3 = iVar8;
        for (uVar2 = *puVar6; uVar2 != 0; uVar2 = uVar2 >> 1) {
          while ((uVar2 & 1) == 0) {
            uVar2 = uVar2 >> 1;
            ppuVar5 = ppuVar5 + 1;
            iVar3 = iVar3 + 0x4000;
            if (uVar2 == 0) goto LAB_08035f84;
          }
          puVar1 = *ppuVar5;
          ppuVar5 = ppuVar5 + 1;
          remap_address_region_vram
                    (memory_00,memory_00->vram_2d_remap_buffer + iVar3,0x4000,
                     (u32)(puVar1 + (iVar3 - (int)memory_00->map_vram_buffer)));
          iVar3 = iVar3 + 0x4000;
        }
LAB_08035f84:
        *puVar6 = 0;
      }
      bitmap_coarse = bitmap_coarse >> 1;
      puVar6 = puVar6 + 1;
      ppuVar7 = ppuVar7 + 0x20;
      iVar8 = iVar8 + 0x80000;
    } while (bitmap_coarse != 0);
    video->vram_map_dirty_bitmap_coarse = 0;
  }
  puVar4 = &video->scanlines_rendered;
  if (*puVar4 == 0 && scanline_end == 0xbf) {
    __mutex = &video->mutex_render_done;
    pthread_mutex_lock((pthread_mutex_t *)&video->mutex_render_begin);
    video->var_render_begin = '\x01';
    pthread_cond_signal((pthread_cond_t *)&video->cv_render_begin);
    pthread_mutex_unlock((pthread_mutex_t *)&video->mutex_render_begin);
    video_2d_render_scanlines(video->video_2d_engine,(uint)*puVar4,0xbf,&video->capture_settings);
    pthread_mutex_lock((pthread_mutex_t *)__mutex);
    if (video->var_render_done == '\0') {
      do {
        pthread_cond_wait((pthread_cond_t *)&video->cv_render_done,(pthread_mutex_t *)__mutex);
      } while (video->var_render_done == '\0');
    }
    video->var_render_done = '\0';
    pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  }
  else {
    video_2d_render_scanlines
              (video->video_2d_engine,(uint)*puVar4,scanline_end,&video->capture_settings);
    video_2d_render_scanlines
              (video->video_2d_engine + 1,(uint)*puVar4,scanline_end,(capture_settings_struct *)0x0)
    ;
  }
  video->scanlines_rendered = (short)scanline_end + 1;
  return;
}


