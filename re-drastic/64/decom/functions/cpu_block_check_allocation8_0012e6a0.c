/*
 * Ghidra decompilation
 *
 * Function : cpu_block_check_allocation8
 * Address  : 0012e6a0
 * Program  : drastic64
 */


ulong cpu_block_check_allocation8(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  
  if (param_2 < 0x2000000) {
    if ((*(uint *)(*(long *)(nds_system + param_1 + 0xb063d8) +
                   (((ulong)(param_2 >> 6) & 0x1ff) + 0x3bc6c) * 4 + 8) >>
         ((ulong)(param_2 >> 1) & 0x1f) & 1) != 0) {
      uVar2 = cpu_block_modify_itcm(param_1,param_2 & 0xfffffffc);
      return uVar2;
    }
  }
  else {
    lVar4 = *(long *)(nds_system + param_1 + 0xb063d0) + (ulong)(param_2 >> 0x17) * 0x60;
    puVar3 = (uint *)(**(code **)(lVar4 + 0x50))
                               (*(long *)(nds_system + param_1 + 0xb063d8),lVar4,
                                param_2 & 0xfffffffe);
    if ((puVar3 != (uint *)0x0) &&
       (uVar1 = *puVar3 >> ((ulong)(param_2 >> 1) & 0x1f), uVar2 = (ulong)(uVar1 & 1),
       (uVar1 & 1) != 0)) {
      if (0x2ffffff < (param_2 & 0xfffffffe)) {
        return uVar2;
      }
      lVar4 = *(long *)(param_1 + 0x2088) + ((ulong)(param_2 >> 7) & 0x7fff) * 4;
      *(uint *)(nds_system + lVar4 + 0xfde138) =
           1 << ((ulong)(param_2 >> 2) & 0x1f) | *(uint *)(nds_system + lVar4 + 0xfde138);
      return uVar2;
    }
  }
  return 0;
}


