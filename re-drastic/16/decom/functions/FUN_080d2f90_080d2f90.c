/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2f90
 * Address  : 080d2f90
 * Program  : drastic16
 */


undefined4 FUN_080d2f90(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + param_2 + 0x29);
  if (*(int *)(param_1 + (uVar3 + 0x2e) * 4) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xb0);
    iVar2 = FUN_080d2ad4(param_1,*(undefined *)(param_1 + uVar3 + 4));
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + iVar2;
    if (*(uint *)(param_1 + 0xb4) < *(uint *)(param_1 + 0xb0)) {
      iVar2 = FUN_080d2ad4(param_1,*(undefined *)(param_1 + uVar3 + 4));
      *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) - iVar2;
      uVar1 = FUN_080c4814(param_1,uVar3);
    }
  }
  else {
    uVar1 = FUN_080d2a80(param_1,uVar3);
  }
  return uVar1;
}


