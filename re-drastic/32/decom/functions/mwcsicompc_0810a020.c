/*
 * Ghidra decompilation
 *
 * Function : mwcsicompc
 * Address  : 0810a020
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int mwcsicompc(wchar *Str1,wchar *Str2,bool ForceCase)

{
  int iVar1;
  
  if (ForceCase) {
    iVar1 = wcscmp((wchar_t *)Str1,(wchar_t *)Str2);
    return iVar1;
  }
  iVar1 = wcsicompc(Str1,Str2);
  return iVar1;
}


