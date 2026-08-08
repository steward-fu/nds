/*
 * Ghidra decompilation
 *
 * Function : update_frame_3d
 * Address  : 08078a7c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void update_frame_3d(video_struct *video,u32 skip_frame)

{
  if (video->config->hires_3d == 0) {
    update_frame_3d_1x(video,skip_frame);
    return;
  }
  update_frame_3d_4x(video,skip_frame);
  return;
}


