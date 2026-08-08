/*
 * Ghidra decompilation
 *
 * Function : FUN_0809e4f8
 * Address  : 0809e4f8
 * Program  : drastic16
 */


undefined4
FUN_0809e4f8(int param_1,int param_2,int param_3,int param_4,wchar_t *param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  undefined uVar3;
  bool bVar4;
  undefined auStack_1020 [2048];
  undefined auStack_820 [2055];
  undefined local_19 [5];
  int local_14;
  
  *(undefined4 *)(param_1 + 0x125a8) = 0;
  local_14 = param_1;
  if (((*(int *)(param_1 + 0x31bb0) == 0) || (*(int *)(param_1 + 0x31bb0) == 2)) ||
     ((param_2 == 0 && (*(char *)(param_1 + 0x27674) != '\x01')))) {
    if (((*(char *)(param_1 + 0x27675) == '\0') ||
        (iVar2 = FUN_0809ee40(param_1 + 0x167d8), iVar2 != 2)) ||
       (*(char *)(local_14 + 0x20c91) == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar2 = FUN_080c2c20(local_14 + 0x167d8,0,0,0x4c);
      if (iVar2 != 0) {
        FUN_080a8424(local_14 + 0x167d8,local_14,*(undefined4 *)(local_14 + 0x27660),
                     *(undefined4 *)(local_14 + 0x27664),0);
        return 0;
      }
      return 0xf;
    }
    FUN_080a82d0(local_14 + 0x167d8);
  }
  else {
    *(int *)(param_1 + 0x125a4) = param_2;
    *(undefined4 *)(param_1 + 0x4018) = 0;
    *(undefined4 *)(param_1 + 0x105a4) = 0;
    if (param_3 != 0) {
      FUN_080a05bc(auStack_1020,param_3,0x7fe);
      FUN_080afc9c(auStack_1020,local_14 + 0x4018,0x800);
      FUN_080a1368(local_14 + 0x4018,0x800);
    }
    if (param_4 != 0) {
      FUN_080a05bc(auStack_820,param_4,0x7fe);
      FUN_080afc9c(auStack_820,local_14 + 0x105a4,0x800);
    }
    if (param_5 != (wchar_t *)0x0) {
      wcsncpy((wchar_t *)(local_14 + 0x4018),param_5,0x800);
      FUN_080a1368(local_14 + 0x4018,0x800);
    }
    if (param_6 != 0) {
      FUN_080a0620(local_14 + 0x105a4,param_6,0x800);
    }
    if (param_2 == 2) {
      uVar1 = 0xd068;
    }
    else {
      uVar1 = 0xd070;
    }
    wcscpy((wchar_t *)(local_14 + 0x125c8),(wchar_t *)(uVar1 | 0x80e0000));
    bVar4 = param_2 == 2;
    if (bVar4) {
      param_2 = 0;
    }
    uVar3 = (undefined)param_2;
    if (!bVar4) {
      uVar3 = 1;
    }
    *(undefined *)(local_14 + 0xc4c9) = uVar3;
    local_19[0] = 0;
    FUN_080bf144(local_14 + 0x296c0,local_14,local_14 + 0x167d8,*(undefined4 *)(local_14 + 0x31bb4),
                 local_19);
    while( true ) {
      iVar2 = FUN_0809ee08(local_14 + 0x167d8);
      if (((iVar2 == 0) || (iVar2 = FUN_080a8970(local_14 + 0x167d8), iVar2 == 0)) ||
         (iVar2 = FUN_0809ee40(local_14 + 0x167d8), iVar2 != 3)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) break;
      FUN_080bf144(local_14 + 0x296c0,local_14,local_14 + 0x167d8,
                   *(undefined4 *)(local_14 + 0x31bb4),local_19);
      FUN_080a82d0(local_14 + 0x167d8);
    }
    FUN_080a8424(local_14 + 0x167d8,local_14,*(undefined4 *)(local_14 + 0x27660),
                 *(undefined4 *)(local_14 + 0x27664),0);
  }
  return *(undefined4 *)(local_14 + 0x125a8);
}


