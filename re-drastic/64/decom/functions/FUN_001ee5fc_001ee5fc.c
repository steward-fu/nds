/*
 * Ghidra decompilation
 *
 * Function : FUN_001ee5fc
 * Address  : 001ee5fc
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ee5fc(long param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  uint *puVar24;
  int iVar25;
  byte *pbVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  int iVar42;
  int iVar43;
  
  lVar13 = ___stack_chk_guard;
  pbVar19 = &__stack_chk_guard;
  uVar21 = 0;
  if (param_2 == 4) {
    pbVar39 = *(byte **)(param_1 + 0x18);
    pbVar19 = pbVar39 + 0x3c000;
    iVar43 = *(int *)(param_1 + 0x24);
    uVar30 = *(uint *)(param_1 + 0x30);
    iVar18 = *(int *)(param_1 + 0x20);
    *(uint *)(pbVar39 + 0x3c020) = uVar30;
    if (-1 < iVar43 && uVar30 < 0x1dfff || -1 < iVar43 && uVar30 == 0x1dfff) {
      pbVar40 = pbVar39 + uVar30;
      lVar23 = (long)pbVar40 - (long)(iVar18 + -3);
      pbVar41 = (byte *)0x0;
      do {
        if ((int)pbVar41 < (int)uVar30) {
          uVar21 = 0;
          pbVar19 = pbVar41;
          pbVar26 = pbVar39;
          do {
            while (iVar20 = (int)uVar21, (3 - iVar18) + (int)pbVar19 < 3) {
LAB_001ee910:
              pbVar39 = pbVar26 + 1;
              uVar21 = (ulong)(iVar20 - (uint)*pbVar26 & 0xff);
              pbVar40[(long)pbVar19] = (byte)(iVar20 - (uint)*pbVar26);
              pbVar19 = pbVar19 + 3;
              pbVar26 = pbVar39;
              if ((int)uVar30 <= (int)pbVar19) goto LAB_001ee930;
            }
            bVar5 = pbVar19[lVar23];
            bVar6 = pbVar19[lVar23 + -3];
            iVar25 = (iVar20 + (uint)bVar5) - (uint)bVar6;
            iVar22 = iVar25 - (uint)bVar5;
            iVar42 = -iVar22;
            if (-1 < iVar22) {
              iVar42 = iVar22;
            }
            iVar16 = iVar25 - (uint)bVar6;
            iVar22 = -iVar16;
            if (-1 < iVar16) {
              iVar22 = iVar16;
            }
            iVar16 = iVar42;
            if (iVar22 < iVar42) {
              iVar16 = iVar22;
            }
            iVar25 = iVar25 - iVar20;
            iVar10 = -iVar25;
            if (-1 < iVar25) {
              iVar10 = iVar25;
            }
            if (iVar10 <= iVar16) goto LAB_001ee910;
            pbVar39 = pbVar26 + 1;
            if (iVar42 <= iVar22) {
              bVar6 = bVar5;
            }
            uVar21 = (ulong)(byte)(bVar6 - *pbVar26);
            pbVar40[(long)pbVar19] = bVar6 - *pbVar26;
            pbVar19 = pbVar19 + 3;
            pbVar26 = pbVar39;
          } while ((int)pbVar19 < (int)uVar30);
        }
LAB_001ee930:
        pbVar41 = pbVar41 + 1;
      } while (pbVar41 != (byte *)0x3);
      if (iVar43 < (int)(uVar30 - 2)) {
        pbVar39 = pbVar40 + iVar43;
        do {
          uVar21 = (ulong)pbVar39[2];
          uVar3 = (uint)pbVar39[1] + (uint)*pbVar39;
          pbVar19 = (byte *)(ulong)uVar3;
          pbVar41 = pbVar39 + 3;
          *pbVar39 = (byte)uVar3;
          pbVar39[2] = pbVar39[1] + pbVar39[2];
          pbVar39 = pbVar41;
        } while ((int)pbVar41 - (int)pbVar40 < (int)(uVar30 - 2));
      }
    }
  }
  else if (param_2 < 5) {
    if (param_2 == 3) {
      iVar43 = *(int *)(param_1 + 0x30);
      pbVar19 = (byte *)0x3bfea;
      uVar21 = (ulong)(iVar43 - 0x15U);
      if ((iVar43 - 0x15U < 0x3bfeb) && (uVar30 = *(uint *)(param_1 + 0x38) >> 4, iVar43 != 0x15)) {
        uVar3 = uVar30 + 1;
        uVar2 = uVar3 + (iVar43 - 0x16U >> 4);
        uVar21 = (ulong)uVar2;
        pbVar19 = *(byte **)(param_1 + 0x18);
        while( true ) {
          uVar31 = uVar3;
          iVar43 = (*pbVar19 & 0x1f) - 0x10;
          if ((-1 < iVar43) &&
             (bVar5 = RarVM::ExecuteStandardFilter(VM_StandardFilters)::Masks[iVar43], bVar5 != 0))
          {
            if (((bVar5 & 1) != 0) && ((*(uint *)(pbVar19 + 5) >> 2 & 0xf) == 5)) {
              iVar43 = ((*(uint *)(pbVar19 + 2) >> 2) - uVar30 & 0xfffff) << 2;
              pbVar19[2] = pbVar19[2] & 3 | (byte)iVar43;
              pbVar19[3] = (byte)((uint)iVar43 >> 8);
              pbVar19[4] = pbVar19[4] & 0xc0 | (byte)((uint)iVar43 >> 0x10);
            }
            if (((bVar5 >> 1 & 1) != 0) && ((*(uint *)(pbVar19 + 10) >> 3 & 0xf) == 5)) {
              iVar43 = ((*(uint *)(pbVar19 + 7) >> 3) - uVar30 & 0xfffff) << 3;
              pbVar19[7] = pbVar19[7] & 7 | (byte)iVar43;
              pbVar19[8] = (byte)((uint)iVar43 >> 8);
              pbVar19[9] = pbVar19[9] & 0x80 | (byte)((uint)iVar43 >> 0x10);
            }
            if (((bVar5 >> 2 & 1) != 0) && ((*(uint *)(pbVar19 + 0xf) >> 4 & 0xf) == 5)) {
              iVar43 = ((*(uint *)(pbVar19 + 0xc) >> 4) - uVar30 & 0xfffff) << 4;
              pbVar19[0xc] = pbVar19[0xc] & 0xf | (byte)iVar43;
              pbVar19[0xd] = (byte)((uint)iVar43 >> 8);
              pbVar19[0xe] = (byte)((uint)iVar43 >> 0x10);
            }
          }
          pbVar19 = pbVar19 + 0x10;
          if (uVar31 == uVar2) break;
          uVar3 = uVar31 + 1;
          uVar30 = uVar31;
        }
      }
    }
    else if (param_2 != 0) {
      pbVar19 = (byte *)0x3bffb;
      uVar30 = *(int *)(param_1 + 0x30) - 4;
      if (uVar30 < 0x3bffc) {
        iVar43 = *(int *)(param_1 + 0x38);
        pbVar19 = (byte *)0x0;
        puVar17 = *(uint **)(param_1 + 0x18);
        while (puVar24 = puVar17, iVar18 = (int)pbVar19, iVar18 < (int)uVar30) {
          pbVar19 = (byte *)(ulong)(iVar18 + 1U);
          puVar17 = (uint *)((long)puVar24 + 1);
          bVar5 = *(byte *)puVar24;
          uVar21 = (ulong)bVar5;
          if (bVar5 == 0xe8 || (param_2 == 2) + 0xe8 == (uint)bVar5) {
            uVar3 = *(uint *)((long)puVar24 + 1);
            uVar21 = (ulong)uVar3;
            iVar20 = iVar18 + 1U + iVar43;
            if ((int)uVar3 < 0) {
              if (-1 < (int)(iVar20 + uVar3)) {
                uVar21 = (ulong)(uVar3 + 0x1000000);
                *puVar17 = uVar3 + 0x1000000;
              }
            }
            else if ((int)uVar3 < 0x1000000) {
              *puVar17 = uVar3 - iVar20;
            }
            pbVar19 = (byte *)(ulong)(iVar18 + 5);
            puVar17 = (uint *)((long)puVar24 + 5);
          }
        }
      }
    }
  }
  else if (param_2 == 5) {
    pbVar39 = *(byte **)(param_1 + 0x18);
    uVar30 = *(uint *)(param_1 + 0x30);
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(pbVar39 + 0x3c020) = uVar30;
    if (((uVar30 < 0x1e000) && (0 < (int)uVar3)) && (0 < (int)uVar30)) {
      uVar2 = uVar30;
      if ((int)uVar3 < (int)uVar30) {
        uVar2 = uVar3;
      }
      lVar23 = 0;
      pbVar40 = pbVar39;
      do {
        uVar38 = 0;
        uVar37 = 0;
        uVar34 = 0;
        uVar33 = 0;
        uVar36 = 0;
        uVar35 = 0;
        uVar28 = 0;
        uVar31 = 0;
        iVar43 = 0;
        iVar18 = 0;
        iVar20 = 0;
        uVar32 = 0;
        iVar22 = 0;
        iVar25 = 0;
        lVar27 = lVar23;
        iVar42 = 0;
        if (uVar3 == 1) {
          do {
            while( true ) {
              iVar16 = iVar42;
              uVar8 = iVar16 - iVar22;
              uVar21 = (ulong)uVar8;
              pbVar41 = pbVar40 + 1;
              bVar5 = *pbVar40;
              iVar42 = (int)uVar32;
              uVar7 = -(uint)(bVar5 >> 7) & 0xfffff800 | (uint)bVar5 << 3;
              uVar29 = -uVar7;
              if (-1 < (int)uVar7) {
                uVar29 = uVar7;
              }
              iVar10 = uVar7 - iVar16;
              iVar22 = -iVar10;
              if (-1 < iVar10) {
                iVar22 = iVar10;
              }
              iVar10 = uVar7 + iVar16;
              iVar4 = -iVar10;
              if (-1 < iVar10) {
                iVar4 = iVar10;
              }
              iVar9 = (iVar25 * 8 + iVar42 * iVar43 + iVar20 * iVar16 + iVar18 * uVar8 >> 3 & 0xff)
                      - (uint)bVar5;
              iVar11 = uVar7 - uVar8;
              iVar10 = -iVar11;
              if (-1 < iVar11) {
                iVar10 = iVar11;
              }
              uVar35 = uVar35 + iVar22;
              iVar22 = uVar7 + uVar8;
              iVar11 = -iVar22;
              if (-1 < iVar22) {
                iVar11 = iVar22;
              }
              pbVar39[lVar27 + (ulong)uVar30] = (byte)iVar9;
              uVar12 = uVar7 - iVar42;
              uVar8 = -uVar12;
              if (-1 < (int)uVar12) {
                uVar8 = uVar12;
              }
              pbVar19 = (byte *)(ulong)uVar8;
              iVar42 = uVar7 + iVar42;
              iVar22 = -iVar42;
              if (-1 < iVar42) {
                iVar22 = iVar42;
              }
              uVar28 = uVar28 + uVar29;
              uVar36 = uVar36 + iVar4;
              uVar33 = uVar33 + iVar10;
              uVar34 = uVar34 + iVar11;
              iVar42 = (int)(char)((byte)iVar9 - (char)iVar25);
              uVar37 = uVar37 + uVar8;
              uVar38 = uVar38 + iVar22;
              uVar32 = uVar21;
              pbVar40 = pbVar41;
              iVar25 = iVar9;
              iVar22 = iVar16;
              if ((uVar31 & 0x1f) != 0) break;
              uVar29 = uVar28;
              if (uVar35 < uVar28) {
                uVar29 = uVar35;
              }
              cVar15 = uVar35 < uVar28;
              if (uVar36 < uVar29) {
                cVar15 = '\x02';
                uVar29 = uVar36;
              }
              if (uVar33 < uVar29) {
                if (uVar34 < uVar33) {
LAB_001eed28:
                  if (uVar37 < uVar34) goto LAB_001eed10;
                  if (uVar38 < uVar34) goto LAB_001eed00;
                  if (iVar18 < 0x10) {
                    iVar18 = iVar18 + 1;
                  }
                }
                else {
                  if (uVar37 < uVar33) {
LAB_001eed10:
                    if (uVar37 <= uVar38) {
                      if (iVar43 + 0x10 < 0 == SCARRY4(iVar43,0x10)) {
                        iVar43 = iVar43 + -1;
                      }
                      goto LAB_001eeb40;
                    }
                  }
                  else if (uVar33 <= uVar38) {
                    if (iVar18 + 0x10 < 0 == SCARRY4(iVar18,0x10)) {
                      iVar18 = iVar18 + -1;
                    }
                    goto LAB_001eeb40;
                  }
LAB_001eed00:
                  if (iVar43 < 0x10) {
                    iVar43 = iVar43 + 1;
                  }
                }
              }
              else {
                if (uVar34 < uVar29) goto LAB_001eed28;
                if (uVar37 < uVar29) goto LAB_001eed10;
                if (uVar38 < uVar29) goto LAB_001eed00;
                if (cVar15 == '\x01') {
                  if (iVar20 + 0x10 < 0 == SCARRY4(iVar20,0x10)) {
                    iVar20 = iVar20 + -1;
                  }
                }
                else if ((cVar15 == '\x02') && (iVar20 < 0x10)) {
                  iVar20 = iVar20 + 1;
                }
              }
LAB_001eeb40:
              lVar27 = lVar27 + 1;
              uVar31 = uVar31 + 1;
              uVar38 = 0;
              uVar37 = 0;
              uVar34 = 0;
              uVar33 = 0;
              uVar36 = 0;
              uVar35 = 0;
              uVar28 = 0;
              if ((int)uVar30 <= (int)lVar27) goto LAB_001eeb6c;
            }
            lVar27 = lVar27 + 1;
            uVar31 = uVar31 + 1;
          } while ((int)lVar27 < (int)uVar30);
        }
        else {
          do {
            iVar16 = iVar42;
            uVar8 = iVar16 - iVar22;
            uVar21 = (ulong)uVar8;
            pbVar41 = pbVar40 + 1;
            bVar5 = *pbVar40;
            iVar42 = (int)uVar32;
            uVar7 = -(uint)(bVar5 >> 7) & 0xfffff800 | (uint)bVar5 << 3;
            uVar29 = -uVar7;
            if (-1 < (int)uVar7) {
              uVar29 = uVar7;
            }
            iVar10 = uVar7 - iVar16;
            iVar22 = -iVar10;
            if (-1 < iVar10) {
              iVar22 = iVar10;
            }
            iVar10 = iVar16 + uVar7;
            iVar4 = -iVar10;
            if (-1 < iVar10) {
              iVar4 = iVar10;
            }
            iVar9 = (iVar43 * iVar42 + iVar25 * 8 + uVar8 * iVar18 + iVar16 * iVar20 >> 3 & 0xff) -
                    (uint)bVar5;
            iVar11 = uVar7 - uVar8;
            iVar10 = -iVar11;
            if (-1 < iVar11) {
              iVar10 = iVar11;
            }
            uVar35 = uVar35 + iVar22;
            iVar22 = uVar8 + uVar7;
            bVar5 = (byte)iVar9;
            iVar11 = -iVar22;
            if (-1 < iVar22) {
              iVar11 = iVar22;
            }
            pbVar39[lVar27 + (ulong)uVar30] = bVar5;
            uVar12 = uVar7 - iVar42;
            uVar8 = -uVar12;
            if (-1 < (int)uVar12) {
              uVar8 = uVar12;
            }
            pbVar19 = (byte *)(ulong)uVar8;
            iVar42 = uVar7 + iVar42;
            iVar22 = -iVar42;
            if (-1 < iVar42) {
              iVar22 = iVar42;
            }
            uVar28 = uVar28 + uVar29;
            uVar36 = uVar36 + iVar4;
            uVar33 = uVar33 + iVar10;
            uVar34 = uVar34 + iVar11;
            uVar37 = uVar37 + uVar8;
            uVar38 = uVar38 + iVar22;
            if ((uVar31 & 0x1f) == 0) {
              uVar29 = uVar28;
              if (uVar35 < uVar28) {
                uVar29 = uVar35;
              }
              cVar15 = uVar35 < uVar28;
              if (uVar36 < uVar29) {
                cVar15 = '\x02';
                uVar29 = uVar36;
              }
              if (uVar33 < uVar29) {
                if (uVar34 < uVar33) {
LAB_001eed90:
                  if (uVar37 < uVar34) goto LAB_001eece8;
                  if (uVar38 < uVar34) goto LAB_001eeda0;
                  if (iVar18 < 0x10) {
                    iVar18 = iVar18 + 1;
                  }
                }
                else {
                  if (uVar37 < uVar33) {
LAB_001eece8:
                    if (uVar37 <= uVar38) {
                      if (iVar43 + 0x10 < 0 == SCARRY4(iVar43,0x10)) {
                        iVar43 = iVar43 + -1;
                      }
                      goto LAB_001eebc8;
                    }
                  }
                  else if (uVar33 <= uVar38) {
                    if (iVar18 + 0x10 < 0 == SCARRY4(iVar18,0x10)) {
                      iVar18 = iVar18 + -1;
                    }
                    goto LAB_001eebc8;
                  }
LAB_001eeda0:
                  if (iVar43 < 0x10) {
                    iVar43 = iVar43 + 1;
                  }
                }
              }
              else {
                if (uVar34 < uVar29) goto LAB_001eed90;
                if (uVar37 < uVar29) goto LAB_001eece8;
                if (uVar38 < uVar29) goto LAB_001eeda0;
                if (cVar15 == '\x01') {
                  if (iVar20 + 0x10 < 0 == SCARRY4(iVar20,0x10)) {
                    iVar20 = iVar20 + -1;
                  }
                }
                else if ((cVar15 == '\x02') && (iVar20 < 0x10)) {
                  iVar20 = iVar20 + 1;
                }
              }
LAB_001eebc8:
              uVar38 = 0;
              uVar37 = 0;
              uVar34 = 0;
              uVar33 = 0;
              uVar36 = 0;
              uVar35 = 0;
              uVar28 = 0;
            }
            lVar27 = lVar27 + (int)uVar3;
            uVar31 = uVar31 + 1;
            uVar32 = uVar21;
            pbVar40 = pbVar41;
            iVar42 = (int)(char)(bVar5 - (char)iVar25);
            iVar25 = iVar9;
            iVar22 = iVar16;
          } while ((int)lVar27 < (int)uVar30);
        }
LAB_001eeb6c:
        lVar23 = lVar23 + 1;
        pbVar40 = pbVar41;
      } while ((int)lVar23 < (int)uVar2);
    }
  }
  else if (param_2 == 6) {
    uVar30 = *(uint *)(param_1 + 0x30);
    iVar43 = *(int *)(param_1 + 0x20);
    *(uint *)(*(long *)(param_1 + 0x18) + 0x3c020) = uVar30;
    if ((uVar30 < 0x1e000) && (0 < iVar43)) {
      iVar18 = uVar30 * 2;
      if (iVar43 == 1) {
        uVar32 = (ulong)uVar30;
        iVar43 = 0;
        uVar3 = uVar30;
        do {
          pbVar19 = (byte *)(ulong)uVar3;
          if ((int)uVar3 < iVar18) {
            lVar23 = (long)iVar43;
            cVar15 = '\0';
            uVar21 = uVar32;
            do {
              uVar2 = (int)pbVar19 + 1;
              pbVar19 = (byte *)(ulong)uVar2;
              iVar43 = iVar43 + 1;
              pcVar1 = (char *)(*(long *)(param_1 + 0x18) + lVar23);
              lVar23 = lVar23 + 1;
              cVar15 = cVar15 - *pcVar1;
              *(char *)(*(long *)(param_1 + 0x18) + uVar21) = cVar15;
              uVar21 = uVar21 + 1;
            } while ((int)uVar2 < iVar18);
          }
          bVar14 = uVar30 != uVar3;
          uVar32 = uVar32 + 1;
          uVar3 = uVar3 + 1;
        } while (bVar14);
      }
      else {
        uVar32 = (ulong)uVar30;
        uVar3 = uVar30 + iVar43;
        iVar20 = 0;
        do {
          pbVar19 = (byte *)(ulong)uVar30;
          if ((int)uVar30 < iVar18) {
            lVar23 = (long)iVar20;
            cVar15 = '\0';
            uVar21 = uVar32;
            do {
              uVar2 = (int)pbVar19 + iVar43;
              pbVar19 = (byte *)(ulong)uVar2;
              iVar20 = iVar20 + 1;
              pcVar1 = (char *)(*(long *)(param_1 + 0x18) + lVar23);
              lVar23 = lVar23 + 1;
              cVar15 = cVar15 - *pcVar1;
              *(char *)(*(long *)(param_1 + 0x18) + uVar21) = cVar15;
              uVar21 = uVar21 + (long)iVar43;
            } while ((int)uVar2 < iVar18);
          }
          uVar30 = uVar30 + 1;
          uVar32 = uVar32 + 1;
        } while (uVar3 != uVar30);
      }
    }
  }
  if (lVar13 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar13 - ___stack_chk_guard,0,pbVar19,uVar21);
}


