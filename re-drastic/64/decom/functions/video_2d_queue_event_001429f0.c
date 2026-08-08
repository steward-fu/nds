/*
 * Ghidra decompilation
 *
 * Function : video_2d_queue_event
 * Address  : 001429f0
 * Program  : drastic64
 */


void video_2d_queue_event
               (long param_1,undefined4 param_2,undefined4 param_3,undefined param_4,
               undefined param_5)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x8141c);
  if (uVar1 == 0x8000) {
    puts("VIDEO EVENT BUFFER FULL");
  }
  lVar2 = param_1 + (ulong)uVar1 * 0xc;
  *(undefined *)(lVar2 + 0x21420) = param_5;
  *(undefined4 *)(lVar2 + 0x21418) = param_2;
  *(undefined4 *)(lVar2 + 0x2141c) = param_3;
  *(undefined *)(lVar2 + 0x21421) = param_4;
  *(uint *)(param_1 + 0x8141c) = uVar1 + 1;
  return;
}


