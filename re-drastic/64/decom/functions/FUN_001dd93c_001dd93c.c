/*
 * Ghidra decompilation
 *
 * Function : FUN_001dd93c
 * Address  : 001dd93c
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001dd93c(Unpack *param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  size_t __n;
  undefined *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  int *piVar27;
  int *piVar28;
  UnpackFilter aUStack_20 [4];
  int iStack_1c;
  int iStack_18;
  undefined uStack_14;
  int iStack_10;
  undefined uStack_c;
  long lStack_8;
  
  piVar27 = *(int **)(param_2 + 0x4ae0);
  lStack_8 = ___stack_chk_guard;
  piVar28 = piVar27 + (ulong)*(uint *)(param_2 + 0x4ae8) * 3;
  if (piVar27 < piVar28) {
    do {
      while( true ) {
        uVar14 = *(ulong *)(param_1 + 0xe980) & *(ulong *)(param_1 + 0xc0);
        *(ulong *)(param_1 + 0xc0) = uVar14;
        if (((*(ulong *)(param_1 + 0x4b88) - uVar14 & *(ulong *)(param_1 + 0xe980)) < 0x1004 &&
             uVar14 != *(ulong *)(param_1 + 0x4b88)) &&
           (Unpack::UnpWriteBuf(), *(long *)(param_1 + 0x4da0) < *(long *)(param_1 + 0x4db0))) {
          uVar15 = 0;
          goto LAB_001ddb2c;
        }
        iVar8 = *piVar27;
        if (iVar8 == 0) break;
        if (iVar8 == 1) {
          uVar10 = *(ushort *)(piVar27 + 1);
          uVar18 = (uint)uVar10;
          uVar6 = *(undefined4 *)(param_1 + 0xa0);
          uVar7 = *(undefined4 *)(param_1 + 0xa4);
          uVar9 = *(undefined4 *)(param_1 + 0xa8);
          *(int *)(param_1 + 0xa0) = piVar27[2];
          *(undefined4 *)(param_1 + 0xa4) = uVar6;
          *(undefined4 *)(param_1 + 0xa8) = uVar7;
          *(undefined4 *)(param_1 + 0xac) = uVar9;
          *(uint *)(param_1 + 0xb4) = (uint)uVar10;
          uVar19 = *(ulong *)(param_1 + 0xc0);
          uVar25 = uVar19 - (uint)piVar27[2];
          uVar14 = uVar19;
          if (uVar19 < uVar25) {
            uVar14 = uVar25;
          }
          if (uVar14 < *(long *)(param_1 + 0xe978) - 0x1001U) {
            *(ulong *)(param_1 + 0xc0) = uVar19 + uVar10;
            puVar26 = (undefined *)(*(long *)(param_1 + 0x4b90) + uVar25);
            puVar23 = (undefined *)(*(long *)(param_1 + 0x4b90) + uVar19);
            if (7 < uVar10) {
              lVar16 = uVar25 + 0x10;
              uVar18 = uVar10 - 8;
              uVar14 = uVar19 + 0x10;
              bVar13 = false;
              if ((long)uVar19 < lVar16) {
                bVar13 = (long)(uVar14 - uVar25) < 0;
              }
              bVar13 = bVar13 == ((long)uVar19 < lVar16 && SBORROW8(uVar14,uVar25));
              if ((((long)uVar19 < lVar16 && uVar14 != uVar25) && bVar13 || uVar18 < 7) ||
                  ((lVar16 <= (long)uVar19 || uVar14 == uVar25) || !bVar13) && uVar18 == 7) {
                puVar17 = puVar23;
                puVar22 = puVar26;
                do {
                  *puVar17 = *puVar22;
                  puVar5 = puVar17 + 8;
                  puVar17[1] = puVar22[1];
                  puVar17[2] = puVar22[2];
                  puVar17[3] = puVar22[3];
                  puVar17[4] = puVar22[4];
                  puVar17[5] = puVar22[5];
                  puVar17[6] = puVar22[6];
                  puVar17[7] = puVar22[7];
                  puVar17 = puVar5;
                  puVar22 = puVar22 + 8;
                } while (puVar5 != puVar23 + (ulong)(uVar18 & 0xfffffff8) + 8);
              }
              else {
                uVar11 = (uVar18 >> 3) + 1;
                lVar16 = 0;
                do {
                  uVar15 = *(undefined8 *)(puVar26 + lVar16);
                  *(undefined8 *)((long)(puVar23 + lVar16) + 8) =
                       *(undefined8 *)((long)(puVar26 + lVar16) + 8);
                  *(undefined8 *)(puVar23 + lVar16) = uVar15;
                  lVar16 = lVar16 + 0x10;
                } while (((ulong)((uVar11 >> 1) - 1) + 1) * 0x10 - lVar16 != 0);
                lVar16 = ((ulong)uVar11 & 0x3ffffffe) * 8;
                if ((uVar11 & 1) != 0) {
                  puVar23[lVar16] = puVar26[lVar16];
                  puVar23[lVar16 + 1] = puVar26[lVar16 + 1];
                  puVar23[lVar16 + 2] = puVar26[lVar16 + 2];
                  puVar23[lVar16 + 3] = puVar26[lVar16 + 3];
                  puVar23[lVar16 + 4] = puVar26[lVar16 + 4];
                  puVar23[lVar16 + 5] = puVar26[lVar16 + 5];
                  puVar23[lVar16 + 6] = puVar26[lVar16 + 6];
                  puVar23[lVar16 + 7] = puVar26[lVar16 + 7];
                }
              }
              lVar16 = (ulong)(uVar18 & 0xfffffff8) + 8;
              uVar18 = uVar18 + (uVar18 >> 3) * -8;
              puVar26 = puVar26 + lVar16;
              puVar23 = puVar23 + lVar16;
            }
            if (((((uVar18 != 0) && (*puVar23 = *puVar26, uVar18 != 1)) &&
                 (puVar23[1] = puVar26[1], uVar18 != 2)) &&
                ((puVar23[2] = puVar26[2], uVar18 != 3 && (puVar23[3] = puVar26[3], uVar18 != 4))))
               && ((puVar23[4] = puVar26[4], uVar18 != 5 && (puVar23[5] = puVar26[5], uVar18 == 7)))
               ) {
              puVar23[6] = puVar26[6];
            }
          }
          else if (uVar10 != 0) {
            uVar24 = *(ulong *)(param_1 + 0xe980);
            uVar14 = uVar25 + 1;
            uVar20 = uVar25;
            while( true ) {
              uVar21 = uVar14;
              *(undefined *)(*(long *)(param_1 + 0x4b90) + uVar19) =
                   *(undefined *)(*(long *)(param_1 + 0x4b90) + (uVar20 & uVar24));
              uVar24 = *(ulong *)(param_1 + 0xe980);
              uVar19 = *(long *)(param_1 + 0xc0) + 1U & uVar24;
              *(ulong *)(param_1 + 0xc0) = uVar19;
              if (uVar21 == uVar25 + 1 + (ulong)(uVar10 - 1)) break;
              uVar14 = uVar21 + 1;
              uVar20 = uVar21;
            }
          }
        }
        else if (iVar8 == 3) {
          uVar18 = piVar27[2];
          uVar11 = *(uint *)(param_1 + ((ulong)uVar18 + 0x28) * 4);
          if (uVar18 != 0) {
            lVar16 = (ulong)(uVar18 - 1) * -4;
            __n = ((ulong)(uVar18 - 1) + 1) * 4;
            memmove(param_1 + lVar16 + ((ulong)uVar18 + 0x28) * 4,param_1 + __n + 0x9c + lVar16,__n)
            ;
          }
          uVar25 = *(ulong *)(param_1 + 0xc0);
          uVar10 = *(ushort *)(piVar27 + 1);
          uVar14 = uVar25 - uVar11;
          *(uint *)(param_1 + 0xa0) = uVar11;
          uVar18 = (uint)uVar10;
          *(uint *)(param_1 + 0xb4) = uVar18;
          uVar19 = uVar25;
          if (uVar25 < uVar14) {
            uVar19 = uVar14;
          }
          if (uVar19 < *(long *)(param_1 + 0xe978) - 0x1001U) {
            *(ulong *)(param_1 + 0xc0) = uVar25 + uVar10;
            puVar26 = (undefined *)(*(long *)(param_1 + 0x4b90) + uVar14);
            puVar23 = (undefined *)(*(long *)(param_1 + 0x4b90) + uVar25);
            if (7 < uVar10) {
              uVar18 = uVar10 - 8;
              bVar13 = (long)uVar14 < (long)(uVar25 + 0x10);
              bVar12 = false;
              if (bVar13) {
                bVar12 = (long)(uVar25 - (uVar14 + 0x10)) < 0;
              }
              bVar13 = bVar12 != (bVar13 && SBORROW8(uVar25,uVar14 + 0x10));
              if ((bVar13 || uVar18 < 7) || !bVar13 && uVar18 == 7) {
                puVar17 = puVar23;
                puVar22 = puVar26;
                do {
                  *puVar17 = *puVar22;
                  puVar5 = puVar17 + 8;
                  puVar17[1] = puVar22[1];
                  puVar17[2] = puVar22[2];
                  puVar17[3] = puVar22[3];
                  puVar17[4] = puVar22[4];
                  puVar17[5] = puVar22[5];
                  puVar17[6] = puVar22[6];
                  puVar17[7] = puVar22[7];
                  puVar17 = puVar5;
                  puVar22 = puVar22 + 8;
                } while (puVar5 != puVar23 + (ulong)(uVar18 & 0xfffffff8) + 8);
              }
              else {
                uVar11 = (uVar18 >> 3) + 1;
                lVar16 = 0;
                do {
                  uVar15 = *(undefined8 *)(puVar26 + lVar16);
                  *(undefined8 *)((long)(puVar23 + lVar16) + 8) =
                       *(undefined8 *)((long)(puVar26 + lVar16) + 8);
                  *(undefined8 *)(puVar23 + lVar16) = uVar15;
                  lVar16 = lVar16 + 0x10;
                } while (((ulong)((uVar11 >> 1) - 1) + 1) * 0x10 - lVar16 != 0);
                lVar16 = ((ulong)uVar11 & 0x3ffffffe) * 8;
                if ((uVar11 & 1) != 0) {
                  puVar23[lVar16] = puVar26[lVar16];
                  puVar23[lVar16 + 1] = puVar26[lVar16 + 1];
                  puVar23[lVar16 + 2] = puVar26[lVar16 + 2];
                  puVar23[lVar16 + 3] = puVar26[lVar16 + 3];
                  puVar23[lVar16 + 4] = puVar26[lVar16 + 4];
                  puVar23[lVar16 + 5] = puVar26[lVar16 + 5];
                  puVar23[lVar16 + 6] = puVar26[lVar16 + 6];
                  puVar23[lVar16 + 7] = puVar26[lVar16 + 7];
                }
              }
              lVar16 = (ulong)(uVar18 & 0xfffffff8) + 8;
              uVar18 = uVar18 + (uVar18 >> 3) * -8;
              puVar26 = puVar26 + lVar16;
              puVar23 = puVar23 + lVar16;
            }
            if ((((uVar18 != 0) && (*puVar23 = *puVar26, uVar18 != 1)) &&
                ((puVar23[1] = puVar26[1], uVar18 != 2 &&
                 (((puVar23[2] = puVar26[2], uVar18 != 3 && (puVar23[3] = puVar26[3], uVar18 != 4))
                  && (puVar23[4] = puVar26[4], uVar18 != 5)))))) &&
               (puVar23[5] = puVar26[5], uVar18 == 7)) {
              puVar23[6] = puVar26[6];
            }
          }
          else if (uVar10 != 0) {
            uVar20 = *(ulong *)(param_1 + 0xe980);
            uVar19 = uVar14 + (uVar10 - 1);
            do {
              uVar20 = uVar14 & uVar20;
              bVar13 = uVar14 != uVar19;
              uVar14 = uVar14 + 1;
              *(undefined *)(*(long *)(param_1 + 0x4b90) + uVar25) =
                   *(undefined *)(*(long *)(param_1 + 0x4b90) + uVar20);
              uVar20 = *(ulong *)(param_1 + 0xe980);
              uVar25 = *(long *)(param_1 + 0xc0) + 1U & uVar20;
              *(ulong *)(param_1 + 0xc0) = uVar25;
            } while (bVar13);
          }
        }
        else if (iVar8 == 2) {
          uVar18 = *(uint *)(param_1 + 0xb4);
          if (uVar18 != 0) {
            uVar19 = *(ulong *)(param_1 + 0xc0);
            uVar25 = uVar19 - *(uint *)(param_1 + 0xa0);
            uVar14 = uVar19;
            if (uVar19 < uVar25) {
              uVar14 = uVar25;
            }
            lVar16 = *(long *)(param_1 + 0x4b90);
            if (uVar14 < *(long *)(param_1 + 0xe978) - 0x1001U) {
              *(ulong *)(param_1 + 0xc0) = uVar19 + uVar18;
              puVar26 = (undefined *)(lVar16 + uVar19);
              puVar23 = (undefined *)(lVar16 + uVar25);
              if (7 < uVar18) {
                uVar11 = uVar18 - 8;
                bVar13 = (long)uVar25 < (long)(uVar19 + 0x10);
                bVar12 = false;
                if (bVar13) {
                  bVar12 = (long)(uVar19 - (uVar25 + 0x10)) < 0;
                }
                bVar13 = bVar12 != (bVar13 && SBORROW8(uVar19,uVar25 + 0x10));
                if ((bVar13 || uVar11 < 7) || !bVar13 && uVar11 == 7) {
                  puVar17 = puVar26;
                  puVar22 = puVar23;
                  do {
                    *puVar17 = *puVar22;
                    puVar5 = puVar17 + 8;
                    puVar17[1] = puVar22[1];
                    puVar17[2] = puVar22[2];
                    puVar17[3] = puVar22[3];
                    puVar17[4] = puVar22[4];
                    puVar17[5] = puVar22[5];
                    puVar17[6] = puVar22[6];
                    puVar17[7] = puVar22[7];
                    puVar17 = puVar5;
                    puVar22 = puVar22 + 8;
                  } while (puVar5 != puVar26 + (ulong)(uVar11 & 0xfffffff8) + 8);
                }
                else {
                  uVar4 = (uVar11 >> 3) + 1;
                  lVar16 = 0;
                  do {
                    uVar15 = *(undefined8 *)(puVar23 + lVar16);
                    *(undefined8 *)((long)(puVar26 + lVar16) + 8) =
                         *(undefined8 *)((long)(puVar23 + lVar16) + 8);
                    *(undefined8 *)(puVar26 + lVar16) = uVar15;
                    lVar16 = lVar16 + 0x10;
                  } while (lVar16 != ((ulong)((uVar4 >> 1) - 1) + 1) * 0x10);
                  lVar16 = ((ulong)uVar4 & 0x3ffffffe) * 8;
                  if ((uVar4 & 1) != 0) {
                    puVar26[lVar16] = puVar23[lVar16];
                    puVar26[lVar16 + 1] = puVar23[lVar16 + 1];
                    puVar26[lVar16 + 2] = puVar23[lVar16 + 2];
                    puVar26[lVar16 + 3] = puVar23[lVar16 + 3];
                    puVar26[lVar16 + 4] = puVar23[lVar16 + 4];
                    puVar26[lVar16 + 5] = puVar23[lVar16 + 5];
                    puVar26[lVar16 + 6] = puVar23[lVar16 + 6];
                    puVar26[lVar16 + 7] = puVar23[lVar16 + 7];
                  }
                }
                lVar16 = (ulong)(uVar11 & 0xfffffff8) + 8;
                puVar23 = puVar23 + lVar16;
                puVar26 = puVar26 + lVar16;
                uVar18 = uVar18 & 7;
                if (uVar18 == 0) goto LAB_001dd9c8;
              }
              *puVar26 = *puVar23;
              if ((((uVar18 != 1) && (puVar26[1] = puVar23[1], uVar18 != 2)) &&
                  ((puVar26[2] = puVar23[2], uVar18 != 3 &&
                   ((puVar26[3] = puVar23[3], uVar18 != 4 && (puVar26[4] = puVar23[4], uVar18 != 5))
                   )))) && (puVar26[5] = puVar23[5], uVar18 == 7)) {
                puVar26[6] = puVar23[6];
              }
            }
            else {
              uVar14 = uVar25 + 1;
              *(undefined *)(lVar16 + uVar19) =
                   *(undefined *)(lVar16 + (uVar25 & *(ulong *)(param_1 + 0xe980)));
              uVar20 = *(ulong *)(param_1 + 0xe980);
              uVar19 = *(long *)(param_1 + 0xc0) + 1U & uVar20;
              *(ulong *)(param_1 + 0xc0) = uVar19;
              if (uVar18 != 1) {
                do {
                  uVar20 = uVar20 & uVar14;
                  uVar14 = uVar14 + 1;
                  *(undefined *)(*(long *)(param_1 + 0x4b90) + uVar19) =
                       *(undefined *)(*(long *)(param_1 + 0x4b90) + uVar20);
                  uVar20 = *(ulong *)(param_1 + 0xe980);
                  uVar19 = *(long *)(param_1 + 0xc0) + 1U & uVar20;
                  *(ulong *)(param_1 + 0xc0) = uVar19;
                } while (uVar14 != (uVar18 - 2) + uVar25 + 2);
              }
            }
          }
        }
        else if (iVar8 == 4) {
          piVar1 = piVar27 + 1;
          iStack_1c = piVar27[2];
          piVar2 = piVar27 + 4;
          iStack_18 = piVar27[5];
          piVar3 = piVar27 + 7;
          iStack_10 = piVar27[8];
          piVar27 = piVar27 + 6;
          aUStack_20[0] = SUB21(*(undefined2 *)piVar1,0);
          uStack_14 = (undefined)*(undefined2 *)piVar2;
          uStack_c = (undefined)*(undefined2 *)piVar3;
          Unpack::AddFilter(param_1,aUStack_20);
        }
LAB_001dd9c8:
        piVar27 = piVar27 + 3;
        if (piVar28 <= piVar27) goto LAB_001ddb28;
      }
      uVar14 = *(ulong *)(param_1 + 0xc0);
      *(ulong *)(param_1 + 0xc0) = uVar14 + 1;
      *(undefined *)(*(long *)(param_1 + 0x4b90) + (uVar14 & *(ulong *)(param_1 + 0xe980))) =
           *(undefined *)(piVar27 + 2);
      if (*(short *)(piVar27 + 1) == 0) goto LAB_001dd9c8;
      uVar14 = *(ulong *)(param_1 + 0xc0);
      *(ulong *)(param_1 + 0xc0) = uVar14 + 1;
      *(undefined *)(*(long *)(param_1 + 0x4b90) + (uVar14 & *(ulong *)(param_1 + 0xe980))) =
           *(undefined *)((long)piVar27 + 9);
      if (*(ushort *)(piVar27 + 1) < 2) goto LAB_001dd9c8;
      uVar14 = *(ulong *)(param_1 + 0xc0);
      *(ulong *)(param_1 + 0xc0) = uVar14 + 1;
      *(undefined *)(*(long *)(param_1 + 0x4b90) + (uVar14 & *(ulong *)(param_1 + 0xe980))) =
           *(undefined *)((long)piVar27 + 10);
      if (*(ushort *)(piVar27 + 1) < 3) goto LAB_001dd9c8;
      uVar14 = *(ulong *)(param_1 + 0xc0);
      *(ulong *)(param_1 + 0xc0) = uVar14 + 1;
      *(undefined *)(*(long *)(param_1 + 0x4b90) + (uVar14 & *(ulong *)(param_1 + 0xe980))) =
           *(undefined *)((long)piVar27 + 0xb);
      if (*(ushort *)(piVar27 + 1) < 4) goto LAB_001dd9c8;
      uVar14 = *(ulong *)(param_1 + 0xc0);
      *(ulong *)(param_1 + 0xc0) = uVar14 + 1;
      *(undefined *)(*(long *)(param_1 + 0x4b90) + (uVar14 & *(ulong *)(param_1 + 0xe980))) =
           *(undefined *)(piVar27 + 3);
      if (*(ushort *)(piVar27 + 1) < 5) goto LAB_001dd9c8;
      uVar14 = 5;
      do {
        uVar19 = *(ulong *)(param_1 + 0xc0);
        *(ulong *)(param_1 + 0xc0) = uVar19 + 1;
        uVar18 = (int)uVar14 + 1;
        *(undefined *)(*(long *)(param_1 + 0x4b90) + (uVar19 & *(ulong *)(param_1 + 0xe980))) =
             *(undefined *)((long)piVar27 + uVar14 + 8);
        uVar14 = (ulong)uVar18;
      } while (uVar18 <= *(ushort *)(piVar27 + 1));
      piVar27 = piVar27 + 3;
    } while (piVar27 < piVar28);
  }
LAB_001ddb28:
  uVar15 = 1;
LAB_001ddb2c:
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15,lStack_8 - ___stack_chk_guard,0);
}


