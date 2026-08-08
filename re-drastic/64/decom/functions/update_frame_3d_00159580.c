/*
 * Ghidra decompilation
 *
 * Function : update_frame_3d
 * Address  : 00159580
 * Program  : drastic64
 */


void update_frame_3d(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0x4a0) != 0) {
    update_frame_3d_4x();
    return;
  }
  update_frame_3d_1x();
  return;
}


