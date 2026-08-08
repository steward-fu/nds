/*
 * Ghidra decompilation
 *
 * Function : FUN_080975d0
 * Address  : 080975d0
 * Program  : drastic16
 */


void FUN_080975d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (param_1[4] != 0)) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      iVar1 = iVar1 + iVar2 + 0x10;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x18;
      FUN_08097034(iVar1,param_2);
      FUN_08096fe0(iVar1);
      iVar1 = *param_1;
    } while (uVar3 < (uint)param_1[4]);
  }
  (**(code **)(param_2 + 4))(param_2);
  (**(code **)(param_2 + 4))(param_2,param_1[1]);
  (**(code **)(param_2 + 4))(param_2,param_1[2]);
  (**(code **)(param_2 + 4))(param_2,param_1[3]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


