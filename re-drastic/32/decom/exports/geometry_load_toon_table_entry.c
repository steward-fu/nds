/*
 * Ghidra decompilation
 *
 * Function : geometry_load_toon_table_entry
 * Address  : 0807e828
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

u32 geometry_load_toon_table_entry(geometry_struct *geometry,u32 index)

{
  return (uint)geometry->toon_table[index];
}


