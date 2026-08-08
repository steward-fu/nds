/*
 * Ghidra decompilation
 *
 * Function : _Z15PrepareToDeletePKw
 * Address  : 001b91a0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PrepareToDelete(wchar_t const*) */

void PrepareToDelete(wchar_t *param_1)

{
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (wchar_t *)0x0) {
    WideToChar(param_1,acStack_808,0x800);
    chmod(acStack_808,0x1c0);
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


