/*
 * Ghidra decompilation
 *
 * Function : _ZN7RawReadC1EP4File
 * Address  : 080e0bf4
 * Program  : drastic
 */


/* DWARF original prototype: RawRead * RawRead(RawRead * this, File * SrcFile) */

RawRead * __thiscall RawRead::RawRead(RawRead *this,File *SrcFile)

{
  (this->Data).Buffer = (uchar *)0x0;
  (this->Data).BufSize = 0;
  (this->Data).AllocSize = 0;
  (this->Data).MaxSize = 0;
  this->SrcFile = SrcFile;
  this->DataSize = 0;
  this->ReadPos = 0;
  this->Crypt = (CryptData *)0x0;
  return this;
}


