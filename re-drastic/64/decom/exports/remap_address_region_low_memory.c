/*
 * Ghidra decompilation
 *
 * Function : remap_address_region_low_memory
 * Address  : 00113170
 * Program  : drastic64
 */


int remap_address_region_low_memory(long param_1,long param_2,ulong param_3,uint param_4)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  void *__start;
  
  __start = (void *)(param_2 + *(long *)(param_1 + 0xfd4f0));
  if (*(char *)(param_1 + 0xfd513) != '\0') {
    uVar2 = 0;
    if (*(uint *)(param_1 + 0xfd4dc) != 0) {
      uVar2 = param_4 / *(uint *)(param_1 + 0xfd4dc);
    }
    iVar3 = remap_file_pages(__start,param_3 & 0xffffffff,0,(ulong)uVar2,0);
    return iVar3;
  }
  if ((uint)param_3 >> 0xe != 0) {
    pvVar1 = (void *)((long)__start + ((ulong)(((uint)(param_3 >> 0xe) & 0x3ffff) - 1) + 1) * 0x4000
                     );
    iVar3 = (int)__start;
    do {
      munmap(__start,0x4000);
      pvVar4 = mmap(__start,0x4000,3,1,*(int *)(param_1 + 0xfd4e8),
                    (ulong)((param_4 - iVar3) + (int)__start));
      if (__start != pvVar4) {
        __printf_chk(1,"ERROR: Low memory remap to %p didn\'t map to same location (got %p)\n",
                     __start,pvVar4);
        return -1;
      }
      __start = (void *)((long)__start + 0x4000);
    } while (__start != pvVar1);
  }
  return 0;
}


