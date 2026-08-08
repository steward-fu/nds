/*
 * Ghidra decompilation
 *
 * Function : geometry_store_fog_table_entry
 * Address  : 0015fa30
 * Program  : drastic64
 */


void geometry_store_fog_table_entry(long param_1,ulong param_2,byte param_3)

{
  *(byte *)(param_1 + (param_2 & 0xffffffff) + 0x9974) = param_3 & 0x7f;
  return;
}


