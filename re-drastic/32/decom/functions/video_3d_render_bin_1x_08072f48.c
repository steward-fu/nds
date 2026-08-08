/*
 * Ghidra decompilation
 *
 * Function : video_3d_render_bin_1x
 * Address  : 08072f48
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void video_3d_render_bin_1x
               (video_3d_render_target_struct *render_target,
               video_3d_polygon_bin_struct *polygon_bin,u32 min_y,u32 max_y,
               geometry_polygon_list_struct *polygon_list,geometry_vertex_struct *base_vertexes)

{
  uint uVar1;
  ushort *puVar2;
  
  if (polygon_bin->offset != 0) {
    puVar2 = (ushort *)((int)&polygon_bin[-1].offset + 2);
    uVar1 = 0;
    do {
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 + 1;
      render_polygon_1x(render_target,polygon_list->polygons + *puVar2,base_vertexes,min_y,max_y);
    } while (uVar1 < polygon_bin->offset);
  }
  return;
}


