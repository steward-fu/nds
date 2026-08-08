/*
 * Ghidra decompilation
 *
 * Function : initialize_texture_cache
 * Address  : 0808d138
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_texture_cache(texture_cache_struct *texture_cache,video_struct *video)

{
  memset(texture_cache->bins,0,0x4000);
  texture_cache->video = video;
  texture_cache->base_allocated = (texture_cache_element_struct *)0x0;
  texture_cache->texture_slots_dirty = 0;
  texture_cache->texture_palette_slots_dirty = 0;
  return;
}


