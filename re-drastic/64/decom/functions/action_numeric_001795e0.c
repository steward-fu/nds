/*
 * Ghidra decompilation
 *
 * Function : action_numeric
 * Address  : 001795e0
 * Program  : drastic64
 */


uint action_numeric(undefined8 param_1,long param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_2 + 0x3c);
  uVar3 = *param_3;
  iVar1 = (iVar2 - *(int *)(param_2 + 0x38)) + 1;
  if (uVar3 == 7) {
    iVar5 = 10;
  }
  else if (uVar3 < 8) {
    if (uVar3 == 2) {
      iVar5 = -1;
    }
    else {
      iVar5 = 1;
      if (uVar3 != 3) {
        return uVar3;
      }
    }
  }
  else {
    iVar5 = -10;
    if (uVar3 != 8) {
      return uVar3;
    }
  }
  for (iVar5 = iVar5 + **(int **)(param_2 + 0x30); iVar5 < *(int *)(param_2 + 0x38);
      iVar5 = iVar5 + iVar1) {
  }
  if (iVar2 < iVar5) {
    iVar4 = iVar5 - iVar1;
    do {
      iVar5 = iVar4;
      iVar4 = iVar5 - iVar1;
    } while (iVar2 < iVar5);
  }
  **(int **)(param_2 + 0x30) = iVar5;
  return 0xb;
}


