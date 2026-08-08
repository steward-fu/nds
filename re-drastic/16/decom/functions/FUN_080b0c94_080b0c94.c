/*
 * Ghidra decompilation
 *
 * Function : FUN_080b0c94
 * Address  : 080b0c94
 * Program  : drastic16
 */


wint_t * FUN_080b0c94(wint_t *param_1)

{
  wint_t wVar1;
  wint_t *local_c;
  
  for (local_c = param_1; *local_c != 0; local_c = local_c + 1) {
    wVar1 = towlower(*local_c);
    *local_c = wVar1;
  }
  return param_1;
}


