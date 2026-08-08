/*
 * Ghidra decompilation
 *
 * Function : map_memory_page
 * Address  : 00113ad0
 * Program  : drastic64
 */


void map_memory_page(long param_1,long param_2,uint param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(nds_system + param_1 + 0xb04008);
  if ((*(uint *)(lVar4 + 0xfd4d8) <= param_3 + 0x800) &&
     ((param_3 < *(uint *)(lVar4 + 0xfd4d0) || (*(uint *)(lVar4 + 0xfd4d4) <= param_3 + 0x800)))) {
    lVar1 = param_1 + (ulong)(param_3 >> 0x15) * 4;
    lVar4 = param_1 + (ulong)(ushort)(param_3 >> 0x10) * 4;
    *(uint *)(nds_system + lVar1 + 0xb08018) =
         1 << (ulong)(param_3 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb08018);
    uVar3 = (long)(param_2 - (ulong)param_3) >> 2;
    *(uint *)(nds_system + lVar4 + 0xb04018) =
         1 << (ulong)(param_3 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar4 + 0xb04018);
    uVar2 = uVar3 | 0x4000000000000000;
    if (param_4 == 0) {
      uVar2 = uVar3;
    }
    *(ulong *)(param_1 + (ulong)(param_3 >> 0xb) * 8) = uVar2;
  }
  return;
}


