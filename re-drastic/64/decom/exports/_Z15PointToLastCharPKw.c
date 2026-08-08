/*
 * Ghidra decompilation
 *
 * Function : _Z15PointToLastCharPKw
 * Address  : 001b5c60
 * Program  : drastic64
 */


/* PointToLastChar(wchar_t const*) */

wchar_t * PointToLastChar(wchar_t *param_1)

{
  wchar_t *pwVar1;
  size_t sVar2;
  
  sVar2 = wcslen(param_1);
  pwVar1 = param_1 + (sVar2 - 1);
  if (sVar2 == 0) {
    pwVar1 = param_1;
  }
  return pwVar1;
}


