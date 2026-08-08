/*
 * Ghidra decompilation
 *
 * Function : FUN_080dddd8
 * Address  : 080dddd8
 * Program  : drastic16
 */


undefined4 FUN_080dddd8(int param_1,wchar_t *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  size_t sVar7;
  undefined4 uVar8;
  wchar_t awStack_4028 [2048];
  wchar_t wStack_2028;
  wchar_t awStack_2024 [2047];
  char local_25;
  wchar_t *local_24;
  wchar_t *local_20;
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  undefined4 local_18;
  char local_11;
  
  if (*(int *)(param_1 + 0x1020) == 0) {
    uVar8 = 3;
  }
  else {
    local_11 = '\0';
    if (*(int *)(param_1 + *(int *)(param_1 + 0x1000) * 4) == 0) {
      local_19 = FUN_080a1270(param_1 + 0x1020);
      if ((local_19 == '\x01') ||
         (iVar3 = FUN_080c40a4(param_1 + 0x1020,param_2,*(undefined *)(param_1 + 0x1010)),
         iVar3 == 0)) {
        local_1a = '\0';
      }
      else {
        local_1a = '\x01';
      }
      if (((local_1a == '\0') || (*(char *)(param_2 + 0x803) == '\0')) ||
         ((*(char *)(param_1 + 0x1010) == '\x01' && (*(char *)((int)param_2 + 0x200d) == '\x01'))))
      {
        local_1b = '\0';
      }
      else {
        local_1b = '\x01';
      }
      if ((local_1b == '\x01') ||
         (((*(int *)(param_1 + 0x1000) < 1 && (*(int *)(param_1 + 0x100c) != 2)) &&
          (((local_19 == '\0' || (*(int *)(param_1 + 0x100c) != 3)) &&
           ((*(char *)(param_1 + 0x101c) == '\0' || (*(int *)(param_1 + 0x100c) == 1)))))))) {
        local_1c = '\0';
      }
      else {
        local_1c = '\x01';
      }
      if (*(int *)(param_1 + 0x1000) == 0) {
        *(char *)(param_1 + 0x5020) = local_1c;
      }
      if ((local_1c == '\0') && (local_19 == '\0')) {
        if (((local_1a != '\x01') || (local_1b != '\x01')) || (*(int *)(param_1 + 0x100c) == 1)) {
          local_18 = 0;
          if (local_1a != '\x01') {
            if (*(char *)(param_2 + 0x80b) == '\0') {
              local_18 = 3;
            }
            else {
              local_18 = 2;
            }
            if ((*(int *)(param_1 + 0x7028) == 0) ||
               (iVar3 = FUN_080da7a8(*(undefined4 *)(param_1 + 0x7028),param_1 + 0x1020,0,1,1),
               iVar3 == 0)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              local_18 = 3;
            }
            else {
              FUN_080b70ec(&DAT_081cd0a0,param_1 + 0x5028,param_1 + 0x1020);
            }
          }
          *(undefined4 *)(param_1 + 0x1020) = 0;
          return local_18;
        }
        local_11 = '\x01';
      }
      else {
        pvVar4 = operator_new(0x2008);
        FUN_080c3a24(pvVar4);
        *(void **)(param_1 + *(int *)(param_1 + 0x1000) * 4) = pvVar4;
        FUN_080a0620(&wStack_2028,param_1 + 0x1020,0x800);
        if (local_1c != '\0') {
          FUN_080a1068(&wStack_2028,&DAT_080eed64,0x800);
        }
        FUN_080c3abc(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x1000) * 4),&wStack_2028);
      }
    }
    if ((local_11 == '\x01') ||
       (cVar2 = FUN_080c3af8(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x1000) * 4),param_2,
                             *(undefined *)(param_1 + 0x1010)), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_25 = *(char *)(param_2 + 0x80b);
      if (local_25 != '\0') {
        FUN_080decb0(param_1,&local_25);
      }
      awStack_4028[0] = L'\0';
      pvVar4 = *(void **)(param_1 + *(int *)(param_1 + 0x1000) * 4);
      if (pvVar4 != (void *)0x0) {
        FUN_080c3a74(pvVar4);
        operator_delete(pvVar4);
      }
      iVar3 = *(int *)(param_1 + 0x1000);
      *(int *)(param_1 + 0x1000) = iVar3 + -1;
      *(undefined4 *)(param_1 + iVar3 * 4) = 0;
      while ((-1 < *(int *)(param_1 + 0x1000) &&
             (*(int *)(param_1 + *(int *)(param_1 + 0x1000) * 4) == 0))) {
        *(int *)(param_1 + 0x1000) = *(int *)(param_1 + 0x1000) + -1;
      }
      if (*(int *)(param_1 + 0x1000) < 0) {
        if (local_25 != '\0') {
          *(int *)(param_1 + 0x1018) = *(int *)(param_1 + 0x1018) + 1;
        }
        uVar8 = 1;
      }
      else {
        local_20 = wcsrchr((wchar_t *)(param_1 + 0x1020),L'/');
        if (local_20 != (wchar_t *)0x0) {
          wcscpy(&wStack_2028,local_20);
          if (*(int *)(param_1 + 0x1000) < *(int *)(param_1 + 0x1004)) {
            pwVar5 = (wchar_t *)FUN_080a0c2c(param_1 + 0x3020);
            wcscpy(awStack_2024,pwVar5);
          }
          *local_20 = L'\0';
          wcscpy(awStack_4028,(wchar_t *)(param_1 + 0x1020));
          local_24 = wcsrchr((wchar_t *)(param_1 + 0x1020),L'/');
          if (local_24 == (wchar_t *)0x0) {
            wcscpy((wchar_t *)(param_1 + 0x1020),awStack_2024);
          }
          else {
            wcscpy(local_24,&wStack_2028);
          }
        }
        if (((*(int *)(param_1 + 0x1014) == 2) &&
            (iVar3 = FUN_080c40a4(awStack_4028,param_2,*(undefined *)(param_1 + 0x1010)), iVar3 != 0
            )) && (*(char *)(param_2 + 0x803) != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          param_2[0x80a] = param_2[0x80a] | 1;
          if (local_25 == '\0') {
            uVar8 = 0;
          }
          else {
            uVar8 = 2;
          }
        }
        else if (local_25 == '\0') {
          uVar8 = 3;
        }
        else {
          uVar8 = 2;
        }
      }
    }
    else {
      if ((*(char *)(param_2 + 0x803) != '\0') &&
         ((*(char *)(param_1 + 0x1010) != '\x01' || (*(char *)((int)param_2 + 0x200d) != '\x01'))))
      {
        if ((local_11 != '\x01') &&
           ((*(int *)(param_1 + 0x1000) == 0 && (*(char *)(param_1 + 0x5020) != '\x01')))) {
          if (*(int *)(param_1 + 0x1014) == 3) {
            return 0;
          }
          return 3;
        }
        if ((*(int *)(param_1 + 0x7028) == 0) ||
           ((iVar3 = FUN_080da7a8(*(undefined4 *)(param_1 + 0x7028),param_2,1,0,0), iVar3 == 0 &&
            (iVar3 = FUN_080dac34(*(undefined4 *)(param_1 + 0x7028),param_2[0x802]), iVar3 == 0))))
        {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (local_11 != '\0') {
            return 1;
          }
          return 3;
        }
        if (local_11 == '\0') {
          pwVar5 = (wchar_t *)FUN_080a0c2c(param_1 + 0x1020);
        }
        else {
          pwVar5 = L"*";
        }
        wcscpy(&wStack_2028,pwVar5);
        wcscpy((wchar_t *)(param_1 + 0x1020),param_2);
        sVar6 = wcslen((wchar_t *)(param_1 + 0x1020));
        sVar7 = wcslen(&wStack_2028);
        if ((0x7ff < sVar6 + sVar7 + 1) || (0x3fe < *(int *)(param_1 + 0x1000))) {
          return 2;
        }
        FUN_080a1368(param_1 + 0x1020,0x800);
        FUN_080a06f0(param_1 + 0x1020,&wStack_2028,0x800);
        *(int *)(param_1 + 0x1000) = *(int *)(param_1 + 0x1000) + 1;
        if (local_11 != '\0') {
          *(undefined4 *)(param_1 + 0x1004) = *(undefined4 *)(param_1 + 0x1000);
        }
      }
      if ((local_11 == '\x01') ||
         (cVar2 = FUN_080e0618(param_1 + 0x1020,param_2,0), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar8 = 3;
      }
      else {
        uVar8 = 0;
      }
    }
  }
  return uVar8;
}


