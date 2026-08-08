/*
 * Ghidra decompilation
 *
 * Function : geometry_load_vertex_count
 * Address  : 0807e758
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 geometry_load_vertex_count(geometry_struct *geometry)

{
  geometry_transform_vertexes(geometry);
  geometry_flush_polygons(geometry);
  return geometry->vertex_list[geometry->buffer_page].offset;
}


