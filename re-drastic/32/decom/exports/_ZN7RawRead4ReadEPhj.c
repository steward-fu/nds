/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4ReadEPhj
 * Address  : 080e0e54
 * Program  : drastic
 */


/* DWARF original prototype: void Read(RawRead * this, byte * SrcData, size_t Size) */

void __thiscall RawRead::Read(RawRead *this,byte *SrcData,size_t Size)

{
  uchar *puVar1;
  uchar *NewBuffer;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  size_t Suggested;
  size_t NewSize;
  
  if (Size == 0) {
    return;
  }
  uVar2 = (this->Data).AllocSize;
  uVar4 = Size + (this->Data).BufSize;
  (this->Data).BufSize = uVar4;
  if (uVar2 < uVar4) {
    uVar3 = (this->Data).MaxSize;
    if ((uVar3 == 0 || uVar3 <= uVar4) && (uVar3 != 0 && uVar4 != uVar3)) {
      ErrorHandler::GeneralErrMsg
                (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError(&ErrHandler);
      uVar4 = (this->Data).BufSize;
      uVar2 = (this->Data).AllocSize;
    }
    NewSize = uVar2 + 0x20 + (uVar2 >> 2);
    if (NewSize < uVar4) {
      NewSize = uVar4;
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
  memcpy(puVar1 + this->DataSize,SrcData,Size);
  this->DataSize = this->DataSize + Size;
  return;
}


