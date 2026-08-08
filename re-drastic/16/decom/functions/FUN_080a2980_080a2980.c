/*
 * Ghidra decompilation
 *
 * Function : FUN_080a2980
 * Address  : 080a2980
 * Program  : drastic16
 */


void FUN_080a2980(wchar_t *param_1,int *param_2,undefined4 param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  wchar_t wVar7;
  wchar_t *pwVar8;
  bool bVar9;
  int *piStack_44f0;
  int iStack_44e8;
  int local_44e4;
  undefined4 local_44e0;
  undefined4 local_44dc;
  undefined4 local_44d8;
  undefined4 local_44d4;
  int local_44cc;
  int local_44c8;
  int aiStack_44c4 [10];
  byte abStack_449c [6];
  char acStack_4496 [6];
  char acStack_4490 [6];
  char acStack_448a [6];
  char acStack_4484 [6];
  char acStack_447e [6];
  char acStack_4478 [6];
  char acStack_4472 [6];
  char acStack_446c [6];
  char acStack_4466 [6];
  wchar_t awStack_4460 [128];
  wchar_t awStack_4260 [128];
  wchar_t awStack_4060 [2048];
  wchar_t awStack_2060 [2048];
  undefined auStack_60 [12];
  int local_54;
  int local_50;
  wchar_t *local_4c;
  wchar_t *local_48;
  wchar_t *local_44;
  int local_40;
  undefined4 *local_3c;
  uint local_38;
  int local_34;
  size_t local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  char local_13;
  char local_12;
  char local_11;
  
  local_11 = *param_2 == 0x2b;
  piStack_44f0 = param_2;
  if ((bool)local_11) {
    piStack_44f0 = param_2 + 1;
  }
  if (*piStack_44f0 == 0) {
    piStack_44f0 = (int *)&DAT_080ed388;
  }
  FUN_080a0620(awStack_4460,piStack_44f0,0x80);
  local_12 = '\0';
  local_13 = '\0';
  for (local_18 = 0; awStack_4460[local_18] != L'\0'; local_18 = local_18 + 1) {
    if ((awStack_4460[local_18] == L'{') || (awStack_4460[local_18] == L'}')) {
      wVar7 = awStack_4460[local_18];
      bVar9 = wVar7 != L'{';
      if (bVar9) {
        wVar7 = L'\0';
      }
      local_12 = (char)wVar7;
      if (!bVar9) {
        local_12 = '\x01';
      }
    }
    else if (local_12 == '\0') {
      local_34 = FUN_080b0d5c(awStack_4460[local_18]);
      if (local_34 == 0x48) {
        local_13 = '\x01';
      }
      if ((local_13 != '\0') && (local_34 == 0x4d)) {
        awStack_4460[local_18] = L'I';
      }
      if (local_34 == 0x4e) {
        local_38 = FUN_080a0400(param_3);
        local_1c = 0;
        while (iVar2 = FUN_080b0d5c(awStack_4460[local_18 + local_1c]), iVar2 == 0x4e) {
          local_1c = local_1c + 1;
        }
        if (local_1c < local_38) {
          iVar2 = local_18 + local_38;
          iVar5 = local_18 + local_1c;
          sVar3 = wcslen(awStack_4460 + local_18 + local_1c);
          wmemmove(awStack_4460 + iVar2,awStack_4460 + iVar5,sVar3 + 1);
          wmemset(awStack_4460 + local_18,L'N',local_38);
        }
        uVar6 = local_1c;
        if (local_1c < local_38) {
          uVar6 = local_38;
        }
        local_18 = local_18 + (uVar6 - 1);
        *param_4 = 1;
      }
    }
  }
  FUN_080b525c(auStack_60);
  FUN_080b5b88(auStack_60);
  FUN_080b537c(auStack_60,&iStack_44e8);
  local_3c = (undefined4 *)FUN_080a11bc(param_1);
  awStack_4060[0] = L'\0';
  if (local_3c == (undefined4 *)0x0) {
    piVar1 = (int *)FUN_080a0c2c(param_1);
    if (*piVar1 == 0) {
      uVar6 = 0xd2f8;
    }
    else {
      uVar6 = 0xd3c4;
    }
    wcscpy(awStack_4060,(wchar_t *)(uVar6 | 0x80e0000));
  }
  else {
    FUN_080a0620(awStack_4060,local_3c,0x800);
    *local_3c = 0;
  }
  if (local_44cc == 0) {
    local_40 = 6;
  }
  else {
    local_40 = local_44cc + -1;
  }
  local_20 = local_44c8 - local_40;
  if (local_20 < 0) {
    if (local_20 + 3 < 0 == SCARRY4(local_20,3)) {
      local_20 = 0;
    }
    else {
      iVar2 = FUN_080b5be4(iStack_44e8 + -1);
      if (iVar2 == 0) {
        iVar2 = 0x16d;
      }
      else {
        iVar2 = 0x16e;
      }
      local_20 = local_20 + iVar2;
    }
  }
  local_24 = local_20 / 7 + 1;
  if (3 < local_20 % 7) {
    local_24 = local_20 / 7 + 2;
  }
  sprintf((char *)abStack_449c,"%04d",iStack_44e8);
  sprintf(acStack_4496,"%02d",local_44e4);
  sprintf(acStack_4490,"%02d",local_44e0);
  sprintf(acStack_448a,"%02d",local_44dc);
  sprintf(acStack_4484,"%02d",local_44d8);
  sprintf(acStack_447e,"%02d",local_44d4);
  sprintf(acStack_4478,"%02d",local_24);
  sprintf(acStack_4472,"%d",local_40 + 1);
  sprintf(acStack_446c,"%03d",local_44c8 + 1);
  sprintf(acStack_4466,"%05d",param_3);
  local_44 = L"YMDHISWAEN";
  memset(aiStack_44c4,0,0x28);
  local_12 = '\0';
  for (local_28 = 0; awStack_4460[local_28] != L'\0'; local_28 = local_28 + 1) {
    if ((awStack_4460[local_28] == L'{') || (awStack_4460[local_28] == L'}')) {
      wVar7 = awStack_4460[local_28];
      bVar9 = wVar7 != L'{';
      if (bVar9) {
        wVar7 = L'\0';
      }
      local_12 = (char)wVar7;
      if (!bVar9) {
        local_12 = '\x01';
      }
    }
    else if (local_12 == '\0') {
      wVar7 = FUN_080b0d5c(awStack_4460[local_28]);
      local_48 = wcschr(local_44,wVar7);
      if (local_48 != (wchar_t *)0x0) {
        iVar2 = (int)local_48 - (int)local_44 >> 2;
        aiStack_44c4[iVar2] = aiStack_44c4[iVar2] + 1;
      }
    }
  }
  awStack_4260[0] = L'\0';
  local_12 = '\0';
  local_2c = 0;
  local_30 = 0;
  do {
    if ((awStack_4460[local_2c] == L'\0') || (0x7e < local_30)) {
      if (local_11 == '\0') {
        wcscat(param_1,awStack_4260);
      }
      else {
        FUN_080a14cc(param_1,awStack_2060,0x800);
        FUN_080a1368(awStack_2060,0x800);
        FUN_080a06f0(awStack_2060,awStack_4260,0x800);
        uVar4 = FUN_080a0c2c(param_1);
        FUN_080a06f0(awStack_2060,uVar4,0x800);
        wcscpy(param_1,awStack_2060);
      }
      wcscat(param_1,awStack_4060);
      return;
    }
    if ((awStack_4460[local_2c] == L'{') || (awStack_4460[local_2c] == L'}')) {
      wVar7 = awStack_4460[local_2c];
      bVar9 = wVar7 != L'{';
      if (bVar9) {
        wVar7 = L'\0';
      }
      local_12 = (char)wVar7;
      if (!bVar9) {
        local_12 = '\x01';
      }
    }
    else {
      wVar7 = FUN_080b0d5c(awStack_4460[local_2c]);
      local_4c = wcschr(local_44,wVar7);
      if ((local_4c == (wchar_t *)0x0) || (local_12 != '\0')) {
        awStack_4260[local_30] = awStack_4460[local_2c];
      }
      else {
        local_50 = (int)local_4c - (int)local_44 >> 2;
        sVar3 = strlen((char *)(abStack_449c + local_50 * 6));
        local_54 = aiStack_44c4[local_50];
        aiStack_44c4[local_50] = local_54 + -1;
        local_54 = sVar3 - local_54;
        if (((local_50 == 1) && (iVar2 = FUN_080b0d5c(awStack_4460[local_2c + 1]), iVar2 == 0x4d))
           && (iVar2 = FUN_080b0d5c(awStack_4460[local_2c + 2]), iVar2 == 0x4d)) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        if (bVar9) {
          pwVar8 = awStack_4260 + local_30;
          uVar4 = FUN_080b5bbc(local_44e4 + -1);
          FUN_080a0620(pwVar8,uVar4,0x80 - local_30);
          local_30 = wcslen(awStack_4260);
          local_2c = local_2c + 2;
          goto LAB_080a3720;
        }
        if (local_54 < 0) {
          awStack_4260[local_30] = awStack_4460[local_2c];
        }
        else {
          awStack_4260[local_30] = (uint)abStack_449c[local_54 + local_50 * 6];
        }
      }
      local_30 = local_30 + 1;
      awStack_4260[local_30] = L'\0';
    }
LAB_080a3720:
    local_2c = local_2c + 1;
  } while( true );
}


