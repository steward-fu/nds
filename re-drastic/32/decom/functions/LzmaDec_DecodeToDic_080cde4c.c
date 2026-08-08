/*
 * Ghidra decompilation
 *
 * Function : LzmaDec_DecodeToDic
 * Address  : 080cde4c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes LzmaDec_DecodeToDic(CLzmaDec *p,SizeT dicLimit,Byte *src,SizeT *srcLen,
                        ELzmaFinishMode finishMode,ELzmaStatus *status)

{
  int iVar1;
  undefined auVar2 [16];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  Byte BVar6;
  uint uVar7;
  UInt32 rep0;
  uint uVar8;
  ELzmaDummy EVar9;
  int dummyRes;
  int dummyRes_1;
  uint uVar10;
  uint len;
  uint uVar11;
  UInt32 numProbs;
  UInt32 UVar12;
  SizeT SVar13;
  UInt16 *pUVar14;
  UInt16 *probs;
  Byte *bufLimit;
  SizeT processed;
  SizeT SVar15;
  SizeT dicPos;
  undefined8 *puVar16;
  Byte *pBVar17;
  SizeT SVar18;
  SizeT dicBufSize;
  uint rem;
  int iVar19;
  uint uVar20;
  UInt32 UVar21;
  SizeT inSize_00;
  SizeT inSize;
  SizeT SVar22;
  uint uVar23;
  Byte *pBVar24;
  Byte *dic;
  bool bVar25;
  
  inSize_00 = *srcLen;
  *srcLen = 0;
  uVar10 = p->remainLen;
  if (uVar10 - 1 < 0x111) {
    pBVar24 = p->dic;
    SVar15 = p->dicPos;
    SVar18 = p->dicBufSize;
    uVar7 = p->reps[0];
    uVar11 = dicLimit - SVar15;
    if (uVar10 < dicLimit - SVar15) {
      uVar11 = uVar10;
    }
    if (p->checkDicSize == 0) {
      UVar21 = (p->prop).dicSize;
      UVar12 = p->processedPos;
      if (UVar21 - UVar12 <= uVar11) {
        p->checkDicSize = UVar21;
      }
    }
    else {
      UVar12 = p->processedPos;
    }
    uVar10 = uVar10 - uVar11;
    p->processedPos = uVar11 + UVar12;
    p->remainLen = uVar10;
    if (uVar11 != 0) {
      SVar22 = SVar15 + uVar11;
      pBVar17 = pBVar24 + SVar15;
      do {
        iVar19 = SVar15 - uVar7;
        SVar13 = SVar18;
        if (uVar7 <= SVar15) {
          SVar13 = 0;
        }
        SVar15 = SVar15 + 1;
        *pBVar17 = pBVar24[iVar19 + SVar13];
        pBVar17 = pBVar17 + 1;
      } while (SVar15 != SVar22);
      uVar10 = p->remainLen;
      SVar15 = SVar22;
    }
    p->dicPos = SVar15;
  }
  *status = LZMA_STATUS_NOT_SPECIFIED;
  do {
    if (uVar10 == 0x112) {
      bVar25 = p->code == 0;
      if (bVar25) {
        *status = LZMA_STATUS_FINISHED_WITH_MARK;
      }
      return (uint)!bVar25;
    }
    if (p->needFlush != 0) {
      for (; inSize_00 != 0; inSize_00 = inSize_00 - 1) {
        uVar10 = p->tempBufSize;
        if (4 < uVar10) {
          BVar6 = p->tempBuf[0];
          goto joined_r0x080cdf7c;
        }
        p->tempBufSize = uVar10 + 1;
        p->tempBuf[uVar10] = *src;
        *srcLen = *srcLen + 1;
        src = src + 1;
      }
      if (p->tempBufSize < 5) {
        *status = LZMA_STATUS_NEEDS_MORE_INPUT;
        return 0;
      }
      BVar6 = p->tempBuf[0];
      inSize_00 = 0;
joined_r0x080cdf7c:
      if (BVar6 != '\0') {
        return 1;
      }
      bVar3 = p->tempBuf[2];
      bVar4 = p->tempBuf[1];
      p->range = 0xffffffff;
      bVar5 = p->tempBuf[4];
      p->needFlush = 0;
      p->tempBufSize = 0;
      p->code = (uint)bVar3 << 0x10 | (uint)bVar4 << 0x18 | (uint)bVar5 | (uint)p->tempBuf[3] << 8;
    }
    if (p->dicPos < dicLimit) {
      uVar10 = 0;
    }
    else {
      if (p->remainLen != 0) {
        if (finishMode == LZMA_FINISH_ANY) goto LAB_080ce384;
        goto LAB_080ce404;
      }
      if (p->code == 0) {
        *status = LZMA_STATUS_MAYBE_FINISHED_WITHOUT_MARK;
        return 0;
      }
      if (finishMode == LZMA_FINISH_ANY) {
LAB_080ce384:
        *status = LZMA_STATUS_NOT_FINISHED;
        return 0;
      }
      uVar10 = 1;
    }
    if (p->needInitState != 0) {
      pUVar14 = p->probs;
      iVar19 = 0x300 << ((p->prop).lc + (p->prop).lp & 0xff);
      uVar11 = iVar19 + 0x736;
      if (uVar11 != 0) {
        uVar7 = -((uint)((int)pUVar14 << 0x1d) >> 0x1e) & 7;
        if (uVar11 <= uVar7) {
          uVar7 = uVar11;
        }
        uVar8 = uVar11;
        if ((uVar11 < 0xb) || (uVar8 = uVar7, uVar7 != 0)) {
          *pUVar14 = 0x400;
          uVar7 = uVar8;
          if ((((uVar8 != 1) &&
               (((pUVar14[1] = 0x400, uVar8 != 2 && (pUVar14[2] = 0x400, uVar8 != 3)) &&
                (pUVar14[3] = 0x400, uVar8 != 4)))) &&
              (((pUVar14[4] = 0x400, uVar8 != 5 && (pUVar14[5] = 0x400, uVar8 != 6)) &&
               (pUVar14[6] = 0x400, uVar8 != 7)))) && (pUVar14[7] = 0x400, uVar8 != 8)) {
            pUVar14[8] = 0x400;
            if (uVar8 == 10) {
              pUVar14[9] = 0x400;
            }
            else {
              uVar7 = 9;
            }
          }
          if (uVar11 == uVar8) goto LAB_080ce194;
        }
        uVar23 = ((uVar11 - uVar8) - 8 >> 3) + 1;
        iVar1 = uVar23 * 8;
        if (6 < (iVar19 + 0x735) - uVar8) {
          auVar2 = SIMDExpandImmediate(0,10,4);
          uVar20 = 0;
          puVar16 = (undefined8 *)(pUVar14 + uVar8);
          do {
            uVar20 = uVar20 + 1;
            *puVar16 = auVar2._0_8_;
            puVar16[1] = auVar2._8_8_;
            puVar16 = puVar16 + 2;
          } while (uVar20 < uVar23);
          uVar7 = uVar7 + iVar1;
          if (iVar1 - (uVar11 - uVar8) == 0) goto LAB_080ce194;
        }
        pUVar14[uVar7] = 0x400;
        if (uVar7 + 1 < uVar11) {
          pUVar14[uVar7 + 1] = 0x400;
          if (uVar7 + 2 < uVar11) {
            pUVar14[uVar7 + 2] = 0x400;
            if (uVar7 + 3 < uVar11) {
              pUVar14[uVar7 + 3] = 0x400;
              if (uVar7 + 4 < uVar11) {
                pUVar14[uVar7 + 4] = 0x400;
                if (uVar7 + 5 < uVar11) {
                  uVar23 = uVar7 + 6;
                  uVar8 = uVar23;
                  if (uVar23 < uVar11) {
                    uVar8 = uVar23 * 2;
                  }
                  pUVar14[uVar7 + 5] = 0x400;
                  if (uVar23 < uVar11) {
                    *(undefined2 *)((int)pUVar14 + uVar8) = 0x400;
                  }
                }
              }
            }
          }
        }
      }
LAB_080ce194:
      p->state = 0;
      p->reps[0] = 1;
      p->reps[1] = 1;
      p->reps[2] = 1;
      p->reps[3] = 1;
      p->needInitState = 0;
    }
    SVar15 = p->tempBufSize;
    if (SVar15 == 0) {
      uVar11 = uVar10;
      if (inSize_00 < 0x14) {
        uVar11 = 1;
      }
      if (uVar11 == 0) {
        bufLimit = src + (inSize_00 - 0x14);
      }
      else {
        EVar9 = LzmaDec_TryDummy(p,src,inSize_00);
        if (EVar9 == DUMMY_ERROR) {
          memcpy(p->tempBuf,src,inSize_00);
          p->tempBufSize = inSize_00;
          *srcLen = *srcLen + inSize_00;
          *status = LZMA_STATUS_NEEDS_MORE_INPUT;
          return 0;
        }
        if (EVar9 == DUMMY_MATCH) {
          uVar10 = 0;
        }
        bufLimit = src;
        if (uVar10 != 0) goto LAB_080ce404;
      }
      p->buf = src;
      iVar19 = LzmaDec_DecodeReal2(p,dicLimit,bufLimit);
      if (iVar19 != 0) {
        return 1;
      }
      pBVar17 = p->buf;
      pBVar24 = pBVar17 + -(int)src;
      *srcLen = (SizeT)(pBVar24 + *srcLen);
    }
    else {
      uVar7 = (uint)(SVar15 < 0x14);
      uVar11 = uVar7;
      if (inSize_00 == 0) {
        uVar11 = 0;
      }
      if (uVar11 != 0) {
        pBVar24 = src + -1;
        pBVar17 = p->tempBuf + (SVar15 - 1);
        uVar11 = 0;
        do {
          SVar15 = SVar15 + 1;
          uVar11 = uVar11 + 1;
          pBVar24 = pBVar24 + 1;
          uVar7 = (uint)(SVar15 < 0x14);
          uVar8 = uVar7;
          if (inSize_00 <= uVar11) {
            uVar8 = 0;
          }
          pBVar17 = pBVar17 + 1;
          *pBVar17 = *pBVar24;
        } while (uVar8 != 0);
      }
      p->tempBufSize = SVar15;
      pBVar24 = p->tempBuf;
      if ((uVar7 | uVar10) != 0) {
        EVar9 = LzmaDec_TryDummy(p,pBVar24,SVar15);
        if (EVar9 == DUMMY_ERROR) {
          *srcLen = *srcLen + uVar11;
          *status = LZMA_STATUS_NEEDS_MORE_INPUT;
          return 0;
        }
        if (EVar9 == DUMMY_MATCH) {
          uVar10 = 0;
        }
        if (uVar10 != 0) {
LAB_080ce404:
          *status = LZMA_STATUS_NOT_FINISHED;
          return 1;
        }
      }
      p->buf = pBVar24;
      iVar19 = LzmaDec_DecodeReal2(p,dicLimit,pBVar24);
      if (iVar19 != 0) {
        return 1;
      }
      pBVar24 = p->buf + ((uVar11 - (int)pBVar24) - SVar15);
      pBVar17 = src + (int)pBVar24;
      *srcLen = (SizeT)(pBVar24 + *srcLen);
      p->tempBufSize = 0;
    }
    inSize_00 = inSize_00 - (int)pBVar24;
    uVar10 = p->remainLen;
    src = pBVar17;
  } while( true );
}


