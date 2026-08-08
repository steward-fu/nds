/*
 * Ghidra decompilation
 *
 * Function : ExecuteStandardFilter
 * Address  : 001ee600
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RarVM::ExecuteStandardFilter(VM_StandardFilters) */

void __thiscall RarVM::ExecuteStandardFilter(RarVM *this,VM_StandardFilters param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  bool bVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  byte *pbVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  byte *pbVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  int iVar43;
  int iVar44;
  
  lVar12 = ___stack_chk_guard;
  pbVar19 = &__stack_chk_guard;
  uVar20 = 0;
  if (param_1 == 4) {
    pbVar40 = *(byte **)(this + 0x18);
    pbVar19 = pbVar40 + 0x3c000;
    iVar25 = *(int *)(this + 0x24);
    uVar31 = *(uint *)(this + 0x30);
    iVar44 = *(int *)(this + 0x20);
    *(uint *)(pbVar40 + 0x3c020) = uVar31;
    if (-1 < iVar25 && uVar31 < 0x1dfff || -1 < iVar25 && uVar31 == 0x1dfff) {
      pbVar41 = pbVar40 + uVar31;
      lVar23 = (long)pbVar41 - (long)(iVar44 + -3);
      pbVar42 = (byte *)0x0;
      do {
        if ((int)pbVar42 < (int)uVar31) {
          uVar20 = 0;
          pbVar19 = pbVar42;
          pbVar27 = pbVar40;
          do {
            while (iVar18 = (int)uVar20, (3 - iVar44) + (int)pbVar19 < 3) {
LAB_001ee910:
              pbVar40 = pbVar27 + 1;
              uVar20 = (ulong)(iVar18 - (uint)*pbVar27 & 0xff);
              pbVar41[(long)pbVar19] = (byte)(iVar18 - (uint)*pbVar27);
              pbVar19 = pbVar19 + 3;
              pbVar27 = pbVar40;
              if ((int)uVar31 <= (int)pbVar19) goto LAB_001ee930;
            }
            bVar4 = pbVar19[lVar23];
            bVar5 = pbVar19[lVar23 + -3];
            iVar26 = (iVar18 + (uint)bVar4) - (uint)bVar5;
            iVar22 = iVar26 - (uint)bVar4;
            iVar43 = -iVar22;
            if (-1 < iVar22) {
              iVar43 = iVar22;
            }
            iVar16 = iVar26 - (uint)bVar5;
            iVar22 = -iVar16;
            if (-1 < iVar16) {
              iVar22 = iVar16;
            }
            iVar16 = iVar43;
            if (iVar22 < iVar43) {
              iVar16 = iVar22;
            }
            iVar26 = iVar26 - iVar18;
            iVar9 = -iVar26;
            if (-1 < iVar26) {
              iVar9 = iVar26;
            }
            if (iVar9 <= iVar16) goto LAB_001ee910;
            pbVar40 = pbVar27 + 1;
            if (iVar43 <= iVar22) {
              bVar5 = bVar4;
            }
            uVar20 = (ulong)(byte)(bVar5 - *pbVar27);
            pbVar41[(long)pbVar19] = bVar5 - *pbVar27;
            pbVar19 = pbVar19 + 3;
            pbVar27 = pbVar40;
          } while ((int)pbVar19 < (int)uVar31);
        }
LAB_001ee930:
        pbVar42 = pbVar42 + 1;
      } while (pbVar42 != (byte *)0x3);
      if (iVar25 < (int)(uVar31 - 2)) {
        pbVar40 = pbVar41 + iVar25;
        do {
          uVar20 = (ulong)pbVar40[2];
          uVar2 = (uint)pbVar40[1] + (uint)*pbVar40;
          pbVar19 = (byte *)(ulong)uVar2;
          pbVar42 = pbVar40 + 3;
          *pbVar40 = (byte)uVar2;
          pbVar40[2] = pbVar40[1] + pbVar40[2];
          pbVar40 = pbVar42;
        } while ((int)pbVar42 - (int)pbVar41 < (int)(uVar31 - 2));
      }
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 3) {
      iVar25 = *(int *)(this + 0x30);
      pbVar19 = (byte *)0x3bfea;
      uVar20 = (ulong)(iVar25 - 0x15U);
      if ((iVar25 - 0x15U < 0x3bfeb) && (iVar25 != 0x15)) {
        uVar31 = (*(uint *)(this + 0x38) >> 4) + 1;
        uVar2 = uVar31 + (iVar25 - 0x16U >> 4);
        uVar20 = (ulong)uVar2;
        pbVar19 = *(byte **)(this + 0x18);
        uVar21 = *(uint *)(this + 0x38) >> 4;
        while( true ) {
          iVar25 = (*pbVar19 & 0x1f) - 0x10;
          if ((-1 < iVar25) &&
             (bVar4 = ExecuteStandardFilter(VM_StandardFilters)::Masks[iVar25], bVar4 != 0)) {
            if (((bVar4 & 1) != 0) && ((*(uint *)(pbVar19 + 5) >> 2 & 0xf) == 5)) {
              iVar25 = ((*(uint *)(pbVar19 + 2) >> 2) - uVar21 & 0xfffff) << 2;
              pbVar19[2] = pbVar19[2] & 3 | (byte)iVar25;
              pbVar19[3] = (byte)((uint)iVar25 >> 8);
              pbVar19[4] = pbVar19[4] & 0xc0 | (byte)((uint)iVar25 >> 0x10);
            }
            if (((bVar4 >> 1 & 1) != 0) && ((*(uint *)(pbVar19 + 10) >> 3 & 0xf) == 5)) {
              iVar25 = ((*(uint *)(pbVar19 + 7) >> 3) - uVar21 & 0xfffff) << 3;
              pbVar19[7] = pbVar19[7] & 7 | (byte)iVar25;
              pbVar19[8] = (byte)((uint)iVar25 >> 8);
              pbVar19[9] = pbVar19[9] & 0x80 | (byte)((uint)iVar25 >> 0x10);
            }
            if (((bVar4 >> 2 & 1) != 0) && ((*(uint *)(pbVar19 + 0xf) >> 4 & 0xf) == 5)) {
              iVar25 = ((*(uint *)(pbVar19 + 0xc) >> 4) - uVar21 & 0xfffff) << 4;
              pbVar19[0xc] = pbVar19[0xc] & 0xf | (byte)iVar25;
              pbVar19[0xd] = (byte)((uint)iVar25 >> 8);
              pbVar19[0xe] = (byte)((uint)iVar25 >> 0x10);
            }
          }
          pbVar19 = pbVar19 + 0x10;
          if (uVar31 == uVar2) break;
          uVar21 = uVar31;
          uVar31 = uVar31 + 1;
        }
      }
    }
    else if (param_1 != 0) {
      iVar25 = *(int *)(this + 0x30);
      pbVar19 = (byte *)0x3bffb;
      if (iVar25 - 4U < 0x3bffc) {
        iVar44 = *(int *)(this + 0x38);
        pbVar19 = (byte *)0x0;
        puVar24 = *(uint **)(this + 0x18);
        while (iVar18 = (int)pbVar19, iVar18 < (int)(iVar25 - 4U)) {
          puVar17 = (uint *)((long)puVar24 + 1);
          bVar4 = *(byte *)puVar24;
          uVar20 = (ulong)bVar4;
          if (bVar4 == 0xe8 || (param_1 == 2) + 0xe8 == (uint)bVar4) {
            uVar31 = *(uint *)((long)puVar24 + 1);
            uVar20 = (ulong)uVar31;
            iVar43 = iVar18 + 1U + iVar44;
            if ((int)uVar31 < 0) {
              if (-1 < (int)(iVar43 + uVar31)) {
                uVar20 = (ulong)(uVar31 + 0x1000000);
                *puVar17 = uVar31 + 0x1000000;
              }
            }
            else if ((int)uVar31 < 0x1000000) {
              *puVar17 = uVar31 - iVar43;
            }
            puVar24 = (uint *)((long)puVar24 + 5);
            pbVar19 = (byte *)(ulong)(iVar18 + 5);
          }
          else {
            pbVar19 = (byte *)(ulong)(iVar18 + 1U);
            puVar24 = puVar17;
          }
        }
      }
    }
  }
  else if (param_1 == 5) {
    pbVar40 = *(byte **)(this + 0x18);
    uVar31 = *(uint *)(this + 0x30);
    uVar2 = *(uint *)(this + 0x20);
    *(uint *)(pbVar40 + 0x3c020) = uVar31;
    if (((uVar31 < 0x1e000) && (0 < (int)uVar2)) && (0 < (int)uVar31)) {
      uVar21 = uVar31;
      if ((int)uVar2 < (int)uVar31) {
        uVar21 = uVar2;
      }
      lVar23 = 0;
      pbVar41 = pbVar40;
      do {
        uVar39 = 0;
        uVar38 = 0;
        uVar35 = 0;
        uVar34 = 0;
        uVar37 = 0;
        uVar36 = 0;
        uVar29 = 0;
        uVar32 = 0;
        iVar25 = 0;
        iVar44 = 0;
        iVar18 = 0;
        uVar33 = 0;
        iVar22 = 0;
        iVar26 = 0;
        lVar28 = lVar23;
        iVar43 = 0;
        if (uVar2 == 1) {
          do {
            while( true ) {
              iVar16 = iVar43;
              uVar7 = iVar16 - iVar22;
              uVar20 = (ulong)uVar7;
              pbVar42 = pbVar41 + 1;
              bVar4 = *pbVar41;
              iVar43 = (int)uVar33;
              uVar6 = -(uint)(bVar4 >> 7) & 0xfffff800 | (uint)bVar4 << 3;
              uVar30 = -uVar6;
              if (-1 < (int)uVar6) {
                uVar30 = uVar6;
              }
              iVar9 = uVar6 - iVar16;
              iVar22 = -iVar9;
              if (-1 < iVar9) {
                iVar22 = iVar9;
              }
              iVar9 = uVar6 + iVar16;
              iVar3 = -iVar9;
              if (-1 < iVar9) {
                iVar3 = iVar9;
              }
              iVar8 = (iVar26 * 8 + iVar43 * iVar25 + iVar18 * iVar16 + iVar44 * uVar7 >> 3 & 0xff)
                      - (uint)bVar4;
              iVar10 = uVar6 - uVar7;
              iVar9 = -iVar10;
              if (-1 < iVar10) {
                iVar9 = iVar10;
              }
              uVar36 = uVar36 + iVar22;
              iVar22 = uVar6 + uVar7;
              iVar10 = -iVar22;
              if (-1 < iVar22) {
                iVar10 = iVar22;
              }
              pbVar40[lVar28 + (ulong)uVar31] = (byte)iVar8;
              uVar11 = uVar6 - iVar43;
              uVar7 = -uVar11;
              if (-1 < (int)uVar11) {
                uVar7 = uVar11;
              }
              pbVar19 = (byte *)(ulong)uVar7;
              iVar43 = uVar6 + iVar43;
              iVar22 = -iVar43;
              if (-1 < iVar43) {
                iVar22 = iVar43;
              }
              uVar29 = uVar29 + uVar30;
              uVar37 = uVar37 + iVar3;
              uVar34 = uVar34 + iVar9;
              uVar35 = uVar35 + iVar10;
              iVar43 = (int)(char)((byte)iVar8 - (char)iVar26);
              uVar38 = uVar38 + uVar7;
              uVar39 = uVar39 + iVar22;
              uVar33 = uVar20;
              pbVar41 = pbVar42;
              iVar26 = iVar8;
              iVar22 = iVar16;
              if ((uVar32 & 0x1f) != 0) break;
              uVar30 = uVar29;
              if (uVar36 < uVar29) {
                uVar30 = uVar36;
              }
              cVar15 = uVar36 < uVar29;
              if (uVar37 < uVar30) {
                cVar15 = '\x02';
                uVar30 = uVar37;
              }
              if (uVar34 < uVar30) {
                if (uVar35 < uVar34) {
LAB_001eed28:
                  if (uVar38 < uVar35) goto LAB_001eed10;
                  if (uVar39 < uVar35) goto LAB_001eed00;
                  if (iVar44 < 0x10) {
                    iVar44 = iVar44 + 1;
                  }
                }
                else {
                  if (uVar38 < uVar34) {
LAB_001eed10:
                    if (uVar38 <= uVar39) {
                      if (iVar25 + 0x10 < 0 == SCARRY4(iVar25,0x10)) {
                        iVar25 = iVar25 + -1;
                      }
                      goto LAB_001eeb40;
                    }
                  }
                  else if (uVar34 <= uVar39) {
                    if (iVar44 + 0x10 < 0 == SCARRY4(iVar44,0x10)) {
                      iVar44 = iVar44 + -1;
                    }
                    goto LAB_001eeb40;
                  }
LAB_001eed00:
                  if (iVar25 < 0x10) {
                    iVar25 = iVar25 + 1;
                  }
                }
              }
              else {
                if (uVar35 < uVar30) goto LAB_001eed28;
                if (uVar38 < uVar30) goto LAB_001eed10;
                if (uVar39 < uVar30) goto LAB_001eed00;
                if (cVar15 == '\x01') {
                  if (iVar18 + 0x10 < 0 == SCARRY4(iVar18,0x10)) {
                    iVar18 = iVar18 + -1;
                  }
                }
                else if ((cVar15 == '\x02') && (iVar18 < 0x10)) {
                  iVar18 = iVar18 + 1;
                }
              }
LAB_001eeb40:
              lVar28 = lVar28 + 1;
              uVar32 = uVar32 + 1;
              uVar39 = 0;
              uVar38 = 0;
              uVar35 = 0;
              uVar34 = 0;
              uVar37 = 0;
              uVar36 = 0;
              uVar29 = 0;
              if ((int)uVar31 <= (int)lVar28) goto LAB_001eeb6c;
            }
            lVar28 = lVar28 + 1;
            uVar32 = uVar32 + 1;
          } while ((int)lVar28 < (int)uVar31);
        }
        else {
          do {
            iVar16 = iVar43;
            uVar7 = iVar16 - iVar22;
            uVar20 = (ulong)uVar7;
            pbVar42 = pbVar41 + 1;
            bVar4 = *pbVar41;
            iVar43 = (int)uVar33;
            uVar6 = -(uint)(bVar4 >> 7) & 0xfffff800 | (uint)bVar4 << 3;
            uVar30 = -uVar6;
            if (-1 < (int)uVar6) {
              uVar30 = uVar6;
            }
            iVar9 = uVar6 - iVar16;
            iVar22 = -iVar9;
            if (-1 < iVar9) {
              iVar22 = iVar9;
            }
            iVar9 = iVar16 + uVar6;
            iVar3 = -iVar9;
            if (-1 < iVar9) {
              iVar3 = iVar9;
            }
            iVar8 = (iVar25 * iVar43 + iVar26 * 8 + uVar7 * iVar44 + iVar16 * iVar18 >> 3 & 0xff) -
                    (uint)bVar4;
            iVar10 = uVar6 - uVar7;
            iVar9 = -iVar10;
            if (-1 < iVar10) {
              iVar9 = iVar10;
            }
            uVar36 = uVar36 + iVar22;
            iVar22 = uVar7 + uVar6;
            bVar4 = (byte)iVar8;
            iVar10 = -iVar22;
            if (-1 < iVar22) {
              iVar10 = iVar22;
            }
            cVar15 = (char)iVar26;
            pbVar40[lVar28 + (ulong)uVar31] = bVar4;
            uVar11 = uVar6 - iVar43;
            uVar7 = -uVar11;
            if (-1 < (int)uVar11) {
              uVar7 = uVar11;
            }
            pbVar19 = (byte *)(ulong)uVar7;
            iVar43 = uVar6 + iVar43;
            iVar26 = -iVar43;
            if (-1 < iVar43) {
              iVar26 = iVar43;
            }
            uVar29 = uVar29 + uVar30;
            uVar37 = uVar37 + iVar3;
            uVar34 = uVar34 + iVar9;
            uVar35 = uVar35 + iVar10;
            uVar38 = uVar38 + uVar7;
            uVar39 = uVar39 + iVar26;
            if ((uVar32 & 0x1f) == 0) {
              uVar30 = uVar29;
              if (uVar36 < uVar29) {
                uVar30 = uVar36;
              }
              cVar14 = uVar36 < uVar29;
              if (uVar37 < uVar30) {
                cVar14 = '\x02';
                uVar30 = uVar37;
              }
              if (uVar34 < uVar30) {
                if (uVar35 < uVar34) {
LAB_001eed90:
                  if (uVar38 < uVar35) goto LAB_001eece8;
                  if (uVar39 < uVar35) goto LAB_001eeda0;
                  if (iVar44 < 0x10) {
                    iVar44 = iVar44 + 1;
                  }
                }
                else {
                  if (uVar38 < uVar34) {
LAB_001eece8:
                    if (uVar38 <= uVar39) {
                      if (iVar25 + 0x10 < 0 == SCARRY4(iVar25,0x10)) {
                        iVar25 = iVar25 + -1;
                      }
                      goto LAB_001eebc8;
                    }
                  }
                  else if (uVar34 <= uVar39) {
                    if (iVar44 + 0x10 < 0 == SCARRY4(iVar44,0x10)) {
                      iVar44 = iVar44 + -1;
                    }
                    goto LAB_001eebc8;
                  }
LAB_001eeda0:
                  if (iVar25 < 0x10) {
                    iVar25 = iVar25 + 1;
                  }
                }
              }
              else {
                if (uVar35 < uVar30) goto LAB_001eed90;
                if (uVar38 < uVar30) goto LAB_001eece8;
                if (uVar39 < uVar30) goto LAB_001eeda0;
                if (cVar14 == '\x01') {
                  if (iVar18 + 0x10 < 0 == SCARRY4(iVar18,0x10)) {
                    iVar18 = iVar18 + -1;
                  }
                }
                else if ((cVar14 == '\x02') && (iVar18 < 0x10)) {
                  iVar18 = iVar18 + 1;
                }
              }
LAB_001eebc8:
              uVar39 = 0;
              uVar38 = 0;
              uVar35 = 0;
              uVar34 = 0;
              uVar37 = 0;
              uVar36 = 0;
              uVar29 = 0;
            }
            lVar28 = lVar28 + (int)uVar2;
            uVar32 = uVar32 + 1;
            uVar33 = uVar20;
            pbVar41 = pbVar42;
            iVar26 = iVar8;
            iVar43 = (int)(char)(bVar4 - cVar15);
            iVar22 = iVar16;
          } while ((int)lVar28 < (int)uVar31);
        }
LAB_001eeb6c:
        lVar23 = lVar23 + 1;
        pbVar41 = pbVar42;
      } while ((int)lVar23 < (int)uVar21);
    }
  }
  else if (param_1 == 6) {
    uVar31 = *(uint *)(this + 0x30);
    iVar25 = *(int *)(this + 0x20);
    *(uint *)(*(long *)(this + 0x18) + 0x3c020) = uVar31;
    if ((uVar31 < 0x1e000) && (0 < iVar25)) {
      iVar44 = uVar31 * 2;
      if (iVar25 == 1) {
        uVar33 = (ulong)uVar31;
        iVar25 = 0;
        uVar2 = uVar31;
        do {
          pbVar19 = (byte *)(ulong)uVar2;
          if ((int)uVar2 < iVar44) {
            lVar23 = (long)iVar25;
            cVar15 = '\0';
            uVar20 = uVar33;
            do {
              uVar21 = (int)pbVar19 + 1;
              pbVar19 = (byte *)(ulong)uVar21;
              iVar25 = iVar25 + 1;
              pcVar1 = (char *)(*(long *)(this + 0x18) + lVar23);
              lVar23 = lVar23 + 1;
              cVar15 = cVar15 - *pcVar1;
              *(char *)(*(long *)(this + 0x18) + uVar20) = cVar15;
              uVar20 = uVar20 + 1;
            } while ((int)uVar21 < iVar44);
          }
          bVar13 = uVar31 != uVar2;
          uVar33 = uVar33 + 1;
          uVar2 = uVar2 + 1;
        } while (bVar13);
      }
      else {
        uVar33 = (ulong)uVar31;
        uVar2 = uVar31 + iVar25;
        iVar18 = 0;
        do {
          pbVar19 = (byte *)(ulong)uVar31;
          if ((int)uVar31 < iVar44) {
            lVar23 = (long)iVar18;
            cVar15 = '\0';
            uVar20 = uVar33;
            do {
              uVar21 = (int)pbVar19 + iVar25;
              pbVar19 = (byte *)(ulong)uVar21;
              iVar18 = iVar18 + 1;
              pcVar1 = (char *)(*(long *)(this + 0x18) + lVar23);
              lVar23 = lVar23 + 1;
              cVar15 = cVar15 - *pcVar1;
              *(char *)(*(long *)(this + 0x18) + uVar20) = cVar15;
              uVar20 = uVar20 + (long)iVar25;
            } while ((int)uVar21 < iVar44);
          }
          uVar31 = uVar31 + 1;
          uVar33 = uVar33 + 1;
        } while (uVar2 != uVar31);
      }
    }
  }
  if (lVar12 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar12 - ___stack_chk_guard,0,pbVar19,uVar20);
}


