/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack11UnpWriteBufEv
 * Address  : 001dd0b0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Unpack::UnpWriteBuf() */

void Unpack::UnpWriteBuf(void)

{
  ulong uVar1;
  ComprDataIO **ppCVar2;
  UnpackFilter *pUVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ComprDataIO **in_x0;
  uchar *puVar8;
  undefined8 *__ptr;
  ulong uVar9;
  undefined8 *puVar10;
  ComprDataIO *pCVar11;
  ComprDataIO *__n;
  undefined8 uVar12;
  undefined8 *puVar13;
  ComprDataIO *pCVar14;
  ComprDataIO *pCVar15;
  ComprDataIO *pCVar16;
  undefined8 *puVar17;
  size_t __n_00;
  ComprDataIO *pCVar18;
  long lVar19;
  long lVar20;
  ComprDataIO *pCVar21;
  ComprDataIO *pCVar22;
  
  pCVar18 = in_x0[0x18];
  pCVar21 = in_x0[0x19];
  pCVar14 = in_x0[0x11];
  pCVar15 = (ComprDataIO *)((long)pCVar18 - (long)pCVar21 & (ulong)in_x0[0x1d30]);
  pCVar11 = pCVar21;
  if (pCVar14 != (ComprDataIO *)0x0) {
    ppCVar2 = in_x0 + 0x973;
    pCVar22 = (ComprDataIO *)0x0;
    lVar20 = 0;
    pCVar16 = pCVar15;
LAB_001dd190:
    do {
      pUVar3 = (UnpackFilter *)(in_x0[0x10] + lVar20);
      if (in_x0[0x10][lVar20] == (ComprDataIO)0x8) goto LAB_001dd180;
      uVar6 = *(uint *)(pUVar3 + 4);
      pCVar11 = (ComprDataIO *)(ulong)uVar6;
      if (pUVar3[0x15] == (UnpackFilter)0x0) {
        if (pCVar16 <= (ComprDataIO *)((long)pCVar11 - (long)pCVar21 & (ulong)in_x0[0x1d30]))
        goto LAB_001dd180;
        uVar5 = *(uint *)(pUVar3 + 8);
        if (pCVar21 != pCVar11) {
          UnpWriteArea((Unpack *)in_x0,(ulong)pCVar21,(ulong)pCVar11);
          pCVar18 = in_x0[0x18];
          pCVar16 = (ComprDataIO *)((long)pCVar18 - (long)pCVar11 & (ulong)in_x0[0x1d30]);
        }
        __n = (ComprDataIO *)(ulong)uVar5;
        if (__n <= pCVar16) {
          if (uVar5 == 0) {
            pCVar14 = in_x0[0x11];
            pCVar21 = pCVar11;
          }
          else {
            pCVar18 = in_x0[10];
            uVar4 = uVar5 + uVar6 & (uint)in_x0[0x1d30];
            pCVar21 = (ComprDataIO *)(ulong)uVar4;
            if (pCVar18 < __n) {
              pCVar16 = in_x0[0xb];
              in_x0[9] = __n;
              pCVar14 = __n;
              if ((pCVar16 != (ComprDataIO *)0x0 && pCVar16 <= __n) &&
                  (pCVar16 == (ComprDataIO *)0x0 || __n != pCVar16)) {
                ErrorHandler::GeneralErrMsg
                          (&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
                ErrorHandler::MemoryError();
                pCVar14 = in_x0[9];
                pCVar18 = in_x0[10];
              }
              pCVar16 = pCVar18 + ((ulong)pCVar18 >> 2) + 0x20;
              if (pCVar18 + ((ulong)pCVar18 >> 2) + 0x20 < pCVar14) {
                pCVar16 = pCVar14;
              }
              pCVar18 = (ComprDataIO *)realloc(in_x0[8],(size_t)pCVar16);
              if (pCVar18 == (ComprDataIO *)0x0) {
                ErrorHandler::MemoryError();
              }
              in_x0[8] = pCVar18;
              in_x0[10] = pCVar16;
            }
            else {
              pCVar18 = in_x0[8];
              in_x0[9] = __n;
            }
            if (uVar4 != 0 && uVar4 < uVar6 || uVar4 != 0 && uVar4 == uVar6) {
              pCVar14 = in_x0[0x1d2f];
              __n_00 = (long)pCVar14 - (long)pCVar11;
              if (*(Unpack *)(in_x0 + 0x9b3) != (Unpack)0x0) {
                lVar19 = (long)pCVar18 - (long)pCVar11;
                if (__n_00 != 0) {
                  do {
                    if (pCVar11 < in_x0[0x993]) {
                      pCVar16 = *ppCVar2 + (long)pCVar11;
                    }
                    else {
                      uVar9 = 1;
                      do {
                        uVar1 = uVar9 + 1;
                        if (pCVar11 < in_x0[uVar9 + 0x993]) {
                          pCVar16 = ppCVar2[uVar9 & 0xffffffff] +
                                    ((long)pCVar11 - (long)ppCVar2[(ulong)((int)uVar9 - 1) + 0x20]);
                          goto LAB_001dd410;
                        }
                        uVar9 = uVar1;
                      } while (uVar1 != 0x20);
                      pCVar16 = *ppCVar2;
                    }
LAB_001dd410:
                    pCVar11[lVar19] = *pCVar16;
                    pCVar11 = pCVar11 + 1;
                  } while (pCVar14 != pCVar11);
                }
                pCVar11 = (ComprDataIO *)0x0;
                if (in_x0[0x993] != (ComprDataIO *)0x0) goto LAB_001dd494;
LAB_001dd438:
                uVar9 = 1;
                do {
                  uVar1 = uVar9 + 1;
                  if (pCVar11 < in_x0[uVar9 + 0x993]) {
                    pCVar14 = ppCVar2[uVar9 & 0xffffffff] +
                              ((long)pCVar11 - (long)ppCVar2[(ulong)((int)uVar9 - 1) + 0x20]);
                    goto LAB_001dd474;
                  }
                  uVar9 = uVar1;
                } while (uVar1 != 0x20);
                pCVar14 = *ppCVar2;
LAB_001dd474:
                do {
                  (pCVar18 + __n_00)[(long)pCVar11] = *pCVar14;
                  pCVar11 = pCVar11 + 1;
                  if (pCVar21 <= pCVar11) goto LAB_001dd54c;
                  if (in_x0[0x993] <= pCVar11) goto LAB_001dd438;
LAB_001dd494:
                  pCVar14 = *ppCVar2 + (long)pCVar11;
                } while( true );
              }
              pCVar18 = (ComprDataIO *)memcpy(pCVar18,in_x0[0x972] + (long)pCVar11,__n_00);
              memcpy(pCVar18 + __n_00,in_x0[0x972],(size_t)pCVar21);
            }
            else {
              if (*(Unpack *)(in_x0 + 0x9b3) != (Unpack)0x0) {
                pCVar14 = __n + (long)pCVar11;
                lVar19 = (long)pCVar18 - (long)pCVar11;
                if (pCVar11 < in_x0[0x993]) goto LAB_001dd3a4;
LAB_001dd348:
                uVar9 = 1;
                do {
                  uVar1 = uVar9 + 1;
                  if (pCVar11 < in_x0[uVar9 + 0x993]) {
                    pCVar16 = ppCVar2[uVar9 & 0xffffffff] +
                              ((long)pCVar11 - (long)ppCVar2[(ulong)((int)uVar9 - 1) + 0x20]);
                    goto LAB_001dd384;
                  }
                  uVar9 = uVar1;
                } while (uVar1 != 0x20);
                pCVar16 = *ppCVar2;
LAB_001dd384:
                do {
                  pCVar11[lVar19] = *pCVar16;
                  pCVar11 = pCVar11 + 1;
                  if (pCVar14 == pCVar11) goto LAB_001dd54c;
                  if (in_x0[0x993] <= pCVar11) goto LAB_001dd348;
LAB_001dd3a4:
                  pCVar16 = *ppCVar2 + (long)pCVar11;
                } while( true );
              }
              pCVar18 = (ComprDataIO *)memcpy(pCVar18,in_x0[0x972] + (long)pCVar11,(size_t)__n);
            }
LAB_001dd54c:
            puVar8 = (uchar *)ApplyFilter((Unpack *)in_x0,(uchar *)pCVar18,uVar5,pUVar3);
            in_x0[0x10][lVar20] = (ComprDataIO)0x8;
            if (puVar8 != (uchar *)0x0) {
              ComprDataIO::UnpWrite(*in_x0,puVar8,(ulong)__n);
            }
            pCVar18 = in_x0[0x18];
            pCVar14 = in_x0[0x11];
            *(Unpack *)((long)in_x0 + 0x4daa) = (Unpack)0x1;
            pCVar16 = (ComprDataIO *)((long)pCVar18 - (long)pCVar21 & (ulong)in_x0[0x1d30]);
            in_x0[0x9b6] = in_x0[0x9b6] + (long)__n;
          }
          goto LAB_001dd180;
        }
        pCVar14 = in_x0[0x11];
        in_x0[0x19] = pCVar11;
        if (pCVar22 < pCVar14) {
          __ptr = (undefined8 *)in_x0[0x10];
          puVar10 = __ptr + (long)pCVar22 * 3;
          do {
            if (*(ComprDataIO *)puVar10 != (ComprDataIO)0x8) {
              *(ComprDataIO *)((long)puVar10 + 0x15) = (ComprDataIO)0x0;
            }
            puVar10 = puVar10 + 3;
          } while (__ptr + (long)pCVar14 * 3 != puVar10);
          bVar7 = true;
          goto LAB_001dd1f4;
        }
        if (pCVar14 == (ComprDataIO *)0x0) goto LAB_001dd284;
        bVar7 = true;
        __ptr = (undefined8 *)in_x0[0x10];
        goto LAB_001dd1f4;
      }
      if (pCVar15 < (ComprDataIO *)((long)pCVar11 - (long)in_x0[0x19] & (ulong)in_x0[0x1d30]))
      goto LAB_001dd180;
      pUVar3[0x15] = (UnpackFilter)0x0;
      pCVar22 = pCVar22 + 1;
      lVar20 = lVar20 + 0x18;
      pCVar11 = pCVar21;
    } while (pCVar22 < pCVar14);
    goto LAB_001dd1e8;
  }
LAB_001dd618:
  UnpWriteArea((Unpack *)in_x0,(ulong)pCVar11,(ulong)pCVar18);
  pCVar14 = in_x0[0x18];
  in_x0[0x19] = pCVar14;
  pCVar11 = in_x0[0x1d2f];
  if ((ComprDataIO *)(polygon_sort_list_13776 + 0x159c0) < pCVar11) {
    pCVar11 = (ComprDataIO *)(polygon_sort_list_13776 + 0x159c0);
  }
  in_x0[0x971] = (ComprDataIO *)((ulong)(pCVar11 + (long)pCVar14) & (ulong)in_x0[0x1d30]);
  if (pCVar14 != (ComprDataIO *)((ulong)(pCVar11 + (long)pCVar14) & (ulong)in_x0[0x1d30])) {
    return;
  }
LAB_001dd2d8:
  in_x0[0x971] = pCVar14;
  return;
LAB_001dd180:
  pCVar22 = pCVar22 + 1;
  lVar20 = lVar20 + 0x18;
  pCVar11 = pCVar21;
  if (pCVar14 <= pCVar22) goto LAB_001dd1e8;
  goto LAB_001dd190;
LAB_001dd1e8:
  if (pCVar14 != (ComprDataIO *)0x0) {
    __ptr = (undefined8 *)in_x0[0x10];
    bVar7 = false;
LAB_001dd1f4:
    pCVar21 = (ComprDataIO *)0x1;
    uVar9 = (ulong)(*(ComprDataIO *)__ptr == (ComprDataIO)0x8);
    lVar20 = 1 - uVar9;
    puVar10 = __ptr;
    if (pCVar14 != (ComprDataIO *)0x1) {
      do {
        puVar13 = puVar10 + 3;
        puVar17 = __ptr + lVar20 * 3;
        if (uVar9 != 0) {
          uVar12 = puVar10[4];
          *puVar17 = *puVar13;
          puVar17[1] = uVar12;
          puVar17[2] = puVar10[5];
        }
        pCVar21 = pCVar21 + 1;
        if (*(ComprDataIO *)puVar13 == (ComprDataIO)0x8) {
          uVar9 = uVar9 + 1;
        }
        lVar20 = (long)pCVar21 - uVar9;
        puVar10 = puVar13;
      } while (pCVar14 != pCVar21);
    }
    if (uVar9 != 0) {
      pCVar18 = in_x0[0x12];
      pCVar14 = pCVar14 + -uVar9;
      if (pCVar18 < pCVar14) {
        pCVar21 = in_x0[0x13];
        in_x0[0x11] = pCVar14;
        if ((pCVar21 != (ComprDataIO *)0x0 && pCVar21 <= pCVar14) &&
            (pCVar21 == (ComprDataIO *)0x0 || pCVar14 != pCVar21)) {
          ErrorHandler::GeneralErrMsg(&ErrHandler,L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError();
          pCVar14 = in_x0[0x11];
          pCVar18 = in_x0[0x12];
          __ptr = (undefined8 *)in_x0[0x10];
        }
        pCVar21 = pCVar18 + ((ulong)pCVar18 >> 2) + 0x20;
        if (pCVar18 + ((ulong)pCVar18 >> 2) + 0x20 < pCVar14) {
          pCVar21 = pCVar14;
        }
        pCVar18 = (ComprDataIO *)realloc(__ptr,(long)pCVar21 * 0x18);
        if (pCVar18 == (ComprDataIO *)0x0) {
          ErrorHandler::MemoryError();
        }
        in_x0[0x10] = pCVar18;
        in_x0[0x12] = pCVar21;
        pCVar18 = in_x0[0x18];
      }
      else {
        in_x0[0x11] = pCVar14;
        pCVar18 = in_x0[0x18];
      }
    }
    if (bVar7) {
LAB_001dd284:
      pCVar11 = in_x0[0x1d2f];
      pCVar21 = in_x0[0x1d30];
      if ((ComprDataIO *)(polygon_sort_list_13776 + 0x159c0) < pCVar11) {
        pCVar11 = (ComprDataIO *)(polygon_sort_list_13776 + 0x159c0);
      }
      pCVar11 = (ComprDataIO *)((ulong)(pCVar11 + (long)pCVar18) & (ulong)pCVar21);
      in_x0[0x971] = pCVar11;
      pCVar14 = in_x0[0x19];
      if (pCVar11 == pCVar18) {
        in_x0[0x971] = pCVar14;
        return;
      }
      if (pCVar18 == pCVar14) {
        return;
      }
      if (((long)pCVar11 - (long)pCVar18 & (ulong)pCVar21) <=
          ((long)pCVar14 - (long)pCVar18 & (ulong)pCVar21)) {
        return;
      }
      goto LAB_001dd2d8;
    }
  }
  goto LAB_001dd618;
}


