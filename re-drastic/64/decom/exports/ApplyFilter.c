/*
 * Ghidra decompilation
 *
 * Function : ApplyFilter
 * Address  : 001dbc90
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Unpack::ApplyFilter(unsigned char*, unsigned int, UnpackFilter*) */

uchar * __thiscall
Unpack::ApplyFilter(Unpack *this,uchar *param_1,uint param_2,UnpackFilter *param_3)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  UnpackFilter UVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uchar uVar14;
  char cVar15;
  char cVar16;
  ulong uVar17;
  undefined8 uVar18;
  int *piVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  byte *pbVar39;
  uchar *puVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint uVar44;
  
  lVar13 = ___stack_chk_guard;
  UVar4 = *param_3;
  if (UVar4 == (UnpackFilter)0x4) {
    UVar4 = param_3[0xc];
    uVar21 = (ulong)param_2;
    uVar17 = *(ulong *)(this + 0x70);
    if (uVar17 < param_2) {
      uVar22 = *(ulong *)(this + 0x78);
      *(ulong *)(this + 0x68) = uVar21;
      if ((uVar22 != 0 && uVar22 <= uVar21) && (uVar22 == 0 || uVar21 != uVar22)) {
        ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError();
        uVar21 = *(ulong *)(this + 0x68);
        uVar17 = *(ulong *)(this + 0x70);
      }
      uVar17 = uVar17 + 0x20 + (uVar17 >> 2);
      if (uVar17 < uVar21) {
        uVar17 = uVar21;
      }
      puVar40 = (uchar *)realloc(*(void **)(this + 0x60),uVar17);
      if (puVar40 == (uchar *)0x0) {
        ErrorHandler::MemoryError();
      }
      *(uchar **)(this + 0x60) = puVar40;
      *(ulong *)(this + 0x70) = uVar17;
    }
    else {
      puVar40 = *(uchar **)(this + 0x60);
      *(ulong *)(this + 0x68) = uVar21;
    }
    if (((byte)UVar4 != 0) && (param_2 != 0)) {
      uVar41 = (uint)(byte)UVar4;
      uVar42 = param_2;
      if ((byte)UVar4 <= param_2 && param_2 != uVar41) {
        uVar42 = uVar41;
      }
      uVar44 = 0;
      do {
        uVar38 = 0;
        uVar37 = 0;
        uVar34 = 0;
        uVar33 = 0;
        uVar36 = 0;
        uVar35 = 0;
        uVar30 = 0;
        uVar32 = 0;
        iVar23 = 0;
        iVar43 = 0;
        iVar24 = 0;
        iVar25 = 0;
        iVar26 = 0;
        iVar28 = 0;
        uVar29 = uVar44;
        iVar12 = 0;
        if (uVar41 == 1) {
          do {
            while( true ) {
              iVar20 = iVar12;
              iVar26 = iVar20 - iVar26;
              pbVar39 = param_1 + 1;
              bVar5 = *param_1;
              uVar7 = -(uint)(bVar5 >> 7) & 0xfffff800 | (uint)bVar5 << 3;
              uVar31 = -uVar7;
              if (-1 < (int)uVar7) {
                uVar31 = uVar7;
              }
              iVar10 = uVar7 - iVar20;
              iVar12 = -iVar10;
              if (-1 < iVar10) {
                iVar12 = iVar10;
              }
              iVar10 = uVar7 + iVar20;
              iVar3 = -iVar10;
              if (-1 < iVar10) {
                iVar3 = iVar10;
              }
              iVar8 = ((uint)(iVar24 * iVar20 + iVar43 * iVar26 + iVar28 * 8 + iVar25 * iVar23) >> 3
                      & 0xff) - (uint)bVar5;
              iVar11 = uVar7 - iVar26;
              iVar10 = -iVar11;
              if (-1 < iVar11) {
                iVar10 = iVar11;
              }
              uVar30 = uVar30 + uVar31;
              iVar11 = uVar7 + iVar26;
              iVar2 = -iVar11;
              if (-1 < iVar11) {
                iVar2 = iVar11;
              }
              puVar40[uVar29] = (uchar)iVar8;
              iVar9 = uVar7 - iVar25;
              iVar11 = -iVar9;
              if (-1 < iVar9) {
                iVar11 = iVar9;
              }
              iVar25 = uVar7 + iVar25;
              iVar9 = -iVar25;
              if (-1 < iVar25) {
                iVar9 = iVar25;
              }
              uVar35 = uVar35 + iVar12;
              uVar36 = uVar36 + iVar3;
              uVar33 = uVar33 + iVar10;
              uVar34 = uVar34 + iVar2;
              iVar12 = (int)(char)((uchar)iVar8 - (char)iVar28);
              uVar37 = uVar37 + iVar11;
              uVar38 = uVar38 + iVar9;
              param_1 = pbVar39;
              iVar28 = iVar8;
              iVar25 = iVar26;
              iVar26 = iVar20;
              if ((uVar32 & 0x1f) != 0) break;
              uVar31 = uVar30;
              if (uVar35 < uVar30) {
                uVar31 = uVar35;
              }
              cVar15 = uVar35 < uVar30;
              if (uVar36 < uVar31) {
                cVar15 = '\x02';
                uVar31 = uVar36;
              }
              if (uVar33 < uVar31) {
                if (uVar34 < uVar33) {
LAB_001dc270:
                  if (uVar37 < uVar34) goto LAB_001dc258;
                  if (uVar38 < uVar34) goto LAB_001dc248;
                  if (iVar43 < 0x10) {
                    iVar43 = iVar43 + 1;
                  }
                }
                else {
                  if (uVar37 < uVar33) {
LAB_001dc258:
                    if (uVar37 <= uVar38) {
                      if (iVar23 + 0x10 < 0 == SCARRY4(iVar23,0x10)) {
                        iVar23 = iVar23 + -1;
                      }
                      goto LAB_001dc0b8;
                    }
                  }
                  else if (uVar33 <= uVar38) {
                    if (iVar43 + 0x10 < 0 == SCARRY4(iVar43,0x10)) {
                      iVar43 = iVar43 + -1;
                    }
                    goto LAB_001dc0b8;
                  }
LAB_001dc248:
                  if (iVar23 < 0x10) {
                    iVar23 = iVar23 + 1;
                  }
                }
              }
              else {
                if (uVar34 < uVar31) goto LAB_001dc270;
                if (uVar37 < uVar31) goto LAB_001dc258;
                if (uVar38 < uVar31) goto LAB_001dc248;
                if (cVar15 == '\x01') {
                  if (iVar24 + 0x10 < 0 == SCARRY4(iVar24,0x10)) {
                    iVar24 = iVar24 + -1;
                  }
                }
                else if ((cVar15 == '\x02') && (iVar24 < 0x10)) {
                  iVar24 = iVar24 + 1;
                }
              }
LAB_001dc0b8:
              uVar29 = uVar29 + 1;
              uVar32 = uVar32 + 1;
              uVar38 = 0;
              uVar37 = 0;
              uVar34 = 0;
              uVar33 = 0;
              uVar36 = 0;
              uVar35 = 0;
              uVar30 = 0;
              if (param_2 <= uVar29) goto LAB_001dc0e4;
            }
            uVar29 = uVar29 + 1;
            uVar32 = uVar32 + 1;
          } while (uVar29 < param_2);
        }
        else {
          do {
            iVar20 = iVar12;
            iVar26 = iVar20 - iVar26;
            pbVar39 = param_1 + 1;
            bVar5 = *param_1;
            uVar7 = -(uint)(bVar5 >> 7) & 0xfffff800 | (uint)bVar5 << 3;
            uVar31 = -uVar7;
            if (-1 < (int)uVar7) {
              uVar31 = uVar7;
            }
            iVar10 = uVar7 - iVar20;
            iVar12 = -iVar10;
            if (-1 < iVar10) {
              iVar12 = iVar10;
            }
            iVar10 = iVar20 + uVar7;
            iVar3 = -iVar10;
            if (-1 < iVar10) {
              iVar3 = iVar10;
            }
            iVar8 = ((uint)(iVar23 * iVar25 + iVar28 * 8 + iVar26 * iVar43 + iVar20 * iVar24) >> 3 &
                    0xff) - (uint)bVar5;
            iVar11 = uVar7 - iVar26;
            iVar10 = -iVar11;
            if (-1 < iVar11) {
              iVar10 = iVar11;
            }
            uVar35 = uVar35 + iVar12;
            iVar12 = iVar26 + uVar7;
            uVar14 = (uchar)iVar8;
            iVar11 = -iVar12;
            if (-1 < iVar12) {
              iVar11 = iVar12;
            }
            cVar15 = (char)iVar28;
            puVar40[uVar29] = uVar14;
            iVar28 = uVar7 - iVar25;
            iVar12 = -iVar28;
            if (-1 < iVar28) {
              iVar12 = iVar28;
            }
            iVar25 = uVar7 + iVar25;
            iVar28 = -iVar25;
            if (-1 < iVar25) {
              iVar28 = iVar25;
            }
            uVar30 = uVar30 + uVar31;
            uVar36 = uVar36 + iVar3;
            uVar33 = uVar33 + iVar10;
            uVar34 = uVar34 + iVar11;
            uVar37 = uVar37 + iVar12;
            uVar38 = uVar38 + iVar28;
            if ((uVar32 & 0x1f) == 0) {
              uVar31 = uVar30;
              if (uVar35 < uVar30) {
                uVar31 = uVar35;
              }
              cVar16 = uVar35 < uVar30;
              if (uVar36 < uVar31) {
                cVar16 = '\x02';
                uVar31 = uVar36;
              }
              if (uVar33 < uVar31) {
                if (uVar34 < uVar33) {
LAB_001dc2d8:
                  if (uVar37 < uVar34) goto LAB_001dc100;
                  if (uVar38 < uVar34) goto LAB_001dc228;
                  if (iVar43 < 0x10) {
                    iVar43 = iVar43 + 1;
                  }
                }
                else {
                  if (uVar37 < uVar33) {
LAB_001dc100:
                    if (uVar37 <= uVar38) {
                      if (iVar23 + 0x10 < 0 == SCARRY4(iVar23,0x10)) {
                        iVar23 = iVar23 + -1;
                      }
                      goto LAB_001dc118;
                    }
                  }
                  else if (uVar33 <= uVar38) {
                    if (iVar43 + 0x10 < 0 == SCARRY4(iVar43,0x10)) {
                      iVar43 = iVar43 + -1;
                    }
                    goto LAB_001dc118;
                  }
LAB_001dc228:
                  if (iVar23 < 0x10) {
                    iVar23 = iVar23 + 1;
                  }
                }
              }
              else {
                if (uVar34 < uVar31) goto LAB_001dc2d8;
                if (uVar37 < uVar31) goto LAB_001dc100;
                if (uVar38 < uVar31) goto LAB_001dc228;
                if (cVar16 == '\x01') {
                  if (iVar24 + 0x10 < 0 == SCARRY4(iVar24,0x10)) {
                    iVar24 = iVar24 + -1;
                  }
                }
                else if ((cVar16 == '\x02') && (iVar24 < 0x10)) {
                  iVar24 = iVar24 + 1;
                }
              }
LAB_001dc118:
              uVar38 = 0;
              uVar37 = 0;
              uVar34 = 0;
              uVar33 = 0;
              uVar36 = 0;
              uVar35 = 0;
              uVar30 = 0;
            }
            uVar29 = uVar29 + uVar41;
            uVar32 = uVar32 + 1;
            param_1 = pbVar39;
            iVar28 = iVar8;
            iVar25 = iVar26;
            iVar12 = (int)(char)(uVar14 - cVar15);
            iVar26 = iVar20;
          } while (uVar29 < param_2);
        }
LAB_001dc0e4:
        uVar44 = uVar44 + 1;
        param_1 = pbVar39;
      } while (uVar44 < uVar42);
    }
  }
  else {
    puVar40 = param_1;
    if ((byte)UVar4 < 5) {
      if (UVar4 == (UnpackFilter)0x3) {
        uVar18 = *(undefined8 *)(this + 0x4db0);
        if (3 < (int)param_2) {
          pbVar39 = param_1;
          do {
            if (pbVar39[3] == 0xeb) {
              iVar23 = ((uint)*pbVar39 - ((uint)(((int)uVar18 - (int)param_1) + (int)pbVar39) >> 2))
                       + ((uint)pbVar39[1] + (uint)pbVar39[2] * 0x100) * 0x100;
              *pbVar39 = (byte)iVar23;
              pbVar39[1] = (byte)((uint)iVar23 >> 8);
              pbVar39[2] = (byte)((uint)iVar23 >> 0x10);
            }
            pbVar39 = pbVar39 + 4;
          } while (param_1 + ((ulong)(param_2 - 4) & 0xfffffffc) + 4 != pbVar39);
        }
      }
      else if (UVar4 == (UnpackFilter)0x0) {
        UVar4 = param_3[0xc];
        uVar21 = (ulong)param_2;
        uVar17 = *(ulong *)(this + 0x70);
        if (uVar17 < param_2) {
          uVar22 = *(ulong *)(this + 0x78);
          *(ulong *)(this + 0x68) = uVar21;
          if ((uVar22 != 0 && uVar22 <= uVar21) && (uVar22 == 0 || uVar21 != uVar22)) {
            ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
            ErrorHandler::MemoryError();
            uVar21 = *(ulong *)(this + 0x68);
            uVar17 = *(ulong *)(this + 0x70);
          }
          uVar17 = uVar17 + 0x20 + (uVar17 >> 2);
          if (uVar17 < uVar21) {
            uVar17 = uVar21;
          }
          puVar40 = (uchar *)realloc(*(void **)(this + 0x60),uVar17);
          if (puVar40 == (uchar *)0x0) {
            ErrorHandler::MemoryError();
          }
          *(uchar **)(this + 0x60) = puVar40;
          *(ulong *)(this + 0x70) = uVar17;
        }
        else {
          puVar40 = *(uchar **)(this + 0x60);
          *(ulong *)(this + 0x68) = uVar21;
        }
        if (((byte)UVar4 != 0) && (param_2 != 0)) {
          uVar41 = (uint)(byte)UVar4;
          uVar42 = param_2;
          if ((byte)UVar4 <= param_2 && param_2 != uVar41) {
            uVar42 = uVar41;
          }
          uVar17 = 0;
          uVar21 = 0;
          if (uVar41 == 1) {
            do {
              uVar14 = '\0';
              uVar22 = uVar17;
              do {
                puVar1 = param_1 + uVar21;
                uVar21 = (ulong)((int)uVar21 + 1);
                uVar14 = uVar14 - *puVar1;
                puVar40[uVar22] = uVar14;
                uVar41 = (int)uVar22 + 1;
                uVar22 = (ulong)uVar41;
              } while (uVar41 < param_2);
              uVar41 = (int)uVar17 + 1;
              uVar17 = (ulong)uVar41;
            } while (uVar41 < uVar42);
          }
          else {
            do {
              iVar23 = (int)uVar17;
              uVar14 = '\0';
              do {
                puVar1 = param_1 + uVar21;
                uVar21 = (ulong)((int)uVar21 + 1);
                uVar14 = uVar14 - *puVar1;
                puVar40[uVar17] = uVar14;
                uVar44 = (int)uVar17 + uVar41;
                uVar17 = (ulong)uVar44;
              } while (uVar44 < param_2);
              uVar44 = iVar23 + 1;
              uVar17 = (ulong)uVar44;
            } while (uVar44 < uVar42);
          }
        }
      }
      else {
        uVar18 = *(undefined8 *)(this + 0x4db0);
        piVar19 = (int *)param_1;
        iVar23 = 0;
        while (iVar43 = iVar23, piVar27 = piVar19, iVar43 < (int)(param_2 - 4)) {
          piVar19 = (int *)((long)piVar27 + 1);
          iVar23 = iVar43 + 1;
          if (*(byte *)piVar27 == 0xe8 ||
              (UVar4 == (UnpackFilter)0x2) + 0xe8 == (uint)*(byte *)piVar27) {
            iVar23 = *(int *)((long)piVar27 + 1);
            uVar42 = (int)uVar18 + iVar43 + 1 & 0xffffff;
            if (iVar23 < 0) {
              if (-1 < (int)(uVar42 + iVar23)) {
                *piVar19 = iVar23 + 0x1000000;
              }
            }
            else if (iVar23 + -0x1000000 < 0) {
              *piVar19 = iVar23 - uVar42;
            }
            piVar19 = (int *)((long)piVar27 + 5);
            iVar23 = iVar43 + 5;
          }
        }
      }
    }
    else if (UVar4 == (UnpackFilter)0x5) {
      UVar4 = param_3[0x14];
      iVar23 = *(int *)(param_3 + 0x10);
      uVar17 = *(ulong *)(this + 0x70);
      uVar21 = (ulong)param_2;
      if (uVar17 < param_2) {
        uVar22 = *(ulong *)(this + 0x78);
        *(ulong *)(this + 0x68) = uVar21;
        if ((uVar22 != 0 && uVar22 <= uVar21) && (uVar22 == 0 || uVar21 != uVar22)) {
          ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError();
          uVar21 = *(ulong *)(this + 0x68);
          uVar17 = *(ulong *)(this + 0x70);
        }
        uVar17 = uVar17 + 0x20 + (uVar17 >> 2);
        if (uVar17 < uVar21) {
          uVar17 = uVar21;
        }
        puVar40 = (uchar *)realloc(*(void **)(this + 0x60),uVar17);
        if (puVar40 == (uchar *)0x0) {
          ErrorHandler::MemoryError();
        }
        *(uchar **)(this + 0x60) = puVar40;
        *(ulong *)(this + 0x70) = uVar17;
      }
      else {
        puVar40 = *(uchar **)(this + 0x60);
        *(ulong *)(this + 0x68) = uVar21;
      }
      uVar42 = 0;
      do {
        if (uVar42 < param_2) {
          iVar43 = uVar42 - iVar23;
          uVar17 = (ulong)uVar42;
          uVar41 = 0;
          pbVar39 = param_1;
          do {
            while (iVar43 < 3) {
LAB_001dc438:
              param_1 = pbVar39 + 1;
              uVar44 = uVar41 - *pbVar39;
              uVar41 = uVar44 & 0xff;
              puVar40[uVar17] = (uchar)uVar44;
              uVar44 = (int)uVar17 + 3;
              uVar17 = (ulong)uVar44;
              iVar43 = iVar43 + 3;
              pbVar39 = param_1;
              if (param_2 <= uVar44) goto LAB_001dc45c;
            }
            bVar5 = puVar40[iVar43];
            bVar6 = puVar40[(long)iVar43 + -3];
            iVar25 = (uVar41 + bVar5) - (uint)bVar6;
            iVar26 = iVar25 - (uint)bVar5;
            iVar24 = -iVar26;
            if (-1 < iVar26) {
              iVar24 = iVar26;
            }
            iVar12 = iVar25 - (uint)bVar6;
            iVar26 = -iVar12;
            if (-1 < iVar12) {
              iVar26 = iVar12;
            }
            iVar12 = iVar24;
            if (iVar26 < iVar24) {
              iVar12 = iVar26;
            }
            iVar25 = iVar25 - uVar41;
            iVar28 = -iVar25;
            if (-1 < iVar25) {
              iVar28 = iVar25;
            }
            if (iVar28 <= iVar12) goto LAB_001dc438;
            param_1 = pbVar39 + 1;
            if (iVar24 <= iVar26) {
              bVar6 = bVar5;
            }
            uVar41 = (uint)(byte)(bVar6 - *pbVar39);
            puVar40[uVar17] = bVar6 - *pbVar39;
            uVar44 = (int)uVar17 + 3;
            uVar17 = (ulong)uVar44;
            iVar43 = iVar43 + 3;
            pbVar39 = param_1;
          } while (uVar44 < param_2);
        }
LAB_001dc45c:
        uVar42 = uVar42 + 1;
      } while (uVar42 != 3);
      for (uVar42 = (uint)(byte)UVar4; uVar42 < param_2 - 2; uVar42 = uVar42 + 3) {
        puVar40[uVar42] = puVar40[uVar42 + 1] + puVar40[uVar42];
        puVar40[uVar42 + 2] = puVar40[uVar42 + 1] + puVar40[uVar42 + 2];
      }
    }
    else {
      puVar40 = (uchar *)0x0;
      if ((UVar4 == (UnpackFilter)0x6) &&
         (uVar17 = *(ulong *)(this + 0x4db0) >> 4 & 0xfffffff, puVar40 = param_1,
         0x15 < (int)param_2)) {
        iVar23 = (int)uVar17;
        pbVar39 = param_1;
        do {
          iVar43 = (*pbVar39 & 0x1f) - 0x10;
          iVar24 = (int)uVar17;
          if ((-1 < iVar43) &&
             (bVar5 = ApplyFilter(unsigned_char*,unsigned_int,UnpackFilter*)::Masks[iVar43],
             bVar5 != 0)) {
            if (((bVar5 & 1) != 0) && ((*(uint *)(pbVar39 + 5) >> 2 & 0xf) == 5)) {
              iVar43 = ((*(uint *)(pbVar39 + 2) >> 2) - iVar24 & 0xfffff) << 2;
              pbVar39[2] = pbVar39[2] & 3 | (byte)iVar43;
              pbVar39[3] = (byte)((uint)iVar43 >> 8);
              pbVar39[4] = pbVar39[4] & 0xc0 | (byte)((uint)iVar43 >> 0x10);
            }
            if (((bVar5 >> 1 & 1) != 0) && ((*(uint *)(pbVar39 + 10) >> 3 & 0xf) == 5)) {
              iVar43 = ((*(uint *)(pbVar39 + 7) >> 3) - iVar24 & 0xfffff) << 3;
              pbVar39[7] = pbVar39[7] & 7 | (byte)iVar43;
              pbVar39[8] = (byte)((uint)iVar43 >> 8);
              pbVar39[9] = pbVar39[9] & 0x80 | (byte)((uint)iVar43 >> 0x10);
            }
            if (((bVar5 >> 2 & 1) != 0) && ((*(uint *)(pbVar39 + 0xf) >> 4 & 0xf) == 5)) {
              iVar43 = ((*(uint *)(pbVar39 + 0xc) >> 4) - iVar24 & 0xfffff) << 4;
              pbVar39[0xc] = pbVar39[0xc] & 0xf | (byte)iVar43;
              pbVar39[0xd] = (byte)((uint)iVar43 >> 8);
              pbVar39[0xe] = (byte)((uint)iVar43 >> 0x10);
            }
          }
          uVar17 = (ulong)(iVar24 + 1U);
          pbVar39 = pbVar39 + 0x10;
        } while (iVar24 + 1U != (param_2 - 0x16 >> 4) + 1 + iVar23);
      }
    }
  }
  if (lVar13 - ___stack_chk_guard == 0) {
    return puVar40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar13 - ___stack_chk_guard,0);
}


