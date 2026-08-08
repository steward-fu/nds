/*
 * Ghidra decompilation
 *
 * Function : _Z10CreatePathPKwb
 * Address  : 001b8d70
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatePath(wchar_t const*, bool) */

bool CreatePath(wchar_t *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int iVar4;
  int *piVar5;
  long lVar6;
  wchar_t *pwVar7;
  wchar_t local_2808 [2048];
  char acStack_808 [2048];
  long local_8;
  wchar_t wVar3;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (wchar_t *)0x0) {
    bVar1 = false;
  }
  else {
    wVar3 = *param_1;
    bVar1 = false;
    if (wVar3 != L'\0') {
      bVar1 = true;
      lVar6 = 0;
      pwVar7 = param_1;
      do {
        cVar2 = IsPathDiv(wVar3);
        if (cVar2 != '\0') {
          __wcsncpy_chk(local_2808,param_1,lVar6,0x800);
          local_2808[lVar6] = L'\0';
          WideToChar(local_2808,acStack_808,0x800);
          iVar4 = mkdir(acStack_808,0x1ff);
          bVar1 = iVar4 != -1;
        }
        pwVar7 = pwVar7 + 1;
        wVar3 = *pwVar7;
      } while ((wVar3 != L'\0') && (lVar6 = (long)pwVar7 - (long)param_1 >> 2, (uint)lVar6 < 0x800))
      ;
      if (!param_2) {
        piVar5 = (int *)PointToLastChar(param_1);
        cVar2 = IsPathDiv(*piVar5);
        if (cVar2 == '\0') {
          WideToChar(param_1,acStack_808,0x800);
          iVar4 = mkdir(acStack_808,0x1ff);
          bVar1 = iVar4 != -1;
        }
      }
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_8 - ___stack_chk_guard,0);
  }
  return bVar1;
}


