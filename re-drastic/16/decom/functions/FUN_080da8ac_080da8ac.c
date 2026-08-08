/*
 * Ghidra decompilation
 *
 * Function : FUN_080da8ac
 * Address  : 080da8ac
 * Program  : drastic16
 */


undefined4
FUN_080da8ac(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4,char param_5,
            undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int aiStack_6024 [2048];
  wchar_t wStack_4024;
  undefined4 local_4020;
  undefined4 uStack_2020;
  undefined4 local_201c;
  undefined auStack_2018 [8195];
  char local_15;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  
  local_10 = (undefined4 *)FUN_080a0d48(param_4,0);
  aiStack_6024[0] = 0;
  FUN_0809f8d8(param_2);
LAB_080dabdc:
  iVar3 = FUN_0809f6c4(param_2,&wStack_4024,0x800);
  if (iVar3 == 0) {
    return 0;
  }
  local_14 = (undefined4 *)FUN_080a0cf8(&wStack_4024);
  local_15 = FUN_080a12c0(*local_14);
  if (param_3 == '\0') {
    if (local_15 != '\0') {
      wcscat(&wStack_4024,L"*");
    }
  }
  else if (local_15 == '\0') {
    uVar2 = FUN_080a0c2c(&wStack_4024);
    iVar3 = FUN_080a1270(uVar2);
    if (iVar3 != 0) goto LAB_080dabdc;
  }
  else {
    *local_14 = 0;
  }
  if ((param_5 == '\0') || (iVar3 = FUN_080a2330(&wStack_4024), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if (aiStack_6024[0] == 0) {
      FUN_080a223c(param_4,aiStack_6024,0x800);
    }
    iVar3 = FUN_080e0618(&wStack_4024,aiStack_6024,param_6);
    if (iVar3 != 0) {
      return 1;
    }
  }
  else {
    local_c = local_10;
    if ((wStack_4024 == L'*') && (iVar3 = FUN_080a12c0(local_4020), iVar3 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uStack_2020 = 0x2e;
      local_201c = 0x2f;
      FUN_080a0620(auStack_2018,local_10,0x800);
      local_c = &uStack_2020;
    }
    uVar2 = FUN_080a0d48(&wStack_4024,0);
    iVar3 = FUN_080e0618(uVar2,local_c,param_6);
    if (iVar3 != 0) {
      return 1;
    }
  }
  goto LAB_080dabdc;
}


