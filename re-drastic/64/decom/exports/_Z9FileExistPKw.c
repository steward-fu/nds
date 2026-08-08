/*
 * Ghidra decompilation
 *
 * Function : _Z9FileExistPKw
 * Address  : 001b8fc0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FileExist(wchar_t const*) */

void FileExist(wchar_t *param_1)

{
  int iVar1;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar(param_1,acStack_808,0x800);
  iVar1 = access(acStack_808,0);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0,local_8 - ___stack_chk_guard,0);
}


