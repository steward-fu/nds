/*
 * Ghidra decompilation
 *
 * Function : geometry_load_clip_matrix_element
 * Address  : 0807e798
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 geometry_load_clip_matrix_element(geometry_struct *geometry,u32 index)

{
  if (geometry->clip_matrix_dirty != '\0') {
    geometry_matrix_multiply_4x4_by_4x4
              (geometry->clip_matrix,geometry->projection_matrix,geometry->position_matrix);
    geometry->clip_matrix_dirty = '\0';
  }
  return geometry->clip_matrix[index];
}


