/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4484
 * Address  : 080b4484
 * Program  : drastic16
 */


uint FUN_080b4484(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint local_14;
  
  local_14 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (param_2 != 0) {
      FUN_080a6194(param_1,param_2);
      pcVar5 = *(code **)(**(int **)(param_1 + 0x10) + 8);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_080a609c(param_1,*(undefined4 *)(param_1 + 0x14));
      local_14 = (*pcVar5)(uVar6,uVar2,param_2);
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + local_14;
    }
  }
  else {
    iVar1 = FUN_080a8838(param_1);
    uVar3 = iVar1 - *(int *)(param_1 + 0x14);
    if (uVar3 < param_2) {
      iVar4 = param_2 - uVar3;
      iVar4 = (-iVar4 & 0xfU) + iVar4;
      FUN_080a6194(param_1,iVar4);
      pcVar5 = *(code **)(**(int **)(param_1 + 0x10) + 8);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_080a609c(param_1,iVar1);
      local_14 = (*pcVar5)(uVar6,uVar2,iVar4);
      uVar6 = *(undefined4 *)(param_1 + 0x1c);
      uVar2 = FUN_080a609c(param_1,iVar1);
      FUN_080b37fc(uVar6,uVar2,iVar4);
      if (local_14 == 0) {
        param_2 = 0;
      }
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
    }
    else {
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
      local_14 = param_2;
    }
  }
  return local_14;
}


