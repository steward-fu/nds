/*
 * Ghidra decompilation
 *
 * Function : SetFileAttr
 * Address  : 001b9290
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SetFileAttr(wchar_t const*, unsigned int) */

void SetFileAttr(wchar_t *param_1,uint param_2)

{
  int iVar1;
  char acStack_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WideToChar(param_1,acStack_808,0x800);
  iVar1 = chmod(acStack_808,param_2);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0,local_8 - ___stack_chk_guard,0);
}


