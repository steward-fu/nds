/*
 * Ghidra decompilation
 *
 * Function : render_polygon_edge_interpolate_xz_c
 * Address  : 0014c930
 * Program  : drastic64
 */


void render_polygon_edge_interpolate_xz_c
               (long param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  undefined2 *puVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined6 uVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  ushort uVar22;
  int iVar23;
  ulong uVar24;
  undefined2 uVar25;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  byte bVar36;
  undefined4 uVar26;
  undefined6 uVar27;
  
  if (param_4 != 0) {
    puVar18 = (undefined8 *)(param_2 + 0x160);
    puVar17 = (undefined8 *)(param_2 + 0x580);
    uVar20 = 0;
    lVar19 = 0;
    do {
      lVar12 = *(long *)(param_1 + (ulong)uVar20 * 8);
      lVar9 = *(long *)(param_1 + (ulong)(uVar20 + 1) * 8);
      iVar15 = (uint)*(ushort *)(lVar9 + 4) - (uint)*(ushort *)(lVar12 + 4);
      uVar13 = (ulong)*(ushort *)(lVar12 + 8) << 0x27;
      uVar16 = (long)iVar15 *
               (ulong)*(uint *)(reciprocal_table +
                               (long)(int)((uint)*(ushort *)(lVar9 + 6) -
                                          (uint)*(ushort *)(lVar12 + 6)) * 4);
      bVar3 = *(byte *)(param_3 + lVar19);
      iVar32 = ((uint)*(ushort *)(lVar9 + 8) - (uint)*(ushort *)(lVar12 + 8)) * 0x200;
      iVar11 = (uint)*(ushort *)(lVar12 + 4) * 0x40000;
      if (iVar15 == 0) {
        iVar15 = (int)(uVar16 >> 0xc);
        uVar22 = 0x8000;
      }
      else if (iVar15 < 0) {
        uVar22 = 0;
        iVar15 = (int)(uVar16 + 0xfff >> 0xc);
      }
      else {
        iVar15 = (int)(uVar16 >> 0xc);
        uVar22 = 0;
      }
      lVar12 = (long)iVar32 *
               (ulong)*(uint *)(reciprocal_table +
                               (long)(int)((uint)*(ushort *)(lVar9 + 6) -
                                          (uint)*(ushort *)(lVar12 + 6)) * 4);
      lVar9 = lVar12 + 0x40000000;
      if (-1 < iVar32) {
        lVar9 = lVar12;
      }
      if (lVar19 == 0) {
        uVar13 = uVar13 + (ulong)param_5 * lVar9;
        iVar11 = iVar11 + iVar15 * param_5;
      }
      if (bVar3 != 0) {
        bVar5 = puVar18 < (undefined8 *)((long)puVar17 + 0x1eU);
        uVar4 = bVar3 - 1;
        if ((puVar17 < puVar18 + 4 && bVar5 || uVar4 < 8) ||
            (puVar17 >= puVar18 + 4 || !bVar5) && uVar4 == 8) {
          lVar12 = 0;
          do {
            *(int *)((long)puVar18 + lVar12) = (int)(uVar13 >> 0x1e);
            *(ushort *)((long)puVar17 + lVar12) = uVar22 | (ushort)((uint)iVar11 >> 0x12);
            lVar12 = lVar12 + 4;
            uVar13 = uVar13 + lVar9;
            iVar11 = iVar11 + iVar15;
          } while ((ulong)uVar4 * 4 + 4 != lVar12);
        }
        else {
          iVar32 = iVar11 + iVar15;
          iVar23 = iVar32 + iVar15;
          iVar29 = iVar23 + iVar15;
          uVar21 = (uint)bVar3;
          lVar35 = NEON_shl(lVar9,3);
          uVar16 = uVar13 + lVar9;
          iVar34 = iVar15 * 8;
          iVar33 = iVar15 * 4;
          lVar12 = lVar9 * 2;
          puVar10 = puVar17;
          puVar14 = puVar18;
          uVar30 = uVar13;
          iVar31 = iVar11;
          do {
            uVar24 = lVar12 + uVar30 + lVar12;
            uVar28 = lVar12 + uVar16 + lVar12;
            bVar36 = (byte)(uVar22 >> 8);
            uVar6 = CONCAT11((byte)((uint)iVar31 >> 0x1a) | bVar36,
                             (char)(ushort)((uint)iVar31 >> 0x12));
            uVar7 = CONCAT13((byte)((uint)iVar32 >> 0x1a) | bVar36,
                             CONCAT12((char)(ushort)((uint)iVar32 >> 0x12),uVar6));
            uVar8 = CONCAT15((byte)((uint)iVar23 >> 0x1a) | bVar36,
                             CONCAT14((char)(ushort)((uint)iVar23 >> 0x12),uVar7));
            uVar25 = CONCAT11((byte)((uint)(iVar33 + iVar31) >> 0x1a) | bVar36,
                              (char)(ushort)((uint)(iVar33 + iVar31) >> 0x12));
            uVar26 = CONCAT13((byte)((uint)(iVar33 + iVar32) >> 0x1a) | bVar36,
                              CONCAT12((char)(ushort)((uint)(iVar33 + iVar32) >> 0x12),uVar25));
            uVar27 = CONCAT15((byte)((uint)(iVar33 + iVar23) >> 0x1a) | bVar36,
                              CONCAT14((char)(ushort)((uint)(iVar33 + iVar23) >> 0x12),uVar26));
            puVar14[1] = CONCAT44((int)(lVar12 + uVar16 >> 0x1e),(int)(lVar12 + uVar30 >> 0x1e));
            *puVar14 = CONCAT26((short)((uVar16 >> 0x1e) >> 0x10),
                                CONCAT24((short)(uVar16 >> 0x1e),(int)(uVar30 >> 0x1e)));
            puVar14[3] = CONCAT44((int)(uVar28 + lVar12 >> 0x1e),(int)(uVar24 + lVar12 >> 0x1e));
            puVar14[2] = CONCAT44((int)(uVar28 >> 0x1e),(int)(uVar24 >> 0x1e));
            *(undefined2 *)puVar10 = uVar6;
            puVar1 = (undefined2 *)((long)puVar10 + 0x1c);
            *(short *)((long)puVar10 + 4) = (short)((uint)uVar7 >> 0x10);
            *(short *)(puVar10 + 1) = (short)((uint6)uVar8 >> 0x20);
            *(short *)((long)puVar10 + 0xc) =
                 (short)(CONCAT17((byte)((uint)iVar29 >> 0x1a) | bVar36,
                                  CONCAT16((char)(ushort)((uint)iVar29 >> 0x12),uVar8)) >> 0x30);
            *(undefined2 *)(puVar10 + 2) = uVar25;
            *(short *)((long)puVar10 + 0x14) = (short)((uint)uVar26 >> 0x10);
            *(short *)(puVar10 + 3) = (short)((uint6)uVar27 >> 0x20);
            puVar10 = puVar10 + 4;
            *puVar1 = (short)(CONCAT17((byte)((uint)(iVar33 + iVar29) >> 0x1a) | bVar36,
                                       CONCAT16((char)(ushort)((uint)(iVar33 + iVar29) >> 0x12),
                                                uVar27)) >> 0x30);
            uVar30 = uVar30 + lVar35;
            uVar16 = uVar16 + lVar35;
            iVar31 = iVar31 + iVar34;
            iVar32 = iVar32 + iVar34;
            iVar23 = iVar23 + iVar34;
            iVar29 = iVar29 + iVar34;
            puVar14 = puVar14 + 4;
          } while (puVar10 != puVar17 + (ulong)(bVar3 >> 3) * 4);
          uVar16 = (ulong)bVar3 & 0xf8;
          lVar12 = uVar16 * 4;
          iVar11 = iVar11 + (uVar21 & 0xfffffff8) * iVar15;
          uVar13 = uVar13 + uVar16 * lVar9;
          uVar2 = uVar21 & 7;
          if ((uVar21 & 0xfffffff8) != uVar21) {
            *(int *)((long)puVar18 + uVar16 * 4) = (int)(uVar13 >> 0x1e);
            *(ushort *)((long)puVar17 + lVar12) = uVar22 | (ushort)((uint)iVar11 >> 0x12);
            uVar13 = uVar13 + lVar9;
            iVar11 = iVar11 + iVar15;
            if (uVar2 != 1) {
              *(int *)((long)puVar18 + lVar12 + 4) = (int)(uVar13 >> 0x1e);
              *(ushort *)((long)puVar17 + lVar12 + 4) = uVar22 | (ushort)((uint)iVar11 >> 0x12);
              uVar13 = uVar13 + lVar9;
              iVar11 = iVar11 + iVar15;
              if (uVar2 != 2) {
                *(int *)((long)puVar18 + lVar12 + 8) = (int)(uVar13 >> 0x1e);
                *(ushort *)((long)puVar17 + lVar12 + 8) = uVar22 | (ushort)((uint)iVar11 >> 0x12);
                uVar13 = uVar13 + lVar9;
                iVar11 = iVar11 + iVar15;
                if (uVar2 != 3) {
                  *(int *)((long)puVar18 + lVar12 + 0xc) = (int)(uVar13 >> 0x1e);
                  *(ushort *)((long)puVar17 + lVar12 + 0xc) =
                       uVar22 | (ushort)((uint)iVar11 >> 0x12);
                  uVar13 = lVar9 + uVar13;
                  iVar11 = iVar15 + iVar11;
                  if (uVar2 != 4) {
                    *(int *)((long)puVar18 + lVar12 + 0x10) = (int)(uVar13 >> 0x1e);
                    *(ushort *)((long)puVar17 + lVar12 + 0x10) =
                         uVar22 | (ushort)((uint)iVar11 >> 0x12);
                    uVar13 = lVar9 + uVar13;
                    iVar11 = iVar15 + iVar11;
                    if (uVar2 != 5) {
                      *(int *)((long)puVar18 + lVar12 + 0x14) = (int)(uVar13 >> 0x1e);
                      *(ushort *)((long)puVar17 + lVar12 + 0x14) =
                           uVar22 | (ushort)((uint)iVar11 >> 0x12);
                      if (uVar2 != 6) {
                        *(int *)((long)puVar18 + lVar12 + 0x18) = (int)(lVar9 + uVar13 >> 0x1e);
                        *(ushort *)((long)puVar17 + lVar12 + 0x18) =
                             uVar22 | (ushort)((uint)(iVar15 + iVar11) >> 0x12);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        lVar9 = ((long)(int)uVar4 + 1) * 4;
        puVar18 = (undefined8 *)((long)puVar18 + lVar9);
        puVar17 = (undefined8 *)((long)puVar17 + lVar9);
      }
      lVar19 = lVar19 + 1;
      uVar20 = uVar20 + 2;
    } while ((uint)lVar19 < param_4);
    return;
  }
  return;
}


