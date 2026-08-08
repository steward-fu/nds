/*
 * Ghidra decompilation
 *
 * Function : FUN_080db038
 * Address  : 080db038
 * Program  : drastic16
 */


void FUN_080db038(int param_1)

{
  bool bVar1;
  char cVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined4 uVar5;
  undefined auStack_a58c [92];
  undefined auStack_a530 [8240];
  undefined auStack_8500 [34036];
  undefined *local_c;
  
  local_c = &DAT_080eeadc;
  if ((((*(int *)(param_1 + 0x125c8) != 0) && (*(int *)(param_1 + 0x125cc) != 0)) &&
      (pwVar3 = wcschr(L"FUADPXETK",*(wchar_t *)(param_1 + 0x125c8)), pwVar3 != (wchar_t *)0x0)) ||
     (*(int *)(param_1 + 0x14608) == 0)) {
    if (*(int *)(param_1 + 0x125c8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 7;
    }
    FUN_080da788(param_1,uVar5);
  }
  iVar4 = FUN_080a11bc(param_1 + 0x14608);
  if (iVar4 == 0) {
    cVar2 = FUN_080a5704(param_1 + 0x14608);
    if (cVar2 == '\x01') {
      uVar5 = FUN_080a59f4(param_1 + 0x14608);
      iVar4 = FUN_080a5890(uVar5);
      if (iVar4 == 0) goto LAB_080db1ec;
    }
    bVar1 = true;
  }
  else {
LAB_080db1ec:
    bVar1 = false;
  }
  if (bVar1) {
    FUN_080a06f0(param_1 + 0x14608,&DAT_080eeb04,0x800);
  }
  pwVar3 = wcschr(L"AFUMD",*(wchar_t *)(param_1 + 0x125c8));
  if (pwVar3 == (wchar_t *)0x0) {
    if (*(char *)(param_1 + 0xc29f) != '\0') {
      FUN_080a389c(param_1 + 0x14608,0x800,param_1 + 0xc2a0,0);
    }
    FUN_0809f41c(auStack_a58c);
    FUN_0809f558(auStack_a58c,param_1 + 0x14608);
    FUN_080dd8f0(auStack_8500,auStack_a58c,*(undefined4 *)(param_1 + 0xc260),
                 *(undefined *)(param_1 + 0xc291),0);
    FUN_080a3b4c(auStack_a530);
    while (iVar4 = FUN_080dda64(auStack_8500,auStack_a530), iVar4 == 0) {
      FUN_080db5b0(param_1,auStack_a530);
    }
    FUN_080dd9e0(auStack_8500);
    FUN_0809ee6c(auStack_a58c);
  }
  else {
    FUN_080db5b0(param_1,param_1 + 0x14608);
  }
  switch(*(undefined4 *)(param_1 + 0x125c8)) {
  case 0x45:
  case 0x49:
  case 0x50:
  case 0x54:
  case 0x58:
    FUN_080be130(auStack_8500,param_1);
    FUN_080be2f8(auStack_8500,param_1);
    FUN_080be260(auStack_8500);
  }
  if (*(char *)(param_1 + 0x125c4) != '\x01') {
    FUN_080a6080(&DAT_080ee90c);
  }
  return;
}


