/*
 * Ghidra decompilation
 *
 * Function : AddFilter
 * Address  : 080fe58c
 * Program  : drastic
 */


/* DWARF original prototype: bool AddFilter(Unpack * this, UnpackFilter * Filter) */

bool __thiscall Unpack::AddFilter(Unpack *this,UnpackFilter *Filter)

{
  byte bVar1;
  undefined3 uVar2;
  byte bVar3;
  undefined3 uVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  UnpackFilter *pUVar8;
  UnpackFilter *NewBuffer;
  size_t sVar9;
  uint uVar10;
  size_t sVar11;
  size_t sVar12;
  uint uVar13;
  size_t Suggested;
  size_t NewSize;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  sVar12 = (this->Filters).BufSize;
  if (sVar12 < 0x1fff) {
    sVar11 = this->UnpPtr;
    sVar9 = this->WrPtr;
    if (sVar9 == sVar11) goto LAB_080fe6e0;
LAB_080fe5cc:
    uVar16 = Filter->BlockStart;
    uVar7 = this->MaxWinMask;
    if ((sVar9 - sVar11 & uVar7) <= uVar16) {
      bVar17 = true;
      goto LAB_080fe5f0;
    }
  }
  else {
    UnpWriteBuf(this);
    sVar12 = (this->Filters).BufSize;
    sVar11 = this->UnpPtr;
    sVar9 = this->WrPtr;
    if (sVar9 != sVar11) goto LAB_080fe5cc;
LAB_080fe6e0:
    uVar16 = Filter->BlockStart;
    uVar7 = this->MaxWinMask;
  }
  bVar17 = false;
LAB_080fe5f0:
  uVar10 = (this->Filters).AllocSize;
  Filter->NextWindow = bVar17;
  uVar14 = Filter->BlockLength;
  bVar3 = Filter->Channels;
  uVar4 = *(undefined3 *)&Filter->field_0xd;
  uVar13 = sVar12 + 1;
  uVar15 = Filter->Width;
  bVar5 = Filter->PosR;
  bVar17 = Filter->NextWindow;
  uVar6 = *(undefined2 *)&Filter->field_0x16;
  Filter->BlockStart = sVar11 + uVar16 & uVar7;
  bVar1 = Filter->Type;
  uVar2 = *(undefined3 *)&Filter->field_0x1;
  uVar16 = Filter->BlockStart;
  (this->Filters).BufSize = uVar13;
  if (uVar10 < uVar13) {
    uVar7 = (this->Filters).MaxSize;
    if ((uVar7 == 0 || uVar7 <= uVar13) && (uVar7 != 0 && uVar13 != uVar7)) {
      ErrorHandler::GeneralErrMsg
                (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError(&ErrHandler);
      uVar13 = (this->Filters).BufSize;
      uVar10 = (this->Filters).AllocSize;
    }
    NewSize = uVar10 + 0x20 + (uVar10 >> 2);
    if (NewSize < uVar13) {
      NewSize = uVar13;
    }
    pUVar8 = (UnpackFilter *)realloc((this->Filters).Buffer,NewSize * 0x18);
    if (pUVar8 == (UnpackFilter *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    (this->Filters).Buffer = pUVar8;
    uVar13 = (this->Filters).BufSize;
    (this->Filters).AllocSize = NewSize;
  }
  else {
    pUVar8 = (this->Filters).Buffer;
  }
  pUVar8 = pUVar8 + (uVar13 - 1);
  pUVar8->Type = bVar1;
  *(undefined3 *)&pUVar8->field_0x1 = uVar2;
  pUVar8->BlockStart = uVar16;
  pUVar8->BlockLength = uVar14;
  pUVar8->Channels = bVar3;
  *(undefined3 *)&pUVar8->field_0xd = uVar4;
  pUVar8->Width = uVar15;
  pUVar8->PosR = bVar5;
  pUVar8->NextWindow = bVar17;
  *(undefined2 *)&pUVar8->field_0x16 = uVar6;
  return true;
}


