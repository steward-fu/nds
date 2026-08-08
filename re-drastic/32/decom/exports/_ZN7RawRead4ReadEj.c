/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4ReadEj
 * Address  : 080e0c34
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080e0dbc */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t Read(RawRead * this, size_t Size) */

size_t __thiscall RawRead::Read(RawRead *this,size_t Size)

{
  uchar *puVar1;
  uchar *NewBuffer;
  size_t sVar2;
  uchar *NewBuffer_1;
  uint uVar3;
  size_t DataLeft;
  int iVar4;
  size_t SizeToRead;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  size_t sVar8;
  size_t Suggested_1;
  size_t NewSize_1;
  size_t AlignedReadSize;
  size_t Suggested;
  size_t NewSize;
  
  if (this->Crypt == (CryptData *)0x0) {
    if (Size == 0) {
      return 0;
    }
    uVar3 = (this->Data).AllocSize;
    uVar7 = Size + (this->Data).BufSize;
    (this->Data).BufSize = uVar7;
    if (uVar3 < uVar7) {
      uVar5 = (this->Data).MaxSize;
      if ((uVar5 == 0 || uVar5 <= uVar7) && (uVar5 != 0 && uVar7 != uVar5)) {
        ErrorHandler::GeneralErrMsg
                  (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
        ErrorHandler::MemoryError(&ErrHandler);
        uVar7 = (this->Data).BufSize;
        uVar3 = (this->Data).AllocSize;
      }
      NewSize_1 = uVar3 + 0x20 + (uVar3 >> 2);
      if (NewSize_1 < uVar7) {
        NewSize_1 = uVar7;
      }
      puVar1 = (uchar *)realloc((this->Data).Buffer,NewSize_1);
      if (puVar1 == (uchar *)0x0) {
        ErrorHandler::MemoryError(&ErrHandler);
      }
      (this->Data).Buffer = puVar1;
      (this->Data).AllocSize = NewSize_1;
    }
    else {
      puVar1 = (this->Data).Buffer;
    }
    Size = (*this->SrcFile->_vptr_File[2])(this->SrcFile,puVar1 + this->DataSize,Size);
    sVar6 = this->DataSize;
  }
  else {
    sVar8 = (this->Data).BufSize;
    sVar6 = this->DataSize;
    if (sVar8 - sVar6 < Size) {
      iVar4 = Size - (sVar8 - sVar6);
      uVar3 = (this->Data).AllocSize;
      sVar6 = (-iVar4 & 0xfU) + iVar4;
      uVar7 = sVar6 + sVar8;
      (this->Data).BufSize = uVar7;
      if (uVar3 < uVar7) {
        uVar5 = (this->Data).MaxSize;
        if ((uVar5 == 0 || uVar5 <= uVar7) && (uVar5 != 0 && uVar7 != uVar5)) {
          ErrorHandler::GeneralErrMsg
                    (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
          ErrorHandler::MemoryError(&ErrHandler);
          uVar7 = (this->Data).BufSize;
          uVar3 = (this->Data).AllocSize;
        }
        NewSize = uVar3 + 0x20 + (uVar3 >> 2);
        if (NewSize < uVar7) {
          NewSize = uVar7;
        }
        puVar1 = (uchar *)realloc((this->Data).Buffer,NewSize);
        if (puVar1 == (uchar *)0x0) {
          ErrorHandler::MemoryError(&ErrHandler);
        }
        (this->Data).Buffer = puVar1;
        (this->Data).AllocSize = NewSize;
      }
      else {
        puVar1 = (this->Data).Buffer;
      }
      sVar2 = (*this->SrcFile->_vptr_File[2])(this->SrcFile,puVar1 + sVar8,sVar6);
      CryptData::DecryptBlock(this->Crypt,(this->Data).Buffer + sVar8,sVar6);
      if (sVar2 == 0) {
        Size = 0;
      }
      this->DataSize = Size + this->DataSize;
      return sVar2;
    }
  }
  this->DataSize = sVar6 + Size;
  return Size;
}


