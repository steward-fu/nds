/*
 * Ghidra decompilation
 *
 * Function : _Z8MakeNamePKwS0_Pwm
 * Address  : 001b6200
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MakeName(wchar_t const*, wchar_t const*, wchar_t*, unsigned long) */

void MakeName(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,ulong param_4)

{
  size_t sVar1;
  int iStack_200c;
  wchar_t awStack_2008 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  wcsncpyz(awStack_2008,param_1,0x800);
  sVar1 = wcslen(awStack_2008);
  if (((sVar1 != 0) && ((&iStack_200c)[sVar1] != 0x2f)) && (sVar1 + 1 < 0x800)) {
    __wcscat_chk(awStack_2008,&DAT_00228888,0x800);
  }
  wcsncatz(awStack_2008,param_2,0x800);
  wcsncpyz(param_3,awStack_2008,param_4);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


