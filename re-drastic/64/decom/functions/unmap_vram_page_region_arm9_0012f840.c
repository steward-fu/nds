/*
 * Ghidra decompilation
 *
 * Function : unmap_vram_page_region_arm9
 * Address  : 0012f840
 * Program  : drastic64
 */


void unmap_vram_page_region_arm9(long *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*param_1 + 0x15068) - (ulong)(param_2 * 0x4000);
  unmap_memory_page_region_direct
            (*(undefined8 *)(*param_1 + 0xfba88),param_2 * 0x4000 + 0x6000000,param_3 << 0xe);
  if (param_2 < 0x200) {
    uVar1 = param_2 >> 5;
    *(uint *)((long)param_1 + (ulong)uVar1 * 4 + 0x21e0) =
         *(uint *)((long)param_1 + (ulong)uVar1 * 4 + 0x21e0) |
         (1 << (ulong)(param_3 & 0x1f)) + -1 << (ulong)(param_2 & 0x1f);
    *(uint *)(param_1 + 0x444) = *(uint *)(param_1 + 0x444) | 1 << (ulong)(uVar1 & 0x1f);
  }
  param_3 = param_2 + param_3;
  do {
    lVar3 = (ulong)param_2 * 2;
    uVar2 = *(ushort *)((long)param_1 + lVar3 + 0x2224) & ~(ushort)(1 << (ulong)(param_4 & 0x1f));
    *(ushort *)((long)param_1 + lVar3 + 0x2224) = uVar2;
    param_1[(ulong)param_2 + 0x14] = lVar4;
    *(undefined *)((long)param_1 + (ulong)param_2 + 0x2a24) = 0;
    param_2 = param_2 + 1;
    *(ushort *)(param_1 + 0x5ce) = uVar2 | *(ushort *)(param_1 + 0x5ce);
    lVar4 = lVar4 + -0x4000;
  } while (param_2 != param_3);
  return;
}


