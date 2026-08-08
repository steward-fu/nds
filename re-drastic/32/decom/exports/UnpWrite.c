/*
 * Ghidra decompilation
 *
 * Function : UnpWrite
 * Address  : 080e2400
 * Program  : drastic
 */


/* DWARF original prototype: void UnpWrite(ComprDataIO * this, byte * Addr, size_t Count) */

void __thiscall ComprDataIO::UnpWrite(ComprDataIO *this,byte *Addr,size_t Count)

{
  bool bVar1;
  int iVar2;
  int RetCode;
  uint uVar3;
  code *pcVar4;
  wchar wVar5;
  
  wVar5 = this->SrcFile[3].FileName[0x4a2];
  if (*(int *)(wVar5 + 0x125a4) != 0) {
    if ((*(code **)(wVar5 + 0x125b0) == (code *)0x0) ||
       (iVar2 = (**(code **)(wVar5 + 0x125b0))(1,*(undefined4 *)(wVar5 + 0x125ac),Addr,Count),
       iVar2 != -1)) {
      pcVar4 = *(code **)(wVar5 + 0x125b8);
    }
    else {
      ErrorHandler::Exit(&ErrHandler,RARX_USERBREAK);
      pcVar4 = *(code **)(wVar5 + 0x125b8);
    }
    if ((pcVar4 != (code *)0x0) && (iVar2 = (*pcVar4)(Addr,Count), iVar2 == 0)) {
      ErrorHandler::Exit(&ErrHandler,RARX_USERBREAK);
    }
  }
  this->UnpWrSize = Count;
  this->UnpWrAddr = Addr;
  if (this->UnpackToMemory == false) {
    if (this->TestMode == false) {
      File::Write(this->DestFile,Addr,Count);
    }
  }
  else if (Count <= this->UnpackToMemorySize) {
    memcpy(this->UnpackToMemoryAddr,Addr,Count);
    this->UnpackToMemorySize = this->UnpackToMemorySize - Count;
    this->UnpackToMemoryAddr = this->UnpackToMemoryAddr + Count;
  }
  bVar1 = this->SkipUnpCRC;
  uVar3 = *(uint *)&this->CurUnpWrite;
  iVar2 = *(int *)((int)&this->CurUnpWrite + 4);
  *(uint *)&this->CurUnpWrite = uVar3 + Count;
  *(uint *)((int)&this->CurUnpWrite + 4) = iVar2 + (uint)CARRY4(uVar3,Count);
  if (bVar1 == false) {
    DataHash::Update(&this->UnpHash,Addr,Count);
  }
  Wait();
  return;
}


