/*
 * Ghidra decompilation
 *
 * Function : store_oam_deferred_first8
 * Address  : 001126e0
 * Program  : drastic64
 */


void store_oam_deferred_first8(long param_1,uint param_2,char param_3)

{
  void *__dest;
  uint uVar1;
  long lVar2;
  
  __dest = (void *)(param_1 + 0x15870);
  if (*(code **)(param_1 + 0xfbff8) != store_oam_deferred8) {
    memcpy(__dest,(void *)(param_1 + 0x15070),0x800);
    *(void **)(param_1 + 0xfbfe0) = __dest;
    *(undefined *)(param_1 + 0xfc030) = 0;
    *(code **)(param_1 + 0xfbff8) = store_oam_deferred8;
    *(code **)(param_1 + 0xfc000) = store_oam_deferred16;
    *(code **)(param_1 + 0xfc008) = store_oam_deferred32;
  }
  uVar1 = param_2 & 0x7ff;
  if (*(char *)((long)__dest + (ulong)uVar1) != param_3) {
    lVar2 = *(long *)(param_1 + 0xfba70) + 0x84298;
    if ((param_2 & 0x400) == 0) {
      lVar2 = *(long *)(param_1 + 0xfba70) + 0x2e78;
    }
    video_2d_queue_event
              (lVar2,uVar1 + 0x200000,param_3,1,*(undefined2 *)(*(long *)(param_1 + 0xfba68) + 0x14)
              );
    *(char *)((long)__dest + (ulong)uVar1) = param_3;
  }
  return;
}


