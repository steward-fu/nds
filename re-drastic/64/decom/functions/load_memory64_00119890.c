/*
 * Ghidra decompilation
 *
 * Function : load_memory64
 * Address  : 00119890
 * Program  : drastic64
 */


ulong load_memory64(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  
  uVar11 = *(ulong *)(param_1 + (param_2 >> 0xb & 0x1fffff) * 8);
  if ((uVar11 & 0x3fffffffffffffff) == 0) {
    uVar1 = (int)param_2 + 4;
    uVar11 = extended_load32();
    uVar11 = uVar11 & 0xffffffff;
    if (uVar1 < 0x10000000) {
      lVar12 = *(long *)(param_1 + 0x1000000);
      lVar10 = (ulong)(uVar1 >> 0x17) * 0x60;
      lVar8 = lVar12 + lVar10;
      uVar15 = (uint)*(byte *)(lVar8 + 0x58);
      if (*(byte *)(lVar8 + 0x58) == 1) {
        uVar3 = uVar1 & 0x7ff;
        puVar7 = (uint *)(**(code **)(lVar8 + 8))
                                   (*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar1);
        uVar6 = uVar1 - uVar3;
        lVar10 = param_1 + (ulong)(uVar6 >> 0x15) * 4;
        lVar8 = param_1 + (ulong)(ushort)(uVar6 >> 0x10) * 4;
        *(uint *)(nds_system + lVar10 + 0xb08018) =
             1 << (ulong)(uVar6 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar10 + 0xb08018);
        *(uint *)(nds_system + lVar8 + 0xb04018) =
             uVar15 << (ulong)(uVar6 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar8 + 0xb04018);
        *(ulong *)(param_1 + (ulong)(uVar6 >> 0xb) * 8) =
             (long)((long)puVar7 + (-(ulong)(uVar1 - uVar3) - (ulong)uVar3)) >> 2 |
             0x4000000000000000;
        uVar11 = uVar11 | (ulong)*puVar7 << 0x20;
      }
      else if (uVar15 == 2) {
        lVar8 = (**(code **)(lVar8 + 0x18))
                          (*(undefined8 *)(nds_system + param_1 + 0xb04008),
                           uVar1 & *(uint *)(lVar12 + lVar10));
        uVar11 = uVar11 | lVar8 << 0x20;
      }
      else {
        if (uVar15 != 0) {
          return uVar11;
        }
        lVar2 = param_1 + (ulong)(uVar1 >> 0x15) * 4;
        lVar14 = *(long *)(lVar8 + 8);
        uVar13 = (ulong)(uVar1 & *(uint *)(lVar12 + lVar10));
        lVar10 = param_1 + (ulong)(ushort)(uVar1 >> 0x10) * 4;
        cVar5 = *(char *)(lVar8 + 0x59);
        *(uint *)(nds_system + lVar2 + 0xb08018) =
             1 << (ulong)(uVar1 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb08018);
        uVar9 = (long)((lVar14 + (uVar13 & 0xfffff800)) - ((ulong)uVar1 & 0xfffff800)) >> 2;
        *(uint *)(nds_system + lVar10 + 0xb04018) =
             1 << (ulong)(uVar1 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar10 + 0xb04018);
        uVar4 = uVar9 | 0x4000000000000000;
        if (cVar5 == '\0') {
          uVar4 = uVar9;
        }
        *(ulong *)(param_1 + (ulong)(uVar1 >> 0xb) * 8) = uVar4;
        uVar11 = uVar11 | (ulong)*(uint *)(lVar14 + uVar13) << 0x20;
      }
    }
    else {
      uVar11 = uVar11 | 0xffffffff00000000;
    }
  }
  else {
    uVar11 = *(ulong *)(uVar11 * 4 + (param_2 & 0xffffffff));
  }
  return uVar11;
}


