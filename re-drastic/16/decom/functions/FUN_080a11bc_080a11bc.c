/*
 * Ghidra decompilation
 *
 * Function : FUN_080a11bc
 * Address  : 080a11bc
 * Program  : drastic16
 */


wchar_t * FUN_080a11bc(int param_1)

{
  wchar_t *pwVar1;
  
  if (param_1 == 0) {
    pwVar1 = (wchar_t *)0x0;
  }
  else {
    pwVar1 = (wchar_t *)FUN_080a0c2c(param_1);
    pwVar1 = wcsrchr(pwVar1,L'.');
  }
  return pwVar1;
}


