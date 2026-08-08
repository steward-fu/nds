/*
 * Ghidra decompilation
 *
 * Function : remap_address_region_vram
 * Address  : 00113270
 * Program  : drastic64
 */


int remap_address_region_vram(long param_1,void *param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (*(char *)(param_1 + 0xfd513) != '\0') {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0xfd4dc) != 0) {
      uVar1 = param_4 / *(uint *)(param_1 + 0xfd4dc);
    }
    iVar2 = remap_file_pages(param_2,param_3 & 0xffffffff,0,(ulong)uVar1,0);
    return iVar2;
  }
  if ((uint)param_3 >> 0xe != 0) {
    pvVar4 = (void *)((long)param_2 +
                     (ulong)(((uint)(param_3 >> 0xe) & 0x3ffff) - 1) * 0x4000 + 0x4000);
    iVar2 = (int)param_2;
    do {
      munmap(param_2,0x4000);
      pvVar3 = mmap(param_2,0x4000,3,1,*(int *)(param_1 + 0xfd508),
                    (ulong)((param_4 - iVar2) + (int)param_2));
      if (param_2 != pvVar3) {
        __printf_chk(1,"ERROR: VRAM remap to %p didn\'t map to same location (got %p)\n",param_2,
                     pvVar3);
        return -1;
      }
      param_2 = (void *)((long)param_2 + 0x4000);
    } while (param_2 != pvVar4);
  }
  return 0;
}


