/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_interpolate_x_c
 * Address  : 0014ccd0
 * Program  : drastic64
 */


void render_polygon_edge_interpolate_x_c
               (long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  ushort *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ushort uVar16;
  ushort *puVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ushort uVar21;
  ushort uVar22;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  byte bVar31;
  undefined4 uVar23;
  undefined6 uVar24;
  
  if (param_4 != 0) {
    puVar17 = (ushort *)(param_2 + 0x580);
    uVar19 = 0;
    lVar18 = 0;
    do {
      lVar11 = *(long *)(param_1 + (ulong)uVar19 * 8);
      lVar12 = *(long *)(param_1 + (ulong)(uVar19 + 1) * 8);
      uVar9 = (uint)*(ushort *)(lVar11 + 4);
      iVar13 = *(ushort *)(lVar12 + 4) - uVar9;
      bVar3 = *(byte *)(param_3 + lVar18);
      uVar15 = (uint)bVar3;
      iVar4 = uVar9 * 0x40000;
      uVar14 = (ulong)*(uint *)(reciprocal_table +
                               (long)(int)((uint)*(ushort *)(lVar12 + 6) -
                                          (uint)*(ushort *)(lVar11 + 6)) * 4) * (long)iVar13;
      if (iVar13 == 0) {
        iVar13 = (int)(uVar14 >> 0xc);
        uVar16 = 0x8000;
      }
      else if (iVar13 < 0) {
        uVar16 = 0;
        iVar13 = (int)(uVar14 + 0xfff >> 0xc);
      }
      else {
        iVar13 = (int)(uVar14 >> 0xc);
        uVar16 = 0;
      }
      iVar10 = iVar4 + iVar13 * param_5;
      if (lVar18 != 0) {
        iVar10 = iVar4;
      }
      if (bVar3 != 0) {
        iVar4 = bVar3 - 1;
        puVar8 = puVar17;
        if (iVar4 < 7) {
LAB_0014ce40:
          *puVar8 = uVar16 | (ushort)((uint)iVar10 >> 0x12);
          if (uVar15 != 1) {
            puVar8[2] = uVar16 | (ushort)((uint)(iVar10 + iVar13) >> 0x12);
            iVar10 = iVar10 + iVar13 + iVar13;
            if (uVar15 != 2) {
              puVar8[4] = uVar16 | (ushort)((uint)iVar10 >> 0x12);
              iVar10 = iVar10 + iVar13;
              if (uVar15 != 3) {
                puVar8[6] = uVar16 | (ushort)((uint)iVar10 >> 0x12);
                iVar10 = iVar10 + iVar13;
                if (uVar15 != 4) {
                  puVar8[8] = uVar16 | (ushort)((uint)iVar10 >> 0x12);
                  iVar10 = iVar10 + iVar13;
                  if (uVar15 != 5) {
                    puVar8[10] = uVar16 | (ushort)((uint)iVar10 >> 0x12);
                    if (uVar15 != 6) {
                      puVar8[0xc] = uVar16 | (ushort)((uint)(iVar13 + iVar10) >> 0x12);
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iVar28 = iVar10 + iVar13;
          iVar20 = iVar28 + iVar13;
          uVar9 = (uint)bVar3;
          iVar25 = iVar20 + iVar13;
          iVar30 = iVar13 * 8;
          iVar29 = iVar13 * 4;
          iVar27 = iVar10;
          do {
            iVar26 = iVar29 + iVar25;
            uVar15 = (uint)iVar28 >> 0x12;
            uVar2 = (uint)iVar25 >> 0x12;
            bVar31 = (byte)(uVar16 >> 8);
            uVar5 = CONCAT11((byte)((uint)iVar27 >> 0x1a) | bVar31,
                             (char)(ushort)((uint)iVar27 >> 0x12));
            uVar7 = (uint)iVar28 >> 0x1a;
            uVar21 = CONCAT11((byte)((uint)iVar20 >> 0x1a) | bVar31,
                              (char)(ushort)((uint)iVar20 >> 0x12));
            uVar6 = (uint)iVar25 >> 0x1a;
            uVar22 = CONCAT11((byte)((uint)(iVar29 + iVar27) >> 0x1a) | bVar31,
                              (char)(ushort)((uint)(iVar29 + iVar27) >> 0x12));
            uVar23 = CONCAT13((byte)((uint)(iVar29 + iVar28) >> 0x1a) | bVar31,
                              CONCAT12((char)(ushort)((uint)(iVar29 + iVar28) >> 0x12),uVar22));
            uVar24 = CONCAT15((byte)((uint)(iVar29 + iVar20) >> 0x1a) | bVar31,
                              CONCAT14((char)(ushort)((uint)(iVar29 + iVar20) >> 0x12),uVar23));
            puVar1 = puVar8 + 0x10;
            iVar27 = iVar27 + iVar30;
            iVar28 = iVar28 + iVar30;
            iVar20 = iVar20 + iVar30;
            iVar25 = iVar25 + iVar30;
            *puVar8 = uVar5;
            puVar8[2] = (ushort)(CONCAT13((byte)uVar7 | bVar31,CONCAT12((char)(ushort)uVar15,uVar5))
                                >> 0x10);
            puVar8[4] = uVar21;
            puVar8[6] = (ushort)(CONCAT13((byte)uVar6 | bVar31,CONCAT12((char)(ushort)uVar2,uVar21))
                                >> 0x10);
            puVar8[8] = uVar22;
            puVar8[10] = (ushort)((uint)uVar23 >> 0x10);
            puVar8[0xc] = (ushort)((uint6)uVar24 >> 0x20);
            puVar8[0xe] = (ushort)(CONCAT17((byte)((uint)iVar26 >> 0x1a) | bVar31,
                                            CONCAT16((char)(ushort)((uint)iVar26 >> 0x12),uVar24))
                                  >> 0x30);
            puVar8 = puVar1;
          } while (puVar17 + (ulong)(bVar3 >> 3) * 0x10 != puVar1);
          uVar2 = uVar9 & 0xfffffff8;
          iVar10 = iVar10 + uVar2 * iVar13;
          uVar15 = uVar9 - uVar2;
          puVar8 = puVar17 + ((ulong)bVar3 & 0xf8) * 2;
          if (uVar2 != uVar9) goto LAB_0014ce40;
        }
        puVar17 = puVar17 + (long)iVar4 * 2 + 2;
      }
      lVar18 = lVar18 + 1;
      uVar19 = uVar19 + 2;
    } while ((uint)lVar18 < param_4);
  }
  return;
}


