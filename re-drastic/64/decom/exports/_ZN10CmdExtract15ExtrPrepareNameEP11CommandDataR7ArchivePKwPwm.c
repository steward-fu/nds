/*
 * Ghidra decompilation
 *
 * Function : _ZN10CmdExtract15ExtrPrepareNameEP11CommandDataR7ArchivePKwPwm
 * Address  : 001c94a0
 * Program  : drastic64
 */


/* CmdExtract::ExtrPrepareName(CommandData*, Archive&, wchar_t const*, wchar_t*, unsigned long) */

void __thiscall
CmdExtract::ExtrPrepareName
          (CmdExtract *this,CommandData *param_1,Archive *param_2,wchar_t *param_3,wchar_t *param_4,
          ulong param_5)

{
  wchar_t wVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  int *piVar7;
  
  wcsncpyz(param_4,(wchar_t *)(param_1 + 0x4020),param_5);
  if (*(int *)(param_1 + 0x4020) != 0) {
    piVar7 = (int *)PointToLastChar((wchar_t *)(param_1 + 0x4020));
    cVar2 = IsPathDiv(*piVar7);
    if (cVar2 == '\0') {
      AddEndSlash(param_4,param_5);
    }
  }
  if (param_1[0xe5a8] != (CommandData)0x0) {
    pwVar6 = (wchar_t *)PointToName((wchar_t *)(param_2 + 0x11254));
    wcsncatz(param_4,pwVar6,param_5);
    SetExt(param_4,(wchar_t *)0x0);
    AddEndSlash(param_4,param_5);
  }
  sVar4 = wcslen((wchar_t *)(param_1 + 0x802c));
  if (sVar4 != 0) {
    sVar5 = wcslen(param_3);
    if (sVar4 < sVar5) {
      sVar5 = sVar4;
    }
    param_3 = param_3 + sVar5;
    wVar1 = *param_3;
    while (wVar1 == L'/') {
      param_3 = param_3 + 1;
      wVar1 = *param_3;
    }
    if (wVar1 == L'\0') {
      *param_4 = L'\0';
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0xc264);
  if (*(int *)(param_1 + 0x125f4) == 0x58 && iVar3 == 4) {
    cVar2 = IsDriveDiv(0x3a);
    if (cVar2 != '\0') {
      *param_4 = L'\0';
    }
    iVar3 = *(int *)(param_1 + 0xc264);
LAB_001c9574:
    if (iVar3 != 1) {
      wcsncatz(param_4,param_3,param_5);
      goto LAB_001c9594;
    }
  }
  else {
    cVar2 = '\0';
    if (*(int *)(param_1 + 0x125f4) != 0x45) goto LAB_001c9574;
  }
  pwVar6 = (wchar_t *)PointToName(param_3);
  wcsncatz(param_4,pwVar6,param_5);
LAB_001c9594:
  iVar3 = toupperw(*param_4);
  if ((cVar2 != '\0') && (param_4[1] == L'_')) {
    cVar2 = IsPathDiv(param_4[2]);
    if ((cVar2 == '\0') || (0x19 < iVar3 - 0x41U)) {
      if ((*param_4 == L'_') && (param_4[1] == L'_')) {
        *(undefined8 *)param_4 = 0x2f0000002f;
      }
    }
    else {
      param_4[1] = L':';
    }
  }
  return;
}


