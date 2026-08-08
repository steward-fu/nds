/*
 * Ghidra decompilation
 *
 * Function : FUN_08006924
 * Address  : 08006924
 * Program  : drastic16
 */


int FUN_08006924(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_2 + 4))(param_1,param_3,param_3,*(code **)(param_2 + 4),param_4);
  if (*(int *)(param_1 + 0x15034) != iVar1) {
    iVar1 = iVar1 - *(int *)(param_1 + 0x15010);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x3f;
    }
    return *(int *)(param_2 + 0x20) + (iVar1 >> 6) * 4;
  }
  return 0;
}


