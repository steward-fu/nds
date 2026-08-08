/*
 * Ghidra decompilation
 *
 * Function : FUN_080620c4
 * Address  : 080620c4
 * Program  : drastic16
 */


int FUN_080620c4(undefined4 param_1,int param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_2 + 0x20);
  iVar5 = *param_3;
  iVar4 = iVar3 - *(int *)(param_2 + 0x1c);
  iVar6 = iVar5;
  switch(iVar5) {
  case 2:
    iVar6 = -1;
    break;
  case 3:
    iVar6 = 1;
    break;
  default:
    goto LAB_08062164;
  case 7:
    iVar6 = 10;
    break;
  case 8:
    iVar6 = -10;
  }
  for (iVar6 = **(int **)(param_2 + 0x18) + iVar6; iVar6 < *(int *)(param_2 + 0x1c);
      iVar6 = iVar4 + 1 + iVar6) {
  }
  if (iVar3 < iVar6) {
    do {
      iVar6 = (iVar6 + -1) - iVar4;
    } while (iVar3 < ((iVar4 + 1) - iVar4) + -1 + iVar6);
  }
  **(int **)(param_2 + 0x18) = iVar6;
  iVar5 = *param_3;
  iVar6 = 0xb;
LAB_08062164:
  if (iVar5 - 2U < 7) {
    uVar1 = 1 << (iVar5 - 2U & 0xff);
    if ((uVar1 & 0x6b) == 0) {
      if ((uVar1 & 4) != 0) {
        pcVar2 = *(code **)(param_2 + 0x28);
LAB_080621b4:
        (*pcVar2)();
        return iVar6;
      }
    }
    else {
      pcVar2 = *(code **)(param_2 + 0x24);
      if (pcVar2 != (code *)0x0) goto LAB_080621b4;
    }
  }
  return iVar6;
}


