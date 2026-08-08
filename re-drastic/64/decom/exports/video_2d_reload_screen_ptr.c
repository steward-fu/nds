/*
 * Ghidra decompilation
 *
 * Function : video_2d_reload_screen_ptr
 * Address  : 00142040
 * Program  : drastic64
 */


void video_2d_reload_screen_ptr(long **param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  byte bVar4;
  
  bVar1 = *(byte *)((long)param_1 + 0xb7);
  bVar4 = bVar1;
  if (((param_2 >> 7 & 1) == 0) &&
     (bVar4 = bVar1 ^ 1, *(int *)(*(long *)(**param_1 + 0xfba68) + 0x85a40) != 0)) {
    bVar4 = bVar1;
  }
  plVar3 = (long *)get_screen_ptr(bVar4);
  if (*(char *)(param_1 + 0x17) != '\0') {
    plVar3 = (long *)0x0;
  }
  param_1[7] = plVar3;
  uVar2 = get_screen_pitch(bVar4);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}


