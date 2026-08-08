/*
 * Ghidra decompilation
 *
 * Function : FUN_080a0d48
 * Address  : 080a0d48
 * Program  : drastic16
 */


wchar_t * FUN_080a0d48(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t awStack_201c [2048];
  wchar_t *local_1c;
  wchar_t *local_18;
  wchar_t *local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  
  local_c = param_1;
  for (local_10 = param_1; *local_10 != L'\0'; local_10 = local_10 + 1) {
    iVar2 = FUN_080a12c0(*local_10);
    if ((((iVar2 == 0) || (local_10[1] != L'.')) || (local_10[2] != L'.')) ||
       (iVar2 = FUN_080a12c0(local_10[3]), iVar2 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_c = local_10 + 4;
    }
  }
  while (*local_c != L'\0') {
    local_14 = local_c;
    if ((*local_c == L'\0') || (iVar2 = FUN_080a12f4(local_c[1]), iVar2 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_14 = local_14 + 2;
    }
    if ((*local_14 == L'\\') && (local_14[1] == L'\\')) {
      local_18 = wcschr(local_14 + 2,L'\\');
      if ((local_18 == (wchar_t *)0x0) ||
         (local_18 = wcschr(local_18 + 1,L'\\'), local_18 == (wchar_t *)0x0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_14 = local_18 + 1;
      }
    }
    for (local_1c = local_14; *local_1c != L'\0'; local_1c = local_1c + 1) {
      iVar2 = FUN_080a12c0(*local_1c);
      if (iVar2 == 0) {
        if (*local_1c != L'.') break;
      }
      else {
        local_14 = local_1c + 1;
      }
    }
    if (local_14 == local_c) break;
    local_c = local_14;
  }
  if (((*local_c == L'.') && (local_c[1] == L'.')) && (local_c[2] == L'\0')) {
    local_c = local_c + 2;
  }
  if (param_2 != (wchar_t *)0x0) {
    FUN_080a0620(awStack_201c,local_c,0x800);
    wcscpy(param_2,awStack_201c);
  }
  return local_c;
}


