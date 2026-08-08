/*
 * Ghidra decompilation
 *
 * Function : DecodeChar
 * Address  : 080f4144
 * Program  : drastic
 */


/* DWARF original prototype: int DecodeChar(ModelPPM * this) */

int __thiscall ModelPPM::DecodeChar(ModelPPM *this)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  STATE *pSVar10;
  int HiCnt;
  PPM_CONTEXT *pPVar11;
  PPM_CONTEXT *pPVar12;
  uint uVar13;
  STATE *pSVar14;
  STATE *p;
  PPM_CONTEXT *this_00;
  Unpack *pUVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  PPM_CONTEXT *pPVar19;
  uint uVar20;
  int iVar21;
  int i;
  bool bVar22;
  
  pPVar12 = (PPM_CONTEXT *)(this->SubAlloc).pText;
  this_00 = this->MinContext;
  if (this_00 <= pPVar12) {
    return -1;
  }
  pPVar19 = (PPM_CONTEXT *)(this->SubAlloc).HeapEnd;
  if (pPVar19 < this_00) {
    return -1;
  }
  if (this_00->NumStats == 1) {
    bVar2 = this->HB2Flag[this->FoundState->Symbol];
    this->HiBitsFlag = bVar2;
    uVar17 = (this->Coder).low;
    uVar1 = (this->Coder).range >> 0xe;
    puVar18 = this->BinSumm[(this_00->field_1).OneState.Freq - 1] +
              (this->RunLength >> 0x1a & 0x20U) +
              (uint)this->HB2Flag[(this_00->field_1).OneState.Symbol] * 2 +
              (uint)bVar2 +
              (uint)this->PrevSuccess + (uint)this->NS2BSIndx[this_00->Suffix->NumStats - 1];
    uVar20 = (uint)*puVar18;
    (this->Coder).range = uVar1;
    uVar9 = __aeabi_uidiv((this->Coder).code - uVar17,uVar1);
    if (uVar9 < uVar20) {
      iVar8 = 0;
      this->FoundState = (STATE *)&this_00->field_1;
      bVar2 = (this_00->field_1).OneState.Freq;
      uVar13 = 0;
      (this_00->field_1).OneState.Freq = bVar2 + (char)((bVar2 ^ 0x80) >> 7);
      uVar6 = *puVar18;
      uVar16 = (uint)uVar6;
      pSVar14 = this->FoundState;
      iVar21 = this->RunLength;
      (this->Coder).SubRange.LowCount = 0;
      (this->Coder).SubRange.HighCount = uVar16;
      *puVar18 = (uVar6 + 0x80) - (short)((int)(uVar16 + 0x20) >> 7);
      this->RunLength = iVar21 + 1;
      this->PrevSuccess = '\x01';
      uVar17 = (this->Coder).low;
      uVar7 = (this->Coder).range;
      goto LAB_080f4260;
    }
    (this->Coder).SubRange.LowCount = uVar20;
    uVar9 = uVar20 - ((int)(uVar20 + 0x20) >> 7);
    uVar17 = uVar20 * uVar1 + uVar17;
    uVar7 = uVar1 * (0x4000 - uVar20);
    *puVar18 = (ushort)uVar9;
    bVar2 = "\x19\x0e\t\a\x05\x05\x04\x04\x04\x03\x03\x03\x02\x02\x02\x02"[(uVar9 & 0xffff) >> 10];
    (this->Coder).SubRange.HighCount = 0x4000;
    this->NumMasked = 1;
    this->InitEsc = (uint)bVar2;
    this->CharMask[(this_00->field_1).OneState.Symbol] = this->EscCount;
    this->FoundState = (STATE *)0x0;
    this->PrevSuccess = '\0';
    (this->Coder).low = uVar17;
    (this->Coder).range = uVar7;
  }
  else {
    pPVar11 = (PPM_CONTEXT *)(this_00->field_1).U.Stats;
    if (pPVar19 < pPVar11 || pPVar11 <= pPVar12) {
      return -1;
    }
    uVar17 = (this->Coder).low;
    uVar13 = (this->Coder).code;
    uVar16 = (uint)(this_00->field_1).U.SummFreq;
    uVar7 = (this->Coder).range;
    (this->Coder).SubRange.scale = uVar16;
    pSVar14 = (this_00->field_1).U.Stats;
    uVar7 = __aeabi_uidiv(uVar7,uVar16);
    (this->Coder).range = uVar7;
    iVar8 = __aeabi_uidiv(uVar13 - uVar17,uVar7);
    if ((int)uVar16 <= iVar8) {
      return -1;
    }
    uVar13 = (uint)pSVar14->Freq;
    if (iVar8 < (int)uVar13) {
      iVar8 = this->RunLength;
      bVar22 = uVar16 < uVar13 << 1;
      (this->Coder).SubRange.HighCount = uVar13;
      this->FoundState = pSVar14;
      this->RunLength = iVar8 + (uint)bVar22;
      this->PrevSuccess = bVar22;
      pSVar14->Freq = (byte)(uVar13 + 4);
      (this_00->field_1).U.SummFreq = (this_00->field_1).U.SummFreq + 4;
      if (0x7c < uVar13 + 4) {
        PPM_CONTEXT::rescale(this_00,this);
      }
      uVar17 = (this->Coder).low;
      uVar13 = 0;
      uVar7 = (this->Coder).range;
      iVar8 = 0;
      uVar16 = (this->Coder).SubRange.HighCount;
      pSVar14 = this->FoundState;
      (this->Coder).SubRange.LowCount = 0;
    }
    else {
      if (this->FoundState == (STATE *)0x0) {
        return -1;
      }
      this->PrevSuccess = '\0';
      iVar21 = this_00->NumStats - 1;
      do {
        pSVar10 = pSVar14 + 1;
        uVar13 = uVar13 + pSVar14[1].Freq;
        if (iVar8 < (int)uVar13) {
          (this->Coder).SubRange.HighCount = uVar13;
          (this->Coder).SubRange.LowCount = uVar13 - pSVar14[1].Freq;
          this->FoundState = pSVar10;
          pSVar14[1].Freq = pSVar14[1].Freq + '\x04';
          (this_00->field_1).U.SummFreq = (this_00->field_1).U.SummFreq + 4;
          bVar2 = pSVar14[1].Freq;
          if (pSVar14->Freq < bVar2) {
            pPVar12 = pSVar14[1].Successor;
            *(undefined4 *)pSVar10 = *(undefined4 *)pSVar14;
            uVar5 = *(undefined2 *)((int)&pSVar14->Successor + 2);
            pSVar14->Symbol = pSVar10->Symbol;
            pSVar14->Freq = bVar2;
            pSVar14->Successor = pPVar12;
            *(undefined2 *)((int)&pSVar14[1].Successor + 2) = uVar5;
            this->FoundState = pSVar14;
            if (pSVar14->Freq < 0x7d) {
              uVar17 = (this->Coder).low;
              uVar7 = (this->Coder).range;
              uVar13 = (this->Coder).SubRange.LowCount;
              uVar16 = (this->Coder).SubRange.HighCount;
              iVar8 = uVar13 * uVar7;
              goto LAB_080f4260;
            }
            PPM_CONTEXT::rescale(this_00,this);
          }
          uVar17 = (this->Coder).low;
          uVar7 = (this->Coder).range;
          uVar13 = (this->Coder).SubRange.LowCount;
          uVar16 = (this->Coder).SubRange.HighCount;
          pSVar14 = this->FoundState;
          iVar8 = uVar13 * uVar7;
          goto LAB_080f4260;
        }
        iVar21 = iVar21 + -1;
        pSVar14 = pSVar10;
      } while (iVar21 != 0);
      this->HiBitsFlag = this->HB2Flag[this->FoundState->Symbol];
      (this->Coder).SubRange.LowCount = uVar13;
      bVar4 = this->EscCount;
      this->CharMask[pSVar10->Symbol] = bVar4;
      uVar6 = this_00->NumStats;
      this->FoundState = (STATE *)0x0;
      this->NumMasked = (uint)uVar6;
      pSVar14 = pSVar10 + (1 - (uint)uVar6);
      do {
        pSVar10 = pSVar10 + -1;
        this->CharMask[pSVar10->Symbol] = bVar4;
      } while (pSVar14 != pSVar10);
      iVar8 = uVar13 * uVar7;
      pSVar14 = (STATE *)0x0;
      (this->Coder).SubRange.HighCount = uVar16;
    }
LAB_080f4260:
    uVar17 = uVar17 + iVar8;
    uVar7 = uVar7 * (uVar16 - uVar13);
    (this->Coder).low = uVar17;
    (this->Coder).range = uVar7;
    if (pSVar14 != (STATE *)0x0) goto LAB_080f43b4;
  }
  do {
    while ((uVar17 + uVar7 ^ uVar17) < 0x1000000) {
LAB_080f42d0:
      uVar13 = (this->Coder).code;
      pUVar15 = (this->Coder).UnpackRead;
      iVar8 = (pUVar15->Inp).InAddr;
      if (0x7fe2 < iVar8) {
        Unpack::UnpReadBuf(pUVar15);
        uVar17 = (this->Coder).low;
        uVar7 = (this->Coder).range;
        iVar8 = (pUVar15->Inp).InAddr;
      }
      uVar7 = uVar7 << 8;
      uVar17 = uVar17 << 8;
      (pUVar15->Inp).InAddr = iVar8 + 1;
      bVar2 = (pUVar15->Inp).InBuf[iVar8];
      (this->Coder).low = uVar17;
      (this->Coder).range = uVar7;
      (this->Coder).code = (uint)bVar2 | uVar13 << 8;
    }
    if (uVar7 < 0x8000) {
      uVar7 = -uVar17 & 0x7fff;
      (this->Coder).range = uVar7;
      goto LAB_080f42d0;
    }
    iVar8 = this->OrderFall;
    pPVar12 = this->MinContext;
    do {
      iVar8 = iVar8 + 1;
      pPVar12 = pPVar12->Suffix;
      if ((pPVar12 <= (PPM_CONTEXT *)(this->SubAlloc).pText) ||
         ((PPM_CONTEXT *)(this->SubAlloc).HeapEnd < pPVar12)) {
        this->MinContext = pPVar12;
        this->OrderFall = iVar8;
        return -1;
      }
    } while ((uint)pPVar12->NumStats == this->NumMasked);
    this->MinContext = pPVar12;
    this->OrderFall = iVar8;
    bVar22 = PPM_CONTEXT::decodeSymbol2(pPVar12,this);
    if (!bVar22) {
      return -1;
    }
    uVar13 = (this->Coder).SubRange.LowCount;
    uVar7 = (this->Coder).range;
    pSVar14 = this->FoundState;
    uVar17 = uVar13 * uVar7 + (this->Coder).low;
    uVar7 = uVar7 * ((this->Coder).SubRange.HighCount - uVar13);
    (this->Coder).low = uVar17;
    (this->Coder).range = uVar7;
  } while (pSVar14 == (STATE *)0x0);
