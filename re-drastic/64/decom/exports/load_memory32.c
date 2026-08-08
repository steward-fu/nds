/*
 * Ghidra decompilation
 *
 * Function : load_memory32
 * Address  : 001196c0
 * Program  : drastic64
 */


ulong load_memory32(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  
  uVar6 = (param_2 & 0xffffffff) >> 0xb;
  uVar9 = *(ulong *)(param_1 + uVar6 * 8);
  if ((uVar9 & 0x3fffffffffffffff) == 0) {
    uVar14 = (uint)param_2;
    if (uVar14 < 0x10000000) {
      lVar11 = *(long *)(param_1 + 0x1000000);
      lVar10 = (ulong)(uVar14 >> 0x17) * 0x60;
      lVar1 = lVar11 + lVar10;
      uVar15 = (uint)*(byte *)(lVar1 + 0x58);
      if (*(byte *)(lVar1 + 0x58) == 1) {
        uVar3 = uVar14 & 0x7ff;
        puVar7 = (uint *)(**(code **)(lVar1 + 8))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
        uVar5 = uVar14 - uVar3;
        lVar10 = param_1 + (ulong)(uVar5 >> 0x15) * 4;
        lVar1 = param_1 + (ulong)(ushort)(uVar5 >> 0x10) * 4;
        *(uint *)(nds_system + lVar10 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar10 + 0xb08018);
        *(uint *)(nds_system + lVar1 + 0xb04018) =
             uVar15 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb04018);
        *(ulong *)(param_1 + (ulong)(uVar5 >> 0xb) * 8) =
             (long)((long)puVar7 + (-(ulong)(uVar14 - uVar3) - (ulong)uVar3)) >> 2 |
             0x4000000000000000;
        uVar6 = (ulong)*puVar7;
      }
      else {
        if (uVar15 == 2) {
                    /* WARNING: Could not recover jumptable at 0x001197fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(lVar1 + 0x18))
                            (*(undefined8 *)(nds_system + param_1 + 0xb04008),
                             uVar14 & *(uint *)(lVar11 + lVar10));
          return uVar6;
        }
        if (uVar15 != 0) {
          return 0;
        }
        lVar2 = param_1 + (ulong)(uVar14 >> 0x15) * 4;
        lVar13 = *(long *)(lVar1 + 8);
        uVar12 = (ulong)(uVar14 & *(uint *)(lVar11 + lVar10));
        lVar10 = param_1 + (param_2 >> 0x10 & 0xffff) * 4;
        cVar4 = *(char *)(lVar1 + 0x59);
        *(uint *)(nds_system + lVar2 + 0xb08018) =
             1 << (ulong)(uVar14 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb08018);
        uVar8 = (long)((lVar13 + (uVar12 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2;
        *(uint *)(nds_system + lVar10 + 0xb04018) =
             1 << (ulong)((uint)uVar6 & 0x1f) | *(uint *)(nds_system + lVar10 + 0xb04018);
        uVar9 = uVar8 | 0x4000000000000000;
        if (cVar4 == '\0') {
          uVar9 = uVar8;
        }
        *(ulong *)(param_1 + uVar6 * 8) = uVar9;
        uVar6 = (ulong)*(uint *)(lVar13 + uVar12);
      }
    }
    else {
      uVar6 = 0xffffffff;
    }
  }
  else {
    uVar6 = (ulong)*(uint *)((param_2 & 0xffffffff) + uVar9 * 4);
  }
  return uVar6;
}


