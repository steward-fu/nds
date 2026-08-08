/*
 * Ghidra decompilation
 *
 * Function : render_polygon_generate_texture_addresses
 * Address  : 08050e08
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void render_polygon_generate_texture_addresses
               (geometry_polygon_struct *polygon,u32 *texture_addresses,s16 *interpolated_uv,
               u32 pixels,u8 *occlusion_masks)

{
  u32 texture_height;
  u32 texture_width;
  texture_cache_element_struct *texture_cache_element;
  
  switch(*(ushort *)((int)&polygon->texture_image_param + 2) & 0xf) {
  case 1:
  case 9:
    render_polygon_generate_texture_addresses_wrap_clamp(texture_addresses);
    return;
  case 2:
  case 6:
    render_polygon_generate_texture_addresses_clamp_wrap(texture_addresses);
    return;
  case 3:
    render_polygon_generate_texture_addresses_wrap_wrap(texture_addresses);
    return;
  default:
    render_polygon_generate_texture_addresses_clamp_clamp(texture_addresses);
    return;
  case 5:
  case 0xd:
    render_polygon_generate_texture_addresses_flip_clamp(texture_addresses);
    return;
  case 7:
    render_polygon_generate_texture_addresses_flip_wrap(texture_addresses);
    return;
  case 10:
  case 0xe:
    render_polygon_generate_texture_addresses_clamp_flip(texture_addresses);
    return;
  case 0xb:
    render_polygon_generate_texture_addresses_wrap_flip(texture_addresses);
    return;
  case 0xf:
    render_polygon_generate_texture_addresses_flip_flip
              (texture_addresses,interpolated_uv,pixels,polygon->texture_cache_element->width,
               polygon->texture_cache_element->height,occlusion_masks);
    return;
  }
}


