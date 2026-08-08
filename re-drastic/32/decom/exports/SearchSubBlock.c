/*
 * Ghidra decompilation
 *
 * Function : SearchSubBlock
 * Address  : 080dc488
 * Program  : drastic
 */


/* DWARF original prototype: size_t SearchSubBlock(Archive * this, wchar * Type) */

size_t __thiscall Archive::SearchSubBlock(Archive *this,wchar *Type)

{
  int iVar1;
  undefined4 extraout_r1;
  RARFORMAT RVar2;
  size_t ReadSize;
  int iVar3;
  bool bVar4;
  
  if (this->FailedHeaderDecryption == false) {
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
      iVar3 = *(int *)((int)&this->CurBlockPos + 4);
      iVar1 = *(int *)((int)&this->NextBlockPos + 4);
      bVar4 = *(uint *)&this->CurBlockPos < *(uint *)&this->NextBlockPos;
      if ((int)(iVar3 - (iVar1 + (uint)bVar4)) < 0 ==
          (SBORROW4(iVar3,iVar1) != SBORROW4(iVar3 - iVar1,(uint)bVar4))) {
        this->BrokenHeader = true;
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
        return 0;
      }
      if (this->CurHeaderType == HEAD_ENDARC) {
        return 0;
      }
      if ((this->CurHeaderType == HEAD_SERVICE) &&
         (iVar1 = wcscmp((wchar_t *)(this->SubHead).FileName,(wchar_t *)Type), iVar1 == 0)) {
        return ReadSize;
      }
      SeekToNext(this);
    } while (this->FailedHeaderDecryption == false);
  }
  return 0;
}


