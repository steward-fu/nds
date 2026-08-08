/*
 * Ghidra decompilation
 *
 * Function : action_numeric_select
 * Address  : 0017a520
 * Program  : drastic64
 */


uint action_numeric_select(undefined8 param_1,long param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_2 + 0x3c);
  uVar6 = *param_3;
  iVar1 = (iVar2 - *(int *)(param_2 + 0x38)) + 1;
  if (uVar6 == 7) {
    iVar5 = 10;
    goto LAB_0017a568;
  }
  uVar7 = uVar6;
  if (uVar6 < 8) {
    if (uVar6 == 2) {
      iVar5 = -1;
LAB_0017a568:
      for (iVar5 = **(int **)(param_2 + 0x30) + iVar5; iVar5 < *(int *)(param_2 + 0x38);
          iVar5 = iVar5 + iVar1) {
      }
      if (iVar2 < iVar5) {
        iVar3 = iVar5 - iVar1;
        do {
          iVar5 = iVar3;
          iVar3 = iVar5 - iVar1;
        } while (iVar2 < iVar5);
      }
      **(int **)(param_2 + 0x30) = iVar5;
      uVar7 = 0xb;
      uVar6 = *param_3;
    }
    else {
      iVar5 = 1;
      if (uVar6 == 3) goto LAB_0017a568;
    }
    if (uVar6 == 4) {
      pcVar4 = *(code **)(param_2 + 0x48);
      goto LAB_0017a5d4;
    }
    if (4 < uVar6) goto LAB_0017a5f8;
    if (1 < uVar6 - 2) {
      return uVar7;
    }
  }
  else {
    iVar5 = -10;
    if (uVar6 == 8) goto LAB_0017a568;
LAB_0017a5f8:
    if (2 < uVar6 - 6) {
      return uVar7;
    }
  }
  pcVar4 = *(code **)(param_2 + 0x40);
  if (pcVar4 == (code *)0x0) {
    return uVar7;
  }
LAB_0017a5d4:
  (*pcVar4)();
  return uVar7;
}


