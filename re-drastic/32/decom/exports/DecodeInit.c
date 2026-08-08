/*
 * Ghidra decompilation
 *
 * Function : DecodeInit
 * Address  : 080f475c
 * Program  : drastic
 */


/* DWARF original prototype: bool DecodeInit(ModelPPM * this, Unpack * UnpackRead, int * EscChar) */

bool __thiscall ModelPPM::DecodeInit(ModelPPM *this,Unpack *UnpackRead,int *EscChar)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint3 uVar6;
  byte *pbVar7;
  PPM_CONTEXT *pPVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  uint t;
  uint unaff_r7;
  int MaxMB;
  uint uVar12;
  Unpack *pUVar13;
  Unpack *this_00;
  
  iVar11 = (UnpackRead->Inp).InAddr;
  if (0x7fe2 < iVar11) {
    Unpack::UnpReadBuf(UnpackRead);
    iVar11 = (UnpackRead->Inp).InAddr;
  }
  pbVar7 = (UnpackRead->Inp).InBuf;
  iVar9 = iVar11 + 1;
  (UnpackRead->Inp).InAddr = iVar9;
  bVar3 = pbVar7[iVar11];
  if ((bVar3 & 0x20) == 0) {
    if ((this->SubAlloc).SubAllocatorSize != 0) goto LAB_080f47c8;
LAB_080f4a38:
    pPVar8 = (PPM_CONTEXT *)0x0;
  }
  else {
    if (0x7fe2 < iVar9) {
      Unpack::UnpReadBuf(UnpackRead);
      iVar9 = (UnpackRead->Inp).InAddr;
      pbVar7 = (UnpackRead->Inp).InBuf;
    }
    (UnpackRead->Inp).InAddr = iVar9 + 1;
    unaff_r7 = (uint)pbVar7[iVar9];
    iVar9 = iVar9 + 1;
LAB_080f47c8:
    if ((bVar3 & 0x40) != 0) {
      if (0x7fe2 < iVar9) {
        Unpack::UnpReadBuf(UnpackRead);
        iVar9 = (UnpackRead->Inp).InAddr;
        pbVar7 = (UnpackRead->Inp).InBuf;
      }
      (UnpackRead->Inp).InAddr = iVar9 + 1;
      *EscChar = (uint)pbVar7[iVar9];
    }
    iVar11 = (UnpackRead->Inp).InAddr;
    (this->Coder).low = 0;
    (this->Coder).code = 0;
    (this->Coder).range = 0xffffffff;
    (this->Coder).UnpackRead = UnpackRead;
    if (0x7fe2 < iVar11) {
      Unpack::UnpReadBuf(UnpackRead);
      iVar11 = (UnpackRead->Inp).InAddr;
      pbVar7 = (UnpackRead->Inp).InBuf;
    }
    pUVar13 = (this->Coder).UnpackRead;
    (UnpackRead->Inp).InAddr = iVar11 + 1;
    bVar4 = pbVar7[iVar11];
    iVar11 = (pUVar13->Inp).InAddr;
    (this->Coder).code = (uint)bVar4;
    if (0x7fe2 < iVar11) {
      Unpack::UnpReadBuf(pUVar13);
      iVar11 = (pUVar13->Inp).InAddr;
    }
    this_00 = (this->Coder).UnpackRead;
    (pUVar13->Inp).InAddr = iVar11 + 1;
    iVar9 = (this_00->Inp).InAddr;
    uVar5 = CONCAT11(bVar4,(pUVar13->Inp).InBuf[iVar11]);
    (this->Coder).code = (uint)uVar5;
    if (0x7fe2 < iVar9) {
      Unpack::UnpReadBuf(this_00);
      iVar9 = (this_00->Inp).InAddr;
    }
    pUVar13 = (this->Coder).UnpackRead;
    (this_00->Inp).InAddr = iVar9 + 1;
    iVar11 = (pUVar13->Inp).InAddr;
    uVar6 = CONCAT21(uVar5,(this_00->Inp).InBuf[iVar9]);
    (this->Coder).code = (uint)uVar6;
    if (0x7fe2 < iVar11) {
      Unpack::UnpReadBuf(pUVar13);
      iVar11 = (pUVar13->Inp).InAddr;
    }
    (pUVar13->Inp).InAddr = iVar11 + 1;
    (this->Coder).code = CONCAT31(uVar6,(pUVar13->Inp).InBuf[iVar11]);
    if ((bVar3 & 0x20) != 0) {
      uVar12 = (bVar3 & 0x1f) + 1;
      if (0x10 < uVar12) {
        uVar12 = ((bVar3 & 0x1f) - 0xf) * 3 + 0x10;
      }
      iVar11 = (this->SubAlloc).SubAllocatorSize;
      if (uVar12 == 1) {
        if (iVar11 != 0) {
          (this->SubAlloc).SubAllocatorSize = 0;
          free((this->SubAlloc).HeapStart);
          pPVar8 = (PPM_CONTEXT *)0x0;
          goto LAB_080f4a0c;
        }
        goto LAB_080f4a38;
      }
      uVar1 = (unaff_r7 + 1) * 0x100000;
      if (uVar1 - iVar11 != 0) {
        if (iVar11 != 0) {
          (this->SubAlloc).SubAllocatorSize = 0;
          free((this->SubAlloc).HeapStart);
        }
        iVar11 = (uVar1 / 0xc) * 0xc;
        pbVar7 = (byte *)malloc(iVar11 + 0x18);
        (this->SubAlloc).HeapStart = pbVar7;
        if (pbVar7 == (byte *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        else {
          (this->SubAlloc).SubAllocatorSize = uVar1;
          (this->SubAlloc).HeapEnd = pbVar7 + iVar11 + 0xc;
        }
      }
      this->MaxOrder = uVar12;
      this->EscCount = '\x01';
      RestartModelRare(this);
      uVar2 = SIMDExpandImmediate(0,0xe,4);
      this->NS2BSIndx[0] = '\0';
      this->NS2BSIndx[1] = '\x02';
      *(undefined8 *)(this->NS2BSIndx + 2) = uVar2;
      *(undefined8 *)(this->NS2BSIndx + 3) = uVar2;
      memset(this->NS2BSIndx + 0xb,6,0xf5);
      this->NS2Indx[0] = '\0';
      iVar9 = 1;
      iVar11 = 1;
      this->NS2Indx[1] = '\x01';
      pbVar7 = this->NS2Indx + 2;
      bVar10 = '\x03';
      this->NS2Indx[2] = '\x02';
      do {
        iVar11 = iVar11 + -1;
        pbVar7 = pbVar7 + 1;
        *pbVar7 = bVar10;
        if (iVar11 == 0) {
          bVar10 = bVar10 + '\x01';
          iVar11 = iVar9 + 1;
          iVar9 = iVar9 + 1;
        }
      } while (this->NS2Indx + 0xff != pbVar7);
      *(undefined8 *)this->HB2Flag = 0;
      *(undefined8 *)(this->HB2Flag + 8) = 0;
      *(undefined8 *)(this->HB2Flag + 0x10) = 0;
      *(undefined8 *)(this->HB2Flag + 0x18) = 0;
      *(undefined8 *)(this->HB2Flag + 0x20) = 0;
      *(undefined8 *)(this->HB2Flag + 0x28) = 0;
      *(undefined8 *)(this->HB2Flag + 0x30) = 0;
      *(undefined8 *)(this->HB2Flag + 0x38) = 0;
      memset(this->HB2Flag + 0x40,8,0xc0);
      (this->DummySEE2Cont).Shift = '\a';
    }
    pPVar8 = this->MinContext;
    if (pPVar8 != (PPM_CONTEXT *)0x0) {
      pPVar8 = (PPM_CONTEXT *)0x1;
    }
  }
LAB_080f4a0c:
  return SUB41(pPVar8,0);
}


