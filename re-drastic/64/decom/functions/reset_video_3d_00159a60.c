/*
 * Ghidra decompilation
 *
 * Function : reset_video_3d
 * Address  : 00159a60
 * Program  : drastic64
 */


void reset_video_3d(void *param_1)

{
  memset(param_1,0,0xc0000);
  memset((void *)((long)param_1 + 0xc0000),0,0xc0000);
  *(void **)((long)param_1 + 0x249498) = param_1;
  *(void **)((long)param_1 + 0x2494a0) = (void *)((long)param_1 + 0xc0000);
  *(void **)((long)param_1 + 0x2494a8) = param_1;
  return;
}


