/*
 * Ghidra decompilation
 *
 * Function : dma_calculate_cycles
 * Address  : 0011eef0
 * Program  : drastic64
 */


int dma_calculate_cycles(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (uint)((ulong)param_2 >> 0x18) & 0xff;
  if (0xfffffff < (uint)param_2) {
    uVar4 = 0;
  }
  uVar2 = (uint)((ulong)param_1 >> 0x18) & 0xff;
  if (0xfffffff < (uint)param_1) {
    uVar2 = 0;
  }
  uVar1 = (uint)param_3 & 0x1fffff;
  if ((param_3 & 0x1fffff) == 0) {
    uVar1 = 0x200000;
  }
  lVar3 = ((param_3 >> 0x1a & 1) + (param_4 & 0xffffffff) * 2) * 0x10;
  if (uVar2 != uVar4) {
    iVar5 = *(int *)(cycles_sequential_11153 + (lVar3 + (ulong)uVar4) * 4);
    if (uVar4 != 6) {
      iVar5 = iVar5 + *(int *)(cycles_sequential_11153 + (lVar3 + (ulong)uVar2) * 4);
    }
    return uVar1 * iVar5;
  }
  return uVar1 * *(int *)(&cycles_non_sequential_11154 + (lVar3 + (ulong)uVar2) * 4);
}


