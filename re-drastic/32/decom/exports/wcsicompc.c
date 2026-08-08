/*
 * Ghidra decompilation
 *
 * Function : wcsicompc
 * Address  : 080d261c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int wcsicompc(wchar *Str1,wchar *Str2)

{
  int iVar1;
  
  iVar1 = wcscmp((wchar_t *)Str1,(wchar_t *)Str2);
  return iVar1;
}


