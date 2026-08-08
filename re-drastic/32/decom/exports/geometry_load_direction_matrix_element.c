/*
 * Ghidra decompilation
 *
 * Function : geometry_load_direction_matrix_element
 * Address  : 0807e7f8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

s32 geometry_load_direction_matrix_element(geometry_struct *geometry,u32 index)

{
  if (index < 6) {
    if (2 < index) {
      index = index + 1;
    }
    return geometry->direction_matrix[index];
  }
  return geometry->direction_matrix[index + 2];
}


