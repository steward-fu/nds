/*
 * Ghidra decompilation
 *
 * Function : flush_texture_cache
 * Address  : 0808cf38
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void flush_texture_cache(texture_cache_struct *texture_cache)

{
  texture_cache_element_struct *__ptr;
  u32 *__ptr_00;
  texture_cache_element_struct *texture_element;
  texture_cache_element_struct *next_allocated;
  texture_cache_element_struct *ptVar1;
  
  __ptr = texture_cache->base_allocated;
  while (__ptr != (texture_cache_element_struct *)0x0) {
    ptVar1 = __ptr->next_allocated;
    if (__ptr->previous_bin == (texture_cache_element_struct *)0x0) {
      texture_cache->bins[__ptr->bin_index] = (texture_cache_element_struct *)0x0;
    }
    __ptr_00 = __ptr->data;
    texture_cache->texture_bytes_allocated =
         texture_cache->texture_bytes_allocated -
         (uint)""[__ptr->format] * (uint)__ptr->height * (uint)__ptr->width;
    free(__ptr_00);
    if (__ptr->palette != (u32 *)0x0) {
      free(__ptr->palette);
    }
    free(__ptr);
    texture_cache->elements_allocated = texture_cache->elements_allocated - 1;
    __ptr = ptVar1;
  }
  texture_cache->base_allocated = (texture_cache_element_struct *)0x0;
  texture_cache->texture_slots_dirty = 0;
  texture_cache->texture_palette_slots_dirty = 0;
  return;
}


