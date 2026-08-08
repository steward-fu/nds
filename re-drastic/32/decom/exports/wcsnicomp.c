/*
 * Ghidra decompilation
 *
 * Function : wcsnicomp
 * Address  : 080dd550
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */

int wcsnicomp(wchar *s1,wchar *s2,size_t n)

{
  wint_t wVar1;
  wint_t wVar2;
  wint_t __wc;
  
  if (n != 0) {
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
      if (__wc == 0) {
        return 0;
      }
      n = n - 1;
      s2 = s2 + 1;
      s1 = s1 + 1;
    } while (n != 0);
  }
  return n;
}


