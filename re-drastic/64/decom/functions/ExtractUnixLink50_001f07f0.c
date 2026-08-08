/*
 * Ghidra decompilation
 *
 * Function : ExtractUnixLink50
 * Address  : 001f07f0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ExtractUnixLink50(wchar_t const*, FileHeader*) */

undefined8 ExtractUnixLink50(wchar_t *param_1,FileHeader *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int local_1008 [512];
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar((wchar_t *)(param_2 + 0x210c),(char *)local_1008,0x800);
  if (*(int *)(param_2 + 0x2108) - 2U < 2) {
    if (local_1008[0] == 0x5c3f3f5c) {
      uVar3 = 0;
      goto LAB_001f08b0;
    }
    DosSlashToUnix((char *)local_1008,(char *)local_1008,0x800);
  }
  CreatePath(param_1,true);
  DelFile(param_1);
  WideToChar(param_1,acStack_808,0x800);
  uVar3 = 1;
  iVar1 = symlink((char *)local_1008,acStack_808);
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    uVar3 = 0;
    if (*piVar2 != 0x11) {
      ErrorHandler::SetErrorCode((ErrorHandler *)&ErrHandler,1);
    }
  }
LAB_001f08b0:
  if (local_8 - ___stack_chk_guard == 0) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


