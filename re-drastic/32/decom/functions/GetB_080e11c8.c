/*
 * Ghidra decompilation
 *
 * Function : GetB
 * Address  : 080e11c8
 * Program  : drastic
 */


/* DWARF original prototype: size_t GetB(RawRead * this, void * Field, size_t Size) */

size_t __thiscall RawRead::GetB(RawRead *this,void *Field,size_t Size)

{
  byte *F;
  size_t CopySize;
  
  CopySize = this->DataSize - this->ReadPos;
  if (Size <= CopySize) {
    CopySize = Size;
  }
  if (CopySize != 0) {
    memcpy(Field,(this->Data).Buffer + this->ReadPos,CopySize);
  }
  if (CopySize < Size) {
    memset((void *)((int)Field + CopySize),0,Size - CopySize);
  }
  this->ReadPos = this->ReadPos + CopySize;
  return CopySize;
}


