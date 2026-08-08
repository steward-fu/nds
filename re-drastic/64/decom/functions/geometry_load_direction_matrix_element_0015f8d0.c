/*
 * Ghidra decompilation
 *
 * Function : geometry_load_direction_matrix_element
 * Address  : 0015f8d0
 * Program  : drastic64
 */


undefined4 geometry_load_direction_matrix_element(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x9a60);
  if (5 < param_2) {
    return *(undefined4 *)(lVar1 + (ulong)(param_2 + 2) * 4);
  }
  if (param_2 < 3) {
    return *(undefined4 *)(lVar1 + (ulong)param_2 * 4);
  }
  return *(undefined4 *)(lVar1 + (ulong)(param_2 + 1) * 4);
}


