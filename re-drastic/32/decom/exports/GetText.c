/*
 * Ghidra decompilation
 *
 * Function : GetText
 * Address  : 080e19b0
 * Program  : drastic
 */


/* DWARF original prototype: void GetText(RarTime * this, wchar * DateStr, size_t MaxSize, bool
   FullYear, bool FullMS) */

void __thiscall
RarTime::GetText(RarTime *this,wchar *DateStr,size_t MaxSize,bool FullYear,bool FullMS)

{
  tm *ptVar1;
  tm *t;
  wchar_t *__src;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  time_t ut;
  int local_24;
  
  uVar4 = *(uint *)&this->itime;
  uVar6 = *(uint *)((int)&this->itime + 4);
  local_24 = __stack_chk_guard;
  if ((uVar4 | uVar6) == 0) {
    __src = L"??-??-???? ??:??";
    if (!FullYear) {
      __src = L"??-??-?? ??:??";
    }
    wcscpy((wchar_t *)DateStr,__src);
  }
  else {
    ut = __aeabi_uldivmod(uVar4 + 0x2ac18000,uVar6 + 0xfe624e21 + (uint)(0xd53e7fff < uVar4),
                          10000000,0);
    ptVar1 = localtime(&ut);
    iVar7 = ptVar1->tm_min;
    iVar2 = ptVar1->tm_mday;
    iVar5 = ptVar1->tm_hour;
    uVar4 = ptVar1->tm_year + 0x76c;
    iVar3 = ptVar1->tm_mon + 1;
    if (FullMS) {
      __swprintf_chk(DateStr,MaxSize,1,0x3fffffff,&DAT_08144e48,uVar4,iVar3,iVar2,iVar5,iVar7,0);
    }
    else if (FullYear) {
      __swprintf_chk(DateStr,MaxSize,1,0x3fffffff,&DAT_08144eb8,iVar2,iVar3,uVar4,iVar5,iVar7);
    }
    else {
      __swprintf_chk(DateStr,MaxSize,1,0x3fffffff,&DAT_08144f14,iVar2,iVar3,uVar4 % 100,iVar5,iVar7)
      ;
    }
  }
  if (local_24 == __stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


