/*
 * Ghidra decompilation
 *
 * Function : geometry_load_edge_color_entry
 * Address  : 0807e8b8
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 geometry_load_edge_color_entry(geometry_struct *geometry,u32 index)

{
  return (uint)geometry->edge_colors[index];
}


