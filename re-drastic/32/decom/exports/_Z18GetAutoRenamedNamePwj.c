/*
 * Ghidra decompilation
 *
 * Function : _Z18GetAutoRenamedNamePwj
 * Address  : 08109fcc
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

bool GetAutoRenamedName(wchar *Name,size_t MaxNameSize)

{
  bool bVar1;
  size_t sVar2;
  
  sVar2 = wcslen((wchar_t *)Name);
  if (0x7f6 < sVar2) {
    return false;
  }
  bVar1 = GetAutoRenamedName(Name,MaxNameSize);
  return bVar1;
}


