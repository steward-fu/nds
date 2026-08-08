/*
 * Ghidra decompilation
 *
 * Function : load_memory8
 * Address  : 00119320
 * Program  : drastic64
 */


ulong load_memory8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  
  uVar11 = param_2 >> 0xb & 0x1fffff;
  uVar9 = *(ulong *)(param_1 + uVar11 * 8);
  if ((uVar9 & 0x3fffffffffffffff) == 0) {
    uVar8 = (uint)param_2;
    if (uVar8 < 0x10000000) {
      lVar12 = *(long *)(param_1 + 0x1000000);
      lVar10 = (ulong)(uVar8 >> 0x17) * 0x60;
      lVar1 = lVar12 + lVar10;
      uVar15 = (uint)*(byte *)(lVar1 + 0x58);
      if (*(byte *)(lVar1 + 0x58) == 1) {
        uVar3 = uVar8 & 0x7ff;
        pbVar6 = (byte *)(**(code **)(lVar1 + 8))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
        uVar5 = uVar8 - uVar3;
        lVar10 = param_1 + (ulong)(uVar5 >> 0x15) * 4;
        lVar1 = param_1 + (ulong)(ushort)(uVar5 >> 0x10) * 4;
        *(uint *)(nds_system + lVar10 + 0xb08018) =
             1 << (ulong)(uVar5 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar10 + 0xb08018);
        *(uint *)(nds_system + lVar1 + 0xb04018) =
             uVar15 << (ulong)(uVar5 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb04018);
        *(ulong *)(param_1 + (ulong)(uVar5 >> 0xb) * 8) =
             (long)(pbVar6 + (-(ulong)(uVar8 - uVar3) - (ulong)uVar3)) >> 2 | 0x4000000000000000;
        uVar9 = (ulong)*pbVar6;
      }
      else {
        if (uVar15 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00119460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(lVar1 + 8))
                            (*(undefined8 *)(nds_system + param_1 + 0xb04008),
                             uVar8 & *(uint *)(lVar12 + lVar10));
          return uVar9;
        }
        if (uVar15 != 0) {
          return 0;
        }
        lVar2 = param_1 + (ulong)(uVar8 >> 0x15) * 4;
        lVar14 = *(long *)(lVar1 + 8);
        uVar13 = (ulong)(uVar8 & *(uint *)(lVar12 + lVar10));
        lVar10 = param_1 + (param_2 >> 0x10 & 0xffff) * 4;
        cVar4 = *(char *)(lVar1 + 0x59);
        *(uint *)(nds_system + lVar2 + 0xb08018) =
             1 << (ulong)(uVar8 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb08018);
        uVar7 = (long)((lVar14 + (uVar13 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2;
        *(uint *)(nds_system + lVar10 + 0xb04018) =
             1 << (ulong)((uint)uVar11 & 0x1f) | *(uint *)(nds_system + lVar10 + 0xb04018);
        uVar9 = uVar7 | 0x4000000000000000;
        if (cVar4 == '\0') {
          uVar9 = uVar7;
        }
        *(ulong *)(param_1 + uVar11 * 8) = uVar9;
        uVar9 = (ulong)*(byte *)(lVar14 + uVar13);
      }
    }
    else {
      uVar9 = 0xff;
    }
  }
  else {
    uVar9 = (ulong)*(byte *)(uVar9 * 4 + (param_2 & 0xffffffff));
  }
  return uVar9;
}


