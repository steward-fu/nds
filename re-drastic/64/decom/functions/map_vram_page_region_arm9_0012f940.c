/*
 * Ghidra decompilation
 *
 * Function : map_vram_page_region_arm9
 * Address  : 0012f940
 * Program  : drastic64
 */


void map_vram_page_region_arm9(long *param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = (param_3 + 0x1800) * 0x4000;
  uVar3 = (ulong)param_3;
  unmap_memory_page_region_direct(*(undefined8 *)(*param_1 + 0xfba88),iVar1,param_4 << 0xe);
  if (param_3 < 0x200) {
    uVar2 = param_3 >> 5;
    *(uint *)((long)param_1 + (ulong)uVar2 * 4 + 0x21e0) =
         *(uint *)((long)param_1 + (ulong)uVar2 * 4 + 0x21e0) |
         (1 << (ulong)(param_4 & 0x1f)) + -1 << (ulong)(param_3 & 0x1f);
    *(uint *)(param_1 + 0x444) = *(uint *)(param_1 + 0x444) | 1 << (ulong)(uVar2 & 0x1f);
  }
  do {
    param_1[uVar3 + 0x14] = param_2 - (ulong)(iVar1 + 0xfa000000);
    *(ushort *)((long)param_1 + uVar3 * 2 + 0x2224) =
         (ushort)(1 << (ulong)(param_5 & 0x1f)) | *(ushort *)((long)param_1 + uVar3 * 2 + 0x2224);
    *(char *)((long)param_1 + uVar3 + 0x2a24) = ((char)param_5 * '\b' - (char)param_3) + (char)uVar3
    ;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar2;
  } while (uVar2 != param_3 + param_4);
  return;
}


