/*
 * Ghidra decompilation
 *
 * Function : geometry_load_toon_table_entry
 * Address  : 0015f910
 * Program  : drastic64
 */


undefined2 geometry_load_toon_table_entry(long param_1,ulong param_2)

{
  return *(undefined2 *)(param_1 + (param_2 & 0xffffffff) * 2 + 0x9934);
}


