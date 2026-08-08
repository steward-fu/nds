/*
 * Ghidra decompilation
 *
 * Function : event_timer_overflow_function
 * Address  : 0011d3b0
 * Program  : drastic64
 */


void event_timer_overflow_function(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  
  iVar2 = *(int *)(*param_2 + 0x210c);
  uVar3 = *(ushort *)((long)param_2 + 0x1a);
  uVar11 = (uint)*(byte *)((long)param_2 + 0x1d);
  if (iVar2 == 0 && uVar11 == 1) {
    if ((*(int *)(param_1 + 0x85a08) != 0) && ((*(uint *)(param_1 + 0x8a374) >> 6 & 1) == 0)) {
      update_spu();
      goto LAB_0011d4dc;
    }
    if ((*(ushort *)((long)param_2 + 0x3a) >> 2 & 1) == 0) goto LAB_0011d418;
    lVar5 = *(long *)(*param_2 + 0x2260);
    uVar8 = 0x108;
  }
  else {
    if (uVar11 == 3) goto LAB_0011d418;
LAB_0011d4dc:
    if ((*(ushort *)((long)param_2 + 0x3a) >> 2 & 1) == 0) goto LAB_0011d418;
    uVar8 = (ulong)((uVar11 + 0x41) * 4);
    lVar5 = *(long *)(*param_2 + 0x2260);
    if (*(int *)(*param_2 + 0x210c) == 1) {
      *(short *)(lVar5 + 0x1b070 + uVar8) = *(short *)(lVar5 + 0x1b070 + uVar8) + 1;
      goto LAB_0011d418;
    }
  }
  *(short *)(lVar5 + 0x23070 + uVar8) = *(short *)(lVar5 + 0x23070 + uVar8) + 1;
LAB_0011d418:
  if ((uVar3 >> 6 & 1) != 0) {
    lVar5 = *(long *)(*param_2 + 0x2080);
    uVar4 = *(uint *)(lVar5 + 0x214) | *(uint *)(param_2 + 2);
    *(uint *)(lVar5 + 0x214) = uVar4;
    if ((*(uint *)(*param_2 + 0x2110) & 6) == 0) {
      *(uint *)(*param_2 + 0x2108) = -*(int *)(lVar5 + 0x208) & uVar4 & *(uint *)(lVar5 + 0x210);
    }
  }
  puVar6 = *(uint **)(param_1 + 0x318);
  lVar5 = param_1 + 0x18;
  uVar8 = (ulong)(uVar11 + 3 + iVar2 * 4);
  param_2[1] = *(long *)(param_1 + 8);
  lVar9 = lVar5 + uVar8 * 0x30;
  uVar11 = *(uint *)((long)param_2 + 0x14);
  if (puVar6 == (uint *)0x0) {
    lVar1 = lVar5 + uVar8 * 0x30;
    *(uint *)(lVar5 + uVar8 * 0x30) = uVar11;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(long *)(param_1 + 0x318) = lVar9;
  }
  else {
    puVar10 = (uint *)0x0;
    while (puVar7 = puVar6, *puVar7 < uVar11) {
      uVar11 = uVar11 - *puVar7;
      puVar6 = *(uint **)(puVar7 + 6);
      puVar10 = puVar7;
      if (*(uint **)(puVar7 + 6) == (uint *)0x0) {
        lVar1 = lVar5 + uVar8 * 0x30;
        *(uint *)(lVar5 + uVar8 * 0x30) = uVar11;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(uint **)(lVar1 + 0x20) = puVar7;
        *(long *)(puVar7 + 6) = lVar9;
        return;
      }
    }
    lVar1 = lVar5 + uVar8 * 0x30;
    *(uint *)(lVar5 + uVar8 * 0x30) = uVar11;
    *(uint **)(lVar1 + 0x18) = puVar7;
    *(uint **)(lVar1 + 0x20) = puVar10;
    if (puVar10 == (uint *)0x0) {
      *(long *)(param_1 + 0x318) = lVar9;
    }
    else {
      *(long *)(puVar10 + 6) = lVar9;
    }
    *(long *)(puVar7 + 8) = lVar9;
    *puVar7 = *puVar7 - uVar11;
  }
  return;
}


