/*
 * Ghidra decompilation
 *
 * Function : initialize_geometry
 * Address  : 08083e08
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void initialize_geometry(geometry_struct *geometry,system_struct *system,
                        texture_cache_struct *texture_cache)

{
  geometry->fog_diff_table[0x1f] = '\0';
  geometry->system = system;
  geometry->texture_cache = texture_cache;
  geometry->position_matrix = geometry->position_direction_matrix;
  geometry->direction_matrix = geometry->position_direction_matrix + 0x10;
  return;
}


