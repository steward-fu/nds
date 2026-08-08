/*
 * Ghidra decompilation
 *
 * Function : store_palette_deferred16
 * Address  : 00110d20
 * Program  : drastic64
 */


void store_palette_deferred16(long param_1,uint param_2,short param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = param_2 & 0x7ff;
  if (*(short *)(param_1 + 0x16870 + (ulong)uVar1) != param_3) {
    lVar2 = *(long *)(param_1 + 0xfba70) + 0x84298;
    if ((param_2 & 0x400) == 0) {
      lVar2 = *(long *)(param_1 + 0xfba70) + 0x2e78;
    }
    video_2d_queue_event
              (lVar2,uVar1 + 0x100000,param_3,2,*(undefined2 *)(*(long *)(param_1 + 0xfba68) + 0x14)
              );
    *(short *)(param_1 + 0x16870 + (ulong)uVar1) = param_3;
  }
  return;
}


