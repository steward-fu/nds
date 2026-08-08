/*
 * Ghidra decompilation
 *
 * Function : _ZN6Unpack13UnpWriteBuf20Ev
 * Address  : 080f0d88
 * Program  : drastic
 */


/* DWARF original prototype: void UnpWriteBuf20(Unpack * this) */

void __thiscall Unpack::UnpWriteBuf20(Unpack *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = this->UnpPtr;
  uVar2 = this->WrPtr;
  if ((uVar1 == uVar2) || (this->UnpSomeRead = true, uVar2 <= uVar1)) {
    ComprDataIO::UnpWrite(this->UnpIO,this->Window + uVar2,uVar1 - uVar2);
  }
  else {
    ComprDataIO::UnpWrite(this->UnpIO,this->Window + uVar2,this->MaxWinMask & -uVar2);
    ComprDataIO::UnpWrite(this->UnpIO,this->Window,this->UnpPtr);
    this->UnpAllBuf = true;
  }
  this->WrPtr = this->UnpPtr;
  return;
}


