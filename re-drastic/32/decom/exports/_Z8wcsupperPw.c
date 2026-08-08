/*
 * Ghidra decompilation
 *
 * Function : _Z8wcsupperPw
 * Address  : 080dd62c
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

wchar * wcsupper(wchar *s)

{
  wchar *c;
  wchar *pwVar1;
  wchar **ppwVar2;
  
  c = (wchar *)*s;
  ppwVar2 = (wchar **)s;
  while (c != (wchar *)0x0) {
    pwVar1 = (wchar *)towupper((wint_t)c);
    *ppwVar2 = pwVar1;
    ppwVar2 = ppwVar2 + 1;
    c = *ppwVar2;
  }
  return s;
}


