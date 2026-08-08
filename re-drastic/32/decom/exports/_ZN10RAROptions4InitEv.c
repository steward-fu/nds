/*
 * Ghidra decompilation
 *
 * Function : _ZN10RAROptions4InitEv
 * Address  : 080e29ec
 * Program  : drastic
 */


/* DWARF original prototype: void Init(RAROptions * this) */

void __thiscall RAROptions::Init(RAROptions *this)

{
  int64 iVar1;
  uint uVar2;
  
  memset(this,0,0x125c0);
  iVar1 = SIMDExpandImmediate(1,6,0x80);
  this->WinSize = 0x2000000;
  this->Method = 3;
  this->MsgStream = MSG_STDOUT;
  this->Overwrite = OVERWRITE_DEFAULT;
  this->ConvertNames = 0;
  this->ProcessEA = true;
  this->xmtime = EXTTIME_HIGH3;
  this->FileSizeLess = iVar1;
  this->FileSizeMore = iVar1;
  this->HashType = HASH_CRC32;
  uVar2 = GetNumberOfThreads();
  this->Threads = uVar2;
  this->QOpenMode = QOPEN_AUTO;
  return;
}


