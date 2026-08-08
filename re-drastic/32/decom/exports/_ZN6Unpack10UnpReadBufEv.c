/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack10UnpReadBufEv
 * Address  : 080f1708
 * Program  : drastic
 */


/* DWARF original prototype: bool UnpReadBuf(Unpack * this) */

bool __thiscall Unpack::UnpReadBuf(Unpack *this)

{
  int ReadCode;
  byte *__dest;
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  size_t __n;
  
  iVar1 = (this->Inp).InAddr;
  sVar3 = this->ReadTop;
  __n = sVar3 - iVar1;
  if ((int)__n < 0) {
    iVar1 = 0;
  }
  else {
    (this->BlockHeader).BlockSize =
         (this->BlockHeader).BlockSize - (iVar1 - (this->BlockHeader).BlockStart);
    if (0x4000 < iVar1) {
      if (__n != 0) {
        __dest = (this->Inp).InBuf;
        memmove(__dest,__dest + iVar1,__n);
      }
      (this->Inp).InAddr = 0;
      this->ReadTop = __n;
      sVar3 = __n;
    }
    iVar1 = ComprDataIO::UnpRead(this->UnpIO,(this->Inp).InBuf + sVar3,0x8000 - sVar3);
    iVar5 = this->ReadTop;
    iVar2 = (this->BlockHeader).BlockSize;
    if (0 < iVar1) {
      iVar5 = iVar1 + iVar5;
    }
    iVar4 = iVar5 + -0x1e;
    if (0 < iVar1) {
      this->ReadTop = iVar5;
    }
    iVar5 = (this->Inp).InAddr;
    this->ReadBorder = iVar4;
    (this->BlockHeader).BlockStart = iVar5;
    if (iVar2 != -1) {
      iVar2 = iVar5 + iVar2 + -1;
      if (iVar4 <= iVar2) {
        iVar2 = iVar4;
      }
      this->ReadBorder = iVar2;
    }
    iVar1 = iVar1 + 1;
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return SUB41(iVar1,0);
}


