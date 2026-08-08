/*
 * Ghidra decompilation
 *
 * Function : wcsicomp
 * Address  : 080dd4d0
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int wcsicomp(wchar *s1,wchar *s2)

{
  wint_t wVar1;
  wint_t wVar2;
  wint_t __wc;
  
  do {
    __wc = *s1;
    wVar1 = towupper(__wc);
    wVar2 = towupper(*s2);
    if (wVar1 != wVar2) {
      if (s2 <= s1) {
        return 1;
      }
      return -1;
    }
    s2 = s2 + 1;
    s1 = s1 + 1;
  } while (__wc != 0);
  return 0;
}


