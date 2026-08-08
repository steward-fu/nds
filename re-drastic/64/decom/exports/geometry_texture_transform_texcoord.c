/*
 * Ghidra decompilation
 *
 * Function : geometry_texture_transform_texcoord
 * Address  : 0015adf0
 * Program  : drastic64
 */


void geometry_texture_transform_texcoord(long param_1,int param_2,int param_3)

{
  *(short *)(param_1 + 0x9a98) =
       (short)((long)param_3 * (long)*(int *)(param_1 + 0x9874) +
               (long)*(int *)(param_1 + 0x9864) * (long)param_2 + (long)*(int *)(param_1 + 0x9884) +
               (long)*(int *)(param_1 + 0x9894) >> 0xc);
  *(short *)(param_1 + 0x9a9a) =
       (short)((long)param_3 * (long)*(int *)(param_1 + 0x9878) +
               (long)param_2 * (long)*(int *)(param_1 + 0x9868) + (long)*(int *)(param_1 + 0x9888) +
               (long)*(int *)(param_1 + 0x9898) >> 0xc);
  return;
}


