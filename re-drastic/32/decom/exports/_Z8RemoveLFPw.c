/*
 * Ghidra decompilation
 *
 * Function : _Z8RemoveLFPw
 * Address  : 080d2278
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * RemoveLF(wchar *Str)

{
  size_t sVar1;
  wchar *pwVar2;
  int iVar3;
  
  sVar1 = wcslen((wchar_t *)Str);
  iVar3 = sVar1 - 1;
  if ((-1 < iVar3) && (Str[iVar3] == 10 || Str[iVar3] == 0xd)) {
    pwVar2 = Str + sVar1 + 0x3fffffff;
    do {
      iVar3 = iVar3 + -1;
      *pwVar2 = 0;
      if (iVar3 == -1) {
        return Str;
      }
      pwVar2 = pwVar2 + -1;
    } while (*pwVar2 == 10 || *pwVar2 == 0xd);
  }
  return Str;
}


