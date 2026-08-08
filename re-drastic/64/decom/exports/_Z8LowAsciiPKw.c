/*
 * Ghidra decompilation
 *
 * Function : _Z8LowAsciiPKw
 * Address  : 001b4cf0
 * Program  : drastic64
 */


/* LowAscii(wchar_t const*) */

undefined8 LowAscii(wchar_t *param_1)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  wVar2 = *param_1;
  if (wVar2 != L'\0') {
    pwVar1 = param_1 + 1;
    do {
      if (0x5f < (uint)(wVar2 + L'\xffffffe0')) {
        return 0;
      }
      wVar2 = *pwVar1;
      pwVar1 = pwVar1 + 1;
    } while (wVar2 != L'\0');
  }
  return 1;
}


