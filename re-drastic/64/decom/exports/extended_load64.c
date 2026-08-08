/*
 * Ghidra decompilation
 *
 * Function : extended_load64
 * Address  : 001186e0
 * Program  : drastic64
 */


ulong extended_load64(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  
  uVar8 = (uint)param_2;
  uVar16 = 0xffffffff;
  if (uVar8 < 0x10000000) {
    lVar12 = *(long *)(param_1 + 0x1000000);
    lVar9 = (ulong)(uVar8 >> 0x17) * 0x60;
    lVar7 = lVar12 + lVar9;
    uVar15 = (uint)*(byte *)(lVar7 + 0x58);
    if (*(byte *)(lVar7 + 0x58) == 1) {
      uVar2 = uVar8 & 0x7ff;
      puVar6 = (uint *)(**(code **)(lVar7 + 8))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
      uVar4 = uVar8 - uVar2;
      lVar9 = param_1 + (ulong)(uVar4 >> 0x15) * 4;
      lVar7 = param_1 + (ulong)(ushort)(uVar4 >> 0x10) * 4;
      *(uint *)(nds_system + lVar9 + 0xb08018) =
           1 << (ulong)(uVar4 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar9 + 0xb08018);
      *(uint *)(nds_system + lVar7 + 0xb04018) =
           uVar15 << (ulong)(uVar4 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
      *(ulong *)(param_1 + (ulong)(uVar4 >> 0xb) * 8) =
           (long)((long)puVar6 + (-(ulong)(uVar8 - uVar2) - (ulong)uVar2)) >> 2 | 0x4000000000000000
      ;
      uVar16 = (ulong)*puVar6;
    }
    else if (uVar15 == 2) {
      uVar16 = (**(code **)(lVar7 + 0x18))
                         (*(undefined8 *)(nds_system + param_1 + 0xb04008),
                          uVar8 & *(uint *)(lVar12 + lVar9));
      uVar16 = uVar16 & 0xffffffff;
    }
    else {
      uVar16 = 0;
      if (uVar15 == 0) {
        lVar13 = param_1 + (ulong)(uVar8 >> 0x15) * 4;
        lVar14 = *(long *)(lVar7 + 8);
        lVar1 = param_1 + (param_2 >> 0x10 & 0xffff) * 4;
        uVar10 = (ulong)(uVar8 & *(uint *)(lVar12 + lVar9));
        cVar3 = *(char *)(lVar7 + 0x59);
        *(uint *)(nds_system + lVar13 + 0xb08018) =
             1 << (ulong)(uVar8 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar13 + 0xb08018);
        uVar5 = (long)((lVar14 + (uVar10 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2;
        *(uint *)(nds_system + lVar1 + 0xb04018) =
             1 << (ulong)(uVar8 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb04018);
        uVar16 = uVar5 | 0x4000000000000000;
        if (cVar3 == '\0') {
          uVar16 = uVar5;
        }
        *(ulong *)(param_1 + (ulong)(uVar8 >> 0xb) * 8) = uVar16;
        uVar16 = (ulong)*(uint *)(lVar14 + uVar10);
      }
    }
  }
  uVar8 = uVar8 + 4;
  if (0xfffffff < uVar8) {
    return uVar16 | 0xffffffff00000000;
  }
  lVar12 = *(long *)(param_1 + 0x1000000);
  lVar9 = (ulong)(uVar8 >> 0x17) * 0x60;
  lVar7 = lVar12 + lVar9;
  uVar15 = (uint)*(byte *)(lVar7 + 0x58);
  if (*(byte *)(lVar7 + 0x58) == 1) {
    uVar2 = uVar8 & 0x7ff;
    puVar6 = (uint *)(**(code **)(lVar7 + 8))
                               (*(undefined8 *)(nds_system + param_1 + 0xb04008),uVar8);
    uVar4 = uVar8 - uVar2;
    lVar9 = param_1 + (ulong)(uVar4 >> 0x15) * 4;
    lVar7 = param_1 + (ulong)(ushort)(uVar4 >> 0x10) * 4;
    *(uint *)(nds_system + lVar9 + 0xb08018) =
         1 << (ulong)(uVar4 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar9 + 0xb08018);
    *(uint *)(nds_system + lVar7 + 0xb04018) =
         uVar15 << (ulong)(uVar4 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar7 + 0xb04018);
    *(ulong *)(param_1 + (ulong)(uVar4 >> 0xb) * 8) =
         (long)((long)puVar6 + (-(ulong)(uVar8 - uVar2) - (ulong)uVar2)) >> 2 | 0x4000000000000000;
    return uVar16 | (ulong)*puVar6 << 0x20;
  }
  if (uVar15 != 2) {
    if (uVar15 != 0) {
      return uVar16;
    }
    lVar1 = param_1 + (ulong)(uVar8 >> 0x15) * 4;
    lVar13 = *(long *)(lVar7 + 8);
    uVar11 = (ulong)(uVar8 & *(uint *)(lVar12 + lVar9));
    lVar9 = param_1 + (ulong)(ushort)(uVar8 >> 0x10) * 4;
    cVar3 = *(char *)(lVar7 + 0x59);
    *(uint *)(nds_system + lVar1 + 0xb08018) =
         1 << (ulong)(uVar8 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb08018);
    uVar10 = (long)((lVar13 + (uVar11 & 0xfffff800)) - ((ulong)uVar8 & 0xfffff800)) >> 2;
    *(uint *)(nds_system + lVar9 + 0xb04018) =
         1 << (ulong)(uVar8 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar9 + 0xb04018);
    uVar5 = uVar10 | 0x4000000000000000;
    if (cVar3 == '\0') {
      uVar5 = uVar10;
    }
    *(ulong *)(param_1 + (ulong)(uVar8 >> 0xb) * 8) = uVar5;
    return uVar16 | (ulong)*(uint *)(lVar13 + uVar11) << 0x20;
  }
  lVar7 = (**(code **)(lVar7 + 0x18))
                    (*(undefined8 *)(nds_system + param_1 + 0xb04008),
                     uVar8 & *(uint *)(lVar12 + lVar9));
  return uVar16 | lVar7 << 0x20;
}


