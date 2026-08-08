/*
 * Ghidra decompilation
 *
 * Function : SzAr_Free
 * Address  : 001ad250
 * Program  : drastic64
 */


void SzAr_Free(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1[3];
  if ((lVar3 != 0) && (*(int *)((long)param_1 + 0x2c) != 0)) {
    uVar4 = 0;
    while( true ) {
      lVar2 = uVar4 * 0x38;
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      SzFolder_Free(lVar3 + lVar2,param_2);
      if (*(uint *)((long)param_1 + 0x2c) <= uVar1) break;
      lVar3 = param_1[3];
    }
  }
  (**(code **)(param_2 + 8))(param_2,*param_1);
  (**(code **)(param_2 + 8))(param_2,param_1[1]);
  (**(code **)(param_2 + 8))(param_2,param_1[2]);
  (**(code **)(param_2 + 8))(param_2,param_1[3]);
  (**(code **)(param_2 + 8))(param_2,param_1[4]);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


