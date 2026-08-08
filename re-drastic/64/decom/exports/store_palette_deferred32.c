/*
 * Ghidra decompilation
 *
 * Function : store_palette_deferred32
 * Address  : 00110da0
 * Program  : drastic64
 */


void store_palette_deferred32(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = param_2 & 0x7ff;
  if (*(int *)(param_1 + 0x16870 + (ulong)uVar1) != param_3) {
    lVar2 = *(long *)(param_1 + 0xfba70) + 0x84298;
    if ((param_2 & 0x400) == 0) {
      lVar2 = *(long *)(param_1 + 0xfba70) + 0x2e78;
    }
    video_2d_queue_event
              (lVar2,uVar1 + 0x100000,param_3,4,*(undefined2 *)(*(long *)(param_1 + 0xfba68) + 0x14)
              );
    *(int *)(param_1 + 0x16870 + (ulong)uVar1) = param_3;
  }
  return;
}


