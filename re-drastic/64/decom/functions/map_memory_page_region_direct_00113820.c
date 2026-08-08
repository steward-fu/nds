/*
 * Ghidra decompilation
 *
 * Function : map_memory_page_region_direct
 * Address  : 00113820
 * Program  : drastic64
 */


void map_memory_page_region_direct(long param_1,long param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  param_3 = param_3 - (int)param_2;
  param_4 = param_4 + (int)param_2;
  if (param_5 != 0) {
    do {
      uVar2 = param_3 + (int)param_2;
      lVar3 = param_1 + (ulong)(uVar2 >> 0x15) * 4;
      lVar1 = param_1 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
      *(uint *)(nds_system + lVar3 + 0xb08018) =
           1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
      *(uint *)(nds_system + lVar1 + 0xb04018) =
           1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb04018);
      *(ulong *)(param_1 + (ulong)(uVar2 >> 0xb) * 8) =
           (long)(param_2 - (ulong)(uint)(param_3 + (int)param_2)) >> 2 | 0x4000000000000000;
      param_2 = param_2 + 0x800;
    } while (param_4 != (int)param_2);
    return;
  }
  do {
    uVar2 = param_3 + (int)param_2;
    lVar3 = param_1 + (ulong)(uVar2 >> 0x15) * 4;
    lVar1 = param_1 + (ulong)(ushort)(uVar2 >> 0x10) * 4;
    *(uint *)(nds_system + lVar3 + 0xb08018) =
         1 << (ulong)(uVar2 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xb08018);
    *(uint *)(nds_system + lVar1 + 0xb04018) =
         1 << (ulong)(uVar2 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb04018);
    *(long *)(param_1 + (ulong)(uVar2 >> 0xb) * 8) = (long)(param_2 - (ulong)uVar2) >> 2;
    param_2 = param_2 + 0x800;
  } while (param_4 != (int)param_2);
  return;
}


