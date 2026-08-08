/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack11UnpInitDataEb
 * Address  : 080f6400
 * Program  : drastic
 */


/* DWARF original prototype: void UnpInitData(Unpack * this, bool Solid) */

void __thiscall Unpack::UnpInitData(Unpack *this,bool Solid)

{
  UnpackFilter *__ptr;
  size_t sVar1;
  
  if (!Solid) {
    *(undefined8 *)this->OldDist = 0;
    *(undefined8 *)(this->OldDist + 2) = 0;
    this->OldDistPtr = 0;
    this->LastLength = 0;
    this->LastDist = 0;
    memset(&this->BlockTables,0,0x4a9c);
    this->UnpPtr = 0;
    __ptr = (this->Filters).Buffer;
    this->WrPtr = 0;
    if (this->MaxWinSize < 0x400001) {
      sVar1 = this->MaxWinMask & this->MaxWinSize;
    }
    else {
      sVar1 = this->MaxWinMask & 0x400000;
    }
    this->WriteBorder = sVar1;
    if (__ptr != (UnpackFilter *)0x0) {
      free(__ptr);
      (this->Filters).Buffer = (UnpackFilter *)0x0;
    }
    (this->Inp).InAddr = 0;
    (this->Inp).InBit = 0;
    (this->Filters).BufSize = 0;
    (this->Filters).AllocSize = 0;
    this->WrittenFileSize = 0;
    this->ReadTop = 0;
    this->ReadBorder = 0;
    (this->BlockHeader).BlockSize = 0;
    (this->BlockHeader).BlockBitSize = 0;
    (this->BlockHeader).BlockStart = 0;
    (this->BlockHeader).HeaderSize = 0;
    (this->BlockHeader).HeaderSize = 0;
    (this->BlockHeader).LastBlockInFile = false;
    (this->BlockHeader).TablePresent = false;
    *(undefined2 *)&(this->BlockHeader).field_0x12 = 0;
    (this->BlockHeader).BlockSize = -1;
    this->UnpAudioBlock = 0;
    this->UnpChannels = 1;
    this->UnpCurChannel = 0;
    this->UnpChannelDelta = 0;
    memset(this->AudV,0,0x170);
    memset(this->UnpOldTable20,0,0x404);
    memset(this->MD,0,0x3bb0);
    this->TablesRead = false;
    memset(this->UnpOldTable,0,0x1ae);
    this->PPMEscChar = 2;
    this->UnpBlockType = 0;
    InitFilters30(this);
    return;
  }
  (this->Inp).InAddr = 0;
  (this->Inp).InBit = 0;
  this->WrittenFileSize = 0;
  this->ReadTop = 0;
  this->ReadBorder = 0;
  (this->BlockHeader).BlockSize = 0;
  (this->BlockHeader).BlockBitSize = 0;
  (this->BlockHeader).BlockStart = 0;
  (this->BlockHeader).HeaderSize = 0;
  (this->BlockHeader).HeaderSize = 0;
  (this->BlockHeader).LastBlockInFile = false;
  (this->BlockHeader).TablePresent = false;
  *(undefined2 *)&(this->BlockHeader).field_0x12 = 0;
  (this->BlockHeader).BlockSize = -1;
  return;
}


