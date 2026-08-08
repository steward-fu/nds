/*
 * Ghidra decompilation
 *
 * Function : map_memory_page_direct
 * Address  : 001137b0
 * Program  : drastic64
 */


void map_memory_page_direct(long param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = param_1 + (param_3 >> 0x15 & 0x7ff) * 4;
  lVar1 = param_1 + (param_3 >> 0x10 & 0xffff) * 4;
  *(uint *)(nds_system + lVar2 + 0xb08018) =
       1 << (ulong)((uint)(param_3 >> 0x10) & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb08018);
  uVar5 = param_3 >> 0xb & 0x1fffff;
  uVar4 = (long)(param_2 - (param_3 & 0xffffffff)) >> 2;
  *(uint *)(nds_system + lVar1 + 0xb04018) =
       1 << (ulong)((uint)uVar5 & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb04018);
  uVar3 = uVar4 | 0x4000000000000000;
  if (param_4 == 0) {
    uVar3 = uVar4;
  }
  *(ulong *)(param_1 + uVar5 * 8) = uVar3;
  return;
}


