/*
 * Ghidra decompilation
 *
 * Function : FUN_080e0618
 * Address  : 080e0618
 * Program  : drastic16
 */


uint FUN_080e0618(wchar_t *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  wchar_t awStack_401c [2048];
  undefined auStack_201c [8192];
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  size_t local_10;
  byte local_9;
  
  local_9 = (byte)(param_3 >> 0x1f);
  param_3 = param_3 & 0xffff;
  if (param_3 == 0) goto LAB_080e0a38;
  local_10 = wcslen(param_1);
  if (((param_3 == 2) || (param_3 == 3)) ||
     (iVar2 = FUN_080e0e24(param_1,param_2,local_10,local_9), iVar2 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) &&
     (((local_14 = *(int *)(param_2 + local_10 * 4), local_14 == 0x5c || (local_14 == 0x2f)) ||
      (local_14 == 0)))) {
    return 1;
  }
  if (param_3 == 1) {
    return 0;
  }
  FUN_080a14cc(param_1,awStack_401c,0x800);
  FUN_080a14cc(param_2,auStack_201c,0x800);
  if (((param_3 == 2) || (param_3 == 3)) &&
     (iVar2 = FUN_080e0dcc(awStack_401c,auStack_201c,local_9), iVar2 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  if ((param_3 != 4) && (param_3 != 5)) goto LAB_080e0a38;
  iVar2 = FUN_080a1270(awStack_401c);
  if (iVar2 != 0) {
    uVar3 = FUN_080e0b1c(param_1,param_2,local_9);
    return uVar3;
  }
  if ((param_3 == 4) || (iVar2 = FUN_080a1270(param_1), iVar2 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    iVar2 = FUN_080e0dcc(awStack_401c,auStack_201c,local_9);
    if (iVar2 != 0) {
      return 0;
    }
    goto LAB_080e0a38;
  }
  if (awStack_401c[0] == L'\0') {
LAB_080e09d4:
    bVar1 = false;
  }
  else {
    sVar4 = wcslen(awStack_401c);
    iVar2 = FUN_080e0e24(awStack_401c,auStack_201c,sVar4,local_9);
    if (iVar2 == 0) goto LAB_080e09d4;
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
LAB_080e0a38:
  local_18 = FUN_080a0c2c(param_1);
  local_1c = FUN_080a0c2c(param_2);
  iVar2 = FUN_080e0e24(&DAT_080eef70,local_1c,6,0);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else if (param_3 == 2) {
    iVar2 = FUN_080e0dcc(local_18,local_1c,local_9);
    uVar3 = (uint)(iVar2 == 0);
  }
  else {
    uVar3 = FUN_080e0b1c(local_18,local_1c,local_9);
  }
  return uVar3;
}


