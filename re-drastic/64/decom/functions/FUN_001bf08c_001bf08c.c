/*
 * Ghidra decompilation
 *
 * Function : FUN_001bf08c
 * Address  : 001bf08c
 * Program  : drastic64
 */


wint_t * FUN_001bf08c(wint_t *param_1)

{
  wint_t wVar1;
  wint_t *pwVar2;
  
  wVar1 = *param_1;
  pwVar2 = param_1;
  while (wVar1 != 0) {
    wVar1 = towlower(wVar1);
    *pwVar2 = wVar1;
    pwVar2 = pwVar2 + 1;
    wVar1 = *pwVar2;
  }
  return param_1;
}


