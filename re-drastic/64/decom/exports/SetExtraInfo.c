/*
 * Ghidra decompilation
 *
 * Function : SetExtraInfo
 * Address  : 001f0950
 * Program  : drastic64
 */


/* SetExtraInfo(CommandData*, Archive&, wchar_t*) */

void SetExtraInfo(CommandData *param_1,Archive *param_2,wchar_t *param_3)

{
  int iVar1;
  
  if (param_1[0xc2a8] == (CommandData)0x0) {
    return;
  }
  if ((*(int *)(param_2 + 0x11208) == 2) &&
     (iVar1 = wcscmp((wchar_t *)(param_2 + 0xcae8),L"UOW"), iVar1 == 0)) {
    ExtractUnixOwner30(param_2,param_3);
    return;
  }
  return;
}


