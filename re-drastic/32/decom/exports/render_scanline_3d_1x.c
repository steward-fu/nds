/*
 * Ghidra decompilation
 *
 * Function : render_scanline_3d_1x
 * Address  : 08074fc0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 * render_scanline_3d_1x(video_struct *video,u32 line)

{
  u32 *puVar1;
  
  if (video->config->threaded_3d == 0) {
    puVar1 = (video->video_3d).color_buffer_render;
  }
  else {
    puVar1 = (video->video_3d).color_buffer_scan;
  }
  return puVar1 + line * 0x100;
}


