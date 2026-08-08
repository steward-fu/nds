/*
 * Ghidra decompilation
 *
 * Function : cpu_block_fill_allocation
 * Address  : 0012a190
 * Program  : drastic64
 */


void cpu_block_fill_allocation(long param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  uVar3 = (param_2 + param_3) - 1 >> 0xb;
  lVar14 = *(long *)(nds_system + param_1 + 0xb063d8);
  if (param_2 >> 0xb <= uVar3) {
    uVar10 = param_2 >> 0xb;
    puVar7 = (ulong *)(param_1 + ((ulong)uVar10 + 0x47a) * 8);
    do {
      if ((*puVar7 >> 0x3e & 1) == 0) {
        *puVar7 = *puVar7 | 0xc000000000000000;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (ulong *)(param_1 + 0x23d8 + ((ulong)(uVar3 - uVar10) + (ulong)uVar10) * 8));
  }
  if (0xfffffff < param_2) {
    return;
  }
  lVar15 = *(long *)(nds_system + param_1 + 0xb063d0);
  lVar12 = (ulong)(param_2 >> 0x17) * 0x60;
  lVar1 = lVar15 + lVar12;
  puVar4 = (uint *)(**(code **)(lVar1 + 0x48))(lVar14,lVar1,param_2);
  puVar5 = (uint *)(**(code **)(lVar1 + 0x50))(lVar14,lVar1,param_2);
  uVar3 = *(uint *)(lVar15 + lVar12);
  if ((*(int *)(param_1 + 0x210c) == 1) && (param_2 < *(uint *)(lVar14 + 0xfd4d8))) {
    uVar8 = (ulong)(param_2 >> 6) & 0x1ff;
    uVar13 = (ulong)(param_2 & 0x7fff);
    uVar9 = param_3 + (param_2 & 0x7fff);
    puVar5 = (uint *)(lVar14 + uVar8 * 4 + 0xef1b8);
    puVar4 = (uint *)(lVar14 + 0xaf178);
    if (uVar9 < 0x8001) goto LAB_0012a29c;
    uVar6 = 0xffff8000;
    uVar10 = 0x8000;
    uVar3 = 0x7fff;
LAB_0012a434:
    cpu_block_fill_allocation(param_1,param_2 + param_3 & uVar6,(uVar9 - 1) - uVar3);
    uVar9 = uVar10;
  }
  else {
    uVar13 = (ulong)(param_2 & uVar3);
    uVar9 = param_3 + (param_2 & uVar3);
    uVar10 = uVar3 + 1;
    if (uVar10 < uVar9) {
      uVar6 = ~uVar3;
      goto LAB_0012a434;
    }
  }
  if (puVar4 == (uint *)0x0) {
    return;
  }
  uVar8 = uVar13 >> 6;
LAB_0012a29c:
  uVar9 = uVar9 - 1;
  uVar2 = (uVar9 >> 0x10) - ((uint)uVar13 >> 0x10);
  uVar10 = ~(-2 << ((ulong)(uVar9 >> 0xb) & 0x1f));
  uVar6 = (uVar9 >> 6) - (int)uVar8;
  uVar3 = -1 << (uVar13 >> 0xb & 0x1f);
  if (uVar2 == 0) {
    *puVar4 = uVar3 & uVar10 | *puVar4;
  }
  else {
    puVar11 = puVar4 + 1;
    *puVar4 = *puVar4 | uVar3;
    puVar4 = puVar11;
    if (1 < uVar2) {
      lVar14 = (ulong)(uVar2 - 2) + 1;
      puVar4 = puVar11 + lVar14;
      memset(puVar11,0xff,lVar14 * 4);
    }
    *puVar4 = *puVar4 | uVar10;
  }
  uVar3 = -1 << ((ulong)(param_2 >> 1) & 0x1f);
  uVar10 = ~(-2 << ((ulong)(uVar9 >> 1) & 0x1f));
  if (uVar6 == 0) {
    *puVar5 = uVar3 & uVar10 | *puVar5;
    return;
  }
  puVar11 = puVar5 + 1;
  *puVar5 = *puVar5 | uVar3;
  puVar4 = puVar11;
  if (1 < uVar6) {
    lVar14 = (ulong)(uVar6 - 2) + 1;
    puVar4 = puVar11 + lVar14;
    memset(puVar11,0xff,lVar14 * 4);
  }
  *puVar4 = *puVar4 | uVar10;
  return;
}


