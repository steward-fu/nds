/*
 * Ghidra decompilation
 *
 * Function : initialize_video_2d
 * Address  : 00143640
 * Program  : drastic64
 */


void initialize_video_2d(long **param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = param_3;
  param_1[3] = (long *)param_3[(ulong)param_2 + 0x5ca];
  plVar2 = (long *)param_3[(ulong)param_2 + 0x5cc];
  *(char *)((long)param_1 + 0xb7) = (char)param_2;
  plVar1 = *(long **)(*param_3 + 0xfd500);
  param_1[1] = plVar1;
  param_1[4] = param_3 + (ulong)param_2 * 4 + 0x426;
  param_1[6] = plVar2;
  *(uint *)((long)param_1 + 0x94) = param_2 << 0x15;
  *(uint *)(param_1 + 0x13) = param_2 << 0x15;
  param_1[0x18] = (long *)param_1;
  param_1[0x19] = plVar1;
  param_1[0x2e] = (long *)param_1;
  param_1[0x2f] = plVar1;
  param_1[0x44] = (long *)param_1;
  param_1[0x45] = plVar1;
  param_1[0x5a] = (long *)param_1;
  param_1[0x5b] = plVar1;
  return;
}


