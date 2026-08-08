/*
 * Ghidra decompilation
 *
 * Function : _Z18ExtractUnixOwner20R7ArchivePKw
 * Address  : 001f0380
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExtractUnixOwner20(Archive&, wchar_t const*) */

void ExtractUnixOwner20(Archive *param_1,wchar_t *param_2)

{
  __uid_t __owner;
  uint uVar1;
  int iVar2;
  int *piVar3;
  passwd *ppVar4;
  group *pgVar5;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar(param_2,acStack_808,0x800);
  if (param_1[0x11220] == (Archive)0x0) {
    piVar3 = __errno_location();
    *piVar3 = 0;
    ppVar4 = getpwnam((char *)(param_1 + 0x10e7c));
    if (ppVar4 == (passwd *)0x0) {
      GetWide((char *)(param_1 + 0x10e7c));
      ErrorHandler::SysErrMsg();
      ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
    }
    else {
      __owner = ppVar4->pw_uid;
      *piVar3 = 0;
      pgVar5 = getgrnam((char *)(param_1 + 0x10f7c));
      if (pgVar5 == (group *)0x0) {
        GetWide((char *)(param_1 + 0x10f7c));
        ErrorHandler::SysErrMsg();
        ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
      }
      else {
        uVar1 = GetFileAttr(param_2);
        iVar2 = lchown(acStack_808,__owner,pgVar5->gr_gid);
        if (iVar2 != 0) {
          ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
        }
        SetFileAttr(param_2,uVar1);
      }
    }
  }
  else {
    ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,3);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


