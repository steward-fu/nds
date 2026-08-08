/*
 * Ghidra decompilation
 *
 * Function : texture_cache_lookup
 * Address  : 0808cdec
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

texture_cache_element_struct *
texture_cache_lookup(texture_cache_struct *texture_cache,u32 texture_image_param,u32 palette_offset)

{
  ushort uVar1;
  texture_cache_element_struct *ptVar2;
  texture_cache_element_struct *bin_base;
  texture_cache_element_struct *ptVar3;
  texture_cache_element_struct *texture_cache_element;
  u32 bin_index;
  uint uVar4;
  uint texture_image_param_00;
  
  uVar4 = (texture_image_param << 0x10) >> 0x17;
  texture_image_param_00 = texture_image_param & 0x3fffffff;
  ptVar3 = texture_cache->bins[uVar4];
  uVar1 = (ushort)texture_image_param >> 7;
  if (ptVar3 == (texture_cache_element_struct *)0x0) {
    ptVar2 = (texture_cache_element_struct *)malloc(0x30);
    ptVar2->data = (u32 *)0x0;
    ptVar2->palette = (u32 *)0x0;
    texture_cache_create(ptVar2,texture_cache,texture_image_param_00,palette_offset);
    ptVar2->next_bin = (texture_cache_element_struct *)0x0;
    ptVar2->previous_bin = (texture_cache_element_struct *)0x0;
    ptVar2->bin_index = uVar1;
  }
  else {
    ptVar2 = ptVar3;
    do {
      if (((texture_image_param & 0x3ff0ffff) == ptVar2->image_param) &&
         (ptVar2->palette_offset == palette_offset)) {
        if (ptVar2->dirty == '\0') {
          return ptVar2;
        }
        texture_cache_create(ptVar2,texture_cache,texture_image_param_00,palette_offset);
        return ptVar2;
      }
      ptVar2 = ptVar2->next_bin;
    } while (ptVar2 != (texture_cache_element_struct *)0x0);
    ptVar2 = (texture_cache_element_struct *)malloc(0x30);
    ptVar2->data = (u32 *)0x0;
    ptVar2->palette = (u32 *)0x0;
    texture_cache_create(ptVar2,texture_cache,texture_image_param_00,palette_offset);
    ptVar2->next_bin = ptVar3;
    ptVar2->previous_bin = (texture_cache_element_struct *)0x0;
    ptVar2->bin_index = uVar1;
    ptVar3->previous_bin = ptVar2;
  }
  texture_cache->bins[uVar4] = ptVar2;
  ptVar3 = texture_cache->base_allocated;
  ptVar2->next_allocated = ptVar3;
  ptVar2->previous_allocated = (texture_cache_element_struct *)0x0;
  if (ptVar3 != (texture_cache_element_struct *)0x0) {
    ptVar3->previous_allocated = ptVar2;
  }
  texture_cache->base_allocated = ptVar2;
  texture_cache->elements_allocated = texture_cache->elements_allocated + 1;
  return ptVar2;
}


