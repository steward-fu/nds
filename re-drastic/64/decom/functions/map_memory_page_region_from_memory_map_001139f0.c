/*
 * Ghidra decompilation
 *
 * Function : map_memory_page_region_from_memory_map
 * Address  : 001139f0
 * Program  : drastic64
 */


void map_memory_page_region_from_memory_map(long param_1,ulong param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar2 = (int)param_2;
  lVar4 = *(long *)(nds_system + param_1 + 0xb04008);
  do {
    uVar3 = (uint)param_2;
    if (uVar3 < 0x10000000) {
      lVar5 = 0x4000000000000000;
      lVar6 = (param_2 >> 0x17 & 0x1ff) * 0x60;
      lVar1 = *(long *)(param_1 + 0x1000000) + lVar6;
      if (*(char *)(lVar1 + 0x58) == '\0') {
        lVar6 = *(long *)(lVar1 + 8) +
                (ulong)(uVar3 & *(uint *)(*(long *)(param_1 + 0x1000000) + lVar6));
        if (*(char *)(lVar1 + 0x59) == '\0') {
          if (lVar6 != 0) {
            lVar5 = (long)(lVar6 - (param_2 & 0xffffffff)) >> 2;
          }
        }
        else if (lVar6 != 0) {
          lVar6 = lVar6 - (param_2 & 0xffffffff);
          goto LAB_00113aa4;
        }
      }
LAB_00113a58:
      *(long *)(param_1 + (ulong)(uVar3 >> 0xb) * 8) = lVar5;
    }
    else {
      lVar5 = 0x4000000000000000;
      if ((uVar3 < 0xffff0000) ||
         (*(int *)(*(long *)(nds_system + param_1 + 0xb04010) + 0x210c) != 1)) goto LAB_00113a58;
      lVar6 = (lVar4 + 0x10020 + (param_2 & 0xfff)) - (param_2 & 0xffffffff);
LAB_00113aa4:
      *(ulong *)(param_1 + (ulong)(uVar3 >> 0xb) * 8) = lVar6 >> 2 | 0x4000000000000000;
    }
    param_2 = (ulong)(uVar3 + 0x800);
    if (uVar3 + 0x800 == iVar2 + param_3) {
      return;
    }
  } while( true );
}


