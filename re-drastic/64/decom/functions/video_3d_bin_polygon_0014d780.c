/*
 * Ghidra decompilation
 *
 * Function : video_3d_bin_polygon
 * Address  : 0014d780
 * Program  : drastic64
 */


void video_3d_bin_polygon(long param_1,undefined2 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1000);
  *(undefined2 *)(param_1 + (ulong)uVar1 * 2) = param_2;
  *(uint *)(param_1 + 0x1000) = uVar1 + 1;
  return;
}


