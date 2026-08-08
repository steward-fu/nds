/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive11SearchBlockE11HEADER_TYPE
 * Address  : 080dc344
 * Program  : drastic
 */


/* DWARF original prototype: size_t SearchBlock(Archive * this, HEADER_TYPE HeaderType) */

size_t __thiscall Archive::SearchBlock(Archive *this,HEADER_TYPE HeaderType)

{
  int iVar1;
  undefined4 extraout_r1;
  RARFORMAT RVar2;
  int iVar3;
  HEADER_TYPE HVar4;
  byte bVar5;
  size_t ReadSize;
  bool bVar6;
  
  if (this->FailedHeaderDecryption == false) {
    bVar5 = 0;
    do {
      iVar1 = (*(this->super_File)._vptr_File[4])();
      RVar2 = this->Format;
      *(int *)&this->CurBlockPos = iVar1;
      *(undefined4 *)((int)&this->CurBlockPos + 4) = extraout_r1;
      if (RVar2 == RARFMT15) {
        ReadSize = ReadHeader15(this);
      }
      else if (RVar2 == RARFMT50) {
        ReadSize = ReadHeader50(this);
      }
      else if (RVar2 == RARFMT14) {
        ReadSize = ReadHeader14(this);
      }
      if (ReadSize == 0) {
        return 0;
      }
      iVar1 = *(int *)((int)&this->CurBlockPos + 4);
      iVar3 = *(int *)((int)&this->NextBlockPos + 4);
      bVar6 = *(uint *)&this->CurBlockPos < *(uint *)&this->NextBlockPos;
      if ((int)(iVar1 - (iVar3 + (uint)bVar6)) < 0 ==
          (SBORROW4(iVar1,iVar3) != SBORROW4(iVar1 - iVar3,(uint)bVar6))) {
        this->BrokenHeader = true;
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
        return 0;
      }
      if ((HeaderType != HEAD_ENDARC) && (this->CurHeaderType == HEAD_ENDARC)) {
        return 0;
      }
      bVar5 = bVar5 + 1;
      if ((bVar5 & 0x7f) == 0) {
        Wait();
        HVar4 = this->CurHeaderType;
      }
      else {
        HVar4 = this->CurHeaderType;
      }
      if (HeaderType == HVar4) {
        return ReadSize;
      }
      SeekToNext(this);
    } while (this->FailedHeaderDecryption == false);
  }
  return 0;
}


