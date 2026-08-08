/*
 * Ghidra decompilation
 *
 * Function : Lzma2Dec_DecodeToBuf
 * Address  : 080cf9f4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes Lzma2Dec_DecodeToBuf
               (CLzma2Dec *p,Byte *dest,SizeT *destLen,Byte *src,SizeT *srcLen,
               ELzmaFinishMode finishMode,ELzmaStatus *status)

{
  byte bVar1;
  ELzmaFinishMode EVar2;
  uint uVar3;
  SizeT destSizeCur;
  SRes res;
  uint uVar4;
  int mode;
  SizeT outSize;
  int iVar5;
  Byte *pBVar6;
  Bool initDic_00;
  Bool initDic_1;
  Bool initDic;
  SizeT SVar7;
  UInt32 UVar8;
  ELzmaStatus EVar9;
  Bool initState;
  SizeT SVar10;
  UInt32 UVar11;
  SizeT SVar12;
  size_t __n;
  SizeT SVar13;
  SizeT dicPos;
  SizeT outSizeProcessed;
  SizeT outSizeCur;
  byte *src_00;
  SizeT SVar14;
  SizeT inSize;
  SizeT srcSizeCur;
  SizeT inSize_1;
  uint uVar15;
  bool bVar16;
  SizeT local_5c;
  byte *local_58;
  Byte *local_50;
  ELzmaFinishMode curFinishMode_1;
  SizeT srcSizeCur_1;
  int local_2c;
  ELzmaFinishMode curFinishMode;
  
  local_2c = __stack_chk_guard;
  local_5c = *destLen;
  srcSizeCur = *srcLen;
  *destLen = 0;
  *srcLen = 0;
  local_58 = src;
  local_50 = dest;
  do {
    SVar14 = (p->decoder).dicPos;
    outSizeCur = (p->decoder).dicBufSize;
    if (SVar14 == outSizeCur) {
      SVar14 = 0;
      (p->decoder).dicPos = 0;
    }
    iVar5 = p->state;
    if (outSizeCur - SVar14 < local_5c) {
      EVar2 = LZMA_FINISH_ANY;
    }
    else {
      outSizeCur = local_5c + SVar14;
      EVar2 = finishMode;
    }
    SVar12 = 0;
    *status = LZMA_STATUS_NOT_SPECIFIED;
    src_00 = local_58;
LAB_080cfac8:
    while (iVar5 != 8) {
      while( true ) {
        SVar13 = (p->decoder).dicPos;
        if (iVar5 == 9) {
          SVar7 = 1;
          srcSizeCur = srcSizeCur - SVar12;
          goto LAB_080cfc34;
        }
        if (outSizeCur == SVar13 && EVar2 == LZMA_FINISH_ANY) {
          SVar7 = 0;
          *status = LZMA_STATUS_NOT_FINISHED;
          srcSizeCur = srcSizeCur - SVar12;
          goto LAB_080cfc34;
        }
        SVar7 = 0;
        if (iVar5 - 6U < 2) break;
        if (srcSizeCur == SVar12) {
          *status = LZMA_STATUS_NEEDS_MORE_INPUT;
          SVar12 = srcSizeCur;
          srcSizeCur = SVar7;
          goto LAB_080cfc34;
        }
        SVar12 = SVar12 + 1;
        bVar1 = *src_00;
        uVar15 = (uint)bVar1;
        switch(iVar5) {
        case 0:
          p->control = bVar1;
          if (uVar15 == 0) {
            iVar5 = 8;
          }
          else if ((bVar1 & 0x80) == 0) {
            if (2 < uVar15) goto switchD_080cfb18_caseD_6;
            iVar5 = 1;
            p->unpackSize = 0;
          }
          else {
            iVar5 = 1;
            p->unpackSize = (uVar15 & 0x1f) << 0x10;
          }
          break;
        case 1:
          iVar5 = 2;
          p->unpackSize = p->unpackSize | uVar15 << 8;
          break;
        case 2:
          bVar16 = (char)p->control < '\0';
          if (bVar16) {
            iVar5 = 3;
          }
          p->unpackSize = (uVar15 | p->unpackSize) + 1;
          if (!bVar16) {
LAB_080cfbf0:
            iVar5 = 6;
          }
          break;
        case 3:
          iVar5 = 4;
          p->packSize = uVar15 << 8;
          break;
        case 4:
          p->packSize = (uVar15 | p->packSize) + 1;
          if (((uint)p->control << 0x19) >> 0x1e < 2) {
            if (p->needInitProp == 0) goto LAB_080cfbf0;
            goto switchD_080cfb18_caseD_6;
          }
          iVar5 = 5;
          break;
        case 5:
          if (uVar15 < 0xe1) {
            (p->decoder).prop.pb = (uint)((ulonglong)uVar15 * 0x16c16c16d >> 0x21) * 0x80000 >> 0x18
            ;
            uVar3 = (uVar15 / 9) % 5;
            if (uVar15 % 9 + uVar3 < 5) {
              iVar5 = 6;
              (p->decoder).prop.lc = uVar15 % 9;
              (p->decoder).prop.lp = uVar3;
              p->needInitProp = 0;
              break;
            }
          }
        default:
switchD_080cfb18_caseD_6:
          iVar5 = 9;
        }
        p->state = iVar5;
        src_00 = src_00 + 1;
        if (iVar5 == 8) goto LAB_080cfb54;
      }
      uVar15 = p->unpackSize;
      uVar3 = outSizeCur - SVar13;
      SVar10 = srcSizeCur - SVar12;
      bVar16 = uVar15 <= uVar3;
      if (!bVar16) {
        uVar15 = uVar3;
      }
      bVar1 = p->control;
      srcSizeCur_1 = SVar10;
      if ((bVar1 & 0x80) != 0) {
        if (iVar5 == 6) {
          uVar4 = ((uint)bVar1 << 0x19) >> 0x1e;
          uVar3 = uVar4;
          if (uVar4 != 0) {
            uVar3 = 1;
          }
          if ((uVar4 != 3) && ((p->needInitDic != 0 || ((uVar4 == 0 && (p->needInitState != 0))))))
          goto LAB_080cffc4;
          LzmaDec_InitDicAndState(&p->decoder,(uint)(uVar4 == 3),uVar3);
          p->state = 7;
          p->needInitDic = 0;
          p->needInitState = 0;
        }
        if (p->packSize < srcSizeCur_1) {
          srcSizeCur_1 = p->packSize;
        }
        SVar7 = LzmaDec_DecodeToDic(&p->decoder,SVar13 + uVar15,src_00,&srcSizeCur_1,(uint)bVar16,
                                    status);
        uVar15 = (p->decoder).dicPos - SVar13;
        src_00 = src_00 + srcSizeCur_1;
        SVar12 = SVar12 + srcSizeCur_1;
        UVar8 = p->packSize - srcSizeCur_1;
        UVar11 = p->unpackSize - uVar15;
        p->packSize = UVar8;
        p->unpackSize = UVar11;
        if ((SVar7 == 0) && (EVar9 = *status, EVar9 != LZMA_STATUS_NEEDS_MORE_INPUT)) {
          if ((srcSizeCur_1 | uVar15) != 0) goto LAB_080cfec0;
          if (EVar9 == LZMA_STATUS_MAYBE_FINISHED_WITHOUT_MARK && (UVar11 == 0 && UVar8 == 0)) {
            p->state = 0;
            iVar5 = 0;
            goto LAB_080cfe68;
          }
          srcSizeCur = srcSizeCur - SVar12;
          SVar7 = 1;
        }
        else {
          srcSizeCur = srcSizeCur - SVar12;
        }
        goto LAB_080cfc34;
      }
      if (srcSizeCur == SVar12) {
        SVar7 = 0;
        srcSizeCur = 0;
        *status = LZMA_STATUS_NEEDS_MORE_INPUT;
        goto LAB_080cfc34;
      }
      if (iVar5 == 6) {
        if (bVar1 == 1) {
          initDic_00 = 1;
          p->needInitState = 1;
          p->needInitProp = 1;
        }
        else {
          initDic_00 = 0;
          if (p->needInitDic != 0) goto LAB_080cffc4;
        }
        p->needInitDic = 0;
        LzmaDec_InitDicAndState(&p->decoder,initDic_00,0);
      }
      if (uVar15 < srcSizeCur_1) {
        srcSizeCur_1 = uVar15;
      }
      SVar13 = srcSizeCur_1;
      if (srcSizeCur_1 == 0) {
LAB_080cffc4:
        SVar7 = 1;
        srcSizeCur = SVar10;
        goto LAB_080cfc34;
      }
      memcpy((p->decoder).dic + (p->decoder).dicPos,src_00,srcSizeCur_1);
      (p->decoder).dicPos = (p->decoder).dicPos + SVar13;
      if ((p->decoder).checkDicSize == 0) {
        UVar8 = (p->decoder).prop.dicSize;
        UVar11 = (p->decoder).processedPos;
        if (UVar8 - UVar11 <= SVar13) {
          (p->decoder).checkDicSize = UVar8;
        }
      }
      else {
        UVar11 = (p->decoder).processedPos;
      }
      UVar8 = p->unpackSize;
      (p->decoder).processedPos = SVar13 + UVar11;
      src_00 = src_00 + srcSizeCur_1;
      SVar12 = SVar12 + srcSizeCur_1;
      UVar8 = UVar8 - srcSizeCur_1;
      if (UVar8 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 7;
      }
      p->unpackSize = UVar8;
      p->state = iVar5;
    }
LAB_080cfb54:
    SVar7 = 0;
    *status = LZMA_STATUS_FINISHED_WITH_MARK;
    srcSizeCur = srcSizeCur - SVar12;
LAB_080cfc34:
    local_58 = local_58 + SVar12;
    pBVar6 = (p->decoder).dic;
    *srcLen = *srcLen + SVar12;
    __n = (p->decoder).dicPos - SVar14;
    local_5c = local_5c - __n;
    memcpy(local_50,pBVar6 + SVar14,__n);
    local_50 = local_50 + __n;
    *destLen = *destLen + __n;
    if ((SVar7 != 0) || (local_5c == 0 || __n == 0)) {
      if (local_2c == __stack_chk_guard) {
        return SVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
LAB_080cfec0:
  iVar5 = p->state;
  if (EVar9 == LZMA_STATUS_MAYBE_FINISHED_WITHOUT_MARK) {
LAB_080cfe68:
    *status = LZMA_STATUS_NOT_FINISHED;
  }
  goto LAB_080cfac8;
}


