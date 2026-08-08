/*
 * Ghidra decompilation
 *
 * Function : RAROptions
 * Address  : 080e28a0
 * Program  : drastic
 */


/* DWARF original prototype: RAROptions * RAROptions(RAROptions * this) */

RAROptions * __thiscall RAROptions::RAROptions(RAROptions *this)

{
  int64 iVar1;
  uint uVar2;
  
  SecPassword::SecPassword(&this->Password);
  (this->NextVolSizes).Buffer = (longlong *)0x0;
  (this->NextVolSizes).BufSize = 0;
  (this->NextVolSizes).AllocSize = 0;
  (this->NextVolSizes).MaxSize = 0;
  RarTime::RarTime(&this->FileTimeBefore);
  RarTime::RarTime(&this->FileTimeAfter);
  memset(this,0,0x125c0);
  iVar1 = SIMDExpandImmediate(1,6,0x80);
  this->WinSize = 0x2000000;
  this->MsgStream = MSG_STDOUT;
  this->Overwrite = OVERWRITE_DEFAULT;
  this->Method = 3;
  this->ConvertNames = 0;
  this->ProcessEA = true;
  this->xmtime = EXTTIME_HIGH3;
  this->FileSizeLess = iVar1;
  this->FileSizeMore = iVar1;
  this->HashType = HASH_CRC32;
  uVar2 = GetNumberOfThreads();
  this->Threads = uVar2;
  this->QOpenMode = QOPEN_AUTO;
  return this;
}


