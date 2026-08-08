/*
 * Ghidra decompilation
 *
 * Function : Reset
 * Address  : 08102bd4
 * Program  : drastic
 */


/* DWARF original prototype: void Reset(FileHeader * this, size_t SubDataSize) */

void __thiscall FileHeader::Reset(FileHeader *this,size_t SubDataSize)

{
  uchar *puVar1;
  uchar *NewBuffer;
  uint uVar2;
  uint uVar3;
  size_t Suggested;
  size_t NewSize;
  
  uVar3 = (this->SubData).AllocSize;
  if (uVar3 < SubDataSize) {
    uVar2 = (this->SubData).MaxSize;
    (this->SubData).BufSize = SubDataSize;
    if ((uVar2 == 0 || uVar2 <= SubDataSize) && (uVar2 != 0 && SubDataSize != uVar2)) {
      ErrorHandler::GeneralErrMsg
                (&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded");
      ErrorHandler::MemoryError(&ErrHandler);
      SubDataSize = (this->SubData).BufSize;
      uVar3 = (this->SubData).AllocSize;
    }
    NewSize = uVar3 + 0x20 + (uVar3 >> 2);
    if (NewSize < SubDataSize) {
      NewSize = SubDataSize;
    }
    puVar1 = (uchar *)realloc((this->SubData).Buffer,NewSize);
    if (puVar1 == (uchar *)0x0) {
      ErrorHandler::MemoryError(&ErrHandler);
    }
    (this->SubData).Buffer = puVar1;
    (this->SubData).AllocSize = NewSize;
  }
  else {
    (this->SubData).BufSize = SubDataSize;
  }
  (this->super_BlockHeader).super_BaseBlock.SkipIfUnknown = false;
  HashValue::Init(&this->FileHash,HASH_NONE);
  (this->mtime).itime = 0;
  (this->ctime).itime = 0;
  (this->atime).itime = 0;
  this->SplitBefore = false;
  this->SplitAfter = false;
  this->UnknownUnpSize = false;
  (this->field_3).FileAttr = 0;
  this->Encrypted = false;
  this->CryptMethod = CRYPT_NONE;
  this->SaltSet = false;
  this->UsePswCheck = false;
  this->UseHashKey = false;
  this->Lg2Count = 0;
  this->Solid = false;
  this->Dir = false;
  this->CommentInHeader = false;
  this->Version = false;
  this->WinSize = 0;
  this->Inherited = false;
  this->LargeFile = false;
  this->SubBlock = false;
  this->RedirType = FSREDIR_NONE;
  this->UnixOwnerSet = false;
  return;
}


