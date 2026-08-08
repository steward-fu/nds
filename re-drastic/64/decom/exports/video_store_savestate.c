/*
 * Ghidra decompilation
 *
 * Function : video_store_savestate
 * Address  : 001317d0
 * Program  : drastic64
 */


void video_store_savestate(long param_1,long param_2,undefined4 param_3)

{
  video_2d_store_savestate(param_1 + 0x2e78);
  video_2d_store_savestate(param_1 + 0x84298,param_2,param_3);
  geometry_store_savestate(param_1 + 0x356cf0,param_2,param_3);
  **(undefined2 **)(param_2 + 0x20) = 0;
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 2;
  return;
}


