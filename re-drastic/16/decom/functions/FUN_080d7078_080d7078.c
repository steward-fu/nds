/*
 * Ghidra decompilation
 *
 * Function : FUN_080d7078
 * Address  : 080d7078
 * Program  : drastic16
 */


void FUN_080d7078(int param_1,wchar_t *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined auStack_2050 [8204];
  char local_44;
  undefined4 local_20;
  char local_1b;
  char local_1a;
  char local_19;
  wchar_t local_18;
  char local_11;
  wchar_t local_10;
  size_t local_c;
  
  iVar2 = FUN_080db628(param_1,*param_2);
  if ((iVar2 == 0) || (*(char *)(param_1 + 0x125bd) == '\x01')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    if (param_2[1] == L'-') {
      *(undefined *)(param_1 + 0x125bd) = 1;
    }
    else {
      FUN_080d7d3c(param_1,param_2 + 1);
    }
  }
  else if (*(int *)(param_1 + 0x125c8) == 0) {
    wcsncpy((wchar_t *)(param_1 + 0x125c8),param_2,0x810);
    uVar3 = FUN_080b0d5c(*(undefined4 *)(param_1 + 0x125c8));
    *(undefined4 *)(param_1 + 0x125c8) = uVar3;
    if ((*(int *)(param_1 + 0x125c8) != 0x49) && (*(int *)(param_1 + 0x125c8) != 0x53)) {
      FUN_080b0cf8(param_1 + 0x125c8);
    }
  }
  else if (*(int *)(param_1 + 0x14608) == 0) {
    FUN_080a0620(param_1 + 0x14608,param_2,0x800);
  }
  else {
    local_c = wcslen(param_2);
    if (local_c == 0) {
      local_10 = L'\0';
    }
    else {
      local_10 = param_2[local_c + 0x3fffffff];
    }
    iVar2 = FUN_080a12f4(local_10);
    if ((iVar2 == 0) && (iVar2 = FUN_080a12c0(local_10), iVar2 == 0)) {
      local_11 = '\0';
    }
    else {
      local_11 = '\x01';
    }
    local_18 = FUN_080b0d5c(*(undefined4 *)(param_1 + 0x125c8));
    pwVar4 = wcschr(L"AFUM",local_18);
    bVar5 = pwVar4 == (wchar_t *)0x0;
    if (bVar5) {
      pwVar4 = (wchar_t *)0x0;
    }
    local_19 = (char)pwVar4;
    if (!bVar5) {
      local_19 = '\x01';
    }
    if ((local_18 == L'X') || (local_18 == L'E')) {
      local_1a = '\x01';
    }
    else {
      local_1a = '\0';
    }
    if ((local_11 == '\0') || (local_19 == '\x01')) {
      if (((local_19 == '\0') && (local_18 != L'T')) ||
         ((*param_2 == L'@' && (*(int *)(param_1 + 0x125c0) != 1)))) {
        FUN_080a3b4c(auStack_2050);
        local_1b = FUN_080c40a4(param_2,auStack_2050,0);
        if (((local_1b == '\x01') && (*(int *)(param_1 + 0x125c0) != 2)) ||
           (((*(int *)(param_1 + 0x125c0) == 1 || (*param_2 != L'@')) ||
            (cVar1 = FUN_080a1270(param_2), cVar1 == '\x01')))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          *(undefined *)(param_1 + 0x125bc) = 1;
          local_20 = *(undefined4 *)(param_1 + 0x801c);
          FUN_080dcebc(param_2 + 1,param_1 + 0x16608,0,1,local_20,1,1,1);
        }
        else if (((local_1b == '\0') || (local_44 == '\0')) ||
                ((local_1a == '\0' || (*(int *)(param_1 + 0x4018) != 0)))) {
          FUN_0809f558(param_1 + 0x16608,param_2);
        }
        else {
          FUN_080a0620(param_1 + 0x4018,param_2,0x800);
          FUN_080a1368(param_1 + 0x4018,0x800);
        }
      }
      else {
        FUN_0809f558(param_1 + 0x16608,param_2);
      }
    }
    else {
      FUN_080a0620(param_1 + 0x4018,param_2,0x800);
    }
  }
  return;
}


