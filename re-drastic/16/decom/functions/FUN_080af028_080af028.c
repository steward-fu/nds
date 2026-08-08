/*
 * Ghidra decompilation
 *
 * Function : FUN_080af028
 * Address  : 080af028
 * Program  : drastic16
 */


ulonglong FUN_080af028(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_18;
  
  uVar2 = *(int *)(param_1 + 0x10ea8) + *(int *)(param_1 + 0x83b4);
  if (*(int *)(param_1 + 0x10e98) == 2) {
    uVar3 = *(uint *)(param_1 + 0x83c4);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x8404);
    iVar1 = FUN_080a831c(param_1,*(undefined4 *)(param_1 + 0x83c4));
    uVar3 = iVar4 + iVar1;
  }
  local_18 = uVar3 + uVar2;
  return (ulonglong)CONCAT14(CARRY4(uVar3,uVar2),local_18);
}


