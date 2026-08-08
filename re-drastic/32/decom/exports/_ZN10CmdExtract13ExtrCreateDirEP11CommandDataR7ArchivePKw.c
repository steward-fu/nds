/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract13ExtrCreateDirEP11CommandDataR7ArchivePKw
 * Address  : 080ea058
 * Program  : drastic
 */


/* DWARF original prototype: void ExtrCreateDir(CmdExtract * this, CommandData * Cmd, Archive * Arc,
   wchar * ArcFileName) */

void __thiscall
CmdExtract::ExtrCreateDir(CmdExtract *this,CommandData *Cmd,Archive *Arc,wchar *ArcFileName)

{
  bool bVar1;
  MKDIR_CODE MVar2;
  MKDIR_CODE MDCode;
  uint Attr;
  RarTime *ftm;
  RarTime *ftc;
  RarTime *fta;
  wchar *Name;
  bool UserReject;
  int local_24;
  
  local_24 = __stack_chk_guard;
  if ((Cmd->super_RAROptions).Test != false) goto LAB_080ea098;
  Name = this->DestFileName;
  MVar2 = MakeDir(Name,(bool)((Cmd->super_RAROptions).IgnoreGeneralAttr ^ 1),
                  (Arc->FileHead).field_3.FileAttr);
  if (MVar2 == MKDIR_SUCCESS) {
LAB_080ea0f0:
    this->PrevExtracted = true;
  }
  else {
    bVar1 = FileExist(Name);
    if (bVar1) {
      Attr = GetFileAttr(Name);
      bVar1 = IsDir(Attr);
      if (bVar1) {
        if ((Cmd->super_RAROptions).IgnoreGeneralAttr == false) {
          SetFileAttr(Name,(Arc->FileHead).field_3.FileAttr);
        }
        goto LAB_080ea0f0;
      }
      FileCreate(&Cmd->super_RAROptions,(File *)0x0,Name,0x800,(Cmd->super_RAROptions).Overwrite,
                 &UserReject,(Arc->FileHead).UnpSize,&(Arc->FileHead).mtime,bVar1);
    }
    CreatePath(Name,true);
    MVar2 = MakeDir(Name,(bool)((Cmd->super_RAROptions).IgnoreGeneralAttr ^ 1),
                    (Arc->FileHead).field_3.FileAttr);
    if (MVar2 == MKDIR_SUCCESS) goto LAB_080ea0f0;
    ErrorHandler::CheckLongPathErrMsg((wchar_t *)&ErrHandler);
    ErrorHandler::SysErrMsg(&ErrHandler);
    (Cmd->super_RAROptions).DllError = 0x10;
    ErrorHandler::SetErrorCode(&ErrHandler,RARX_CREATE);
    if (this->PrevExtracted == false) goto LAB_080ea098;
  }
  ftm = (RarTime *)(Cmd->super_RAROptions).xmtime;
  ftc = (RarTime *)(Cmd->super_RAROptions).xctime;
  fta = (RarTime *)(Cmd->super_RAROptions).xatime;
  if (ftm != (RarTime *)0x0) {
    ftm = &(Arc->FileHead).mtime;
  }
  if (ftc != (RarTime *)0x0) {
    ftc = &(Arc->FileHead).ctime;
  }
  if (fta != (RarTime *)0x0) {
    fta = &(Arc->FileHead).atime;
  }
  SetDirTime(Name,ftm,ftc,fta);
LAB_080ea098:
  if (local_24 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


