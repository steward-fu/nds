/*
 * Ghidra decompilation
 *
 * Function : ExtrCreateFile
 * Address  : 001c9000
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CmdExtract::ExtrCreateFile(CommandData*, Archive&, File&) [clone .part.0] */

char __thiscall
CmdExtract::ExtrCreateFile(CmdExtract *this,CommandData *param_1,Archive *param_2,File *param_3)

{
  wchar_t *pwVar1;
  char cVar2;
  char cVar3;
  bool local_2009;
  wchar_t awStack_2008 [2048];
  long local_8;
  
  pwVar1 = (wchar_t *)(this + 0x67fc);
  local_8 = ___stack_chk_guard;
  cVar2 = FileCreate((RAROptions *)param_1,param_3,pwVar1,0x800,
                     *(OVERWRITE_MODE *)(param_1 + 0xc23c),&local_2009,
                     *(longlong *)(param_2 + 0xa7d0),(RarTime *)(param_2 + 0xa7b0),true);
  if ((cVar2 == '\0') && (local_2009 == false)) {
    ErrorHandler::CreateErrorMsg(&ErrHandler,(wchar_t *)(param_2 + 0x20));
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
    *(undefined4 *)(param_1 + 0x125c0) = 0x10;
    cVar3 = IsNameUsable(pwVar1);
    if (cVar3 == '\0') {
      wcsncpyz(awStack_2008,pwVar1,0x800);
      MakeNameUsable(pwVar1,true);
      CreatePath(pwVar1,true);
      cVar2 = FileCreate((RAROptions *)param_1,param_3,pwVar1,0x800,
                         *(OVERWRITE_MODE *)(param_1 + 0xc23c),&local_2009,
                         *(longlong *)(param_2 + 0xa7d0),(RarTime *)(param_2 + 0xa7b0),true);
      if (cVar2 == '\0') {
        ErrorHandler::CreateErrorMsg(&ErrHandler,(wchar_t *)(param_2 + 0x20));
      }
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


