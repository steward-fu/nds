/*
 * Ghidra decompilation
 *
 * Function : FUN_080ae5d8
 * Address  : 080ae5d8
 * Program  : drastic16
 */


undefined4 FUN_080ae5d8(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined auStack_844 [32];
  undefined auStack_824 [2048];
  undefined auStack_24 [4];
  uint local_20;
  undefined4 local_1c;
  byte local_15;
  uint local_14;
  
  FUN_080b43e4(auStack_844,param_1);
  bVar6 = *(uint *)(param_1 + 0x10ea8) < *(uint *)(param_1 + 0x10e88);
  if (0 < (int)(*(int *)(param_1 + 0x10e8c) + (uint)bVar6) ==
      (SBORROW4(-*(int *)(param_1 + 0x10e8c),(uint)bVar6) != false)) {
    FUN_080b4484(auStack_844,7);
    FUN_080d6098(param_1 + 0x83b8);
    FUN_080b4af8(auStack_844,auStack_24,4);
    local_14 = FUN_080b4760(auStack_844);
    local_15 = FUN_080b46f8(auStack_844);
    *(uint *)(param_1 + 0x10e90) = *(uint *)(param_1 + 0x10e88) + local_14;
    *(uint *)(param_1 + 0x10e94) =
         *(int *)(param_1 + 0x10e8c) + (uint)CARRY4(*(uint *)(param_1 + 0x10e88),local_14);
    *(undefined4 *)(param_1 + 0x7314) = 1;
    *(bool *)(param_1 + 0x10e9d) = (local_15 & 1) != 0;
    *(bool *)(param_1 + 0x10e9c) = (local_15 & 8) != 0;
    *(bool *)(param_1 + 0x10e9f) = (local_15 & 4) != 0;
    *(bool *)(param_1 + 0x83d4) = (local_15 & 2) != 0;
    *(bool *)(param_1 + 0x83d5) = (local_15 & 0x10) != 0;
  }
  else {
    FUN_080b4484(auStack_844,0x15);
    FUN_080d5e4c(param_1 + 0x8430,0);
    *(undefined4 *)(param_1 + 0x8434) = 2;
    uVar3 = FUN_080b4810(auStack_844);
    *(undefined4 *)(param_1 + 0x8444) = uVar3;
    uVar3 = FUN_080b4810(auStack_844);
    *(undefined4 *)(param_1 + 0xa480) = uVar3;
    *(undefined4 *)(param_1 + 0xa484) = 0;
    *(undefined4 *)(param_1 + 0xa490) = 1;
    uVar3 = FUN_080b4760(auStack_844);
    *(undefined4 *)(param_1 + 0xa494) = uVar3;
    uVar3 = FUN_080b4760(auStack_844);
    *(undefined4 *)(param_1 + 0x843c) = uVar3;
    local_1c = FUN_080b4810(auStack_844);
    uVar3 = FUN_080b46f8(auStack_844);
    *(undefined4 *)(param_1 + 0x844c) = uVar3;
    uVar2 = FUN_080b46f8(auStack_844);
    *(uint *)(param_1 + 0x8438) = uVar2 | 0x8000;
    iVar4 = FUN_080b46f8(auStack_844);
    if (iVar4 == 2) {
      uVar1 = 0xd;
    }
    else {
      uVar1 = 10;
    }
    *(undefined *)(param_1 + 0x8449) = uVar1;
    local_20 = FUN_080b46f8(auStack_844);
    uVar1 = FUN_080b46f8(auStack_844);
    *(undefined *)(param_1 + 0x844a) = uVar1;
    *(bool *)(param_1 + 0xa4b8) = (*(uint *)(param_1 + 0x8438) & 1) != 0;
    *(bool *)(param_1 + 0xa4b9) = (*(uint *)(param_1 + 0x8438) & 2) != 0;
    *(bool *)(param_1 + 0xa4bb) = (*(uint *)(param_1 + 0x8438) & 4) != 0;
    *(uint *)(param_1 + 0xa4bc) = (uint)(*(char *)(param_1 + 0xa4bb) != '\0');
    *(undefined4 *)(param_1 + 0xa478) = *(undefined4 *)(param_1 + 0x8444);
    *(undefined4 *)(param_1 + 0xa47c) = 0;
    *(undefined4 *)(param_1 + 0xa514) = 0x10000;
    FUN_080b55dc(param_1 + 0xa460,local_1c);
    FUN_080b4484(auStack_844,local_20);
    uVar2 = local_20;
    if (0x7ff < local_20) {
      uVar2 = 0x800;
    }
    FUN_080b4af8(auStack_844,auStack_824,uVar2);
    auStack_824[local_20] = 0;
    FUN_080afc9c(auStack_824,param_1 + 0x8450,0x800);
    FUN_080aeca8(param_1,param_1 + 0x8450);
    iVar4 = FUN_080af9d4(auStack_844);
    if (iVar4 != 0) {
      uVar2 = *(uint *)(param_1 + 0x10e88) + *(uint *)(param_1 + 0x843c);
      *(uint *)(param_1 + 0x10e90) = uVar2 + *(uint *)(param_1 + 0xa478);
      *(uint *)(param_1 + 0x10e94) =
           *(int *)(param_1 + 0x10e8c) +
           (uint)CARRY4(*(uint *)(param_1 + 0x10e88),*(uint *)(param_1 + 0x843c)) +
           *(int *)(param_1 + 0xa47c) + (uint)CARRY4(uVar2,*(uint *)(param_1 + 0xa478));
    }
    *(undefined4 *)(param_1 + 0x7314) = 2;
  }
  iVar4 = *(int *)(param_1 + 0x10e94);
  iVar5 = *(int *)(param_1 + 0x10e8c);
  bVar6 = *(uint *)(param_1 + 0x10e88) < *(uint *)(param_1 + 0x10e90);
  if ((int)(iVar5 - (iVar4 + (uint)bVar6)) < 0 ==
      (SBORROW4(iVar5,iVar4) != SBORROW4(iVar5 - iVar4,(uint)bVar6))) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_080af9d4(auStack_844);
  }
  FUN_080afab0(auStack_844);
  return uVar3;
}


