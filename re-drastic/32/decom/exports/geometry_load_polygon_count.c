/*
 * Ghidra decompilation
 *
 * Function : geometry_load_polygon_count
 * Address  : 0807e708
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 geometry_load_polygon_count(geometry_struct *geometry)

{
  geometry_transform_vertexes(geometry);
  geometry_flush_polygons(geometry);
  return geometry->polygon_list[geometry->buffer_page].offset +
         geometry->alpha_polygon_list[geometry->buffer_page].offset;
}


