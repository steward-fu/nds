/*
 * Ghidra decompilation
 *
 * Function : render_polygon_setup_rgb_interpolants_c
 * Address  : 00146170
 * Program  : drastic64
 */


void render_polygon_setup_rgb_interpolants_c(long param_1,long param_2,int param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  uVar11 = (ulong)param_4;
  lVar14 = param_2 + uVar11;
  lVar15 = lVar14 + uVar11;
  lVar12 = lVar15 + uVar11;
  lVar16 = lVar12 + (ulong)(param_4 << 1);
  lVar10 = lVar16 + (ulong)(param_4 << 1);
  puVar13 = (ushort *)(param_1 + 0x420);
  if (param_3 != 0) {
    do {
      uVar4 = puVar13[0x108];
      uVar1 = *puVar13;
      uVar2 = puVar13[1];
      uVar3 = puVar13[0xb1];
      uVar5 = puVar13[0x58];
      uVar6 = puVar13[0x59];
      uVar7 = puVar13[0x109];
      puVar13 = puVar13 + 2;
      if ((int)(short)uVar4 != 0) {
        lVar9 = 0;
        do {
          *(uint *)(lVar12 + lVar9 * 4) = (uint)uVar1 << 0xf;
          *(uint *)(lVar16 + lVar9 * 4) = (uint)uVar2 << 0xf;
          *(uint *)(lVar10 + lVar9 * 4) = (uint)uVar3 << 0xf;
          *(ushort *)(param_2 + lVar9 * 2) = uVar5;
          *(ushort *)(lVar14 + lVar9 * 2) = uVar6;
          *(ushort *)(lVar15 + lVar9 * 2) = uVar7;
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 <= (uint)(int)(short)uVar4 && (int)(short)uVar4 != (uint)lVar9);
        lVar9 = (ulong)((int)(short)uVar4 - 1) + 1;
        lVar8 = lVar9 * 2;
        lVar9 = lVar9 * 4;
        lVar12 = lVar12 + lVar9;
        lVar16 = lVar16 + lVar9;
        lVar10 = lVar10 + lVar9;
        param_2 = param_2 + lVar8;
        lVar14 = lVar14 + lVar8;
        lVar15 = lVar15 + lVar8;
      }
    } while (puVar13 != (ushort *)(param_1 + ((ulong)(param_3 - 1) + 0x109) * 4));
  }
  return;
}


