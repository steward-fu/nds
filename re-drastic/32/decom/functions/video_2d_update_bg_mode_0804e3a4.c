/*
 * Ghidra decompilation
 *
 * Function : video_2d_update_bg_mode
 * Address  : 0804e3a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_2d_update_bg_mode(video_2d_struct *video_2d)

{
  ushort uVar1;
  uint uVar2;
  u32 display_control;
  video_2d_bg_layer_struct *bg_layer;
  code *pcVar3;
  
  uVar2 = video_2d->display_control;
  pcVar3 = render_scanline_tiled;
  video_2d->bg_layers[0].render_function = render_scanline_tiled;
  video_2d->bg_layers[1].render_function = render_scanline_tiled;
  switch(uVar2 & 7) {
  case 1:
    video_2d->bg_layers[2].render_function = render_scanline_tiled;
    video_2d->bg_layers[3].render_function = render_scanline_affine_normal;
    return;
  case 2:
    pcVar3 = render_scanline_affine_normal;
  case 0:
    video_2d->bg_layers[2].render_function = pcVar3;
    video_2d->bg_layers[3].render_function = pcVar3;
    return;
  case 3:
    video_2d->bg_layers[2].render_function = render_scanline_tiled;
    uVar1 = video_2d->bg_layers[3].bg_control;
    break;
  case 4:
    uVar1 = video_2d->bg_layers[3].bg_control;
    video_2d->bg_layers[2].render_function = render_scanline_affine_normal;
    break;
  case 5:
    uVar1 = video_2d->bg_layers[2].bg_control;
    if ((uVar1 & 0x80) == 0) {
      video_2d->bg_layers[2].render_function = render_scanline_affine_extended;
    }
    else {
      if ((uVar1 & 4) == 0) {
        pcVar3 = render_scanline_bitmap_8bpp;
      }
      else {
        pcVar3 = render_scanline_bitmap_16bpp;
      }
      video_2d->bg_layers[2].render_function = pcVar3;
    }
    uVar1 = video_2d->bg_layers[3].bg_control;
    break;
  case 6:
    video_2d->bg_layers[1].render_function = render_scanline_null;
    video_2d->bg_layers[2].render_function = render_scanline_bitmap_8bpp;
    video_2d->bg_layers[3].render_function = render_scanline_null;
    return;
  default:
    goto switchD_0804e3c0_caseD_7;
  }
  if ((uVar1 & 0x80) == 0) {
    video_2d->bg_layers[3].render_function = render_scanline_affine_extended;
    return;
  }
  if ((uVar1 & 4) == 0) {
    video_2d->bg_layers[3].render_function = render_scanline_bitmap_8bpp;
    return;
  }
  video_2d->bg_layers[3].render_function = render_scanline_bitmap_16bpp;
switchD_0804e3c0_caseD_7:
  return;
}


