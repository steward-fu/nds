/*
 * Ghidra decompilation
 *
 * Function : Lzma2Dec_DecodeToDic
 * Address  : 080cf4d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

SRes Lzma2Dec_DecodeToDic
               (CLzma2Dec *p,SizeT dicLimit,Byte *src,SizeT *srcLen,ELzmaFinishMode finishMode,
               ELzmaStatus *status)

{
  byte bVar1;
  SRes SVar2;
  SRes res;
  uint uVar3;
  int mode;
  int iVar4;
  ELzmaStatus EVar5;
  Bool initDic_00;
  Bool initDic_1;
  Bool initDic;
  uint uVar6;
  SizeT destSizeCur;
  UInt32 UVar7;
  Bool initState;
  UInt32 UVar8;
  SizeT SVar9;
  SizeT inSize;
  SizeT SVar10;
  SizeT dicPos;
  SizeT outSizeProcessed;
  uint uVar11;
  bool bVar12;
  ELzmaFinishMode curFinishMode;
  ELzmaFinishMode local_38;
  SizeT srcSizeCur;
  int local_2c;
  
  local_2c = __stack_chk_guard;
  SVar9 = *srcLen;
  *srcLen = 0;
  iVar4 = p->state;
  *status = LZMA_STATUS_NOT_SPECIFIED;
LAB_080cf544:
  if (iVar4 == 8) {
    SVar2 = 0;
    *status = LZMA_STATUS_FINISHED_WITH_MARK;
LAB_080cf5d4:
    if (local_2c == __stack_chk_guard) {
      return SVar2;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  SVar10 = (p->decoder).dicPos;
  if (iVar4 == 9) goto LAB_080cf998;
  if (SVar10 == dicLimit && finishMode == LZMA_FINISH_ANY) {
    SVar2 = 0;
    *status = LZMA_STATUS_NOT_FINISHED;
    goto LAB_080cf5d4;
  }
  SVar2 = 0;
  if (1 < iVar4 - 6U) {
    if (SVar9 == *srcLen) {
      *status = LZMA_STATUS_NEEDS_MORE_INPUT;
      goto LAB_080cf5d4;
    }
    *srcLen = *srcLen + 1;
    bVar1 = *src;
    uVar11 = (uint)bVar1;
    switch(p->state) {
    case 0:
      p->control = bVar1;
      if (uVar11 == 0) {
        iVar4 = 8;
      }
      else if ((bVar1 & 0x80) == 0) {
        if (2 < uVar11) goto switchD_080cf5a8_caseD_6;
        iVar4 = 1;
        p->unpackSize = 0;
      }
      else {
        iVar4 = 1;
        p->unpackSize = (uVar11 & 0x1f) << 0x10;
      }
      break;
    case 1:
      iVar4 = 2;
      p->unpackSize = p->unpackSize | uVar11 << 8;
      break;
    case 2:
      bVar12 = (char)p->control < '\0';
      if (bVar12) {
        iVar4 = 3;
      }
      p->unpackSize = (uVar11 | p->unpackSize) + 1;
      if (!bVar12) {
LAB_080cf888:
        iVar4 = 6;
      }
      break;
    case 3:
      iVar4 = 4;
      p->packSize = uVar11 << 8;
      break;
    case 4:
      p->packSize = (uVar11 | p->packSize) + 1;
      if (((uint)p->control << 0x19) >> 0x1e < 2) {
        if (p->needInitProp == 0) goto LAB_080cf888;
        goto switchD_080cf5a8_caseD_6;
      }
      iVar4 = 5;
      break;
    case 5:
      if (uVar11 < 0xe1) {
        (p->decoder).prop.pb = ((uint)((ulonglong)uVar11 * 0x16c16c16d >> 0x21) << 0x13) >> 0x18;
        uVar6 = (uVar11 / 9) % 5;
        if (uVar11 % 9 + uVar6 < 5) {
          iVar4 = 6;
          (p->decoder).prop.lc = uVar11 % 9;
          (p->decoder).prop.lp = uVar6;
          p->needInitProp = 0;
          break;
        }
      }
    default:
switchD_080cf5a8_caseD_6:
      iVar4 = 9;
    }
    p->state = iVar4;
    src = src + 1;
    goto LAB_080cf544;
  }
  uVar6 = dicLimit - SVar10;
  uVar11 = p->unpackSize;
  srcSizeCur = SVar9 - *srcLen;
  bVar12 = uVar11 <= uVar6;
  if (!bVar12) {
    uVar11 = uVar6;
  }
  local_38 = (ELzmaFinishMode)bVar12;
  bVar1 = p->control;
  if ((bVar1 & 0x80) == 0) {
    if (SVar9 == *srcLen) {
      SVar2 = 0;
      *status = LZMA_STATUS_NEEDS_MORE_INPUT;
    }
    else {
      if (iVar4 == 6) {
        if (bVar1 == 1) {
          initDic_00 = 1;
          p->needInitState = 1;
          p->needInitProp = 1;
        }
        else {
          initDic_00 = 0;
          if (p->needInitDic != 0) goto LAB_080cf998;
        }
        p->needInitDic = 0;
        LzmaDec_InitDicAndState(&p->decoder,initDic_00,0);
      }
      if (uVar11 < srcSizeCur) {
        srcSizeCur = uVar11;
      }
      SVar10 = srcSizeCur;
      if (srcSizeCur != 0) goto code_r0x080cf668;
LAB_080cf998:
      SVar2 = 1;
    }
    goto LAB_080cf5d4;
  }
  if (iVar4 == 6) {
    uVar3 = ((uint)bVar1 << 0x19) >> 0x1e;
    uVar6 = uVar3;
    if (uVar3 != 0) {
      uVar6 = 1;
    }
    if ((uVar3 != 3) && ((p->needInitDic != 0 || ((uVar3 == 0 && (p->needInitState != 0))))))
    goto LAB_080cf998;
    LzmaDec_InitDicAndState(&p->decoder,(uint)(uVar3 == 3),uVar6);
    p->state = 7;
    p->needInitDic = 0;
    p->needInitState = 0;
  }
  if (p->packSize < srcSizeCur) {
    srcSizeCur = p->packSize;
  }
  SVar2 = LzmaDec_DecodeToDic(&p->decoder,uVar11 + SVar10,src,&srcSizeCur,local_38,status);
  src = src + srcSizeCur;
  *srcLen = *srcLen + srcSizeCur;
  uVar11 = (p->decoder).dicPos - SVar10;
  UVar7 = p->packSize - srcSizeCur;
  UVar8 = p->unpackSize - uVar11;
  p->packSize = UVar7;
  p->unpackSize = UVar8;
  if ((SVar2 != 0) || (EVar5 = *status, EVar5 == LZMA_STATUS_NEEDS_MORE_INPUT)) goto LAB_080cf5d4;
  if ((srcSizeCur | uVar11) == 0) {
    if (EVar5 != LZMA_STATUS_MAYBE_FINISHED_WITHOUT_MARK || (UVar7 != 0 || UVar8 != 0))
    goto LAB_080cf998;
    p->state = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = p->state;
    if (EVar5 != LZMA_STATUS_MAYBE_FINISHED_WITHOUT_MARK) goto LAB_080cf544;
  }
  *status = LZMA_STATUS_NOT_FINISHED;
  goto LAB_080cf544;
code_r0x080cf668:
  memcpy((p->decoder).dic + (p->decoder).dicPos,src,srcSizeCur);
  (p->decoder).dicPos = (p->decoder).dicPos + SVar10;
  if ((p->decoder).checkDicSize == 0) {
    UVar7 = (p->decoder).prop.dicSize;
    UVar8 = (p->decoder).processedPos;
    if (UVar7 - UVar8 <= SVar10) {
      (p->decoder).checkDicSize = UVar7;
    }
  }
  else {
    UVar8 = (p->decoder).processedPos;
  }
  (p->decoder).processedPos = SVar10 + UVar8;
  src = src + srcSizeCur;
  *srcLen = *srcLen + srcSizeCur;
  UVar8 = p->unpackSize - srcSizeCur;
  if (UVar8 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 7;
  }
  p->unpackSize = UVar8;
  p->state = iVar4;
  goto LAB_080cf544;
}


