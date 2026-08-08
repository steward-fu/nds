/*
 * Ghidra decompilation
 *
 * Function : UnpReadBuf30
 * Address  : 080f13b8
 * Program  : drastic
 */


/* DWARF original prototype: bool UnpReadBuf30(Unpack * this) */

bool __thiscall Unpack::UnpReadBuf30(Unpack *this)

{
  undefined uVar1;
  byte *__dest;
  int iVar2;
  int ReadCode;
  int iVar3;
  size_t sVar4;
  size_t __n;
  
  iVar3 = (this->Inp).InAddr;
  sVar4 = this->ReadTop;
  __n = sVar4 - iVar3;
  if ((int)__n < 0) {
    uVar1 = 0;
  }
  else {
    if (0x4000 < iVar3) {
      if (__n != 0) {
        __dest = (this->Inp).InBuf;
        memmove(__dest,__dest + iVar3,__n);
      }
      (this->Inp).InAddr = 0;
      this->ReadTop = __n;
      sVar4 = __n;
    }
    iVar2 = ComprDataIO::UnpRead(this->UnpIO,(this->Inp).InBuf + sVar4,0x8000 - sVar4);
    iVar3 = this->ReadTop;
    if (0 < iVar2) {
      iVar3 = iVar2 + iVar3;
      this->ReadTop = iVar3;
    }
    iVar2 = iVar2 + 1;
    if (iVar2 != 0) {
      iVar2 = 1;
    }
    uVar1 = (undefined)iVar2;
    this->ReadBorder = iVar3 + -0x1e;
  }
  return (bool)uVar1;
}


