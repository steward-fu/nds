/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawRead5ResetEv
 * Address  : 080e0c1c
 * Program  : drastic
 */


/* DWARF original prototype: void Reset(RawRead * this) */

void __thiscall RawRead::Reset(RawRead *this)

{
  (this->Data).BufSize = 0;
  this->DataSize = 0;
  this->ReadPos = 0;
  this->Crypt = (CryptData *)0x0;
  return;
}


