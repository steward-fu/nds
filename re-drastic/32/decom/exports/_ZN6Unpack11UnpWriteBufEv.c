/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack11UnpWriteBufEv
 * Address  : 080fdf58
 * Program  : drastic
 */


/* DWARF original prototype: void UnpWriteBuf(Unpack * this) */

void __thiscall Unpack::UnpWriteBuf(Unpack *this)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined uVar3;
  undefined3 uVar4;
  undefined uVar5;
  undefined2 uVar6;
  uint uVar7;
  size_t I_2;
  byte *OutMem;
  UnpackFilter *NewBuffer;
  uint __n;
  byte *pbVar8;
  size_t *psVar9;
  int iVar10;
  size_t EndPtr;
  int iVar11;
  byte *pbVar12;
  size_t sVar13;
  uint uVar14;
  size_t FullWriteSize;
  uint BlockStart;
  uint I;
  uint I_1;
  uint I_3;
  size_t Suggested;
  UnpackFilter *pUVar15;
  UnpackFilter *pUVar16;
  uint uVar17;
  size_t NewSize;
  byte *unaff_r8;
  size_t WrittenBorder;
  size_t __n_00;
  size_t FirstPartLength;
  UnpackFilter *pUVar18;
  size_t StartPtr;
  uint BlockEnd;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  
  uVar19 = (this->Filters).BufSize;
  EndPtr = this->UnpPtr;
  sVar13 = this->WrPtr;
  if (uVar19 == 0) {
    unaff_r8 = (this->BlockTables).BD.QuickLen + 0x334;
  }
  uVar14 = EndPtr - sVar13 & this->MaxWinMask;
  if (uVar19 != 0) {
    unaff_r8 = (this->BlockTables).BD.QuickLen + 0x334;
    uVar17 = 0;
    uVar7 = uVar14;
    StartPtr = sVar13;
LAB_080fdff4:
    do {
      pUVar16 = (this->Filters).Buffer;
      pUVar15 = pUVar16 + uVar17;
      if (pUVar16[uVar17].Type == '\b') goto LAB_080fdfe8;
      if (pUVar15->NextWindow != false) {
        if ((this->MaxWinMask & pUVar15->BlockStart - this->WrPtr) <= uVar14) {
          pUVar15->NextWindow = false;
        }
        goto LAB_080fdfe8;
      }
      sVar13 = pUVar15->BlockStart;
      uVar22 = this->MaxWinMask;
      if (uVar7 <= (sVar13 - StartPtr & uVar22)) goto LAB_080fdfe8;
      __n = pUVar15->BlockLength;
      if (sVar13 != StartPtr) {
        UnpWriteArea(this,StartPtr,sVar13);
        EndPtr = this->UnpPtr;
        uVar22 = this->MaxWinMask;
        uVar7 = EndPtr - sVar13 & uVar22;
      }
      if (uVar7 < __n) {
        uVar19 = (this->Filters).BufSize;
        this->WrPtr = sVar13;
        if (uVar17 < uVar19) {
          pUVar15 = (this->Filters).Buffer;
          pUVar16 = pUVar15 + uVar17;
          do {
            pUVar18 = pUVar16 + 1;
            if (pUVar16->Type != '\b') {
              pUVar16->NextWindow = false;
            }
            pUVar16 = pUVar18;
          } while (pUVar15 + uVar19 != pUVar18);
        }
        if (uVar19 != 0) {
          bVar2 = true;
          goto LAB_080fe0a4;
        }
        goto LAB_080fe20c;
      }
      if (__n != 0) {
        StartPtr = sVar13 + __n & uVar22;
        if ((this->FilterSrcMemory).AllocSize < __n) {
          Array<unsigned_char>::Add(&this->FilterSrcMemory,__n - (this->FilterSrcMemory).BufSize);
        }
        else {
          (this->FilterSrcMemory).BufSize = __n;
        }
        pbVar8 = (this->FilterSrcMemory).Buffer;
        if (sVar13 < StartPtr || StartPtr == 0) {
          if (this->Fragmented != false) {
            pbVar12 = pbVar8 + (sVar13 - (int)pbVar8);
            pbVar20 = pbVar8;
            if (pbVar12 < (byte *)(this->FragWindow).MemSize[0]) goto LAB_080fe1d8;
LAB_080fe178:
            I = 1;
            psVar9 = (this->FragWindow).MemSize;
            do {
              psVar9 = psVar9 + 1;
              pbVar21 = pbVar20;
              if (pbVar12 < (byte *)*psVar9) {
                pbVar12 = pbVar12 + ((int)(this->FragWindow).Mem[I] -
                                    (int)(this->FragWindow).Mem[I + 0x1f]);
                goto LAB_080fe1b8;
              }
              I = I + 1;
            } while (I != 0x20);
            pbVar12 = (this->FragWindow).Mem[0];
LAB_080fe1b8:
            do {
              pbVar20 = pbVar21 + 1;
              *pbVar21 = *pbVar12;
              if (pbVar8 + __n == pbVar20) goto LAB_080fe3a0;
              pbVar12 = pbVar20 + (sVar13 - (int)pbVar8);
              if ((byte *)(this->FragWindow).MemSize[0] <= pbVar12) goto LAB_080fe178;
LAB_080fe1d8:
              pbVar12 = pbVar12 + (int)(this->FragWindow).Mem[0];
              pbVar21 = pbVar20;
            } while( true );
          }
          memcpy(pbVar8,this->Window + sVar13,__n);
        }
        else {
          __n_00 = this->MaxWinSize - sVar13;
          if (this->Fragmented != false) {
            pbVar20 = pbVar8;
            if (__n_00 != 0) {
              pbVar12 = pbVar8;
              do {
                pbVar20 = pbVar12 + (sVar13 - (int)pbVar8);
                if (pbVar20 < (byte *)(this->FragWindow).MemSize[0]) {
                  pbVar20 = pbVar20 + (int)(this->FragWindow).Mem[0];
                }
                else {
                  I_1 = 1;
                  psVar9 = (this->FragWindow).MemSize;
                  do {
                    psVar9 = psVar9 + 1;
                    if (pbVar20 < (byte *)*psVar9) {
                      pbVar20 = pbVar20 + ((int)(this->FragWindow).Mem[I_1] -
                                          (int)(this->FragWindow).Mem[I_1 + 0x1f]);
                      goto LAB_080fe2ec;
                    }
                    I_1 = I_1 + 1;
                  } while (I_1 != 0x20);
                  pbVar20 = (this->FragWindow).Mem[0];
                }
LAB_080fe2ec:
                pbVar21 = pbVar12 + 1;
                *pbVar12 = *pbVar20;
                pbVar20 = pbVar8 + __n_00;
                pbVar12 = pbVar21;
              } while (pbVar8 + __n_00 != pbVar21);
            }
            uVar19 = 0;
            if ((this->FragWindow).MemSize[0] != 0) goto LAB_080fe36c;
LAB_080fe310:
            psVar9 = (this->FragWindow).MemSize;
            I_3 = 1;
            do {
              psVar9 = psVar9 + 1;
              pbVar12 = pbVar20;
              if (uVar19 < *psVar9) {
                pbVar21 = (this->FragWindow).Mem[I_3] +
                          (uVar19 - (int)(this->FragWindow).Mem[I_3 + 0x1f]);
                goto LAB_080fe34c;
              }
              I_3 = I_3 + 1;
            } while (I_3 != 0x20);
            pbVar21 = (this->FragWindow).Mem[0];
LAB_080fe34c:
            do {
              uVar19 = uVar19 + 1;
              pbVar20 = pbVar12 + 1;
              *pbVar12 = *pbVar21;
              if (StartPtr <= uVar19) goto LAB_080fe3a0;
              if ((this->FragWindow).MemSize[0] <= uVar19) goto LAB_080fe310;
LAB_080fe36c:
              pbVar21 = (this->FragWindow).Mem[0] + uVar19;
              pbVar12 = pbVar20;
            } while( true );
          }
          memcpy(pbVar8,this->Window + sVar13,__n_00);
          memcpy(pbVar8 + __n_00,this->Window,StartPtr);
        }
LAB_080fe3a0:
        pbVar8 = ApplyFilter(this,pbVar8,__n,pUVar15);
        (this->Filters).Buffer[uVar17].Type = '\b';
        if (pbVar8 != (byte *)0x0) {
          ComprDataIO::UnpWrite(this->UnpIO,pbVar8,__n);
        }
        EndPtr = this->UnpPtr;
        uVar7 = this->MaxWinMask;
        uVar22 = *(uint *)&this->WrittenFileSize;
        iVar10 = *(int *)((int)&this->WrittenFileSize + 4);
        this->UnpSomeRead = true;
        uVar19 = (this->Filters).BufSize;
        *(uint *)&this->WrittenFileSize = uVar22 + __n;
        *(uint *)((int)&this->WrittenFileSize + 4) = iVar10 + (uint)CARRY4(uVar22,__n);
        uVar7 = EndPtr - StartPtr & uVar7;
        goto LAB_080fdfe8;
      }
      uVar19 = (this->Filters).BufSize;
      uVar17 = uVar17 + 1;
      StartPtr = sVar13;
    } while (uVar17 < uVar19);
    goto LAB_080fe094;
  }
