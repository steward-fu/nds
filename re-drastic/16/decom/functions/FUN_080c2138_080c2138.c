/*
 * Ghidra decompilation
 *
 * Function : FUN_080c2138
 * Address  : 080c2138
 * Program  : drastic16
 */


uint FUN_080c2138(int param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined uStack_e;
  char local_d;
  uint local_c;
  
  if (*(char *)(param_2 + 0xc4c9) != '\0') {
    FUN_080a6080(&DAT_080ee230,param_4);
    uVar2 = FUN_080a6080(&DAT_080ee2d4,&DAT_080ee230);
    return uVar2;
  }
  uVar2 = FUN_080a51f0(param_1 + 0x64ec,*(byte *)(param_2 + 0xc4a4) ^ 1,
                       *(undefined4 *)(param_3 + 0x844c));
  local_d = '\0';
  local_c = uVar2;
  if (uVar2 == 0) goto LAB_080c2328;
  uVar2 = FUN_080a5704(param_1 + 0x64ec);
  local_d = (char)uVar2;
  if (local_d == '\0') {
LAB_080c2244:
    bVar1 = false;
  }
  else {
    uVar3 = FUN_080a59f4(param_1 + 0x64ec);
    uVar2 = FUN_080a5890(uVar3);
    if (((uVar2 ^ 1) & 0xff) == 0) goto LAB_080c2244;
    bVar1 = true;
  }
  if (bVar1) {
    uVar2 = FUN_080dff48(param_2,0,param_1 + 0x64ec,0x800,*(undefined4 *)(param_2 + 0xc234),
                         &uStack_e,*(undefined4 *)(param_3 + 0xa480),
                         *(undefined4 *)(param_3 + 0xa484),param_3 + 0xa460,0);
    local_d = '\0';
  }
  if (local_d != '\x01') {
    FUN_080a52ac(param_1 + 0x64ec,1);
    uVar2 = FUN_080a51f0(param_1 + 0x64ec,*(byte *)(param_2 + 0xc4a4) ^ 1,
                         *(undefined4 *)(param_3 + 0x844c));
    local_c = uVar2;
  }
LAB_080c2328:
  if (local_c == 0) {
    FUN_080a6080(&DAT_080ee230,param_1 + 0x64ec);
    uVar2 = FUN_080a6080(&DAT_080ee2d4,&DAT_080ee230);
    *(undefined *)(param_1 + 0x64e9) = 1;
  }
  else if (local_d == '\0') {
    FUN_080a85d8(param_3 + 0x18,&DAT_080ee230,param_1 + 0x64ec);
    FUN_080b7160(&DAT_081cd0a0,param_1 + 0x64ec);
    FUN_080b7478(&DAT_081cd0a0);
    *(undefined4 *)(param_2 + 0x125a8) = 0x10;
    uVar2 = FUN_080b7220(&DAT_081cd0a0,9);
  }
  else {
    if (*(char *)(param_2 + 0xc4a4) != '\x01') {
      uVar2 = FUN_080a5a7c(param_1 + 0x64ec,*(undefined4 *)(param_3 + 0x844c));
    }
    *(undefined *)(param_1 + 0x64e9) = 1;
  }
  if (*(char *)(param_1 + 0x64e9) != '\0') {
    if (*(int *)(param_2 + 0xe594) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_3 + 0xa460;
    }
    if (*(int *)(param_2 + 0xe598) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_3 + 0xa468;
    }
    if (*(int *)(param_2 + 0xe59c) == 0) {
      param_3 = 0;
    }
    else {
      param_3 = param_3 + 0xa470;
    }
    uVar2 = FUN_080a5550(param_1 + 0x64ec,iVar4,iVar5,param_3);
  }
  return uVar2;
}


