/*
 * Ghidra decompilation
 *
 * Function : ExclCheckArgs
 * Address  : 001e9af0
 * Program  : drastic64
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CommandData::ExclCheckArgs(StringList*, bool, wchar_t const*, bool, int) */

void __thiscall
CommandData::ExclCheckArgs
          (CommandData *this,StringList *param_1,bool param_2,wchar_t *param_3,bool param_4,
          int param_5)

{
  char cVar1;
  undefined8 *puVar2;
  int *piVar3;
  wchar_t *pwVar4;
  undefined8 *puVar5;
  wchar_t local_6018 [2048];
  wchar_t local_4018;
  int local_4014;
  undefined8 local_2010;
  wchar_t awStack_2008 [2048];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)ConvertPath(param_3,(wchar_t *)0x0);
  local_6018[0] = L'\0';
  StringList::Rewind();
LAB_001e9b80:
  do {
    cVar1 = StringList::GetString(param_1,&local_4018,0x800);
    if (cVar1 == '\0') goto LAB_001e9bf0;
    piVar3 = (int *)PointToLastChar(&local_4018);
    cVar1 = IsPathDiv(*piVar3);
    if (param_2) {
      if (cVar1 == '\0') {
        pwVar4 = (wchar_t *)PointToName(&local_4018);
        cVar1 = IsWildcard(pwVar4);
        if (cVar1 != '\0') goto LAB_001e9b80;
      }
      else {
        *piVar3 = 0;
      }
LAB_001e9bbc:
      if (!param_4) goto LAB_001e9bc0;
LAB_001e9c48:
      cVar1 = IsFullPath(&local_4018);
      if (cVar1 == '\0') goto LAB_001e9bc0;
      if (local_6018[0] == L'\0') {
        ConvertNameToFull(param_3,local_6018,0x800);
      }
      cVar1 = CmpName(&local_4018,local_6018,param_5);
    }
    else {
      if (cVar1 == '\0') goto LAB_001e9bbc;
      __wcscat_chk(&local_4018,&DAT_002286e8,0x801);
      if (param_4) goto LAB_001e9c48;
LAB_001e9bc0:
      puVar5 = puVar2;
      if ((local_4018 == L'*') && (cVar1 = IsPathDiv(local_4014), cVar1 != '\0')) {
        local_2010 = 0x2f0000002e;
        wcsncpyz(awStack_2008,(wchar_t *)puVar2,0x800);
        puVar5 = &local_2010;
      }
      pwVar4 = (wchar_t *)ConvertPath(&local_4018,(wchar_t *)0x0);
      cVar1 = CmpName(pwVar4,(wchar_t *)puVar5,param_5);
    }
    if (cVar1 != '\0') {
LAB_001e9bf0:
      if (local_8 - ___stack_chk_guard == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1,local_8 - ___stack_chk_guard,0);
    }
  } while( true );
}


