/*
 * Ghidra decompilation
 *
 * Function : _Z20ParseVersionFileNamePwb
 * Address  : 080d4ec4
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int ParseVersionFileName(wchar *Name,bool Truncate)

{
  wchar_t *pwVar1;
  wchar *VerText;
  uint uVar2;
  
  pwVar1 = wcsrchr((wchar_t *)Name,L';');
  if (pwVar1 == (wchar_t *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = atoiw((wchar *)(pwVar1 + 1));
    if (Truncate) {
      *pwVar1 = L'\0';
    }
  }
  return uVar2;
}


