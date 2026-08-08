/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract9DoExtractEP11CommandData
 * Address  : 080eca7c
 * Program  : drastic
 */


/* DWARF original prototype: void DoExtract(CmdExtract * this, CommandData * Cmd) */

void __thiscall CmdExtract::DoExtract(CmdExtract *this,CommandData *Cmd)

{
  int iVar1;
  bool bVar2;
  EXTRACT_ARC_CODE EVar3;
  uint uVar4;
  wchar wVar5;
  int __in_chrg;
  int iVar6;
  SecPassword *__src;
  wchar *Name;
  EXTRACT_ARC_CODE Code;
  SecPassword PrevCmdPassword;
  FindData FD;
  
  wVar5 = Cmd->Command[0];
  this->PasswordCancelled = false;
  iVar1 = __stack_chk_guard;
  (this->DataIO).CurrentCommand = wVar5;
  Name = this->ArcName;
  RarTime::RarTime(&FD.mtime);
  RarTime::RarTime(&FD.ctime);
  RarTime::RarTime(&FD.atime);
  while (bVar2 = CommandData::GetArcName(Cmd,Name,0x800), bVar2) {
    bVar2 = FindFile::FastFind(Name,&FD,false);
    if (bVar2) {
      uVar4 = *(uint *)&(this->DataIO).TotalArcSize;
      iVar6 = *(int *)((int)&(this->DataIO).TotalArcSize + 4);
      *(uint *)&(this->DataIO).TotalArcSize = uVar4 + (uint)FD.Size;
      *(uint *)((int)&(this->DataIO).TotalArcSize + 4) =
           iVar6 + FD.Size._4_4_ + (uint)CARRY4(uVar4,(uint)FD.Size);
    }
  }
  StringList::Rewind(&Cmd->ArcNames);
  do {
    __src = &(Cmd->super_RAROptions).Password;
    do {
      bVar2 = CommandData::GetArcName(Cmd,Name,0x800);
      if (!bVar2) {
        if (((this->TotalFileCount == 0) && (Cmd->Command[0] != 0x49)) &&
           (ErrHandler.ExitCode != RARX_BADPWD)) {
          ErrorHandler::SetErrorCode(&ErrHandler,RARX_NOFILES);
        }
        if (iVar1 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      while( true ) {
        SecPassword::SecPassword(&PrevCmdPassword);
        memcpy(&PrevCmdPassword,__src,0x201);
        EVar3 = ExtractArchive(this,Cmd);
        memcpy(__src,&PrevCmdPassword,0x201);
        if (EVar3 != EXTRACT_ARC_REPEAT) break;
        SecPassword::~SecPassword(&PrevCmdPassword,__in_chrg);
      }
      SecPassword::~SecPassword(&PrevCmdPassword,__in_chrg);
      bVar2 = FindFile::FastFind(Name,&FD,false);
    } while (!bVar2);
    uVar4 = *(uint *)&(this->DataIO).ProcessedArcSize;
    iVar6 = *(int *)((int)&(this->DataIO).ProcessedArcSize + 4);
    *(uint *)&(this->DataIO).ProcessedArcSize = uVar4 + (uint)FD.Size;
    *(uint *)((int)&(this->DataIO).ProcessedArcSize + 4) =
         iVar6 + FD.Size._4_4_ + (uint)CARRY4(uVar4,(uint)FD.Size);
  } while( true );
}


