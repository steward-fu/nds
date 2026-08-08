/*
 * Ghidra decompilation
 *
 * Function : geometry_load_clip_matrix_element
 * Address  : 0015f860
 * Program  : drastic64
 */


undefined4 geometry_load_clip_matrix_element(long param_1,ulong param_2)

{
  if (*(char *)(param_1 + 0x9ad0) != '\0') {
    geometry_matrix_multiply_4x4_by_4x4_asm
              (param_1 + 0x97e4,param_1 + 0x9824,*(undefined8 *)(param_1 + 0x9a58));
    *(undefined *)(param_1 + 0x9ad0) = 0;
  }
  return *(undefined4 *)(param_1 + (param_2 & 0xffffffff) * 4 + 0x97e4);
}


