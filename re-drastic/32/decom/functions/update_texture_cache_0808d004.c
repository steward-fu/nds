/*
 * Ghidra decompilation
 *
 * Function : update_texture_cache
 * Address  : 0808d004
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 update_texture_cache(texture_cache_struct *texture_cache)

{
  u32 *__ptr;
  u32 texture_palette_slots_dirty;
  texture_cache_element_struct *ptVar1;
  texture_cache_element_struct *previous_bin;
  uint uVar2;
  texture_cache_element_struct *ptVar3;
  texture_cache_element_struct *previous_allocated;
  uint uVar4;
  texture_cache_element_struct *ptVar5;
  texture_cache_element_struct *next_bin;
  texture_cache_element_struct *texture_element;
  texture_cache_element_struct *__ptr_00;
  texture_cache_element_struct *ptVar6;
  texture_cache_element_struct *next_allocated;
  u32 uVar7;
  u32 texture_slots_dirty;
  
  uVar2 = texture_cache->texture_slots_allocated_last;
  uVar4 = texture_cache->texture_palette_slots_allocated_last;
  texture_cache->texture_slots_allocated_last = texture_cache->texture_slots_allocated;
  texture_cache->texture_palette_slots_allocated_last =
       texture_cache->texture_palette_slots_allocated;
  uVar2 = uVar2 ^ texture_cache->texture_slots_allocated | texture_cache->texture_slots_dirty;
  uVar4 = uVar4 ^ texture_cache->texture_palette_slots_allocated |
          texture_cache->texture_palette_slots_dirty;
  uVar7 = uVar2 | uVar4;
  if (uVar7 != 0) {
    if (texture_cache->base_allocated == (texture_cache_element_struct *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      __ptr_00 = texture_cache->base_allocated;
      do {
        ptVar6 = __ptr_00->next_allocated;
        if (((uVar2 & __ptr_00->texture_slot_pages_allocated) != 0) ||
           ((uVar4 & __ptr_00->texture_palette_pages_allocated) != 0)) {
          if (__ptr_00->dirty == '\0') {
            __ptr_00->dirty = '\x01';
          }
          else {
            ptVar5 = __ptr_00->next_bin;
            ptVar1 = __ptr_00->previous_bin;
            ptVar3 = __ptr_00->previous_allocated;
            if (ptVar1 == (texture_cache_element_struct *)0x0) {
              texture_cache->bins[__ptr_00->bin_index] = ptVar5;
            }
            else {
              ptVar1->next_bin = ptVar5;
            }
            __ptr = __ptr_00->data;
            if (ptVar5 != (texture_cache_element_struct *)0x0) {
              ptVar5->previous_bin = ptVar1;
            }
            if (ptVar3 == (texture_cache_element_struct *)0x0) {
              texture_cache->base_allocated = ptVar6;
            }
            else {
              ptVar3->next_allocated = ptVar6;
            }
            if (ptVar6 != (texture_cache_element_struct *)0x0) {
              ptVar6->previous_allocated = ptVar3;
            }
            free(__ptr);
            if (__ptr_00->palette != (u32 *)0x0) {
              free(__ptr_00->palette);
            }
            uVar7 = uVar7 + 1;
            free(__ptr_00);
          }
        }
        __ptr_00 = ptVar6;
      } while (ptVar6 != (texture_cache_element_struct *)0x0);
    }
    texture_cache->texture_slots_dirty = 0;
    texture_cache->texture_palette_slots_dirty = 0;
  }
  return uVar7;
}


