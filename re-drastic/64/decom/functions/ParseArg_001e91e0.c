/*
 * Ghidra decompilation
 *
 * Function : ParseArg
 * Address  : 001e91e0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandData::ParseArg(wchar_t*) */

void __thiscall CommandData::ParseArg(CommandData *this,wchar_t *param_1)

{
  char cVar1;
  int iVar2;
  wchar_t wVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  bool bVar6;
  FindData aFStack_2038 [8204];
  byte local_2c;
  RarTime aRStack_28 [8];
  RarTime aRStack_20 [8];
  RarTime aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*param_1 == L'-') && (this[0x125e9] == (CommandData)0x0)) {
    if (param_1[1] == L'-') {
      this[0x125e9] = (CommandData)0x1;
    }
    else {
      ProcessSwitch(this,param_1 + 1);
    }
    goto LAB_001e9264;
  }
  if (*(int *)(this + 0x125f4) == 0) {
    wcsncpy((wchar_t *)(this + 0x125f4),param_1,0x810);
    iVar2 = toupperw(*(int *)(this + 0x125f4));
    *(int *)(this + 0x125f4) = iVar2;
    if (iVar2 != 0x49 && iVar2 != 0x53) {
      wcsupper((wchar_t *)(this + 0x125f4));
    }
    goto LAB_001e9264;
  }
  if (*(int *)(this + 0x14634) == 0) {
    wcsncpyz((wchar_t *)(this + 0x14634),param_1,0x800);
    goto LAB_001e9264;
  }
  wVar3 = L'\0';
  sVar4 = wcslen(param_1);
  if (sVar4 != 0) {
    wVar3 = param_1[sVar4 - 1];
  }
  cVar1 = IsDriveDiv(wVar3);
  if ((cVar1 == '\0') && (cVar1 = IsPathDiv(wVar3), cVar1 == '\0')) {
    wVar3 = toupperw(*(int *)(this + 0x125f4));
    pwVar5 = wcschr(L"AFUM",wVar3);
    bVar6 = wVar3 == L'E' || wVar3 == L'X';
    if (wVar3 == L'T' || pwVar5 != (wchar_t *)0x0) goto LAB_001e92fc;
LAB_001e939c:
    RarTime::RarTime(aRStack_28);
    RarTime::RarTime(aRStack_20);
    RarTime::RarTime(aRStack_18);
    cVar1 = FindFile::FastFind(param_1,aFStack_2038,false);
    if (cVar1 == '\0') {
      if (((*(int *)(this + 0x125ec) != 1) && (*param_1 == L'@')) &&
         (cVar1 = IsWildcard(param_1), cVar1 == '\0')) goto LAB_001e9460;
    }
    else {
      if (((*(int *)(this + 0x125ec) == 2) && (*param_1 == L'@')) &&
         (cVar1 = IsWildcard(param_1), cVar1 == '\0')) {
LAB_001e9460:
        this[0x125e8] = (CommandData)0x1;
        ReadTextFile(param_1 + 1,(StringList *)(this + 0x16638),false,true,
                     *(RAR_CHARSET *)(this + 0x8024),true,true,true);
        goto LAB_001e9264;
      }
      if (((bVar6 & local_2c) != 0) && (*(int *)(this + 0x4020) == 0)) {
        wcsncpyz((wchar_t *)(this + 0x4020),param_1,0x800);
        AddEndSlash((wchar_t *)(this + 0x4020),0x800);
        goto LAB_001e9264;
      }
    }
  }
  else {
    wVar3 = toupperw(*(int *)(this + 0x125f4));
    pwVar5 = wcschr(L"AFUM",wVar3);
    if (pwVar5 == (wchar_t *)0x0) {
      wcsncpyz((wchar_t *)(this + 0x4020),param_1,0x800);
      goto LAB_001e9264;
    }
    bVar6 = wVar3 == L'E' || wVar3 == L'X';
LAB_001e92fc:
    if ((*param_1 == L'@') && (*(int *)(this + 0x125ec) != 1)) goto LAB_001e939c;
  }
  StringList::AddString((StringList *)(this + 0x16638),param_1);
LAB_001e9264:
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,local_8 - ___stack_chk_guard,0);
}


