/*
 * Ghidra decompilation
 *
 * Function : texture_cache_convert_split
 * Address  : 0808c784
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void texture_cache_convert_split
               (texture_cache_struct *texture_cache,
               texture_cache_element_struct *texture_cache_element,u32 *texture_data,
               u32 texture_size,u16 *palette,u32 texture_slot,u32 texture_slot_offset,
               u32 texture_format,u32 color0_transparent)

{
  u8 *texture_source_00;
  u8 *texture_source_01;
  u8 *texture_source;
  u32 texture_size_00;
  u32 split_size;
  u32 *texture_dest;
  uint uVar1;
  u8 *texture_source_1;
  uint local_38;
  
  texture_source_01 = texture_cache->video->texture_slots[texture_slot];
  texture_size_00 = texture_size;
  if (0x1ffff < texture_slot_offset + texture_size) {
    texture_size_00 = 0x20000 - texture_slot_offset;
    local_38 = texture_size - texture_size_00;
    uVar1 = texture_slot + 1 & 3;
    texture_source_00 = texture_cache->video->texture_slots[uVar1];
    texture_dest = (u32 *)((uint)""[texture_format] *
                           ((texture_size_00 << (uint)""[texture_format]) >> 1) + (int)texture_data)
    ;
    if (0x1ffff < local_38) {
      texture_cache_convert_split
                (texture_cache,texture_cache_element,
                 (u32 *)((uint)""[texture_format] *
                         ((uint)(0x20000 << (uint)""[texture_format]) >> 1) + (int)texture_dest),
                 local_38 - 0x20000,palette,uVar1 + 1 & 3,0,texture_format,color0_transparent);
      local_38 = 0x20000;
    }
    texture_cache_convert
              (texture_cache_element,texture_dest,texture_source_00,palette,texture_format,local_38,
               color0_transparent);
  }
  if (texture_source_01 != (u8 *)0x0) {
    texture_source_01 = texture_source_01 + texture_slot_offset;
  }
  texture_cache_convert
            (texture_cache_element,texture_data,texture_source_01,palette,texture_format,
             texture_size_00,color0_transparent);
  return;
}