LAB_080fe46c:
  UnpWriteArea(this,sVar13,EndPtr);
  sVar13 = this->UnpPtr;
  this->WrPtr = sVar13;
  if (this->MaxWinSize < 0x400001) {
    uVar19 = sVar13 + this->MaxWinSize;
  }
  else {
    uVar19 = sVar13 + 0x400000;
  }
  uVar19 = this->MaxWinMask & uVar19;
  *(uint *)(unaff_r8 + 0xb30) = uVar19;
  if (sVar13 != uVar19) {
    return;
  }
LAB_080fe254:
  *(size_t *)(unaff_r8 + 0xb30) = sVar13;
  return;
LAB_080fdfe8:
  uVar17 = uVar17 + 1;
  sVar13 = StartPtr;
  if (uVar19 <= uVar17) goto LAB_080fe094;
  goto LAB_080fdff4;
LAB_080fe094:
  if (uVar19 != 0) {
    bVar2 = false;
LAB_080fe0a4:
    pUVar16 = (this->Filters).Buffer;
    iVar23 = 0;
    uVar14 = 0;
    iVar10 = 0;
    while( true ) {
      iVar11 = iVar10;
      uVar14 = uVar14 + 1;
      if ((&pUVar16->Type)[iVar11] == '\b') {
        iVar23 = iVar23 + 1;
      }
      if (uVar19 <= uVar14) break;
      pUVar15 = pUVar16 + (uVar14 - iVar23);
      iVar10 = iVar11 + 0x18;
      if (iVar23 != 0) {
        *(undefined8 *)pUVar15 = *(undefined8 *)(&pUVar16[1].Type + iVar11);
        puVar1 = (undefined8 *)((int)&pUVar16[1].BlockLength + iVar11);
        uVar3 = *(undefined *)((int)puVar1 + 4);
        uVar4 = *(undefined3 *)((int)puVar1 + 5);
        pUVar15->BlockLength = *(undefined4 *)puVar1;
        pUVar15->Channels = uVar3;
        *(undefined3 *)&pUVar15->field_0xd = uVar4;
        puVar1 = (undefined8 *)((int)&pUVar16[1].Width + iVar11);
        uVar3 = *(undefined *)((int)puVar1 + 4);
        uVar5 = *(undefined *)((int)puVar1 + 5);
        uVar6 = *(undefined2 *)((int)puVar1 + 6);
        pUVar15->Width = *(undefined4 *)puVar1;
        pUVar15->PosR = uVar3;
        pUVar15->NextWindow = (bool)uVar5;
        *(undefined2 *)&pUVar15->field_0x16 = uVar6;
        pUVar16 = (this->Filters).Buffer;
        uVar19 = (this->Filters).BufSize;
      }
    }
    if (iVar23 != 0) {
      uVar14 = (this->Filters).AllocSize;
      uVar19 = uVar19 - iVar23;
      if (uVar14 < uVar19) {
        uVar7 = (this->Filters).MaxSize;
        (this->Filters).BufSize = uVar19;
        if ((uVar7 == 0 || uVar7 <= uVar19) && (uVar7 != 0 && uVar19 != uVar7)) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          uVar19 = (this->Filters).BufSize;
          uVar14 = (this->Filters).AllocSize;
        }
        NewSize = uVar14 + 0x20 + (uVar14 >> 2);
        if (NewSize < uVar19) {
          NewSize = uVar19;
        }
        pUVar16 = (UnpackFilter *)realloc((this->Filters).Buffer,NewSize * 0x18);
        if (pUVar16 == (UnpackFilter *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        (this->Filters).Buffer = pUVar16;
        (this->Filters).AllocSize = NewSize;
      }
      else {
        (this->Filters).BufSize = uVar19;
      }
    }
    EndPtr = this->UnpPtr;
    if (bVar2) {
LAB_080fe20c:
      uVar19 = this->MaxWinMask;
      sVar13 = this->WrPtr;
      if (this->MaxWinSize < 0x400001) {
        uVar14 = EndPtr + this->MaxWinSize;
      }
      else {
        uVar14 = EndPtr + 0x400000;
      }
      uVar14 = uVar14 & uVar19;
      this->WriteBorder = uVar14;
      if (uVar14 != EndPtr) {
        if (EndPtr == sVar13) {
          return;
        }
        if ((uVar14 - EndPtr & uVar19) <= (uVar19 & sVar13 - EndPtr)) {
          return;
        }
      }
      goto LAB_080fe254;
    }
  }
  goto LAB_080fe46c;
}


