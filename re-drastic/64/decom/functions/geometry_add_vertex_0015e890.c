/*
 * Ghidra decompilation
 *
 * Function : geometry_add_vertex
 * Address  : 0015e890
 * Program  : drastic64
 */


void geometry_add_vertex(long param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x300);
  if (*(char *)(param_1 + 0x9ad0) != '\0') {
    geometry_matrix_multiply_4x4_by_4x4_asm
              (param_1 + 0x97e4,param_1 + 0x9824,*(undefined8 *)(param_1 + 0x9a58));
    *(undefined *)(param_1 + 0x9ad0) = 0;
  }
  if (*(char *)(param_1 + 0x9ac4) == '\x03') {
    *(short *)(param_1 + 0x9a98) =
         *(short *)(param_1 + 0x9aa2) +
         (short)((ulong)((long)param_3 * (long)*(int *)(param_1 + 0x9874) +
                         (long)*(int *)(param_1 + 0x9864) * (long)param_2 +
                        (long)*(int *)(param_1 + 0x9884) * (long)param_4) >> 0x18);
    *(short *)(param_1 + 0x9a9a) =
         *(short *)(param_1 + 0x9aa4) +
         (short)((ulong)((long)param_3 * (long)*(int *)(param_1 + 0x9878) +
                         (long)param_2 * (long)*(int *)(param_1 + 0x9868) +
                        (long)param_4 * (long)*(int *)(param_1 + 0x9888)) >> 0x18);
  }
  if (uVar2 == 0x40) {
    geometry_transform_vertexes(param_1);
    uVar2 = *(uint *)(param_1 + 0x300);
  }
  lVar1 = param_1 + (ulong)uVar2 * 4;
  *(int *)(param_1 + (ulong)uVar2 * 4) = param_2;
  *(int *)(lVar1 + 0x100) = param_3;
  *(int *)(lVar1 + 0x200) = param_4;
  *(undefined4 *)(lVar1 + 0x52c) = *(undefined4 *)(param_1 + 0x9a98);
  *(uint *)(param_1 + 0x300) = uVar2 + 1;
  *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + 1;
  return;
}


