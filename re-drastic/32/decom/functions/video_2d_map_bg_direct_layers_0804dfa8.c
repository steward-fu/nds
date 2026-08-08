/*
 * Ghidra decompilation
 *
 * Function : video_2d_map_bg_direct_layers
 * Address  : 0804dfa8
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

void video_2d_map_bg_direct_layers(video_2d_struct *video_2d)

{
  u32 coverage_map_1;
  u32 coverage_map;
  u32 bg_layer_offset_1;
  u32 bg_layer_offset;
  uint uVar1;
  u32 display_control;
  vram_address_space_type_enum vVar2;
  u32 uVar3;
  video_struct *pvVar4;
  int iVar5;
  
  uVar1 = video_2d->display_control;
  video_2d->bg_layers[2].direct_bank_ptr = (u16 *)0x0;
  video_2d->bg_layers[3].direct_bank_ptr = (u16 *)0x0;
  uVar1 = uVar1 & 7;
  if (uVar1 < 3) {
    return;
  }
  if (uVar1 < 5) {
    if ((video_2d->bg_layers[3].bg_control & 0xc0fc) != 0x4084) {
      return;
    }
    if (video_2d->bg_layers[3].affine_reference_x != 0) {
      return;
    }
    if (video_2d->bg_layers[3].affine_reference_y != 0) {
      return;
    }
    if (video_2d->bg_layers[3].affine_dx != 0x100) {
      return;
    }
    if (video_2d->bg_layers[3].affine_dy != 0) {
      return;
    }
    if (video_2d->bg_layers[3].affine_dmx != 0) {
      return;
    }
    if (video_2d->bg_layers[3].affine_dmy != 0x100) {
      return;
    }
    pvVar4 = video_2d->video;
    vVar2 = pvVar4->vram_bank_maps[0].address_space_type;
    goto joined_r0x0804e0b0;
  }
  if (uVar1 != 5) {
    return;
  }
  pvVar4 = video_2d->video;
  if ((((((video_2d->bg_layers[2].bg_control & 0xc0fc) == 0x4084) &&
        (video_2d->bg_layers[2].affine_reference_x == 0)) &&
       (video_2d->bg_layers[2].affine_reference_y == 0)) &&
      ((video_2d->bg_layers[2].affine_dx == 0x100 && (video_2d->bg_layers[2].affine_dy == 0)))) &&
     ((video_2d->bg_layers[2].affine_dmx == 0 && (video_2d->bg_layers[2].affine_dmy == 0x100)))) {
    if (pvVar4->vram_bank_maps[0].address_space_type == VRAM_ADDRESS_SPACE_ARM9) {
      if ((video_2d->bg_layers[2].bitmap_base & 0xfffe0000) ==
          pvVar4->vram_bank_maps[0].region_offset * 0x4000) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0xff;
      }
    }
    else {
      iVar5 = 0xff;
    }
    if ((pvVar4->vram_bank_maps[1].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
       ((video_2d->bg_layers[2].bitmap_base & 0xfffe0000) ==
        pvVar4->vram_bank_maps[1].region_offset * 0x4000)) {
      iVar5 = 1;
    }
    if ((pvVar4->vram_bank_maps[2].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
       ((video_2d->bg_layers[2].bitmap_base & 0xfffe0000) ==
        pvVar4->vram_bank_maps[2].region_offset * 0x4000)) {
      iVar5 = 2;
    }
    if ((pvVar4->vram_bank_maps[3].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
       (uVar3 = video_2d->bg_layers[2].bitmap_base,
       (uVar3 & 0xfffe0000) == pvVar4->vram_bank_maps[3].region_offset * 0x4000)) {
      iVar5 = 3;
    }
    else {
      if (iVar5 == 0xff) goto LAB_0804e000;
      uVar3 = video_2d->bg_layers[2].bitmap_base;
    }
    uVar1 = (uVar3 << 0xf) >> 0x10;
    if (uVar1 < 0x4001) {
      coverage_map = 0x3f << ((uVar3 << 0xf) >> 0x1d) &
                     ~(uint)(pvVar4->capture_settings).hires_valid[iVar5];
      if (coverage_map == 0) {
        video_2d->bg_layers[2].direct_bank_hires_ptr =
             (pvVar4->capture_settings).hires_bank_ptrs[iVar5] + uVar1 * 3;
      }
      else {
        video_2d->bg_layers[2].direct_bank_hires_ptr = (u16 *)0x0;
      }
    }
    video_2d->bg_layers[2].direct_bank_ptr = (u16 *)(video_2d->vram_map + uVar3);
  }
LAB_0804e000:
  if ((video_2d->bg_layers[3].bg_control & 0xc0fc) != 0x4084) {
    return;
  }
  if (video_2d->bg_layers[3].affine_reference_x != 0) {
    return;
  }
  if (video_2d->bg_layers[3].affine_reference_y != 0) {
    return;
  }
  if (video_2d->bg_layers[3].affine_dx != 0x100) {
    return;
  }
  if (video_2d->bg_layers[3].affine_dy != 0) {
    return;
  }
  if (video_2d->bg_layers[3].affine_dmx != 0) {
    return;
  }
  if (video_2d->bg_layers[3].affine_dmy != 0x100) {
    return;
  }
  vVar2 = pvVar4->vram_bank_maps[0].address_space_type;
joined_r0x0804e0b0:
  if (vVar2 == VRAM_ADDRESS_SPACE_ARM9) {
    if ((video_2d->bg_layers[3].bitmap_base & 0xfffe0000) ==
        pvVar4->vram_bank_maps[0].region_offset * 0x4000) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0xff;
    }
  }
  else {
    iVar5 = 0xff;
  }
  if ((pvVar4->vram_bank_maps[1].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
     ((video_2d->bg_layers[3].bitmap_base & 0xfffe0000) ==
      pvVar4->vram_bank_maps[1].region_offset * 0x4000)) {
    iVar5 = 1;
  }
  if ((pvVar4->vram_bank_maps[2].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
     ((video_2d->bg_layers[3].bitmap_base & 0xfffe0000) ==
      pvVar4->vram_bank_maps[2].region_offset * 0x4000)) {
    iVar5 = 2;
  }
  if ((pvVar4->vram_bank_maps[3].address_space_type == VRAM_ADDRESS_SPACE_ARM9) &&
     (uVar3 = video_2d->bg_layers[3].bitmap_base,
     (uVar3 & 0xfffe0000) == pvVar4->vram_bank_maps[3].region_offset * 0x4000)) {
    iVar5 = 3;
  }
  else {
    if (iVar5 == 0xff) {
      return;
    }
    uVar3 = video_2d->bg_layers[3].bitmap_base;
  }
  uVar1 = (uVar3 << 0xf) >> 0x10;
  if (uVar1 < 0x4001) {
    coverage_map_1 =
         0x3f << ((uVar3 << 0xf) >> 0x1d) & ~(uint)(pvVar4->capture_settings).hires_valid[iVar5];
    if (coverage_map_1 == 0) {
      video_2d->bg_layers[3].direct_bank_hires_ptr =
           (pvVar4->capture_settings).hires_bank_ptrs[iVar5] + uVar1 * 3;
    }
    else {
      video_2d->bg_layers[3].direct_bank_hires_ptr = (u16 *)0x0;
    }
  }
  video_2d->bg_layers[3].direct_bank_ptr = (u16 *)(video_2d->vram_map + uVar3);
  return;
}


