/*
 * Ghidra decompilation
 *
 * Function : _ZN7Archive8SearchRREv
 * Address  : 080dc5c8
 * Program  : drastic
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0 : 0x080dc75c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Exceeded maximum restarts with more pending */
/* DWARF original prototype: size_t SearchRR(Archive * this) */

size_t __thiscall Archive::SearchRR(Archive *this)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  _func_int_varargs *p_Var4;
  undefined4 extraout_r1_01;
  RARFORMAT RVar5;
  size_t ReadSize_1;
  int iVar6;
  size_t ReadSize;
  bool bVar7;
  
  if (((this->MainHead).Locator != false) &&
     ((*(uint *)&(this->MainHead).RROffset | *(uint *)((int)&(this->MainHead).RROffset + 4)) != 0))
  {
    sVar2 = (*(this->super_File)._vptr_File[4])();
    p_Var4 = (this->super_File)._vptr_File[3];
    (*p_Var4)(sVar2,p_Var4,*(undefined4 *)&(this->MainHead).RROffset,
              *(undefined4 *)((int)&(this->MainHead).RROffset + 4),0);
    sVar3 = sVar2;
    if (this->FailedHeaderDecryption == false) {
      sVar3 = (*(this->super_File)._vptr_File[4])();
      RVar5 = this->Format;
      *(size_t *)&this->CurBlockPos = sVar3;
      *(undefined4 *)((int)&this->CurBlockPos + 4) = extraout_r1_01;
      if (RVar5 == RARFMT15) {
        ReadSize = ReadHeader15(this);
        sVar3 = ReadSize;
      }
      else if (RVar5 == RARFMT50) {
        ReadSize = ReadHeader50(this);
        sVar3 = ReadSize;
      }
      else if (RVar5 == RARFMT14) {
        ReadSize = ReadHeader14(this);
        sVar3 = ReadSize;
      }
      if (ReadSize != 0) {
        iVar6 = *(int *)((int)&this->NextBlockPos + 4);
        sVar3 = *(size_t *)&this->CurBlockPos;
        iVar1 = *(int *)((int)&this->CurBlockPos + 4);
        bVar7 = sVar3 < *(uint *)&this->NextBlockPos;
        if ((int)(iVar1 - (iVar6 + (uint)bVar7)) < 0 ==
            (SBORROW4(iVar1,iVar6) != SBORROW4(iVar1 - iVar6,(uint)bVar7))) {
          this->BrokenHeader = true;
          ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
        }
        else if (((this->BrokenHeader == false) && (this->CurHeaderType == HEAD_SERVICE)) &&
                (sVar3 = wcscmp((wchar_t *)(this->SubHead).FileName,L"RR"), sVar3 == 0)) {
          return ReadSize;
        }
      }
    }
    p_Var4 = (this->super_File)._vptr_File[3];
    (*p_Var4)(sVar3,p_Var4,sVar2,extraout_r1_00,0);
  }
  if (this->FailedHeaderDecryption == false) {
    do {
      iVar1 = (*(this->super_File)._vptr_File[4])();
      RVar5 = this->Format;
      *(int *)&this->CurBlockPos = iVar1;
      *(undefined4 *)((int)&this->CurBlockPos + 4) = extraout_r1;
      if (RVar5 == RARFMT15) {
        ReadSize_1 = ReadHeader15(this);
      }
      else if (RVar5 == RARFMT50) {
        ReadSize_1 = ReadHeader50(this);
      }
      else if (RVar5 == RARFMT14) {
        ReadSize_1 = ReadHeader14(this);
      }
      if (ReadSize_1 == 0) {
        return 0;
      }
      iVar6 = *(int *)((int)&this->CurBlockPos + 4);
      iVar1 = *(int *)((int)&this->NextBlockPos + 4);
      bVar7 = *(uint *)&this->CurBlockPos < *(uint *)&this->NextBlockPos;
      if ((int)(iVar6 - (iVar1 + (uint)bVar7)) < 0 ==
          (SBORROW4(iVar6,iVar1) != SBORROW4(iVar6 - iVar1,(uint)bVar7))) {
        this->BrokenHeader = true;
        ErrorHandler::SetErrorCode(&ErrHandler,RARX_CRC);
        return 0;
      }
      if (this->CurHeaderType == HEAD_ENDARC) {
        return 0;
      }
      if ((this->CurHeaderType == HEAD_SERVICE) &&
         (iVar1 = wcscmp((wchar_t *)(this->SubHead).FileName,L"RR"), iVar1 == 0)) {
        return ReadSize_1;
      }
      SeekToNext(this);
    } while (this->FailedHeaderDecryption == false);
  }
  return 0;
}


