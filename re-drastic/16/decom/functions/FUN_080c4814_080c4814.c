/*
 * Ghidra decompilation
 *
 * Function : FUN_080c4814
 * Address  : 080c4814
 * Program  : drastic16
 */


undefined4 FUN_080c4814(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_c;
  
  local_c = param_2;
  if (*(char *)(param_1 + 0xaa) == '\0') {
    *(undefined *)(param_1 + 0xaa) = 0xff;
    FUN_080d2c9c(param_1);
    if (*(int *)(param_1 + (param_2 + 0x2e) * 4) != 0) {
      uVar1 = FUN_080d2a80(param_1,param_2);
      return uVar1;
    }
  }
  do {
    iVar3 = local_c + 1;
    if (iVar3 == 0x26) {
      *(char *)(param_1 + 0xaa) = *(char *)(param_1 + 0xaa) + -1;
      iVar3 = FUN_080d2ad4(param_1,*(undefined *)(param_1 + param_2 + 4));
      uVar4 = (uint)*(byte *)(param_1 + param_2 + 4);
      if ((int)(uVar4 * 0xc) < *(int *)(param_1 + 0x15c) - *(int *)(param_1 + 0x150)) {
        *(uint *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + uVar4 * -0xc;
        *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) - iVar3;
        return *(undefined4 *)(param_1 + 0x154);
      }
      return 0;
    }
    iVar2 = local_c + 0x2f;
    local_c = iVar3;
  } while (*(int *)(param_1 + iVar2 * 4) == 0);
  uVar1 = FUN_080d2a80(param_1,iVar3);
  FUN_080d2b48(param_1,uVar1,iVar3,param_2);
  return uVar1;
}


