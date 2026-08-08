/*
 * Ghidra decompilation
 *
 * Function : AddVMCode
 * Address  : 080fbf0c
 * Program  : drastic
 */


/* DWARF original prototype: bool AddVMCode(Unpack * this, uint FirstByte, byte * Code, int
   CodeSize) */

bool __thiscall Unpack::AddVMCode(Unpack *this,uint FirstByte,byte *Code,int CodeSize)

{
  int iVar1;
  UnpackFilter30 *pUVar2;
  UnpackFilter30 *StackFilter;
  int iVar3;
  uint uVar4;
  uint BlockStart;
  uchar *puVar5;
  uint DataSize;
  uint uVar6;
  UnpackFilter30 **NewBuffer;
  uint VMCodeSize;
  uint uVar7;
  UnpackFilter30 **NewBuffer_1;
  int *NewBuffer_2;
  UnpackFilter30 **ppUVar8;
  size_t Suggested_1;
  uint uVar9;
  VM_PreparedCommand *pVVar10;
  uint uVar11;
  size_t sVar12;
  uint uVar13;
  size_t sVar14;
  uint *puVar15;
  int *piVar16;
  size_t Suggested;
  uchar *puVar17;
  RarVM *this_00;
  uint *Addr;
  uint InitMask;
  BitInput *Inp;
  size_t NewSize;
  size_t NewSize_2;
  uint FiltPos;
  size_t *psVar18;
  UnpackFilter30 *pUVar19;
  UnpackFilter30 *Filter;
  size_t NewSize_1;
  size_t Suggested_2;
  bool bVar20;
  uint local_48;
  UnpackFilter30 **local_44;
  Array<unsigned_char> VMCode;
  
  iVar1 = __stack_chk_guard;
  if (0x7fff < CodeSize) {
    CodeSize = 0x8000;
  }
  (this->VMCodeInp).InAddr = 0;
  (this->VMCodeInp).InBit = 0;
  this_00 = &this->VM;
  memcpy((this->VMCodeInp).InBuf,Code,CodeSize);
  RarVM::Init(this_00);
  if ((FirstByte & 0x80) == 0) {
    FiltPos = this->LastFilter;
LAB_080fbf88:
    local_48 = (this->Filters30).BufSize;
    if ((FiltPos <= local_48) && (FiltPos <= (this->OldFilterLengths).BufSize)) goto LAB_080fbfd4;
  }
  else {
    uVar4 = RarVM::ReadData(&this->VMCodeInp);
    if (uVar4 != 0) {
      FiltPos = uVar4 - 1;
      goto LAB_080fbf88;
    }
    InitFilters30(this);
    local_48 = (this->Filters30).BufSize;
    FiltPos = 0;
LAB_080fbfd4:
    this->LastFilter = FiltPos;
    bVar20 = false;
    pUVar2 = (UnpackFilter30 *)operator_new(0x70);
    (pUVar2->Prg).Cmd.Buffer = (VM_PreparedCommand *)0x0;
    (pUVar2->Prg).Cmd.BufSize = 0;
    (pUVar2->Prg).Cmd.AllocSize = 0;
    (pUVar2->Prg).Cmd.MaxSize = 0;
    (pUVar2->Prg).AltCmd = (VM_PreparedCommand *)0x0;
    (pUVar2->Prg).CmdCount = 0;
    (pUVar2->Prg).GlobalData.Buffer = (uchar *)0x0;
    (pUVar2->Prg).GlobalData.BufSize = 0;
    (pUVar2->Prg).GlobalData.AllocSize = 0;
    (pUVar2->Prg).GlobalData.MaxSize = 0;
    (pUVar2->Prg).StaticData.Buffer = (uchar *)0x0;
    (pUVar2->Prg).StaticData.BufSize = 0;
    (pUVar2->Prg).StaticData.AllocSize = 0;
    (pUVar2->Prg).StaticData.MaxSize = 0;
    (pUVar2->Prg).FilteredDataSize = 0;
    if (FiltPos == local_48) {
      if (0x400 < FiltPos) {
        operator_delete(pUVar2);
        goto LAB_080fbf9c;
      }
      uVar13 = (this->Filters30).AllocSize;
      uVar9 = (this->Filters30).BufSize + 1;
      (this->Filters30).BufSize = uVar9;
      if (uVar13 < uVar9) {
        uVar11 = (this->Filters30).MaxSize;
        if ((uVar11 == 0 || uVar11 <= uVar9) && (uVar11 != 0 && uVar9 != uVar11)) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          uVar9 = (this->Filters30).BufSize;
          uVar13 = (this->Filters30).AllocSize;
        }
        NewSize_1 = uVar13 + 0x20 + (uVar13 >> 2);
        if (NewSize_1 < uVar9) {
          NewSize_1 = uVar9;
        }
        local_44 = (UnpackFilter30 **)realloc((this->Filters30).Buffer,NewSize_1 << 2);
        if (local_44 == (UnpackFilter30 **)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        uVar9 = (this->Filters30).BufSize;
        (this->Filters30).Buffer = local_44;
        (this->Filters30).AllocSize = NewSize_1;
      }
      else {
        local_44 = (this->Filters30).Buffer;
      }
      pUVar19 = (UnpackFilter30 *)operator_new(0x70);
      sVar12 = (this->Filters30).BufSize;
      sVar14 = (this->OldFilterLengths).BufSize;
      uVar11 = (this->OldFilterLengths).AllocSize;
      (pUVar19->Prg).Cmd.Buffer = (VM_PreparedCommand *)0x0;
      (pUVar19->Prg).Cmd.BufSize = 0;
      (pUVar19->Prg).Cmd.AllocSize = 0;
      (pUVar19->Prg).Cmd.MaxSize = 0;
      uVar13 = sVar14 + 1;
      (pUVar19->Prg).AltCmd = (VM_PreparedCommand *)0x0;
      (pUVar19->Prg).CmdCount = 0;
      (pUVar19->Prg).GlobalData.Buffer = (uchar *)0x0;
      (pUVar19->Prg).GlobalData.BufSize = 0;
      (pUVar19->Prg).GlobalData.AllocSize = 0;
      (pUVar19->Prg).GlobalData.MaxSize = 0;
      (pUVar19->Prg).StaticData.Buffer = (uchar *)0x0;
      (pUVar19->Prg).StaticData.BufSize = 0;
      (pUVar19->Prg).StaticData.AllocSize = 0;
      (pUVar19->Prg).StaticData.MaxSize = 0;
      (pUVar19->Prg).FilteredDataSize = 0;
      local_44[uVar9 - 1] = pUVar19;
      (this->OldFilterLengths).BufSize = uVar13;
      pUVar2->ParentFilter = sVar12 - 1;
      if (uVar11 < uVar13) {
        uVar9 = (this->OldFilterLengths).MaxSize;
        if ((uVar9 == 0 || uVar9 <= uVar13) && (uVar9 != 0 && uVar13 != uVar9)) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          uVar13 = (this->OldFilterLengths).BufSize;
          uVar11 = (this->OldFilterLengths).AllocSize;
        }
        NewSize_2 = uVar11 + 0x20 + (uVar11 >> 2);
        if (NewSize_2 < uVar13) {
          NewSize_2 = uVar13;
        }
        piVar16 = (int *)realloc((this->OldFilterLengths).Buffer,NewSize_2 << 2);
        if (piVar16 == (int *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        uVar13 = (this->OldFilterLengths).BufSize;
        (this->OldFilterLengths).Buffer = piVar16;
        (this->OldFilterLengths).AllocSize = NewSize_2;
      }
      else {
        piVar16 = (this->OldFilterLengths).Buffer;
      }
      piVar16[uVar13 - 1] = 0;
      pUVar19->ExecCount = 0;
    }
    else {
      pUVar19 = (this->Filters30).Buffer[FiltPos];
      uVar13 = pUVar19->ExecCount;
      pUVar2->ParentFilter = FiltPos;
      pUVar19->ExecCount = uVar13 + 1;
    }
    uVar13 = (this->PrgStack).BufSize;
    if (uVar13 == 0) {
      uVar13 = 1;
LAB_080fc3e8:
      uVar9 = (this->PrgStack).AllocSize;
      (this->PrgStack).BufSize = uVar13;
      if (uVar9 < uVar13) {
        uVar11 = (this->PrgStack).MaxSize;
        if (uVar11 != 0 && uVar11 < uVar13) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          uVar13 = (this->PrgStack).BufSize;
          uVar9 = (this->PrgStack).AllocSize;
        }
        NewSize = uVar9 + 0x20 + (uVar9 >> 2);
        if (NewSize < uVar13) {
          NewSize = uVar13;
        }
        ppUVar8 = (UnpackFilter30 **)realloc((this->PrgStack).Buffer,NewSize << 2);
        if (ppUVar8 == (UnpackFilter30 **)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        iVar3 = 1;
        uVar13 = (this->PrgStack).BufSize;
        (this->PrgStack).Buffer = ppUVar8;
        (this->PrgStack).AllocSize = NewSize;
      }
      else {
        iVar3 = 1;
        ppUVar8 = (this->PrgStack).Buffer;
      }
    }
    else {
      sVar14 = 0;
      iVar3 = 0;
      do {
        ppUVar8 = (this->PrgStack).Buffer;
        ppUVar8[sVar14 - iVar3] = ppUVar8[sVar14];
        ppUVar8 = (this->PrgStack).Buffer;
        if (ppUVar8[sVar14] == (UnpackFilter30 *)0x0) {
          iVar3 = iVar3 + 1;
LAB_080fc094:
          ppUVar8[sVar14] = (UnpackFilter30 *)0x0;
        }
        else if (iVar3 != 0) goto LAB_080fc094;
        sVar14 = sVar14 + 1;
      } while (uVar13 != sVar14);
      if (iVar3 == 0) {
        uVar13 = uVar13 + 1;
        goto LAB_080fc3e8;
      }
      ppUVar8 = (this->PrgStack).Buffer;
    }
    uVar9 = pUVar19->ExecCount;
    Inp = &this->VMCodeInp;
    ppUVar8[uVar13 - iVar3] = pUVar2;
    pUVar2->ExecCount = uVar9;
    uVar4 = RarVM::ReadData(Inp);
    bVar20 = (FirstByte & 0x40) != 0;
    if (bVar20) {
      uVar4 = uVar4 + 0x100;
    }
    sVar14 = this->UnpPtr;
    if (bVar20) {
      uVar4 = uVar4 + 2;
    }
    pUVar2->BlockStart = uVar4 + sVar14 & this->MaxWinMask;
    if ((FirstByte & 0x20) == 0) {
      uVar13 = 0;
      if (FiltPos < (this->OldFilterLengths).BufSize) {
        uVar13 = (this->OldFilterLengths).Buffer[FiltPos];
      }
      pUVar2->BlockLength = uVar13;
    }
    else {
      uVar6 = RarVM::ReadData(Inp);
      piVar16 = (this->OldFilterLengths).Buffer;
      pUVar2->BlockLength = uVar6;
      piVar16[FiltPos] = uVar6;
      uVar13 = pUVar2->BlockLength;
      sVar14 = this->UnpPtr;
    }
    if (this->WrPtr == sVar14) {
      bVar20 = false;
    }
    else if (uVar4 < (this->WrPtr - sVar14 & this->MaxWinMask)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    pUVar2->NextWindow = bVar20;
    *(undefined8 *)(pUVar2->Prg).InitR = 0;
    *(undefined8 *)((pUVar2->Prg).InitR + 2) = 0;
    *(undefined8 *)((pUVar2->Prg).InitR + 3) = 0;
    *(undefined8 *)((pUVar2->Prg).InitR + 5) = 0;
    uVar9 = pUVar2->ExecCount;
    (pUVar2->Prg).InitR[3] = 0x3c000;
    (pUVar2->Prg).InitR[4] = uVar13;
    (pUVar2->Prg).InitR[5] = uVar9;
    if ((FirstByte & 0x10) != 0) {
      uVar4 = BitInput::fgetbits(Inp);
      uVar13 = uVar4 >> 9;
      BitInput::faddbits(Inp,7);
      if ((uVar13 & 1) != 0) {
        uVar4 = RarVM::ReadData(Inp);
        (pUVar2->Prg).InitR[0] = uVar4;
      }
      if ((uVar13 & 2) != 0) {
        uVar4 = RarVM::ReadData(Inp);
        (pUVar2->Prg).InitR[1] = uVar4;
      }
      if ((uVar13 & 4) != 0) {
        uVar4 = RarVM::ReadData(Inp);
        (pUVar2->Prg).InitR[2] = uVar4;
      }
      if ((uVar13 & 8) != 0) {
        uVar4 = RarVM::ReadData(Inp);
        (pUVar2->Prg).InitR[3] = uVar4;
      }
      if ((uVar13 & 0x10) != 0) {
        uVar4 = RarVM::ReadData(Inp);
        (pUVar2->Prg).InitR[4] = uVar4;
      }
      if ((uVar13 & 0x20) != 0) {
        uVar4 = RarVM::ReadData(Inp);
        (pUVar2->Prg).InitR[5] = uVar4;
      }
      if ((uVar13 & 0x40) != 0) {
        uVar4 = RarVM::ReadData(Inp);
        (pUVar2->Prg).InitR[6] = uVar4;
      }
    }
    if (FiltPos == local_48) {
      uVar4 = RarVM::ReadData(Inp);
      if (0xfffe < uVar4 - 1) goto LAB_080fbf98;
      uVar6 = 0;
      VMCode.Buffer = (uchar *)0x0;
      VMCode.BufSize = 0;
      VMCode.AllocSize = 0;
      VMCode.MaxSize = 0;
      Array<unsigned_char>::Add(&VMCode,uVar4);
      do {
        puVar5 = VMCode.Buffer;
        if (0x7fff < (this->VMCodeInp).InAddr + 3U) {
          if (VMCode.Buffer != (uchar *)0x0) {
            free(VMCode.Buffer);
          }
          goto LAB_080fbf98;
        }
        uVar7 = BitInput::fgetbits(Inp);
        puVar5[uVar6] = (uchar)(uVar7 >> 8);
        BitInput::faddbits(Inp,8);
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
      RarVM::Prepare(this_00,VMCode.Buffer,uVar4,&pUVar19->Prg);
      if (VMCode.Buffer != (uchar *)0x0) {
        free(VMCode.Buffer);
      }
    }
    pVVar10 = (pUVar19->Prg).Cmd.Buffer;
    (pUVar2->Prg).CmdCount = (pUVar19->Prg).CmdCount;
    sVar14 = (pUVar19->Prg).StaticData.BufSize;
    (pUVar2->Prg).AltCmd = pVVar10;
    if (sVar14 - 1 < 0x1fff) {
      Array<unsigned_char>::Add(&(pUVar2->Prg).StaticData,sVar14);
      memcpy((pUVar2->Prg).StaticData.Buffer,(pUVar19->Prg).StaticData.Buffer,sVar14);
    }
    if ((pUVar2->Prg).GlobalData.BufSize < 0x40) {
      puVar5 = (pUVar2->Prg).GlobalData.Buffer;
      if (puVar5 != (uchar *)0x0) {
        free(puVar5);
        (pUVar2->Prg).GlobalData.Buffer = (uchar *)0x0;
      }
      (pUVar2->Prg).GlobalData.BufSize = 0;
      (pUVar2->Prg).GlobalData.AllocSize = 0;
      Array<unsigned_char>::Add(&(pUVar2->Prg).GlobalData,0x40);
    }
    puVar15 = (uint *)(pUVar2->Prg).GlobalData.Buffer;
    psVar18 = &(pUVar2->Prg).StaticData.MaxSize;
    Addr = puVar15;
    do {
      psVar18 = psVar18 + 1;
      RarVM::SetLowEndianValue(this_00,Addr,*psVar18);
      Addr = Addr + 1;
    } while (psVar18 != (pUVar2->Prg).InitR + 6);
    RarVM::SetLowEndianValue(this_00,puVar15 + 7,pUVar2->BlockLength);
    RarVM::SetLowEndianValue(this_00,puVar15 + 8,0);
    RarVM::SetLowEndianValue(this_00,puVar15 + 0xb,pUVar2->ExecCount);
    *(undefined8 *)(puVar15 + 0xc) = 0;
    *(undefined8 *)(puVar15 + 0xe) = 0;
    if ((FirstByte & 8) == 0) {
LAB_080fc2f4:
      bVar20 = true;
      goto LAB_080fbf9c;
    }
    if (((this->VMCodeInp).InAddr + 3U < 0x8000) && (uVar4 = RarVM::ReadData(Inp), uVar4 < 0x1fc1))
    {
      uVar13 = (pUVar2->Prg).GlobalData.BufSize;
      if (uVar13 < uVar4 + 0x40) {
        Array<unsigned_char>::Add(&(pUVar2->Prg).GlobalData,(0x40 - uVar13) + uVar4);
      }
      puVar5 = (pUVar2->Prg).GlobalData.Buffer;
      if (uVar4 == 0) goto LAB_080fc2f4;
      if ((this->VMCodeInp).InAddr + 3U < 0x8000) {
        puVar17 = puVar5 + 0x3f;
        do {
          uVar6 = BitInput::fgetbits(Inp);
          puVar17 = puVar17 + 1;
          *puVar17 = (uchar)(uVar6 >> 8);
          BitInput::faddbits(Inp,8);
          if (puVar5 + uVar4 + 0x3f == puVar17) goto LAB_080fc2f4;
        } while ((this->VMCodeInp).InAddr + 3U < 0x8000);
      }
    }
  }
LAB_080fbf98:
  bVar20 = false;
LAB_080fbf9c:
  if (iVar1 == __stack_chk_guard) {
    return bVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


