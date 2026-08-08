/*
 * Ghidra decompilation
 *
 * Function : store_palette_deferred_first16
 * Address  : 00112a60
 * Program  : drastic64
 */


void store_palette_deferred_first16(long param_1,uint param_2,short param_3)

{
  void *__dest;
  uint uVar1;
  long lVar2;
  
  __dest = (void *)(param_1 + 0x16870);
  if (*(code **)(param_1 + 0xfbe78) != store_palette_deferred8) {
    memcpy(__dest,(void *)(param_1 + 0x16070),0x800);
    *(void **)(param_1 + 0xfbe60) = __dest;
    *(undefined *)(param_1 + 0xfbeb0) = 0;
    *(code **)(param_1 + 0xfbe78) = store_palette_deferred8;
    *(code **)(param_1 + 0xfbe80) = store_palette_deferred16;
    *(code **)(param_1 + 0xfbe88) = store_palette_deferred32;
  }
  uVar1 = param_2 & 0x7ff;
  if (*(short *)((long)__dest + (ulong)uVar1) != param_3) {
    lVar2 = *(long *)(param_1 + 0xfba70) + 0x84298;
    if ((param_2 & 0x400) == 0) {
      lVar2 = *(long *)(param_1 + 0xfba70) + 0x2e78;
    }
    video_2d_queue_event
              (lVar2,uVar1 + 0x100000,param_3,2,*(undefined2 *)(*(long *)(param_1 + 0xfba68) + 0x14)
              );
    *(short *)((long)__dest + (ulong)uVar1) = param_3;
  }
  return;
}


