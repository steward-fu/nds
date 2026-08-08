/*
 * Ghidra decompilation
 *
 * Function : reset_video_2d
 * Address  : 001436a0
 * Program  : drastic64
 */


void reset_video_2d(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)param_1[0x18];
  plVar2 = (long *)param_1[0x2e];
  param_1[5] = *(long *)(*param_1 + ((ulong)*(byte *)((long)param_1 + 0xb7) + 0x42e) * 8);
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((long)param_1 + 0xaa) = 0;
  *(undefined2 *)((long)param_1 + 0xb4) = 0x300;
  *(undefined *)((long)param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0x17) = 0;
  param_1[0x10283] = 0;
  lVar3 = *(long *)((long)plVar1 + 0x94);
  param_1[0x1a] = *(long *)(*plVar1 + ((ulong)*(byte *)((long)plVar1 + 0xb7) + 0x5ca) * 8);
  param_1[0x1f] = lVar3;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  param_1[0x1b] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x7f000000000000;
  *(undefined4 *)(param_1 + 0x2d) = 0xf07007f;
  *(undefined *)((long)param_1 + 0x16c) = 4;
  *(undefined *)((long)param_1 + 0x16e) = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  lVar3 = *(long *)((long)plVar2 + 0x94);
  param_1[0x30] = *(long *)(*plVar2 + ((ulong)*(byte *)((long)plVar2 + 0xb7) + 0x5ca) * 8);
  param_1[0x35] = lVar3;
  plVar1 = (long *)param_1[0x44];
  *(undefined8 *)((long)param_1 + 0x1b4) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0x7f000000000000;
  *(undefined4 *)(param_1 + 0x43) = 0xf07007f;
  *(undefined *)((long)param_1 + 0x21c) = 4;
  *(undefined *)((long)param_1 + 0x21e) = 1;
  param_1[0x3f] = 0;
  lVar3 = *(long *)((long)plVar1 + 0x94);
  param_1[0x46] = *(long *)(*plVar1 + ((ulong)*(byte *)((long)plVar1 + 0xb7) + 0x5ca) * 8);
  param_1[0x4b] = lVar3;
  *(undefined8 *)((long)param_1 + 0x264) = 0;
  param_1[0x47] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0x7f000000000000;
  *(undefined4 *)(param_1 + 0x59) = 0xf07007f;
  *(undefined *)((long)param_1 + 0x2cc) = 4;
  *(undefined *)((long)param_1 + 0x2ce) = 1;
  plVar1 = (long *)param_1[0x5a];
  lVar3 = *plVar1;
  lVar4 = *(long *)((long)plVar1 + 0x94);
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x5c] = *(long *)(lVar3 + ((ulong)*(byte *)((long)plVar1 + 0xb7) + 0x5ca) * 8);
  param_1[0x61] = lVar4;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0x7f000000000000;
  *(undefined4 *)(param_1 + 0x6f) = 0xf07007f;
  *(undefined *)((long)param_1 + 0x37c) = 4;
  *(undefined *)((long)param_1 + 0x37e) = 1;
  param_1[0x6b] = 0;
  video_2d_reorder_layers();
  video_2d_update_bg_mode(param_1);
  return;
}


