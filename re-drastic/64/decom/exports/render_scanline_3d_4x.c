/*
 * Ghidra decompilation
 *
 * Function : render_scanline_3d_4x
 * Address  : 00159550
 * Program  : drastic64
 */


long render_scanline_3d_4x(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = (param_2 & 0x7fffff) * 0x800;
  if (*(int *)(*(long *)(param_1 + 8) + 0x468) == 0) {
    return *(long *)(polygon_sort_list_15121 + param_1 + 0xe5518) + lVar1;
  }
  return *(long *)(polygon_sort_list_15121 + param_1 + 0xe5520) + lVar1;
}


