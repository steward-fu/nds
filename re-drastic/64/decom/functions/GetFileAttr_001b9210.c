/*
 * Ghidra decompilation
 *
 * Function : GetFileAttr
 * Address  : 001b9210
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetFileAttr(wchar_t const*) */

void GetFileAttr(wchar_t *param_1)

{
  int iVar1;
  undefined auStack_888 [128];
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar(param_1,acStack_808,0x800);
  iVar1 = __xstat64(0,acStack_808,(stat64 *)auStack_888);
  if (iVar1 != 0) {
    auStack_888._16_4_ = 0;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auStack_888._16_4_,local_8 - ___stack_chk_guard,0);
}


