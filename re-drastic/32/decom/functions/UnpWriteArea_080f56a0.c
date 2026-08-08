/*
 * Ghidra decompilation
 *
 * Function : UnpWriteArea
 * Address  : 080f56a0
 * Program  : drastic
 */


/* DWARF original prototype: void UnpWriteArea(Unpack * this, size_t StartPtr, size_t EndPtr) */

void __thiscall Unpack::UnpWriteArea(Unpack *this,size_t StartPtr,size_t EndPtr)

{
  bool bVar1;
  ComprDataIO *this_00;
  size_t *psVar2;
  byte *pbVar3;
  byte **ppbVar4;
  byte **ppbVar5;
  uint I;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  size_t WriteSize_2;
  size_t WriteSize;
  size_t WriteSize_1;
  uint uVar10;
  uint Count;
  int iVar11;
  int64 *piVar12;
  
  if (EndPtr == StartPtr) {
    if (this->Fragmented != false) {
      return;
    }
LAB_080f5918:
    uVar7 = *(uint *)&this->WrittenFileSize;
    iVar11 = *(int *)((int)&this->WrittenFileSize + 4);
    uVar10 = *(uint *)&this->DestUnpSize;
    iVar8 = *(int *)((int)&this->DestUnpSize + 4);
    if ((int)(iVar11 - (iVar8 + (uint)(uVar7 < uVar10))) < 0 ==
        (SBORROW4(iVar11,iVar8) != SBORROW4(iVar11 - iVar8,(uint)(uVar7 < uVar10)))) {
      return;
    }
    uVar9 = uVar10 - uVar7;
    iVar8 = iVar8 - (iVar11 + (uint)(uVar10 < uVar7));
    EndPtr = EndPtr - StartPtr;
    this_00 = this->UnpIO;
    bVar1 = SBORROW4(iVar8,(uint)(uVar9 < EndPtr));
    iVar8 = iVar8 - (uint)(uVar9 < EndPtr);
    pbVar3 = this->Window + StartPtr;
LAB_080f5960:
    if (iVar8 < 0 == (bVar1 != false)) {
      uVar9 = EndPtr;
    }
    ComprDataIO::UnpWrite(this_00,pbVar3,uVar9);
    uVar7 = *(uint *)&this->WrittenFileSize;
    iVar11 = *(int *)((int)&this->WrittenFileSize + 4);
    *(uint *)&this->WrittenFileSize = uVar7 + EndPtr;
    *(uint *)((int)&this->WrittenFileSize + 4) = iVar11 + (uint)CARRY4(uVar7,EndPtr);
  }
  else {
    this->UnpSomeRead = true;
    if (EndPtr < StartPtr) {
      this->UnpAllBuf = true;
      if (this->Fragmented == false) {
        piVar12 = &this->WrittenFileSize;
        uVar10 = *(uint *)piVar12;
        iVar8 = *(int *)((int)&this->WrittenFileSize + 4);
        uVar7 = *(uint *)&this->DestUnpSize;
        iVar11 = *(int *)((int)&this->DestUnpSize + 4);
        if ((int)(iVar8 - (iVar11 + (uint)(uVar10 < uVar7))) < 0 ==
            (SBORROW4(iVar8,iVar11) != SBORROW4(iVar8 - iVar11,(uint)(uVar10 < uVar7)))) {
          return;
        }
        uVar9 = uVar7 - uVar10;
        iVar11 = iVar11 - (iVar8 + (uint)(uVar7 < uVar10));
        uVar7 = this->MaxWinSize - StartPtr;
        if ((int)(iVar11 - (uint)(uVar9 < uVar7)) < 0 ==
            (SBORROW4(iVar11,(uint)(uVar9 < uVar7)) != false)) {
          uVar9 = uVar7;
        }
        ComprDataIO::UnpWrite(this->UnpIO,this->Window + StartPtr,uVar9);
        pbVar3 = this->Window;
        uVar6 = *(uint *)&this->DestUnpSize;
        iVar8 = *(int *)((int)&this->DestUnpSize + 4);
        uVar10 = *(uint *)piVar12 + uVar7;
        iVar11 = *(int *)((int)&this->WrittenFileSize + 4) + (uint)CARRY4(*(uint *)piVar12,uVar7);
        *(uint *)piVar12 = uVar10;
        *(int *)((int)&this->WrittenFileSize + 4) = iVar11;
        if ((int)(iVar11 - (iVar8 + (uint)(uVar10 < uVar6))) < 0 ==
            (SBORROW4(iVar11,iVar8) != SBORROW4(iVar11 - iVar8,(uint)(uVar10 < uVar6)))) {
          return;
        }
        uVar9 = uVar6 - uVar10;
        iVar8 = iVar8 - (iVar11 + (uint)(uVar6 < uVar10));
        this_00 = this->UnpIO;
        bVar1 = SBORROW4(iVar8,(uint)(uVar9 < EndPtr));
        iVar8 = iVar8 - (uint)(uVar9 < EndPtr);
        goto LAB_080f5960;
      }
    }
    else if (this->Fragmented == false) goto LAB_080f5918;
    uVar7 = EndPtr - StartPtr & this->MaxWinMask;
    if (uVar7 != 0) {
      piVar12 = &this->WrittenFileSize;
      uVar10 = *(uint *)piVar12;
      iVar11 = *(int *)((int)&this->WrittenFileSize + 4);
      ppbVar4 = (this->FragWindow).Mem + 0x1f;
      ppbVar5 = ppbVar4;
LAB_080f5748:
      do {
        ppbVar5 = ppbVar5 + 1;
        if (StartPtr < *ppbVar5) {
          uVar9 = (int)*ppbVar5 - StartPtr;
          if (uVar7 <= uVar9) {
            uVar9 = uVar7;
          }
        }
        else {
          if ((byte **)((this->FragWindow).MemSize + 0x1f) != ppbVar5) goto LAB_080f5748;
          uVar9 = 0;
        }
        if (StartPtr < (byte *)(this->FragWindow).MemSize[0]) {
          pbVar3 = (byte *)(StartPtr + (int)(this->FragWindow).Mem[0]);
        }
        else {
          I = 1;
          psVar2 = (this->FragWindow).MemSize;
          do {
            psVar2 = psVar2 + 1;
            if (StartPtr < (byte *)*psVar2) {
              pbVar3 = (byte *)(StartPtr +
                               ((int)(this->FragWindow).Mem[I] -
                               (int)(this->FragWindow).Mem[I + 0x1f]));
              goto LAB_080f57b4;
            }
            I = I + 1;
          } while (I != 0x20);
          pbVar3 = (this->FragWindow).Mem[0];
        }
LAB_080f57b4:
        uVar6 = *(uint *)&this->DestUnpSize;
        iVar8 = *(int *)((int)&this->DestUnpSize + 4);
        if ((int)(iVar11 - (iVar8 + (uint)(uVar10 < uVar6))) < 0 !=
            (SBORROW4(iVar11,iVar8) != SBORROW4(iVar11 - iVar8,(uint)(uVar10 < uVar6)))) {
          Count = uVar6 - uVar10;
          iVar8 = iVar8 - (iVar11 + (uint)(uVar6 < uVar10));
          if ((int)(iVar8 - (uint)(Count < uVar9)) < 0 ==
              (SBORROW4(iVar8,(uint)(Count < uVar9)) != false)) {
            Count = uVar9;
          }
          ComprDataIO::UnpWrite(this->UnpIO,pbVar3,Count);
          uVar10 = uVar9 + *(uint *)piVar12;
          iVar11 = *(int *)((int)&this->WrittenFileSize + 4) + (uint)CARRY4(uVar9,*(uint *)piVar12);
          *(uint *)piVar12 = uVar10;
          *(int *)((int)&this->WrittenFileSize + 4) = iVar11;
        }
        uVar7 = uVar7 - uVar9;
        StartPtr = (uint)(StartPtr + uVar9) & this->MaxWinMask;
        ppbVar5 = ppbVar4;
      } while (uVar7 != 0);
    }
  }
  return;
}


