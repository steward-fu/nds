/*
 * Ghidra decompilation
 *
 * Function : _ZN5ArrayIhE3AddEj
 * Address  : 08102b2c
 * Program  : drastic
 */


/* DWARF original prototype: void Add(Array<unsigned_char> * this, size_t Items) */

void __thiscall Array<unsigned_char>::Add(Array<unsigned_char> *this,size_t Items)

{
  uchar *puVar1;
  uchar *NewBuffer;
  uint uVar2;
  uint uVar3;
  size_t Suggested;
  size_t NewSize;
  uint uVar4;
  
  uVar4 = this->AllocSize;
  uVar2 = Items + this->BufSize;
  this->BufSize = uVar2;
  if (uVar2 <= uVar4) {
    return;
  }
  uVar3 = this->MaxSize;
  if ((uVar3 == 0 || uVar3 <= uVar2) && (uVar3 != 0 && uVar2 != uVar3)) {
    ErrorHandler::GeneralErrMsg(&ErrHandler,(wchar *)L"Maximum allowed array size (%u) is exceeded")
    ;
    ErrorHandler::MemoryError(&ErrHandler);
    uVar2 = this->BufSize;
    uVar4 = this->AllocSize;
  }
  NewSize = uVar4 + 0x20 + (uVar4 >> 2);
  if (NewSize < uVar2) {
    NewSize = uVar2;
  }
  puVar1 = (uchar *)realloc(this->Buffer,NewSize);
  if (puVar1 == (uchar *)0x0) {
    ErrorHandler::MemoryError(&ErrHandler);
  }
  this->Buffer = puVar1;
  this->AllocSize = NewSize;
  return;
}


