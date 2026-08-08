/*
 * Ghidra decompilation
 *
 * Function : GetAutoRenamedName
 * Address  : 001ed640
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetAutoRenamedName(wchar_t*, unsigned long) [clone .part.0] */

void GetAutoRenamedName(wchar_t *param_1,ulong param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  size_t sVar4;
  int iVar5;
  wchar_t local_2008 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pwVar2 = (wchar_t *)GetExt(param_1);
  if (pwVar2 == (wchar_t *)0x0) {
    sVar4 = wcslen(param_1);
    pwVar2 = param_1 + sVar4;
  }
  iVar5 = 1;
  local_2008[0] = L'\0';
  do {
    __swprintf_chk(local_2008,0x800,1,0x800,&DAT_00229500,
                   (ulong)((long)pwVar2 - (long)param_1) >> 2 & 0xffffffff,param_1,iVar5,pwVar2);
    cVar1 = FileExist(local_2008);
    if (cVar1 == '\0') {
      wcsncpyz(param_1,local_2008,param_2);
      uVar3 = 1;
LAB_001ed704:
      if (local_8 - ___stack_chk_guard == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3,local_8 - ___stack_chk_guard,0);
    }
    if (iVar5 == 1000000) {
      uVar3 = 0;
      goto LAB_001ed704;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


