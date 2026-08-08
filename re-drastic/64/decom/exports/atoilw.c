/*
 * Ghidra decompilation
 *
 * Function : atoilw
 * Address  : 001bf170
 * Program  : drastic64
 */


/* atoilw(wchar_t const*) */

long atoilw(wchar_t *param_1)

{
  wchar_t wVar1;
  long lVar2;
  
  lVar2 = 0;
  wVar1 = *param_1;
  while ((uint)(wVar1 + L'\xffffffd0') < 10) {
    param_1 = param_1 + 1;
    lVar2 = (ulong)(uint)(wVar1 + L'\xffffffd0') + lVar2 * 10;
    wVar1 = *param_1;
  }
  return lVar2;
}


