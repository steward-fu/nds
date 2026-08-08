/*
 * Ghidra decompilation
 *
 * Function : QuickOpen
 * Address  : 08108ae0
 * Program  : drastic
 */


/* DWARF original prototype: QuickOpen * QuickOpen(QuickOpen * this) */

QuickOpen * __thiscall QuickOpen::QuickOpen(QuickOpen *this)

{
  byte *pbVar1;
  
  CryptData::CryptData(&this->Crypt);
  (this->LastReadHeader).Buffer = (uchar *)0x0;
  (this->LastReadHeader).BufSize = 0;
  (this->LastReadHeader).AllocSize = 0;
  (this->LastReadHeader).MaxSize = 0;
  this->Arc = (Archive *)0x0;
  this->WriteMode = false;
  this->ListStart = (QuickOpenItem *)0x0;
  this->ListEnd = (QuickOpenItem *)0x0;
  this->Buf = (byte *)0x0;
  pbVar1 = (byte *)operator_new__(0x10000);
  this->Buf = pbVar1;
  this->CurBufSize = 0;
  this->Loaded = false;
  return this;
}


