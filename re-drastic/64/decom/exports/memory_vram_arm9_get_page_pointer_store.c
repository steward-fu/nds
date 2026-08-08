/*
 * Ghidra decompilation
 *
 * Function : memory_vram_arm9_get_page_pointer_store
 * Address  : 001105f0
 * Program  : drastic64
 */


long memory_vram_arm9_get_page_pointer_store(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0xfba70);
  lVar1 = *(long *)(lVar4 + ((param_2 >> 0xe & 0x3ff) + 0x14) * 8) + (param_2 & 0xffc000);
  bVar3 = *(byte *)(lVar4 + (param_2 >> 0xe & 0x3ff) + 0x2a24);
  lVar2 = param_1 + 0xab070;
  if (*(long *)(param_1 + 0x15068) != lVar1) {
    lVar2 = lVar1;
  }
  uVar5 = (uint)bVar3;
  if (bVar3 < 0x20) {
    lVar1 = lVar4 + (ulong)(bVar3 >> 3);
    *(uint *)(polygon_sort_list_13776 + lVar4 + 0x6e238) =
         *(uint *)(polygon_sort_list_13776 + lVar4 + 0x6e238) | 1 << (ulong)(uVar5 & 0x1f);
    polygon_sort_list_13776[lVar1 + 0x6e200] =
         polygon_sort_list_13776[lVar1 + 0x6e200] & ((byte)(1 << (ulong)(uVar5 & 7)) ^ 0xff);
    return lVar2 + (param_2 & 0x3fff);
  }
  *(uint *)(polygon_sort_list_13776 + lVar4 + 0x6e23c) =
       1 << (ulong)(uVar5 - 0x20 & 0x1f) | *(uint *)(polygon_sort_list_13776 + lVar4 + 0x6e23c);
  return lVar2 + (param_2 & 0x3fff);
}


