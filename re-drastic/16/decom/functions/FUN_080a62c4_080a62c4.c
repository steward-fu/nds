/*
 * Ghidra decompilation
 *
 * Function : FUN_080a62c4
 * Address  : 080a62c4
 * Program  : drastic16
 */


uint FUN_080a62c4(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  void *__s;
  undefined4 uVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  code *pcVar10;
  uint unaff_r6;
  undefined8 uVar11;
  undefined auStack_12a10 [14176];
  undefined auStack_f2b0 [2920];
  undefined auStack_e748 [59136];
  undefined auStack_48 [16];
  int local_38;
  undefined4 local_34;
  undefined auStack_30 [16];
  uint local_20;
  ushort local_1a;
  
  if (*(char *)((int)param_1 + 0x10e9e) != '\x01') {
    return 0;
  }
  FUN_080a5148(auStack_30,param_1);
  if (param_1[0x43a6] == 1) {
    (**(code **)(*param_1 + 0xc))(param_1,*(code **)(*param_1 + 0xc),param_1[0x43aa] + 7,0,0);
    local_1a = FUN_080a4ba4(param_1);
    iVar5 = FUN_080a4ba4(param_1);
    local_1a = local_1a + (short)(iVar5 << 8);
  }
  else {
    if (*(char *)(param_1 + 0x20f5) == '\0') {
      pcVar10 = *(code **)(*param_1 + 0xc);
      uVar11 = FUN_080af028(param_1);
      uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
      (*pcVar10)(param_1,uVar6,(int)uVar11,uVar6,0);
      iVar5 = FUN_080a8b78(param_1,&DAT_080ed7b8);
      if ((iVar5 == 0) || (iVar5 = FUN_080a6dfc(param_1,param_2), iVar5 == 0)) {
        unaff_r6 = 0;
      }
      else {
        unaff_r6 = 1;
      }
      goto LAB_080a6d7c;
    }
    (**(code **)(*param_1 + 0xc))(param_1,*(code **)(*param_1 + 0xc),param_1[0x43aa] + 0x14,0,0);
    FUN_080a8970(param_1);
    if (*(char *)(param_1 + 0x43ab) != '\0') {
      FUN_080a85d8(param_1 + 6,&DAT_080ed7c8);
      unaff_r6 = 0;
      goto LAB_080a6d7c;
    }
    local_1a = (short)param_1[0x429f] - 0xd;
  }
  if (((param_1[0x43a6] == 1) && (*(char *)((int)param_1 + 0x83d5) != '\0')) ||
     ((param_1[0x43a6] != 1 && (*(char *)((int)param_1 + 0x10a87) != '0')))) {
    if ((param_1[0x43a6] != 1) &&
       (((*(byte *)((int)param_1 + 0x10a86) < 0xf || (0x1d < *(byte *)((int)param_1 + 0x10a86))) ||
        (0x35 < *(byte *)((int)param_1 + 0x10a87))))) {
      unaff_r6 = 0;
      goto LAB_080a6d7c;
    }
    FUN_080b5c80(auStack_12a10);
    FUN_080a857c(auStack_12a10,1);
    if (param_1[0x43a6] == 1) {
      local_20 = FUN_080a4ba4(param_1);
      iVar5 = FUN_080a4ba4(param_1);
      local_20 = local_20 + iVar5 * 0x100;
      local_1a = local_1a - 2;
      FUN_080b67d8(auStack_12a10);
      *(undefined *)((int)param_1 + 0x10a86) = 0xf;
    }
    else {
      local_20 = (uint)*(ushort *)(param_1 + 0x42a1);
    }
    FUN_080b6608(auStack_12a10,param_1,0);
    FUN_080a8520(auStack_12a10,0);
    FUN_080a8550(auStack_12a10,extraout_r1,local_1a,0);
    FUN_080bdba8(auStack_f2b0,2,1);
    FUN_080d1220(auStack_e748,auStack_12a10);
    FUN_080d1774(auStack_e748,0x10000,0);
    FUN_080a85fc(auStack_e748,extraout_r1_00,local_20,0);
    FUN_080d1a40(auStack_e748,*(undefined *)((int)param_1 + 0x10a86),0);
    if ((param_1[0x43a6] == 1) ||
       (sVar3 = FUN_080bde08(auStack_f2b0), sVar3 == *(short *)(param_1 + 0x42a2))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar2 = !bVar2;
    if (bVar2) {
      FUN_080b666c(auStack_12a10,&local_34,&local_38);
      FUN_080a8888(param_2,local_38 + 1);
      __s = (void *)FUN_080a88e4(param_2,0);
      iVar5 = FUN_0809f0b8(param_2);
      memset(__s,0,iVar5 << 2);
      uVar6 = FUN_080a88e4(param_2,0);
      FUN_080afc9c(local_34,uVar6,local_38);
      pwVar7 = (wchar_t *)FUN_080a88e4(param_2,0);
      sVar8 = wcslen(pwVar7);
      FUN_080a8888(param_2,sVar8);
    }
    else {
      FUN_080a85d8(param_1 + 6,&DAT_080ed7c8);
      unaff_r6 = 0;
    }
    FUN_080d14dc(auStack_e748);
    FUN_080a8640(auStack_12a10);
  }
  else {
    FUN_080a6110(auStack_48,local_1a);
    pcVar10 = *(code **)(*param_1 + 8);
    uVar6 = FUN_080a609c(auStack_48,0);
    (*pcVar10)(param_1,uVar6,local_1a);
    if (param_1[0x43a6] == 1) {
LAB_080a6c40:
      bVar2 = false;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x42a2);
      uVar6 = FUN_080a609c(auStack_48,0);
      uVar4 = FUN_080b4060(0xffffffff,uVar6,local_1a);
      if (uVar1 == (ushort)~uVar4) goto LAB_080a6c40;
      bVar2 = true;
    }
    bVar2 = !bVar2;
    if (bVar2) {
      FUN_080a8888(param_2,local_1a + 1);
      FUN_080a891c(auStack_48,0);
      uVar6 = FUN_080a609c(auStack_48,0);
      uVar9 = FUN_080a88e4(param_2,0);
      FUN_080afc9c(uVar6,uVar9,local_1a);
      pwVar7 = (wchar_t *)FUN_080a88e4(param_2,0);
      sVar8 = wcslen(pwVar7);
      FUN_080a8888(param_2,sVar8);
    }
    else {
      FUN_080a85d8(param_1 + 6,&DAT_080ed7c8);
      unaff_r6 = 0;
    }
    FUN_080a60d0(auStack_48);
  }
  if (bVar2) {
    iVar5 = FUN_0809f0b8(param_2);
    unaff_r6 = (uint)(iVar5 != 0);
  }
LAB_080a6d7c:
  FUN_080a51a0(auStack_30);
  return unaff_r6;
}


