/*
 * Ghidra decompilation
 *
 * Function : FUN_080a1938
 * Address  : 080a1938
 * Program  : drastic16
 */


void FUN_080a1938(wchar_t *param_1,int param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  size_t sVar5;
  wchar_t *local_10;
  wchar_t *local_c;
  
  local_c = (wchar_t *)FUN_080a11bc(param_1);
  if (local_c == (wchar_t *)0x0) {
    FUN_080a06f0(param_1,&DAT_080ed2f8,param_2);
    local_c = (wchar_t *)FUN_080a11bc(param_1);
  }
  else {
    if ((((*(int *)((int)local_c + 4) == 0) && (sVar5 = wcslen(param_1), sVar5 < param_2 - 3U)) ||
        (iVar3 = FUN_080b0b10((int)local_c + 4,&DAT_080ed30c), iVar3 == 0)) ||
       (iVar3 = FUN_080b0b10((int)local_c + 4,&DAT_080ed2cc), iVar3 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      wcscpy((wchar_t *)((int)local_c + 4),L"rar");
    }
  }
  if (param_3 == '\x01') {
    cVar2 = FUN_080a0128(*(undefined4 *)((int)local_c + 8));
    if ((cVar2 == '\x01') &&
       (cVar2 = FUN_080a0128(*(undefined4 *)((int)local_c + 0xc)), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      wcscpy((wchar_t *)((int)local_c + 8),L"00");
    }
    else {
      for (local_c = (wchar_t *)((int)local_c + 0xc); *local_c = *local_c + 1, *local_c == 0x3a;
          local_c = local_c + -1) {
        if (local_c[-1] == 0x2e) {
          *local_c = 0x41;
          return;
        }
        *local_c = 0x30;
      }
    }
  }
  else {
    pwVar4 = (wchar_t *)FUN_080a17b8(param_1);
    do {
      local_c = pwVar4;
      *local_c = *local_c + L'\x01';
      if (*local_c != L':') {
        return;
      }
      *local_c = L'0';
      pwVar4 = local_c + -1;
      if ((pwVar4 < param_1) || (cVar2 = FUN_080a0128(*pwVar4), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    } while (!bVar1);
    sVar5 = wcslen(param_1);
    for (local_10 = param_1 + sVar5; local_10 != pwVar4; local_10 = local_10 + -1) {
      local_10[1] = *local_10;
    }
    *local_c = L'1';
  }
  return;
}


