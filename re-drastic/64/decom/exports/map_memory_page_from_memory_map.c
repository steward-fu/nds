/*
 * Ghidra decompilation
 *
 * Function : map_memory_page_from_memory_map
 * Address  : 00113920
 * Program  : drastic64
 */


void map_memory_page_from_memory_map(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = param_2 >> 0xb & 0x1fffff;
  uVar2 = (uint)param_2;
  if (uVar2 < 0x10000000) {
    lVar4 = (ulong)(uVar2 >> 0x17) * 0x60;
    lVar1 = *(long *)(param_1 + 0x1000000) + lVar4;
    if (*(char *)(lVar1 + 0x58) == '\0') {
      lVar4 = *(long *)(lVar1 + 8) +
              (ulong)(uVar2 & *(uint *)(*(long *)(param_1 + 0x1000000) + lVar4));
      if (*(char *)(lVar1 + 0x59) == '\0') {
        if (lVar4 != 0) {
          *(long *)(param_1 + uVar3 * 8) = (long)(lVar4 - (param_2 & 0xffffffff)) >> 2;
          return;
        }
      }
      else if (lVar4 != 0) {
        lVar4 = lVar4 - (param_2 & 0xffffffff);
        goto LAB_001139a4;
      }
    }
  }
  else if ((0xfffeffff < uVar2) &&
          (*(int *)(*(long *)(nds_system + param_1 + 0xb04010) + 0x210c) == 1)) {
    lVar4 = (*(long *)(nds_system + param_1 + 0xb04008) + 0x10020 + (param_2 & 0xfff)) -
            (param_2 & 0xffffffff);
LAB_001139a4:
    *(ulong *)(param_1 + uVar3 * 8) = lVar4 >> 2 | 0x4000000000000000;
    return;
  }
  *(undefined8 *)(param_1 + uVar3 * 8) = 0x4000000000000000;
  return;
}


