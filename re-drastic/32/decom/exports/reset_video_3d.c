/*
 * Ghidra decompilation
 *
 * Function : reset_video_3d
 * Address  : 080791d8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void reset_video_3d(video_3d_struct *video_3d)

{
  memset(video_3d,0,0xc0000);
  memset(video_3d->color_buffer_b,0,0xc0000);
  video_3d->color_buffer_render = video_3d->color_buffer_a;
  video_3d->color_buffer_scan = video_3d->color_buffer_b;
  video_3d->color_buffer_last_rendered = video_3d->color_buffer_a;
  return;
}


