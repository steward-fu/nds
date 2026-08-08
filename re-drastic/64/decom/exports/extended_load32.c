/*
 * Ghidra decompilation
 *
 * Function : extended_load32
 * Address  : 00118520
 * Program  : drastic64
 */


ulong extended_load32(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar8 = (uint)param_2;
  if (0xfffffff < uVar8) {
    return 0xffffffff;
  }
  lVar11 = *(long *)(param_1 + 0x1000000);
  lVar9 = (ulong)(uVar8 >> 0x17) * 0x60;
  lVar1 = lVar11 + lVar9;
  uVar14 = param_2 & 0xffffffff;
  uVar15 = (uint)*(byte *)(lVar1 + 0x58);
  if (*(byte *)(lVar1 + 0x58) == 1) {
    uVar3 = uVar8 & 0x7ff;
    puVar7 = (uint *)(**(code **)(lVar1 + 8))(*(undefined8 *)(nds_system + param_1 + 0xb04008));
    uVar6 = uVar8 - uVar3;
    lVar9 = param_1 + (ulong)(uVar6 >> 0x15) * 4;
    lVar1 = param_1 + (ulong)(ushort)(uVar6 >> 0x10) * 4;
    *(uint *)(nds_system + lVar9 + 0xb08018) =
         1 << (ulong)(uVar6 >> 0x10 & 0x1f) | *(uint *)(nds_system + lVar9 + 0xb08018);
    *(uint *)(nds_system + lVar1 + 0xb04018) =
         uVar15 << (ulong)(uVar6 >> 0xb & 0x1f) | *(uint *)(nds_system + lVar1 + 0xb04018);
    *(ulong *)(param_1 + (ulong)(uVar6 >> 0xb) * 8) =
         (long)((long)puVar7 + (-(ulong)(uVar8 - uVar3) - (ulong)uVar3)) >> 2 | 0x4000000000000000;
    return (ulong)*puVar7;
  }
  if (uVar15 == 2) {
                    /* WARNING: Could not recover jumptable at 0x001186d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar14 = (**(code **)(lVar1 + 0x18))
                       (*(undefined8 *)(nds_system + param_1 + 0xb04008),
                        uVar8 & *(uint *)(lVar11 + lVar9));
    return uVar14;
  }
  if (uVar15 != 0) {
    return 0;
  }
  lVar2 = param_1 + (ulong)(uVar8 >> 0x15) * 4;
  lVar13 = *(long *)(lVar1 + 8);
  uVar12 = (ulong)(uVar8 & *(uint *)(lVar11 + lVar9));
  lVar9 = param_1 + (uVar14 >> 0x10) * 4;
  cVar5 = *(char *)(lVar1 + 0x59);
  *(uint *)(nds_system + lVar2 + 0xb08018) =
       1 << (ulong)((uint)(uVar14 >> 0x10) & 0x1f) | *(uint *)(nds_system + lVar2 + 0xb08018);
  uVar10 = (long)((lVar13 + (uVar12 & 0xfffff800)) - (param_2 & 0xfffff800)) >> 2;
  *(uint *)(nds_system + lVar9 + 0xb04018) =
       1 << (ulong)((uint)(uVar14 >> 0xb) & 0x1f) | *(uint *)(nds_system + lVar9 + 0xb04018);
  uVar4 = uVar10 | 0x4000000000000000;
  if (cVar5 == '\0') {
    uVar4 = uVar10;
  }
  *(ulong *)(param_1 + (uVar14 >> 0xb) * 8) = uVar4;
  return (ulong)*(uint *)(lVar13 + uVar12);
}


