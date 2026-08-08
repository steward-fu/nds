/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead4GetWEPwj
 * Address  : 080e1254
 * Program  : drastic
 */


/* DWARF original prototype: void GetW(RawRead * this, wchar * Field, size_t Size) */

void __thiscall RawRead::GetW(RawRead *this,wchar *Field,size_t Size)

{
  if (this->DataSize <= (this->ReadPos - 1) + Size * 2) {
    memset(Field,0,Size << 2);
    return;
  }
  RawToWide((this->Data).Buffer + this->ReadPos,Field,Size);
  this->ReadPos = this->ReadPos + Size * 4;
  return;
}


