/*
 * Ghidra decompilation
 *
 * Function : MakeNameUsable
 * Address  : 080d4920
 * Program  : drastic
 */


/* WARNING: Unknown calling convention */
/* Local variable s:wchar *[r0:4] conflicts with parameter, skipped. */

void MakeNameUsable(wchar *Name,bool Extended)

{
  wchar_t *pwVar1;
  wchar_t __wc;
  
  __wc = *Name;
  if (__wc != L'\0') {
    if (Extended) {
      do {
        pwVar1 = wcschr(L"?*<>|\"",__wc);
        if ((pwVar1 != (wchar_t *)0x0) || ((uint)__wc < 0x20)) {
          *Name = L'_';
        }
        Name = (wchar *)((wchar_t *)Name + 1);
        __wc = *Name;
      } while (__wc != L'\0');
    }
    else {
      do {
        pwVar1 = wcschr(L"?*",__wc);
        if (pwVar1 != (wchar_t *)0x0) {
          *Name = L'_';
        }
        Name = (wchar *)((wchar_t *)Name + 1);
        __wc = *Name;
      } while (__wc != L'\0');
    }
  }
  return;
}


