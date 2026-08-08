/*
 * Ghidra decompilation
 *
 * Function : SzFolder_Free
 * Address  : 001acfe0
 * Program  : drastic64
 */


void SzFolder_Free(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar3 = 0;
    do {
      lVar2 = lVar2 + uVar3 * 0x20 + 0x10;
      Buf_Free(lVar2,param_2);
      Buf_Init(lVar2);
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar1;
      lVar2 = *param_1;
    } while (uVar1 < *(uint *)(param_1 + 4));
  }
  (**(code **)(param_2 + 8))(param_2,lVar2);
  (**(code **)(param_2 + 8))(param_2,param_1[1]);
  (**(code **)(param_2 + 8))(param_2,param_1[2]);
  (**(code **)(param_2 + 8))(param_2,param_1[3]);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


