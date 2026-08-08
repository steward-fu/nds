/*
 * Ghidra decompilation
 *
 * Function : video_3d_bin_polygon
 * Address  : 08071634
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_bin_polygon(video_3d_polygon_bin_struct *polygon_bin,u32 index)

{
  u32 uVar1;
  
  uVar1 = polygon_bin->offset;
  polygon_bin->indexes[uVar1] = (u16)index;
  polygon_bin->offset = uVar1 + 1;
  return;
}


