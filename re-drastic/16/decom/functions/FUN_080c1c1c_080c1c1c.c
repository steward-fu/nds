/*
 * Ghidra decompilation
 *
 * Function : FUN_080c1c1c
 * Address  : 080c1c1c
 * Program  : drastic16
 */


void FUN_080c1c1c(undefined4 param_1,int param_2,int param_3,wchar_t *param_4,int *param_5,
                 undefined4 param_6)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  size_t sVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  wchar_t *local_30;
  
  FUN_080a0620(param_5,param_2 + 0x4018,param_6);
  if (*(int *)(param_2 + 0x4018) != 0) {
    puVar2 = (undefined4 *)FUN_080a0cf8(param_2 + 0x4018);
    cVar1 = FUN_080a12c0(*puVar2);
    if (cVar1 != '\x01') {
      bVar8 = true;
      goto LAB_080c1cac;
    }
  }
  bVar8 = false;
LAB_080c1cac:
  if (bVar8) {
    FUN_080a1368(param_5,param_6);
  }
  if (*(char *)(param_2 + 0xe590) != '\0') {
    uVar3 = FUN_080a0c2c(param_3 + 0x10ee4);
    FUN_080a06f0(param_5,uVar3,param_6);
    FUN_080a10c0(param_5,0);
    FUN_080a1368(param_5,param_6);
  }
  sVar4 = wcslen((wchar_t *)(param_2 + 0x8024));
  local_30 = param_4;
  if (sVar4 != 0) {
    sVar5 = wcslen(param_4);
    if (sVar4 < sVar5) {
      sVar5 = sVar4;
    }
    for (local_30 = param_4 + sVar5; *local_30 == L'/'; local_30 = local_30 + 1) {
    }
    if (*local_30 == L'\0') {
      *param_5 = 0;
      return;
    }
  }
  iVar9 = *(int *)(param_2 + 0x125c8);
  if (((*(int *)(param_2 + 0xc25c) == 4) && (iVar9 == 0x58)) &&
     (iVar6 = FUN_080a12f4(0x3a), iVar6 != 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    *param_5 = 0;
  }
  if ((iVar9 == 0x45) || (*(int *)(param_2 + 0xc25c) == 1)) {
    uVar3 = FUN_080a0c2c(local_30);
    FUN_080a06f0(param_5,uVar3,param_6);
  }
  else {
    FUN_080a06f0(param_5,local_30,param_6);
  }
  uVar7 = FUN_080b0d5c(*param_5);
  if (bVar8) {
    if (((param_5[1] == 0x5f) && (iVar9 = FUN_080a12c0(param_5[2]), iVar9 != 0)) &&
       ((0x40 < uVar7 && (uVar7 < 0x5b)))) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      param_5[1] = 0x3a;
    }
    else if ((*param_5 == 0x5f) && (param_5[1] == 0x5f)) {
      *param_5 = 0x2f;
      param_5[1] = 0x2f;
    }
  }
  return;
}


