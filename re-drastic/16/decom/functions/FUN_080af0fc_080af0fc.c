/*
 * Ghidra decompilation
 *
 * Function : FUN_080af0fc
 * Address  : 080af0fc
 * Program  : drastic16
 */


undefined4 FUN_080af0fc(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined auStack_e718 [59140];
  
  if (*(char *)(param_1 + 0x10eac) != '\0') {
    FUN_080a85d8(param_1 + 0x18,&DAT_080ed90c);
    FUN_080b7220(&DAT_081cd0a0,3);
    return 0;
  }
  if (5 < *(byte *)(param_1 + 0xc78a)) {
LAB_080af210:
    FUN_080a85d8(param_1 + 0x18,&DAT_080ed90c);
    return 0;
  }
  if (*(int *)(param_1 + 0x10e98) == 3) {
    bVar3 = 0;
  }
  else {
    bVar3 = 0x1d;
  }
  if (bVar3 < *(byte *)(param_1 + 0xc789)) goto LAB_080af210;
  if (((*(uint *)(param_1 + 0xe7b8) | *(uint *)(param_1 + 0xe7bc)) == 0) &&
     (*(char *)(param_1 + 0xe7f9) != '\x01')) {
    return 1;
  }
  FUN_080b5d68(param_1 + 0x3028);
  FUN_080d1220(auStack_e718,param_1 + 0x3028);
  FUN_080d1774(auStack_e718,*(undefined4 *)(param_1 + 0xe854),0);
  if (param_3 == 0) {
    bVar5 = 0x1000000 < *(uint *)(param_1 + 0xe7c0);
    if (0 < (int)(*(int *)(param_1 + 0xe7c4) + (uint)bVar5) !=
        (SBORROW4(-*(int *)(param_1 + 0xe7c4),(uint)bVar5) != false)) {
      FUN_080a85d8(param_1 + 0x18,&DAT_080ed90c);
      uVar4 = 0;
      goto LAB_080af8c4;
    }
    FUN_080afadc(param_2,*(undefined4 *)(param_1 + 0xe7c0));
    uVar4 = FUN_080a609c(param_2,0);
    FUN_080b6814(param_1 + 0x3028,uVar4,*(undefined4 *)(param_1 + 0xe7c0));
  }
  if (*(char *)(param_1 + 0xe7fb) != '\0') {
    iVar2 = FUN_080af900(*(int *)(param_1 + 0x72f4) + 0xa024);
    if (iVar2 == 0) {
      uVar4 = 0;
      goto LAB_080af8c4;
    }
    if (*(char *)(param_1 + 0xe800) == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0xe801;
    }
    FUN_080b66b0(param_1 + 0x3028,0,*(undefined4 *)(param_1 + 0xe7fc),
                 *(int *)(param_1 + 0x72f4) + 0xa024,iVar2,param_1 + 0xe811,
                 *(undefined4 *)(param_1 + 0xe84c),param_1 + 0xe822,param_1 + 0xe82b);
  }
  FUN_080bdba8(param_1 + 0x6788,*(undefined4 *)(param_1 + 0xe7d0),1);
  FUN_080a8550(param_1 + 0x3028,param_1,*(undefined4 *)(param_1 + 0xe7b8),
               *(undefined4 *)(param_1 + 0xe7bc));
  FUN_080a8520(param_1 + 0x3028,0);
  FUN_080b6608(param_1 + 0x3028,param_1,param_3);
  *(undefined *)(param_1 + 0x5081) = *(undefined *)(param_1 + 0xe7f9);
  FUN_080af998(param_1 + 0x3028,param_1 + 0xc770,0);
  FUN_080a85fc(auStack_e718,auStack_e718,*(undefined4 *)(param_1 + 0xe7c0),
               *(undefined4 *)(param_1 + 0xe7c4));
  if (*(char *)(param_1 + 0xc78a) == '\0') {
    FUN_080c18a8(param_1 + 0x3028,param_1,*(undefined4 *)(param_1 + 0xe7c0),
                 *(undefined4 *)(param_1 + 0xe7c4));
  }
  else {
    FUN_080d1a40(auStack_e718,*(undefined *)(param_1 + 0xc789),0);
  }
  if (*(char *)(param_1 + 0xe82a) == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 0xe82b;
  }
  cVar1 = FUN_080bde4c(param_1 + 0x6788,param_1 + 0xe7d0,iVar2);
  if (cVar1 == '\x01') {
    uVar4 = 1;
  }
  else {
    FUN_080a85d8(param_1 + 0x18,&DAT_080ed90c,param_1 + 0xc790);
    FUN_080b7220(&DAT_081cd0a0,3);
    if (param_2 != 0) {
      FUN_080afb6c(param_2);
    }
    uVar4 = 0;
  }
LAB_080af8c4:
  FUN_080d14dc(auStack_e718);
  return uVar4;
}


