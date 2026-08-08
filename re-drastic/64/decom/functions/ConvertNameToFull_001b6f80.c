/*
 * Ghidra decompilation
 *
 * Function : ConvertNameToFull
 * Address  : 001b6f80
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ConvertNameToFull(wchar_t const*, wchar_t*, unsigned long) */

void ConvertNameToFull(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  char *pcVar1;
  size_t sVar2;
  char local_808 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (wchar_t *)0x0) || (*param_1 == L'\0')) {
    if (param_3 != 0) {
      *param_2 = L'\0';
    }
  }
  else {
    if (*param_1 == L'/') {
      *param_2 = L'\0';
    }
    else {
      pcVar1 = getcwd(local_808,0x800);
      if (pcVar1 == (char *)0x0) {
        local_808[0] = '\0';
      }
      CharToWide(local_808,param_2,param_3);
      sVar2 = wcslen(param_2);
      if (((sVar2 != 0) && (param_2[sVar2 - 1] != L'/')) && (sVar2 + 1 < param_3)) {
        wcscat(param_2,L"/");
      }
    }
    wcsncatz(param_2,param_1,param_3);
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return;
}


