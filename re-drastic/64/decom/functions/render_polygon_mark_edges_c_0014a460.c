/*
 * Ghidra decompilation
 *
 * Function : render_polygon_mark_edges_c
 * Address  : 0014a460
 * Program  : drastic64
 */


void render_polygon_mark_edges_c(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort *puVar10;
  uint uVar11;
  ulong uVar12;
  ushort *puVar13;
  long lVar14;
  undefined *puVar9;
  
  uVar4 = *(ushort *)(param_1 + 0x6e0);
  uVar11 = (uint)uVar4;
  puVar13 = (ushort *)(param_1 + 0x630);
  lVar14 = param_1 + 0x6e0;
  puVar7 = (undefined *)(param_2 + 3);
  if (uVar4 != 0) {
    uVar12 = (ulong)(uVar4 - 1);
    puVar9 = puVar7;
    do {
      puVar8 = puVar9 + 4;
      *puVar9 = 0x40;
      puVar9 = puVar8;
    } while (puVar8 != (undefined *)(param_2 + uVar12 * 4 + 7));
    puVar7 = puVar7 + (uVar12 + 1) * 4;
  }
  if (param_3 != 1) {
    puVar3 = (ushort *)(param_1 + ((ulong)(param_3 - 2) + 0x18d) * 4);
    puVar10 = puVar13;
    do {
      while( true ) {
        iVar6 = *puVar10 - uVar11;
        uVar11 = (uint)puVar10[0x5a];
        iVar2 = puVar10[0x59] + uVar11;
        puVar7 = puVar7 + (int)((iVar6 - (uint)puVar10[0x59]) * 4);
        if (iVar2 == 0) break;
        puVar9 = puVar7 + ((ulong)(iVar2 - 1) + 1) * 4;
        do {
          puVar8 = puVar7 + 4;
          *puVar7 = 0x40;
          puVar7 = puVar8;
        } while (puVar9 != puVar8);
        puVar10 = puVar10 + 2;
        puVar7 = puVar9;
        if (puVar10 == puVar3) goto LAB_0014a508;
      }
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar3);
LAB_0014a508:
    lVar1 = (ulong)(param_3 - 2) + 1;
    puVar13 = puVar13 + lVar1 * 2;
    lVar14 = lVar14 + lVar1 * 4;
  }
  uVar4 = *puVar13;
  uVar5 = *(ushort *)(lVar14 + 2);
  if (uVar5 != 0) {
    puVar9 = puVar7 + (int)(((uVar4 - uVar11) - (uint)uVar5) * 4);
    do {
      puVar8 = puVar9 + 4;
      *puVar9 = 0x40;
      puVar9 = puVar8;
    } while (puVar7 + (int)(((uVar4 - uVar11) - (uint)uVar5) * 4) + ((ulong)(uVar5 - 1) + 1) * 4 !=
             puVar8);
  }
  return;
}


