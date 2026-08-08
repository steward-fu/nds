/*
 * Ghidra decompilation
 *
 * Function : geometry_load_polygon_count
 * Address  : 0015f7c0
 * Program  : drastic64
 */


int geometry_load_polygon_count(long param_1)

{
  geometry_transform_vertexes();
  geometry_flush_polygons(param_1);
  param_1 = param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x10008;
  return *(int *)(param_1 + 0x49ae0) + *(int *)(param_1 + 0x69af0);
}


