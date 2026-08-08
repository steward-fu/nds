/*
 * Ghidra decompilation
 *
 * Function : GetText
 * Address  : 001c2a20
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RarTime::GetText(wchar_t*, unsigned long, bool, bool) */

void __thiscall
RarTime::GetText(RarTime *this,wchar_t *param_1,ulong param_2,bool param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  wchar_t *__src;
  int iVar3;
  int iVar4;
  int iVar5;
  tm *ptVar6;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)this == 0) {
    __src = L"??-??-???? ??:??";
    if (!param_3) {
      __src = L"??-??-?? ??:??";
    }
    wcscpy(param_1,__src);
  }
  else {
    local_10 = (*(long *)this + 0xfe624e212ac18000U) / 10000000;
    ptVar6 = localtime((time_t *)&local_10);
    iVar3 = ptVar6->tm_mday;
    iVar4 = ptVar6->tm_min;
    iVar5 = ptVar6->tm_hour;
    iVar1 = ptVar6->tm_mon + 1;
    uVar2 = ptVar6->tm_year + 0x76c;
    if (param_4) {
      __swprintf_chk(param_1,param_2,1,0x3fffffffffffffff,&DAT_00228b38,uVar2,iVar1,iVar3,iVar5,
                     iVar4,0);
    }
    else if (param_3) {
      __swprintf_chk(param_1,param_2,1,0x3fffffffffffffff,&DAT_00228ba8,iVar3,iVar1,uVar2,iVar5,
                     iVar4);
    }
    else {
      __swprintf_chk(param_1,param_2,1,0x3fffffffffffffff,&DAT_00228c08,iVar3,iVar1,uVar2 % 100,
                     iVar5,iVar4);
    }
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8 - ___stack_chk_guard,0);
}


