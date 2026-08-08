/*
 * Ghidra decompilation
 *
 * Function : geometry_store_fog_table_entry
 * Address  : 0807e948
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

void geometry_store_fog_table_entry(geometry_struct *geometry,u32 index,u32 value)

{
  geometry->fog_table[index] = (byte)value & 0x7f;
  return;
}


