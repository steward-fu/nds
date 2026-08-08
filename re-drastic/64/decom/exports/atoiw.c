/*
 * Ghidra decompilation
 *
 * Function : atoiw
 * Address  : 001bf130
 * Program  : drastic64
 */


/* atoiw(wchar_t const*) */

long atoiw(wchar_t *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *param_1 + L'\xffffffd0';
  if (uVar2 < 10) {
    lVar1 = 0;
    do {
      param_1 = param_1 + 1;
      uVar3 = (ulong)uVar2;
      uVar2 = *param_1 + L'\xffffffd0';
      lVar1 = uVar3 + lVar1 * 10;
    } while (uVar2 < 10);
    return lVar1;
  }
  return 0;
}


