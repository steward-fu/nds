/*
 * Ghidra decompilation
 *
 * Function : video_2d_map_bg_direct_layer
 * Address  : 0804dda8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_map_bg_direct_layer(video_2d_struct *video_2d,u32 layer_number)

{
  video_struct *pvVar1;
  u32 uVar2;
  uint uVar3;
  u32 bg_layer_offset;
  u32 coverage_map;
  int iVar4;
  
  if ((((((video_2d->bg_layers[layer_number].bg_control & 0xc0fc) == 0x4084) &&
        (video_2d->bg_layers[layer_number].affine_reference_x == 0)) &&
       (video_2d->bg_layers[layer_number].affine_reference_y == 0)) &&
      ((video_2d->bg_layers[layer_number].affine_dx == 0x100 &&
       (video_2d->bg_layers[layer_number].affine_dy == 0)))) &&
     ((video_2d->bg_layers[layer_number].affine_dmx == 0 &&
      (video_2d->bg_layers[layer_number].affine_dmy == 0x100)))) {
    pvVar1 = video_2d->video;
    if (pvVar1->vram_bank_maps[0].address_space_type == VRAM_ADDRESS_SPACE_ARM9) {
      if ((video_2d->bg_layers[layer_number].bitmap_base & 0xfffe0000) ==
          pvVar1->vram_bank_maps[0].region_offset * 0x4000) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0xff;
      }
    }
    else {
      iVar4 = 0xff;
    }
    if ((pvVar1->vram_bank_maps[1].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
       ((video_2d->bg_layers[layer_number].bitmap_base & 0xfffe0000) ==
        pvVar1->vram_bank_maps[1].region_offset * 0x4000)) {
      iVar4 = 1;
    }
    if ((pvVar1->vram_bank_maps[2].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
       ((video_2d->bg_layers[layer_number].bitmap_base & 0xfffe0000) ==
        pvVar1->vram_bank_maps[2].region_offset * 0x4000)) {
      iVar4 = 2;
    }
    if ((pvVar1->vram_bank_maps[3].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
       ((video_2d->bg_layers[layer_number].bitmap_base & 0xfffe0000) ==
        pvVar1->vram_bank_maps[3].region_offset * 0x4000)) {
      iVar4 = 3;
    }
    else if (iVar4 == 0xff) {
      return;
    }
    uVar2 = video_2d->bg_layers[layer_number].bitmap_base;
    uVar3 = (uVar2 << 0xf) >> 0x10;
    if (uVar3 < 0x4001) {
      coverage_map = 0x3f << ((uVar2 << 0xf) >> 0x1d) &
                     ~(uint)(pvVar1->capture_settings).hires_valid[iVar4];
      if (coverage_map == 0) {
        uVar2 = video_2d->bg_layers[layer_number].bitmap_base;
        video_2d->bg_layers[layer_number].direct_bank_hires_ptr =
             (pvVar1->capture_settings).hires_bank_ptrs[iVar4] + uVar3 * 3;
      }
      else {
        video_2d->bg_layers[layer_number].direct_bank_hires_ptr = (u16 *)0x0;
      }
    }
    video_2d->bg_layers[layer_number].direct_bank_ptr = (u16 *)(video_2d->vram_map + uVar2);
  }
  return;
}