LAB_080f43b4:
  bVar2 = pSVar14->Symbol;
  if ((this->OrderFall == 0) &&
     (pPVar12 = pSVar14->Successor, (PPM_CONTEXT *)(this->SubAlloc).pText < pPVar12)) {
    this->MinContext = pPVar12;
    this->MaxContext = pPVar12;
  }
  else {
    UpdateModel(this);
    if (this->EscCount == '\0') {
      this->EscCount = '\x01';
      memset(this->CharMask,0,0x100);
    }
  }
  uVar17 = (this->Coder).low;
  uVar7 = (this->Coder).range;
  do {
    if (0xffffff < (uVar17 + uVar7 ^ uVar17)) {
      bVar22 = 0x7fff < uVar7;
      uVar7 = -uVar17 & 0x7fff;
      if (bVar22) {
        return (uint)bVar2;
      }
      (this->Coder).range = uVar7;
    }
    uVar13 = (this->Coder).code;
    pUVar15 = (this->Coder).UnpackRead;
    iVar8 = (pUVar15->Inp).InAddr;
    if (0x7fe2 < iVar8) {
      Unpack::UnpReadBuf(pUVar15);
      uVar17 = (this->Coder).low;
      uVar7 = (this->Coder).range;
      iVar8 = (pUVar15->Inp).InAddr;
    }
    uVar17 = uVar17 << 8;
    uVar7 = uVar7 << 8;
    (pUVar15->Inp).InAddr = iVar8 + 1;
    bVar3 = (pUVar15->Inp).InBuf[iVar8];
    (this->Coder).low = uVar17;
    (this->Coder).range = uVar7;
    (this->Coder).code = (uint)bVar3 | uVar13 << 8;
  } while( true );
}


