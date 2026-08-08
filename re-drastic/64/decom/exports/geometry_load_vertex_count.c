/*
 * Ghidra decompilation
 *
 * Function : geometry_load_vertex_count
 * Address  : 0015f810
 * Program  : drastic64
 */


undefined4 geometry_load_vertex_count(long param_1)

{
  geometry_transform_vertexes();
  geometry_flush_polygons(param_1);
  return *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x18004 + 0x21ad4);
}


