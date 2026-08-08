/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_DecodeToBuf
 * Address  : 080ce49c
 * Program  : drastic
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention */

SRes LzmaDec_DecodeToBuf(CLzmaDec *p,Byte *dest,SizeT *destLen,Byte *src,SizeT *srcLen,
                        ELzmaFinishMode finishMode,ELzmaStatus *status)

{
  int iVar1;
  undefined auVar2 [16];
  Byte BVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  UInt32 rep0;
  ELzmaDummy EVar8;
  int dummyRes;
  int dummyRes_1;
  uint uVar9;
  uint len;
  UInt32 numProbs;
  SizeT outSize;
  SizeT inSize;
  SizeT SVar10;
  uint uVar11;
  UInt16 *pUVar12;
  UInt16 *probs;
  Byte *bufLimit;
  UInt32 UVar13;
  SizeT SVar14;
  UInt32 UVar15;
  SizeT SVar16;
  SizeT dicPos;
  undefined8 *puVar17;
  Byte *pBVar18;
  SizeT processed;
  Byte *pBVar19;
  Byte *dic;
  int iVar20;
  uint rem;
  int iVar21;
  uint uVar22;
  uint uVar23;
  size_t __n;
  uint uVar24;
  SizeT outSizeCur;
  uint limit;
  Byte *pBVar25;
  uint uVar26;
  SizeT SVar27;
  SizeT dicBufSize;
  bool bVar28;
  ELzmaFinishMode curFinishMode;
  ELzmaFinishMode local_44;
  SizeT inSize_1;
  SizeT local_3c;
  uint local_38;
  Byte *local_34;
  Byte *local_30;
  
  local_3c = *destLen;
  local_38 = *srcLen;
  *destLen = 0;
  *srcLen = 0;
  local_34 = src;
  local_30 = dest;
  do {
    SVar14 = p->dicPos;
    SVar27 = p->dicBufSize;
    if (SVar14 == SVar27) {
      SVar14 = 0;
      p->dicPos = 0;
    }
    if (SVar27 - SVar14 < local_3c) {
      local_44 = LZMA_FINISH_ANY;
      limit = SVar27;
    }
    else {
      local_44 = finishMode;
      limit = local_3c + SVar14;
    }
    uVar9 = p->remainLen;
    if (uVar9 - 1 < 0x111) {
      pBVar19 = p->dic;
      uVar7 = p->reps[0];
      uVar24 = limit - SVar14;
      if (uVar9 < limit - SVar14) {
        uVar24 = uVar9;
      }
      if (p->checkDicSize == 0) {
        UVar13 = (p->prop).dicSize;
        UVar15 = p->processedPos;
        if (UVar13 - UVar15 <= uVar24) {
          p->checkDicSize = UVar13;
        }
      }
      else {
        UVar15 = p->processedPos;
      }
      uVar9 = uVar9 - uVar24;
      p->processedPos = uVar24 + UVar15;
      p->remainLen = uVar9;
      SVar16 = SVar14;
      if (uVar24 != 0) {
        pBVar25 = pBVar19 + SVar14;
        do {
          iVar21 = SVar16 - uVar7;
          SVar10 = SVar27;
          if (uVar7 <= SVar16) {
            SVar10 = 0;
          }
          SVar16 = SVar16 + 1;
          *pBVar25 = pBVar19[iVar21 + SVar10];
          pBVar25 = pBVar25 + 1;
        } while (SVar16 != uVar24 + SVar14);
        uVar9 = p->remainLen;
        SVar16 = uVar24 + SVar14;
      }
      p->dicPos = SVar16;
    }
    iVar21 = 0;
    *status = LZMA_STATUS_NOT_SPECIFIED;
    uVar24 = local_38;
    pBVar19 = local_34;
    while (uVar9 != 0x112) {
      if (p->needFlush != 0) {
        pBVar25 = pBVar19;
        iVar20 = iVar21;
        if (uVar24 == 0) {
          uVar7 = p->tempBufSize;
joined_r0x080cebfc:
          iVar21 = iVar20;
          pBVar19 = pBVar25;
          if (uVar7 < 5) {
            bVar28 = false;
            *status = LZMA_STATUS_NEEDS_MORE_INPUT;
            goto LAB_080cea98;
          }
          BVar3 = p->tempBuf[0];
          uVar24 = 0;
        }
        else {
          uVar11 = p->tempBufSize;
          uVar22 = uVar24;
          if (uVar11 < 5) {
            uVar7 = uVar11 + 1;
            uVar22 = uVar24 - 1;
            pBVar25 = pBVar19 + 1;
            p->tempBufSize = uVar7;
            iVar20 = iVar21 + 1;
            p->tempBuf[uVar11] = *pBVar19;
            if (uVar22 == 0) goto joined_r0x080cebfc;
            if (uVar7 != 5) {
              uVar7 = uVar11 + 2;
              uVar22 = uVar24 - 2;
              pBVar25 = pBVar19 + 2;
              p->tempBufSize = uVar7;
              iVar20 = iVar21 + 2;
              p->tempBuf[uVar11 + 1] = pBVar19[1];
              if (uVar22 == 0) goto joined_r0x080cebfc;
              if (uVar7 != 5) {
                uVar7 = uVar11 + 3;
                uVar22 = uVar24 - 3;
                pBVar25 = pBVar19 + 3;
                p->tempBufSize = uVar7;
                iVar20 = iVar21 + 3;
                p->tempBuf[uVar11 + 2] = pBVar19[2];
                if (uVar22 == 0) goto joined_r0x080cebfc;
                if (uVar7 != 5) {
                  uVar7 = uVar11 + 4;
                  uVar22 = uVar24 - 4;
                  pBVar25 = pBVar19 + 4;
                  p->tempBufSize = uVar7;
                  iVar20 = iVar21 + 4;
                  p->tempBuf[uVar11 + 3] = pBVar19[3];
                  if (uVar22 == 0) goto joined_r0x080cebfc;
                  if (uVar7 == 4) {
                    uVar22 = uVar24 - 5;
                    iVar20 = iVar21 + 5;
                    pBVar25 = pBVar19 + 5;
                    p->tempBufSize = 5;
                    p->tempBuf[4] = pBVar19[4];
                  }
                }
              }
            }
          }
          BVar3 = p->tempBuf[0];
          uVar24 = uVar22;
          pBVar19 = pBVar25;
          iVar21 = iVar20;
        }
        if (BVar3 == '\0') {
          bVar4 = p->tempBuf[2];
          bVar5 = p->tempBuf[1];
          p->range = 0xffffffff;
          bVar6 = p->tempBuf[4];
          p->needFlush = 0;
          p->tempBufSize = 0;
          p->code = (uint)bVar4 << 0x10 | (uint)bVar5 << 0x18 | (uint)bVar6 |
                    (uint)p->tempBuf[3] << 8;
          goto LAB_080ce708;
        }
        goto LAB_080cebcc;
      }
LAB_080ce708:
      if (limit <= p->dicPos) {
        if (uVar9 == 0) {
          if (p->code == 0) {
            *status = LZMA_STATUS_MAYBE_FINISHED_WITHOUT_MARK;
            bVar28 = false;
          }
          else {
            if (local_44 != LZMA_FINISH_ANY) {
              uVar9 = 1;
              goto LAB_080ce738;
            }
LAB_080cea88:
            bVar28 = false;
            *status = LZMA_STATUS_NOT_FINISHED;
          }
        }
        else {
          if (local_44 == LZMA_FINISH_ANY) goto LAB_080cea88;
LAB_080cec40:
          bVar28 = true;
          *status = LZMA_STATUS_NOT_FINISHED;
        }
        goto LAB_080cea98;
      }
      uVar9 = 0;
LAB_080ce738:
      if (p->needInitState != 0) {
        pUVar12 = p->probs;
        iVar20 = 0x300 << ((p->prop).lc + (p->prop).lp & 0xff);
        uVar7 = iVar20 + 0x736;
        if (uVar7 != 0) {
          uVar22 = -((uint)((int)pUVar12 << 0x1d) >> 0x1e) & 7;
          if (uVar7 <= uVar22) {
            uVar22 = uVar7;
          }
          uVar11 = uVar7;
          if ((uVar7 < 0xb) || (uVar11 = uVar22, uVar22 != 0)) {
            *pUVar12 = 0x400;
            uVar22 = uVar11;
            if ((((uVar11 != 1) &&
                 (((pUVar12[1] = 0x400, uVar11 != 2 && (pUVar12[2] = 0x400, uVar11 != 3)) &&
                  (pUVar12[3] = 0x400, uVar11 != 4)))) &&
                (((pUVar12[4] = 0x400, uVar11 != 5 && (pUVar12[5] = 0x400, uVar11 != 6)) &&
                 (pUVar12[6] = 0x400, uVar11 != 7)))) && (pUVar12[7] = 0x400, uVar11 != 8)) {
              pUVar12[8] = 0x400;
              if (uVar11 == 10) {
                pUVar12[9] = 0x400;
              }
              else {
                uVar22 = 9;
              }
            }
            if (uVar7 == uVar11) goto LAB_080ce8e4;
          }
          uVar26 = ((uVar7 - uVar11) - 8 >> 3) + 1;
          iVar1 = uVar26 * 8;
          if (6 < (iVar20 + 0x735) - uVar11) {
            auVar2 = SIMDExpandImmediate(0,10,4);
            uVar23 = 0;
            puVar17 = (undefined8 *)(pUVar12 + uVar11);
            do {
              uVar23 = uVar23 + 1;
              *puVar17 = auVar2._0_8_;
              puVar17[1] = auVar2._8_8_;
              puVar17 = puVar17 + 2;
            } while (uVar23 < uVar26);
            uVar22 = uVar22 + iVar1;
            if (iVar1 - (uVar7 - uVar11) == 0) goto LAB_080ce8e4;
          }
          pUVar12[uVar22] = 0x400;
          if (uVar22 + 1 < uVar7) {
            pUVar12[uVar22 + 1] = 0x400;
            if (uVar22 + 2 < uVar7) {
              pUVar12[uVar22 + 2] = 0x400;
              if (uVar22 + 3 < uVar7) {
                pUVar12[uVar22 + 3] = 0x400;
                if (uVar22 + 4 < uVar7) {
                  pUVar12[uVar22 + 4] = 0x400;
                  if (uVar22 + 5 < uVar7) {
                    uVar26 = uVar22 + 6;
                    uVar11 = uVar26;
                    if (uVar26 < uVar7) {
                      uVar11 = uVar26 * 2;
                    }
                    pUVar12[uVar22 + 5] = 0x400;
                    if (uVar26 < uVar7) {
                      *(undefined2 *)((int)pUVar12 + uVar11) = 0x400;
                    }
                  }
                }
              }
            }
          }
        }
LAB_080ce8e4:
        p->state = 0;
        p->reps[0] = 1;
        p->reps[1] = 1;
        p->reps[2] = 1;
        p->reps[3] = 1;
        p->needInitState = 0;
      }
      SVar27 = p->tempBufSize;
      if (SVar27 == 0) {
        uVar7 = uVar9;
        if (uVar24 < 0x14) {
          uVar7 = 1;
        }
        if (uVar7 == 0) {
          bufLimit = pBVar19 + (uVar24 - 0x14);
        }
        else {
          EVar8 = LzmaDec_TryDummy(p,pBVar19,uVar24);
          if (EVar8 == DUMMY_ERROR) {
            memcpy(p->tempBuf,pBVar19,uVar24);
            p->tempBufSize = uVar24;
            iVar21 = iVar21 + uVar24;
            *status = LZMA_STATUS_NEEDS_MORE_INPUT;
            bVar28 = false;
            goto LAB_080cea98;
          }
          if (EVar8 == DUMMY_MATCH) {
            uVar9 = 0;
          }
          bufLimit = pBVar19;
          if (uVar9 != 0) goto LAB_080cec40;
        }
        p->buf = pBVar19;
        iVar20 = LzmaDec_DecodeReal2(p,limit,bufLimit);
        if (iVar20 != 0) goto LAB_080cebcc;
        pBVar18 = p->buf;
        pBVar25 = pBVar18 + -(int)pBVar19;
      }
      else {
        uVar22 = (uint)(SVar27 < 0x14);
        uVar7 = uVar22;
        if (uVar24 == 0) {
          uVar7 = 0;
        }
        if (uVar7 != 0) {
          pBVar25 = pBVar19 + -1;
          pBVar18 = p->tempBuf + (SVar27 - 1);
          uVar7 = 0;
          do {
            SVar27 = SVar27 + 1;
            uVar7 = uVar7 + 1;
            pBVar25 = pBVar25 + 1;
            uVar22 = (uint)(SVar27 < 0x14);
            uVar11 = uVar22;
            if (uVar24 <= uVar7) {
              uVar11 = 0;
            }
            pBVar18 = pBVar18 + 1;
            *pBVar18 = *pBVar25;
          } while (uVar11 != 0);
        }
        p->tempBufSize = SVar27;
        pBVar25 = p->tempBuf;
        if ((uVar22 | uVar9) != 0) {
          EVar8 = LzmaDec_TryDummy(p,pBVar25,SVar27);
          if (EVar8 == DUMMY_ERROR) {
            iVar21 = iVar21 + uVar7;
            *status = LZMA_STATUS_NEEDS_MORE_INPUT;
            bVar28 = false;
            goto LAB_080cea98;
          }
          if (EVar8 == DUMMY_MATCH) {
            uVar9 = 0;
          }
          if (uVar9 != 0) goto LAB_080cec40;
        }
        p->buf = pBVar25;
        iVar20 = LzmaDec_DecodeReal2(p,limit,pBVar25);
        if (iVar20 != 0) {
LAB_080cebcc:
          bVar28 = true;
          goto LAB_080cea98;
        }
        p->tempBufSize = 0;
        pBVar25 = p->buf + ((uVar7 - (int)pBVar25) - SVar27);
        pBVar18 = pBVar19 + (int)pBVar25;
      }
      uVar24 = uVar24 - (int)pBVar25;
      iVar21 = iVar21 + (int)pBVar25;
      pBVar19 = pBVar18;
      uVar9 = p->remainLen;
    }
    bVar28 = p->code == 0;
    if (bVar28) {
      *status = LZMA_STATUS_FINISHED_WITH_MARK;
    }
    bVar28 = !bVar28;
LAB_080cea98:
    pBVar19 = p->dic;
    local_34 = local_34 + iVar21;
    local_38 = local_38 - iVar21;
    *srcLen = iVar21 + *srcLen;
    __n = p->dicPos - SVar14;
    local_3c = local_3c - __n;
    memcpy(local_30,pBVar19 + SVar14,__n);
    local_30 = local_30 + __n;
    *destLen = *destLen + __n;
    if (bVar28) {
      return 1;
    }
    if (local_3c == 0 || __n == 0) {
      return 0;
    }
  } while( true );
}


