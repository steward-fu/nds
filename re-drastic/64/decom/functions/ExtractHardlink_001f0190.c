/*
 * Ghidra decompilation
 *
 * Function : ExtractHardlink
 * Address  : 001f0190
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExtractHardlink(wchar_t*, wchar_t*, unsigned long) */

char ExtractHardlink(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  char acStack_1008 [2048];
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FileExist(param_2);
  if (cVar1 != '\0') {
    CreatePath(param_1,true);
    DosSlashToUnix(param_2,param_2,param_3);
    WideToChar(param_2,acStack_1008,0x800);
    WideToChar(param_1,acStack_808,0x800);
    iVar2 = link(acStack_1008,acStack_808);
    cVar1 = iVar2 == 0;
    if (iVar2 != 0) {
      ErrorHandler::SysErrMsg();
      ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,9);
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


