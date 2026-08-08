/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract14ExtrCreateFileEP11CommandDataR7ArchiveR4File.part.14.constprop.21
 * Address  : 080e9800
 * Program  : drastic
 */


/* DWARF original prototype: bool ExtrCreateFile(CmdExtract * this, CommandData * Cmd, Archive *
   Arc, File * CurFile) */

bool __thiscall
CmdExtract::ExtrCreateFile(CmdExtract *this,CommandData *Cmd,Archive *Arc,File *CurFile)

{
  int iVar1;
  bool bVar2;
  wchar *Name;
  RarTime *FileTime;
  int64 *piVar3;
  wchar *pwVar4;
  bool UserReject;
  wchar OrigName [2048];
  
  iVar1 = __stack_chk_guard;
  piVar3 = &(Arc->FileHead).UnpSize;
  FileTime = &(Arc->FileHead).mtime;
  Name = this->DestFileName;
  bVar2 = FileCreate(&Cmd->super_RAROptions,CurFile,Name,0x800,(Cmd->super_RAROptions).Overwrite,
                     &UserReject,*piVar3,FileTime,true);
  if (bVar2) {
LAB_080e98b0:
    bVar2 = true;
  }
  else {
    if (UserReject == false) {
      pwVar4 = (Arc->super_File).FileName;
      ErrorHandler::CreateErrorMsg((wchar_t *)&ErrHandler,(wchar_t *)pwVar4);
      ErrorHandler::SetErrorCode(&ErrHandler,RARX_CREATE);
      (Cmd->super_RAROptions).DllError = 0x10;
      bVar2 = IsNameUsable(Name);
      if (!bVar2) {
        wcsncpyz(OrigName,Name,0x800);
        MakeNameUsable(Name,true);
        CreatePath(Name,true);
        bVar2 = FileCreate(&Cmd->super_RAROptions,CurFile,Name,0x800,
                           (Cmd->super_RAROptions).Overwrite,&UserReject,*piVar3,FileTime,true);
        if (!bVar2) {
          ErrorHandler::CreateErrorMsg((wchar_t *)&ErrHandler,(wchar_t *)pwVar4);
          goto LAB_080e98b4;
        }
        goto LAB_080e98b0;
      }
    }
    bVar2 = false;
  }
LAB_080e98b4:
  if (iVar1 == __stack_chk_guard) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


