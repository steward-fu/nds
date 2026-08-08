/*
 * Ghidra decompilation
 *
 * Function : cpu_block_check_allocation_block8
 * Address  : 0012af40
 * Program  : drastic64
 */


bool cpu_block_check_allocation_block8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  long lVar6;
  
  uVar1 = param_2 + 0x1f;
  uVar3 = ~(-2 << ((ulong)(uVar1 >> 1) & 0x1f));
  uVar2 = -1 << ((ulong)(param_2 >> 1) & 0x1f);
  if (uVar1 >> 6 == param_2 >> 6) {
    if (param_2 < 0x2000000) {
      puVar5 = (uint *)(*(long *)(nds_system + param_1 + 0xb063d8) +
                       ((ulong)(param_2 >> 6) & 0x1ff) * 4 + 0xef1b8);
    }
    else {
      puVar5 = (uint *)(**(code **)(*(long *)(nds_system + param_1 + 0xb063d0) +
                                    (ulong)(param_2 >> 0x17) * 0x60 + 0x50))();
      if (puVar5 == (uint *)0x0) {
        return false;
      }
    }
    return (uVar2 & uVar3 & *puVar5) != 0;
  }
  if (param_2 < 0x2000000) {
    puVar5 = (uint *)(*(long *)(nds_system + param_1 + 0xb063d8) +
                     ((ulong)(param_2 >> 6) & 0x1ff) * 4 + 0xef1b8);
  }
  else {
    bVar4 = false;
    puVar5 = (uint *)(**(code **)(*(long *)(nds_system + param_1 + 0xb063d0) +
                                  (ulong)(param_2 >> 0x17) * 0x60 + 0x50))();
    if (puVar5 == (uint *)0x0) goto LAB_0012afd0;
  }
  bVar4 = (uVar2 & *puVar5) != 0;
LAB_0012afd0:
  if (uVar1 < 0x2000000) {
    puVar5 = (uint *)(*(long *)(nds_system + param_1 + 0xb063d8) +
                     ((ulong)(uVar1 >> 6) & 0x1ff) * 4 + 0xef1b8);
  }
  else {
    lVar6 = *(long *)(nds_system + param_1 + 0xb063d0) + (ulong)(uVar1 >> 0x17) * 0x60;
    puVar5 = (uint *)(**(code **)(lVar6 + 0x50))
                               (*(long *)(nds_system + param_1 + 0xb063d8),lVar6,uVar1);
    if (puVar5 == (uint *)0x0) {
      return bVar4;
    }
  }
  if ((uVar3 & *puVar5) != 0) {
    bVar4 = true;
  }
  return bVar4;
}


