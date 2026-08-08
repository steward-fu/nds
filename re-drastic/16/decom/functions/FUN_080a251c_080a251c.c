/*
 * Ghidra decompilation
 *
 * Function : FUN_080a251c
 * Address  : 080a251c
 * Program  : drastic16
 */


undefined4 FUN_080a251c(wchar_t *param_1,char param_2)

{
  wchar_t *pwVar1;
  undefined4 local_c;
  
  local_c = 0;
  pwVar1 = wcsrchr(param_1,L';');
  if ((pwVar1 != (wchar_t *)0x0) && (local_c = FUN_080b0db4(pwVar1 + 1), param_2 != '\0')) {
    *pwVar1 = L'\0';
  }
  return local_c;
}


