/*
 * Ghidra decompilation
 *
 * Function : geometry_load_savestate_v1_preload_vertex
 * Address  : 080842a4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable primitive_queue:geometry_primitive_queue_struct *[r0:4] conflicts with parameter,
   skipped. */

void geometry_load_savestate_v1_preload_vertex
               (geometry_struct *geometry,u32 vertex_offset,geometry_legacy_vertex_struct *vertex)

{
  u32 uVar1;
  s32 *transformed_coordinates;
  
  (geometry->primitive_queue).transformed_coordinates[vertex_offset * 4] = vertex->coordinates[0];
  (geometry->primitive_queue).transformed_coordinates[vertex_offset * 4 + 1] =
       vertex->coordinates[1];
  (geometry->primitive_queue).transformed_coordinates[vertex_offset * 4 + 2] =
       vertex->coordinates[2];
  (geometry->primitive_queue).transformed_coordinates[vertex_offset * 4 + 3] =
       vertex->coordinates[3];
  uVar1 = vertex->color;
  (geometry->primitive_queue).color[vertex_offset] = (u16)uVar1;
  (geometry->primitive_queue).uv[vertex_offset] = uVar1;
  (geometry->primitive_queue).clip_codes[vertex_offset] = vertex->clip_codes;
  return;
}


