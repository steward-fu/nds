/*
 * Ghidra decompilation
 *
 * Function : RestartModelRare
 * Address  : 080edd74
 * Program  : drastic
 */


/* DWARF original prototype: void RestartModelRare(ModelPPM * this) */

void __thiscall ModelPPM::RestartModelRare(ModelPPM *this)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  byte *pbVar4;
  STATE *pSVar5;
  RAR_NODE *RetVal_2;
  void *RetVal_1;
  uint uVar6;
  int indx;
  RAR_NODE *RetVal;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  PPM_CONTEXT *pPVar10;
  ushort (*pauVar11) [64];
  SubAllocator *this_00;
  int iVar12;
  
  this_00 = &this->SubAlloc;
  memset(this->CharMask,0,0x100);
  SubAllocator::InitSubAllocator(this_00);
  uVar7 = this->MaxOrder;
  pbVar4 = (this->SubAlloc).LoUnit;
  pbVar9 = (this->SubAlloc).HiUnit;
  uVar6 = uVar7;
  if (0xb < (int)uVar7) {
    uVar6 = 0xc;
  }
  this->InitRL = ~uVar6;
  if (pbVar9 == pbVar4) {
    pPVar10 = (PPM_CONTEXT *)(this->SubAlloc).FreeList[0].next;
    if (pPVar10 == (PPM_CONTEXT *)0x0) {
      pPVar10 = (PPM_CONTEXT *)SubAllocator::AllocUnitsRare(this_00,0);
      uVar7 = this->MaxOrder;
    }
    else {
      (this->SubAlloc).FreeList[0].next = *(RAR_NODE **)&pPVar10->NumStats;
    }
  }
  else {
    pPVar10 = (PPM_CONTEXT *)(pbVar9 + -0xc);
    (this->SubAlloc).HiUnit = (byte *)pPVar10;
  }
  this->MinContext = pPVar10;
  this->MaxContext = pPVar10;
  *(undefined *)&pPVar10->Suffix = 0;
  *(undefined *)((int)&pPVar10->Suffix + 1) = 0;
  *(undefined *)((int)&pPVar10->Suffix + 2) = 0;
  *(undefined *)((int)&pPVar10->Suffix + 3) = 0;
  this->OrderFall = uVar7;
  *(byte *)&pPVar10->NumStats = '\0';
  *(byte *)((int)&pPVar10->NumStats + 1) = '\x01';
  (pPVar10->field_1).OneState.Symbol = '\x01';
  (pPVar10->field_1).OneState.Freq = '\x01';
  uVar6 = (uint)(this->SubAlloc).Units2Indx[0x7f];
  pPVar10 = this->MinContext;
  pSVar5 = (STATE *)(this->SubAlloc).FreeList[uVar6].next;
  if (pSVar5 == (STATE *)0x0) {
    pSVar5 = (STATE *)(this->SubAlloc).LoUnit;
    bVar1 = (this->SubAlloc).Indx2Units[uVar6];
    (this->SubAlloc).LoUnit = &pSVar5[(uint)bVar1 * 2].Symbol;
    if ((STATE *)(this->SubAlloc).HiUnit < pSVar5 + (uint)bVar1 * 2) {
      (this->SubAlloc).LoUnit = (byte *)pSVar5;
      pSVar5 = (STATE *)SubAllocator::AllocUnitsRare(this_00,uVar6);
    }
  }
  else {
    (this->SubAlloc).FreeList[uVar6].next = *(RAR_NODE **)&pSVar5->Symbol;
  }
  (pPVar10->field_1).U.Stats = pSVar5;
  pPVar10 = this->MinContext;
  iVar12 = 0;
  this->FoundState = pSVar5;
  this->RunLength = this->InitRL;
  this->PrevSuccess = '\0';
  iVar8 = 0;
  do {
    (&((pPVar10->field_1).U.Stats)->Symbol)[iVar8] = (byte)iVar12;
    iVar12 = iVar12 + 1;
    (&((this->MinContext->field_1).U.Stats)->Freq)[iVar8] = '\x01';
    pPVar10 = this->MinContext;
    pSVar5 = (pPVar10->field_1).U.Stats;
    *(undefined *)((int)&pSVar5->Successor + iVar8) = 0;
    *(undefined *)((int)&pSVar5->Successor + iVar8 + 1) = 0;
    *(undefined *)((int)&pSVar5->Successor + iVar8 + 2) = 0;
    *(undefined *)((int)&pSVar5->Successor + iVar8 + 3) = 0;
    iVar8 = iVar8 + 6;
  } while (iVar12 != 0x100);
  pauVar11 = this->BinSumm;
  iVar8 = 2;
  do {
    sVar3 = __aeabi_idiv(0x3cdd,iVar8);
    uVar2 = 0x4000 - sVar3;
    (*pauVar11)[0] = uVar2;
    (*pauVar11)[8] = uVar2;
    (*pauVar11)[0x10] = uVar2;
    (*pauVar11)[0x18] = uVar2;
    (*pauVar11)[0x20] = uVar2;
    (*pauVar11)[0x28] = uVar2;
    (*pauVar11)[0x30] = uVar2;
    (*pauVar11)[0x38] = uVar2;
    sVar3 = __aeabi_idiv(7999,iVar8);
    uVar2 = 0x4000 - sVar3;
    (*pauVar11)[1] = uVar2;
    (*pauVar11)[9] = uVar2;
    (*pauVar11)[0x11] = uVar2;
    (*pauVar11)[0x19] = uVar2;
    (*pauVar11)[0x21] = uVar2;
    (*pauVar11)[0x29] = uVar2;
    (*pauVar11)[0x31] = uVar2;
    (*pauVar11)[0x39] = uVar2;
    sVar3 = __aeabi_idiv(0x59bf,iVar8);
    uVar2 = 0x4000 - sVar3;
    (*pauVar11)[2] = uVar2;
    (*pauVar11)[10] = uVar2;
    (*pauVar11)[0x12] = uVar2;
    (*pauVar11)[0x1a] = uVar2;
    (*pauVar11)[0x22] = uVar2;
    (*pauVar11)[0x2a] = uVar2;
    (*pauVar11)[0x32] = uVar2;
    (*pauVar11)[0x3a] = uVar2;
    sVar3 = __aeabi_idiv(0x48f3,iVar8);
    uVar2 = 0x4000 - sVar3;
    (*pauVar11)[3] = uVar2;
    (*pauVar11)[0xb] = uVar2;
    (*pauVar11)[0x13] = uVar2;
    (*pauVar11)[0x1b] = uVar2;
    (*pauVar11)[0x23] = uVar2;
    (*pauVar11)[0x2b] = uVar2;
    (*pauVar11)[0x33] = uVar2;
    (*pauVar11)[0x3b] = uVar2;
    sVar3 = __aeabi_idiv(0x64a1,iVar8);
    uVar2 = 0x4000 - sVar3;
    (*pauVar11)[4] = uVar2;
    (*pauVar11)[0xc] = uVar2;
    (*pauVar11)[0x14] = uVar2;
    (*pauVar11)[0x1c] = uVar2;
    (*pauVar11)[0x24] = uVar2;
    (*pauVar11)[0x2c] = uVar2;
    (*pauVar11)[0x34] = uVar2;
    (*pauVar11)[0x3c] = uVar2;
    sVar3 = __aeabi_idiv(0x5abc,iVar8);
    uVar2 = 0x4000 - sVar3;
    (*pauVar11)[5] = uVar2;
    (*pauVar11)[0xd] = uVar2;
    (*pauVar11)[0x15] = uVar2;
    (*pauVar11)[0x1d] = uVar2;
    (*pauVar11)[0x25] = uVar2;
    (*pauVar11)[0x2d] = uVar2;
    (*pauVar11)[0x35] = uVar2;
    (*pauVar11)[0x3d] = uVar2;
    sVar3 = __aeabi_idiv(0x6632,iVar8);
    uVar2 = 0x4000 - sVar3;
    iVar12 = iVar8 + 1;
    (*pauVar11)[6] = uVar2;
    (*pauVar11)[0xe] = uVar2;
    (*pauVar11)[0x16] = uVar2;
    (*pauVar11)[0x1e] = uVar2;
    (*pauVar11)[0x26] = uVar2;
    (*pauVar11)[0x2e] = uVar2;
    (*pauVar11)[0x36] = uVar2;
    (*pauVar11)[0x3e] = uVar2;
    sVar3 = __aeabi_idiv(0x6051,iVar8);
    uVar2 = 0x4000 - sVar3;
    (*pauVar11)[7] = uVar2;
    (*pauVar11)[0xf] = uVar2;
    (*pauVar11)[0x17] = uVar2;
    (*pauVar11)[0x1f] = uVar2;
    (*pauVar11)[0x27] = uVar2;
    (*pauVar11)[0x2f] = uVar2;
    (*pauVar11)[0x37] = uVar2;
    (*pauVar11)[0x3f] = uVar2;
    pauVar11 = pauVar11 + 1;
    iVar8 = iVar12;
  } while (iVar12 != 0x82);
  uVar6 = 10;
  do {
    iVar8 = uVar6 << 3;
    this->SEE2Cont[0][0].Shift = '\x03';
    uVar6 = uVar6 + 5 & 0xffff;
    this->SEE2Cont[0][0].Count = '\x04';
    uVar2 = (ushort)iVar8;
    this->SEE2Cont[0][0].Summ = uVar2;
    this->SEE2Cont[0][1].Summ = uVar2;
    this->SEE2Cont[0][1].Shift = '\x03';
    this->SEE2Cont[0][1].Count = '\x04';
    this->SEE2Cont[0][2].Summ = uVar2;
    this->SEE2Cont[0][2].Shift = '\x03';
    this->SEE2Cont[0][2].Count = '\x04';
    this->SEE2Cont[0][3].Summ = uVar2;
    this->SEE2Cont[0][3].Shift = '\x03';
    this->SEE2Cont[0][3].Count = '\x04';
    this->SEE2Cont[0][4].Summ = uVar2;
    this->SEE2Cont[0][4].Shift = '\x03';
    this->SEE2Cont[0][4].Count = '\x04';
    this->SEE2Cont[0][5].Summ = uVar2;
    this->SEE2Cont[0][5].Shift = '\x03';
    this->SEE2Cont[0][5].Count = '\x04';
    this->SEE2Cont[0][6].Summ = uVar2;
    this->SEE2Cont[0][6].Shift = '\x03';
    this->SEE2Cont[0][6].Count = '\x04';
    this->SEE2Cont[0][7].Summ = uVar2;
    this->SEE2Cont[0][7].Shift = '\x03';
    this->SEE2Cont[0][7].Count = '\x04';
    this->SEE2Cont[0][8].Summ = uVar2;
    this->SEE2Cont[0][8].Shift = '\x03';
    this->SEE2Cont[0][8].Count = '\x04';
    this->SEE2Cont[0][9].Summ = uVar2;
    this->SEE2Cont[0][9].Shift = '\x03';
    this->SEE2Cont[0][9].Count = '\x04';
    this->SEE2Cont[0][10].Summ = uVar2;
    this->SEE2Cont[0][10].Shift = '\x03';
    this->SEE2Cont[0][10].Count = '\x04';
    this->SEE2Cont[0][0xb].Summ = uVar2;
    this->SEE2Cont[0][0xb].Shift = '\x03';
    this->SEE2Cont[0][0xb].Count = '\x04';
    this->SEE2Cont[0][0xc].Summ = uVar2;
    this->SEE2Cont[0][0xc].Shift = '\x03';
    this->SEE2Cont[0][0xc].Count = '\x04';
    this->SEE2Cont[0][0xd].Summ = uVar2;
    this->SEE2Cont[0][0xd].Shift = '\x03';
    this->SEE2Cont[0][0xd].Count = '\x04';
    this->SEE2Cont[0][0xe].Summ = uVar2;
    this->SEE2Cont[0][0xe].Shift = '\x03';
    this->SEE2Cont[0][0xe].Count = '\x04';
    this->SEE2Cont[0][0xf].Summ = uVar2;
    this->SEE2Cont[0][0xf].Shift = '\x03';
    this->SEE2Cont[0][0xf].Count = '\x04';
    this = (ModelPPM *)(this->SEE2Cont + 1);
  } while (uVar6 != 0x87);
  return;
}


