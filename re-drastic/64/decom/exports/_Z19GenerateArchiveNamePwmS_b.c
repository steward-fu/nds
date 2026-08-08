/*
 * Ghidra decompilation
 *
 * Function : _Z19GenerateArchiveNamePwmS_b
 * Address  : 001b71e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenerateArchiveName(wchar_t*, unsigned long, wchar_t*, bool) */

void GenerateArchiveName(wchar_t *param_1,ulong param_2,wchar_t *param_3,bool param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  uint uVar3;
  bool local_2259;
  wchar_t awStack_2258 [2196];
  long local_8;
  
  uVar3 = 1;
  local_8 = ___stack_chk_guard;
  do {
    wcsncpyz(awStack_2258,param_1,0x894);
    local_2259 = false;
    GenArcName(awStack_2258,param_3,uVar3,&local_2259);
    if (local_2259 == false) {
LAB_001b7278:
      wcsncpyz(param_1,awStack_2258,param_2);
      if (local_8 - ___stack_chk_guard == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(local_8 - ___stack_chk_guard,0);
    }
    cVar1 = FileExist(awStack_2258);
    if (cVar1 == '\0') {
      if (1 < uVar3 && !param_4) {
        pwVar2 = (wchar_t *)NullToEmpty(param_1);
        wcsncpyz(awStack_2258,pwVar2,0x894);
        GenArcName(awStack_2258,param_3,uVar3 - 1,&local_2259);
      }
      goto LAB_001b7278;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}


