/*
 * Ghidra decompilation
 *
 * Function : unmap_memory_page_region
 * Address  : 00114040
 * Program  : drastic64
 */


void unmap_memory_page_region(long param_1,ulong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(*(long *)(nds_system + param_1 + 0xb04008) + 0xfd4d0);
  uVar3 = (uint)param_2;
  if (uVar1 <= uVar3) {
    uVar2 = *(uint *)(*(long *)(nds_system + param_1 + 0xb04008) + 0xfd4d4);
    if (uVar3 + param_3 < uVar2) {
      unmap_memory_page_region_direct(param_1,param_2,uVar1 - uVar3);
      unmap_memory_page_region_direct(param_1,uVar1,(uVar3 + param_3) - uVar2);
      return;
    }
  }
  unmap_memory_page_region_direct(param_1,param_2 & 0xffffffff);
  return;
}


