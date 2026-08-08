/*
 * Ghidra decompilation
 *
 * Function : _Z20ParseVersionFileNamePwb
 * Address  : 001b7190
 * Program  : drastic64
 */


/* ParseVersionFileName(wchar_t*, bool) */

undefined8 ParseVersionFileName(wchar_t *param_1,bool param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  
  pwVar1 = wcsrchr(param_1,L';');
  if (pwVar1 != (wchar_t *)0x0) {
    uVar2 = atoiw(pwVar1 + 1);
    if (param_2) {
      *pwVar1 = L'\0';
    }
    return uVar2;
  }
  return 0;
}


