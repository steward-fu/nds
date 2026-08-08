/*
 * Ghidra decompilation
 *
 * Function : FUN_080a1d7c
 * Address  : 080a1d7c
 * Program  : drastic16
 */


void FUN_080a1d7c(wchar_t *param_1,char param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  wchar_t *local_c;
  
  for (local_c = param_1; *local_c != L'\0'; local_c = local_c + 1) {
    if (param_2 == '\0') {
      uVar1 = 0xd360;
    }
    else {
      uVar1 = 0xd338;
    }
    pwVar2 = wcschr((wchar_t *)(uVar1 | 0x80e0000),*local_c);
    if ((pwVar2 != (wchar_t *)0x0) || ((param_2 != '\0' && ((uint)*local_c < 0x20)))) {
      *local_c = L'_';
    }
  }
  return;
}


