/*
 * Ghidra decompilation
 *
 * Function : FUN_080e0b1c
 * Address  : 080e0b1c
 * Program  : drastic16
 */


uint FUN_080e0b1c(wchar_t *param_1,wchar_t *param_2,undefined param_3)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  wchar_t *__wcs;
  wchar_t *local_20;
  wchar_t *local_1c;
  
  local_20 = param_2;
  local_1c = param_1;
  while( true ) {
    iVar1 = FUN_080e0e84(*local_20,param_3);
    __wcs = local_1c + 1;
    iVar2 = FUN_080e0e84(*local_1c,param_3);
    if (iVar2 == 0x2a) break;
    if (iVar2 == 0x3f) {
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      if (iVar2 == 0) {
        return (uint)(iVar1 == 0);
      }
      if (iVar2 != iVar1) {
        if ((iVar2 == 0x2e) && (((iVar1 == 0 || (iVar1 == 0x5c)) || (iVar1 == 0x2e)))) {
          uVar5 = FUN_080e0b1c(__wcs,local_20,param_3);
          return uVar5;
        }
        return 0;
      }
    }
    local_20 = local_20 + 1;
    local_1c = __wcs;
  }
  if (*__wcs == L'\0') {
    return 1;
  }
  if (*__wcs == L'.') {
    if ((local_1c[2] == L'*') && (local_1c[3] == L'\0')) {
      return 1;
    }
    pwVar3 = wcschr(local_20,L'.');
    if (local_1c[2] == L'\0') {
      if ((pwVar3 != (wchar_t *)0x0) && (pwVar3[1] != L'\0')) {
        return 0;
      }
      return 1;
    }
    if (((pwVar3 != (wchar_t *)0x0) &&
        (pwVar4 = wcspbrk(__wcs,L"*?"), local_20 = pwVar3, pwVar4 == (wchar_t *)0x0)) &&
       (pwVar4 = wcschr(pwVar3 + 1,L'.'), pwVar4 == (wchar_t *)0x0)) {
      iVar1 = FUN_080e0dcc(local_1c + 2,pwVar3 + 1,param_3);
      return (uint)(iVar1 == 0);
    }
  }
  do {
    if (*local_20 == L'\0') {
      return 0;
    }
    iVar1 = FUN_080e0b1c(__wcs,local_20,param_3);
    local_20 = local_20 + 1;
  } while (iVar1 == 0);
  return 1;
}


