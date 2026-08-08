/*
 * Ghidra decompilation
 *
 * Function : RenameFile
 * Address  : 001b9680
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenameFile(wchar_t const*, wchar_t const*) */

void RenameFile(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  char acStack_1008 [2048];
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar(param_1,acStack_1008,0x800);
  WideToChar(param_2,acStack_808,0x800);
  iVar1 = rename(acStack_1008,acStack_808);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0,local_8 - ___stack_chk_guard,0);
}


