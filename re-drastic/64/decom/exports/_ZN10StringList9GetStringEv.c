/*
 * Ghidra decompilation
 *
 * Function : _ZN10StringList9GetStringEv
 * Address  : 001b44d0
 * Program  : drastic64
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StringList::GetString() */

wchar_t * StringList::GetString(void)

{
  wchar_t *__s;
  long *in_x0;
  size_t sVar1;
  ulong uVar2;
  
  uVar2 = in_x0[4];
  if (uVar2 < (ulong)in_x0[1]) {
    __s = (wchar_t *)(*in_x0 + uVar2 * 4);
    sVar1 = wcslen(__s);
    in_x0[4] = uVar2 + 1 + sVar1;
    return __s;
  }
  return (wchar_t *)0x0;
}


