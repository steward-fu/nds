/*
 * Ghidra decompilation
 *
 * Function : FUN_0015f80c
 * Address  : 0015f80c
 * Program  : drastic64
 */


undefined4 FUN_0015f80c(long param_1)

{
  geometry_transform_vertexes();
  geometry_flush_polygons(param_1);
  return *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x9ac0) * 0x18004 + 0x21ad4);
}


