/*
 * Ghidra decompilation
 *
 * Function : extended_memory_get_page_ptr
 * Address  : 00118040
 * Program  : drastic64
 */


long extended_memory_get_page_ptr(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = (param_2 >> 0x17 & 0x1ff) * 0x60;
  uVar5 = (uint)param_2;
  lVar8 = *(long *)(param_1 + 0x1000000) + lVar6;
  if (*(char *)(lVar8 + 0x58) != '\0') {
    lVar6 = 0;
    if (*(char *)(lVar8 + 0x58) == '\x01') {
      uVar3 = uVar5 & 0x7ff;
      lVar6 = (**(code **)(lVar8 + 8))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
      uVar4 = uVar5 - uVar3;
      lVar1 = param_1 + (ulong)(uVar4 >> 0x15) * 4;
      lVar8 = param_1 + (ulong)(ushort)(uVar4 >> 0x10) * 4;
      *(uint *)(nds_system + lVar1 + 0xb08018) =
           1 << (ulong)(uVar4 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb08018);
      *(uint *)(nds_system + lVar8 + 0xb04018) =
           1 << (ulong)(uVar4 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
      *(ulong *)(param_1 + (ulong)(uVar4 >> 0xb) * 8) =
           (long)((lVar6 - (ulong)uVar3) - (ulong)(uVar5 - uVar3)) >> 2 | 0x4000000000000000;
    }
    return lVar6;
  }
  lVar2 = param_1 + (ulong)(uVar5 >> 0x15) * 4;
  lVar1 = param_1 + (param_2 >> 0x10 & 0xffff) * 4;
  lVar8 = *(long *)(lVar8 + 8);
  uVar7 = (ulong)(uVar5 & *(uint *)(*(long *)(param_1 + 0x1000000) + lVar6));
  *(uint *)(nds_system + lVar2 + 0xb08018) =
       1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb08018);
  *(uint *)(nds_system + lVar1 + 0xb04018) =
       1 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb04018);
  *(ulong *)(param_1 + (ulong)(uVar5 >> 0xb) * 8) =
       (long)((lVar8 + (uVar7 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2 | 0x4000000000000000;
  return lVar8 + uVar7;
}


