/*
 * Ghidra decompilation
 *
 * Function : FUN_080b46f8
 * Address  : 080b46f8
 * Program  : drastic16
 */


undefined FUN_080b46f8(int param_1)

{
  undefined *puVar1;
  undefined uVar2;
  int iVar3;
  
  if (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x14)) {
    iVar3 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar3 + 1;
    puVar1 = (undefined *)FUN_080a609c(param_1,iVar3);
    uVar2 = *puVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


