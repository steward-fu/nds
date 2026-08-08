/*
 * Ghidra decompilation
 *
 * Function : FUN_08097898
 * Address  : 08097898
 * Program  : drastic16
 */


void FUN_08097898(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if ((iVar1 != 0) && (uVar2 = param_1[6], uVar2 != 0)) {
    iVar3 = 0;
    uVar4 = 0;
    while( true ) {
      FUN_080975d0(iVar1 + iVar3,param_2,param_3,uVar2,param_4);
      uVar2 = param_1[6];
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x28;
      if (uVar2 <= uVar4) break;
      iVar1 = param_1[3];
    }
  }
  (**(code **)(param_2 + 4))(param_2,*param_1);
  (**(code **)(param_2 + 4))(param_2,param_1[1]);
  (**(code **)(param_2 + 4))(param_2,param_1[2]);
  (**(code **)(param_2 + 4))(param_2,param_1[3]);
  (**(code **)(param_2 + 4))(param_2,param_1[4]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


