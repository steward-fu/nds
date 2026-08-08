/*
 * Ghidra decompilation
 *
 * Function : FUN_080dcebc
 * Address  : 080dcebc
 * Program  : drastic16
 */


undefined4
FUN_080dcebc(int param_1,undefined4 param_2,char param_3,char param_4,int param_5,char param_6,
            char param_7)

{
  byte bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char *pcVar4;
  void *__s;
  int iVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  size_t sVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int aiStack_40a0 [2048];
  undefined auStack_20a0 [8220];
  undefined auStack_84 [16];
  undefined auStack_74 [16];
  undefined auStack_64 [19];
  char local_51;
  size_t local_50;
  undefined local_49;
  size_t local_48;
  int local_44;
  undefined4 local_40;
  char local_39;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  wchar_t *local_28;
  wchar_t *local_24;
  wchar_t *local_20;
  wchar_t *local_1c;
  uint local_18;
  int local_14;
  
  aiStack_40a0[0] = 0;
  if (param_1 != 0) {
    if (param_3 == '\0') {
      FUN_080a0620(aiStack_40a0,param_1,0x800);
    }
    else {
      FUN_080a16f4(param_1,aiStack_40a0,0x800,1,0);
    }
  }
  FUN_080a3c04(auStack_20a0);
  if (aiStack_40a0[0] == 0) {
    FUN_080c2b2c(auStack_20a0,1);
  }
  else {
    if (param_4 == '\0') {
      local_39 = FUN_080a3dec(auStack_20a0,aiStack_40a0,0);
    }
    else {
      local_39 = FUN_080a4094(auStack_20a0,aiStack_40a0);
    }
    if (local_39 != '\x01') {
      if (param_4 != '\0') {
        FUN_080b71f4(&DAT_081cd0a0,6);
      }
      uVar11 = 0;
      goto LAB_080dd7a0;
    }
  }
  local_14 = 0;
  local_40 = 0x400;
  FUN_0809f148(auStack_64,0x405);
  while( true ) {
    uVar11 = FUN_0809f1c0(auStack_64,local_14);
    local_44 = FUN_080a46cc(auStack_20a0,uVar11,0x400);
    if (local_44 == 0) break;
    local_14 = local_14 + local_44;
    FUN_0809f2ec(auStack_64,local_44);
  }
  __s = (void *)FUN_0809f1c0(auStack_64,local_14);
  memset(__s,0,5);
  FUN_0809f120(auStack_74);
  if (param_5 == 3) {
LAB_080dd1d0:
    bVar2 = true;
  }
  else {
    if (param_5 == 0) {
      uVar11 = FUN_0809f1c0(auStack_64,0);
      iVar5 = FUN_080dd818(uVar11,local_14);
      if (iVar5 != 0) goto LAB_080dd1d0;
    }
    bVar2 = false;
  }
  if (bVar2) {
    uVar6 = FUN_0809f1f4(auStack_64);
    FUN_0809fb14(auStack_84,(uVar6 >> 1) + 1);
    local_18 = 2;
    while (iVar5 = FUN_0809f1f4(auStack_64), local_18 < iVar5 - 1U) {
      piVar7 = (int *)FUN_0809f21c(auStack_84,local_18 - 2 >> 1);
      pbVar8 = (byte *)FUN_0809f1c0(auStack_64,local_18);
      bVar1 = *pbVar8;
      pbVar8 = (byte *)FUN_0809f1c0(auStack_64,local_18 + 1);
      *piVar7 = (uint)bVar1 + (uint)*pbVar8 * 0x100;
      local_18 = local_18 + 2;
    }
    local_1c = (wchar_t *)FUN_0809f21c(auStack_84,0);
    while (*local_1c != L'\0') {
      local_24 = (wchar_t *)0x0;
      for (local_20 = local_1c;
          ((*local_20 != L'\r' && (*local_20 != L'\n')) && (*local_20 != L'\0'));
          local_20 = local_20 + 1) {
        if (((param_7 != '\0') && (*local_20 == L'/')) && (local_20[1] == L'/')) {
          *local_20 = L'\0';
          local_24 = local_20;
        }
      }
      *local_20 = L'\0';
      local_28 = local_20;
      if (local_24 != (wchar_t *)0x0) {
        local_28 = local_24;
      }
      while ((local_28 = local_28 + -1, local_1c <= local_28 &&
             ((*local_28 == L' ' || (*local_28 == L'\t'))))) {
        *local_28 = L'\0';
      }
      pwVar3 = local_20;
      if (*local_1c != L'\0') {
        local_48 = wcslen(local_1c);
        if (((param_6 != '\0') && (*local_1c == L'\"')) &&
           (local_1c[local_48 + 0x3fffffff] == L'\"')) {
          local_1c[local_48 + 0x3fffffff] = L'\0';
          local_1c = local_1c + 1;
        }
        local_49 = 0;
        FUN_0809f558(param_2,local_1c);
        pwVar3 = local_20;
      }
      do {
        do {
          local_1c = pwVar3 + 1;
          pwVar3 = local_1c;
        } while (*local_1c == L'\r');
      } while (*local_1c == L'\n');
    }
    FUN_0809f0e0(auStack_84);
  }
  else {
    local_2c = (char *)FUN_0809f1c0(auStack_64,0);
    while (*local_2c != '\0') {
      local_34 = (char *)0x0;
      for (local_30 = local_2c; ((*local_30 != '\r' && (*local_30 != '\n')) && (*local_30 != '\0'));
          local_30 = local_30 + 1) {
        if (((param_7 != '\0') && (*local_30 == '/')) && (local_30[1] == '/')) {
          *local_30 = '\0';
          local_34 = local_30;
        }
      }
      *local_30 = '\0';
      local_38 = local_30;
      if (local_34 != (char *)0x0) {
        local_38 = local_34;
      }
      while ((local_38 = local_38 + -1, local_2c <= local_38 &&
             ((*local_38 == ' ' || (*local_38 == '\t'))))) {
        *local_38 = '\0';
      }
      pcVar4 = local_30;
      if (*local_2c != '\0') {
        if (((param_6 != '\0') && (*local_2c == '\"')) &&
           (local_50 = strlen(local_2c), local_2c[local_50 - 1] == '\"')) {
          local_2c[local_50 - 1] = '\0';
          local_2c = local_2c + 1;
        }
        local_51 = '\0';
        sVar9 = strlen(local_2c);
        FUN_080a8888(auStack_74,sVar9 + 1);
        uVar11 = FUN_0809f21c(auStack_74,0);
        uVar10 = FUN_0809f0b8(auStack_74);
        FUN_080afc9c(local_2c,uVar11,uVar10);
        pcVar4 = local_30;
        if (local_51 != '\x01') {
          uVar11 = FUN_0809f21c(auStack_74,0);
          FUN_0809f558(param_2,uVar11);
          pcVar4 = local_30;
        }
      }
      do {
        do {
          local_2c = pcVar4 + 1;
          pcVar4 = local_2c;
        } while (*local_2c == '\r');
      } while (*local_2c == '\n');
    }
  }
  uVar11 = 1;
  FUN_0809f0e0(auStack_74);
  FUN_0809f180(auStack_64);
LAB_080dd7a0:
  FUN_080a3cc0(auStack_20a0);
  return uVar11;
}


