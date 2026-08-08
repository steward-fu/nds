/*
 * Ghidra decompilation
 *
 * Function : FUN_080a17b8
 * Address  : 080a17b8
 * Program  : drastic16
 */


wchar_t * FUN_080a17b8(wchar_t *param_1)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *local_10;
  wchar_t *local_c;
  
  sVar3 = wcslen(param_1);
  local_c = param_1 + sVar3 + 0x3fffffff;
  while( true ) {
    cVar2 = FUN_080a0128(*local_c);
    if ((cVar2 == '\x01') || (local_c <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    local_c = local_c + -1;
  }
  local_10 = local_c;
  while( true ) {
    iVar4 = FUN_080a0128(*local_10);
    if ((iVar4 == 0) || (local_10 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    local_10 = local_10 + -1;
  }
  while( true ) {
    if (local_10 <= param_1) {
      return local_c;
    }
    if (*local_10 == L'.') break;
    iVar4 = FUN_080a0128(*local_10);
    if (iVar4 != 0) {
      pwVar5 = (wchar_t *)FUN_080a0c2c(param_1);
      pwVar5 = wcschr(pwVar5,L'.');
      if ((pwVar5 != (wchar_t *)0x0) && (pwVar5 < local_10)) {
        local_c = local_10;
      }
      return local_c;
    }
    local_10 = local_10 + -1;
  }
  return local_c;
}


