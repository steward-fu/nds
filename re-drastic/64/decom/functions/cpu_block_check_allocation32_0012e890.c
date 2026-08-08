/*
 * Ghidra decompilation
 *
 * Function : cpu_block_check_allocation32
 * Address  : 0012e890
 * Program  : drastic64
 */


undefined8 cpu_block_check_allocation32(long param_1,ulong param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = param_2 & 0xffffffff;
  if ((uint)param_2 < 0x2000000) {
    if ((*(uint *)(*(long *)(nds_system + param_1 + 0xb063d8) + ((uVar4 >> 6 & 0x1ff) + 0x3bc6c) * 4
                  + 8) >> (uVar4 >> 1 & 0x1f) & 3) != 0) {
      uVar1 = cpu_block_modify_itcm();
      return uVar1;
    }
  }
  else {
    lVar3 = *(long *)(nds_system + param_1 + 0xb063d0) + (param_2 >> 0x17 & 0x1ff) * 0x60;
    puVar2 = (uint *)(**(code **)(lVar3 + 0x50))
                               (*(long *)(nds_system + param_1 + 0xb063d8),lVar3,uVar4);
    if ((puVar2 != (uint *)0x0) && ((*puVar2 >> (uVar4 >> 1 & 0x1f) & 3) != 0)) {
      if (0x2ffffff < (uint)param_2) {
        return 1;
      }
      lVar3 = *(long *)(param_1 + 0x2088) + (uVar4 >> 7 & 0x7fff) * 4;
      *(uint *)(nds_system + lVar3 + 0xfde138) =
           1 << (uVar4 >> 2 & 0x1f) | *(uint *)(nds_system + lVar3 + 0xfde138);
      return 1;
    }
  }
  return 0;
}


