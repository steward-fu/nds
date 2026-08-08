/*
 * Ghidra decompilation
 *
 * Function : ReadHeader
 * Address  : 080dc268
 * Program  : drastic
 */


/* DWARF original prototype: size_t ReadHeader(Archive * this) */

size_t __thiscall Archive::ReadHeader(Archive *this)

{
  int iVar1;
  undefined4 extraout_r1;
  RARFORMAT RVar2;
  int iVar3;
  size_t ReadSize;
  bool bVar4;
  
  if (this->FailedHeaderDecryption == false) {
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
    if (ReadSize != 0) {
      iVar1 = *(int *)((int)&this->CurBlockPos + 4);
      iVar3 = *(int *)((int)&this->NextBlockPos + 4);
      bVar4 = *(uint *)&this->CurBlockPos < *(uint *)&this->NextBlockPos;
      if ((int)(iVar1 - (iVar3 + (uint)bVar4)) < 0 !=
          (SBORROW4(iVar1,iVar3) != SBORROW4(iVar1 - iVar3,(uint)bVar4))) {
        return ReadSize;
      }
      this->BrokenHeader = true;
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
    }
  }
  return 0;
}


