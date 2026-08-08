/*
 * Ghidra decompilation
 *
 * Function : _ZN11PPM_CONTEXT13decodeSymbol2EP8ModelPPM
 * Address  : 08102190
 * Program  : drastic
 */


/* DWARF original prototype: bool decodeSymbol2(PPM_CONTEXT * this, ModelPPM * Model) */

bool __thiscall PPM_CONTEXT::decodeSymbol2(PPM_CONTEXT *this,ModelPPM *Model)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  bool bVar4;
  PPM_CONTEXT *pPVar5;
  STATE **ppSVar6;
  uint uVar7;
  byte **ppbVar8;
  STATE *p;
  int iVar9;
  int iVar10;
  uint uVar11;
  SEE2_CONTEXT *psee2c;
  uint uVar12;
  int iVar13;
  SEE2_CONTEXT *psee2c_1;
  SEE2_CONTEXT *pSVar14;
  int iVar15;
  int i;
  uint uVar16;
  int HiCnt;
  uint RetVal;
  uint uVar17;
  uint uVar18;
  byte *pbStack_430;
  STATE *ps [256];
  int local_2c;
  
  iVar9 = Model->NumMasked;
  uVar16 = (uint)this->NumStats;
  iVar15 = uVar16 - iVar9;
  local_2c = __stack_chk_guard;
  if (uVar16 == 0x100) {
    uVar17 = 1;
    pSVar14 = &Model->DummySEE2Cont;
    (Model->Coder).SubRange.scale = 1;
  }
  else {
    pPVar5 = this;
    if (iVar15 < iVar9) {
      pPVar5 = (PPM_CONTEXT *)0x10;
    }
    bVar1 = *(byte *)((int)Model + iVar15 + 0x76b);
    if (iVar9 <= iVar15) {
      pPVar5 = (PPM_CONTEXT *)0x0;
    }
    uVar12 = (uint)(this->field_1).U.SummFreq;
    if (iVar15 < (int)(this->Suffix->NumStats - uVar16)) {
      iVar10 = 4;
    }
    else {
      iVar10 = 0;
    }
    if ((int)(uVar12 + uVar16 * -0xb) < 0 == SBORROW4(uVar12,uVar16 * 0xb)) {
      iVar13 = 0;
    }
    else {
      iVar13 = 8;
    }
    pSVar14 = (SEE2_CONTEXT *)
              ((int)&pPVar5->NumStats +
              (int)&Model->SEE2Cont[bVar1][Model->HiBitsFlag].Summ + iVar13 + iVar10);
    uVar17 = (int)(uint)pSVar14->Summ >> pSVar14->Shift;
    sVar2 = (short)uVar17;
    if (uVar17 == 0) {
      uVar17 = 1;
    }
    *(ushort *)
     ((int)&pPVar5->NumStats +
     (int)&Model->SEE2Cont[bVar1][Model->HiBitsFlag].Summ + iVar13 + iVar10) = pSVar14->Summ - sVar2
    ;
    (Model->Coder).SubRange.scale = uVar17;
  }
  HiCnt = 0;
  ppSVar6 = ps;
  bVar3 = Model->EscCount;
  p = (this->field_1).U.Stats + -1;
  do {
    do {
      p = p;
      p = p + 1;
    } while (Model->CharMask[p->Symbol] == bVar3);
    bVar1 = p[1].Freq;
    iVar15 = iVar15 + -1;
    *ppSVar6 = p;
    ppSVar6 = ppSVar6 + 1;
    HiCnt = HiCnt + (uint)bVar1;
  } while (iVar15 != 0);
  uVar11 = (Model->Coder).low;
  uVar17 = HiCnt + uVar17;
  uVar18 = (Model->Coder).code;
  uVar7 = (Model->Coder).range;
  (Model->Coder).SubRange.scale = uVar17;
  uVar7 = __aeabi_uidiv(uVar7,uVar17);
  (Model->Coder).range = uVar7;
  iVar15 = __aeabi_uidiv(uVar18 - uVar11,uVar7);
  if (iVar15 < (int)uVar17) {
    if (iVar15 < HiCnt) {
      uVar17 = (uint)ps[0]->Freq;
      if ((int)uVar17 <= iVar15) {
        ppSVar6 = ps;
        do {
          ppSVar6 = ppSVar6 + 1;
          ps[0] = *ppSVar6;
          uVar17 = uVar17 + ps[0]->Freq;
        } while ((int)uVar17 <= iVar15);
      }
      (Model->Coder).SubRange.HighCount = uVar17;
      (Model->Coder).SubRange.LowCount = uVar17 - ps[0]->Freq;
      bVar1 = pSVar14->Shift;
      if ((bVar1 < 7) && (bVar3 = pSVar14->Count + 0xff, pSVar14->Count = bVar3, bVar3 == '\0')) {
        pSVar14->Summ = pSVar14->Summ << 1;
        pSVar14->Shift = bVar1 + 1;
        pSVar14->Count = (byte)(3 << (uint)bVar1);
      }
      Model->FoundState = ps[0];
      ps[0]->Freq = ps[0]->Freq + '\x04';
      (this->field_1).U.SummFreq = (this->field_1).U.SummFreq + 4;
      if (0x7c < ps[0]->Freq) {
        rescale(this,Model);
      }
      bVar4 = true;
      Model->RunLength = Model->InitRL;
      Model->EscCount = Model->EscCount + '\x01';
    }
    else {
      (Model->Coder).SubRange.LowCount = HiCnt;
      ppbVar8 = &pbStack_430;
      (Model->Coder).SubRange.HighCount = uVar17;
      iVar9 = (uint)this->NumStats - iVar9;
      do {
        ppbVar8 = ppbVar8 + 1;
        iVar9 = iVar9 + -1;
        Model->CharMask[**ppbVar8] = bVar3;
      } while (iVar9 != 0);
      bVar4 = true;
      pSVar14->Summ = pSVar14->Summ + (short)uVar17;
      Model->NumMasked = (uint)this->NumStats;
    }
  }
  else {
    bVar4 = false;
  }
  if (local_2c != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


