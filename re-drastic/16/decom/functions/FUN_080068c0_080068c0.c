/*
 * Ghidra decompilation
 *
 * Function : FUN_080068c0
 * Address  : 080068c0
 * Program  : drastic16
 */


int FUN_080068c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_2 + 4))(param_1,param_3,param_3,*(code **)(param_2 + 4),param_4);
  if (*(int *)(param_1 + 0x15034) != iVar1) {
    iVar1 = iVar1 - *(int *)(param_1 + 0x15010);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xffff;
    }
    return *(int *)(param_2 + 0x1c) + (iVar1 >> 0x10) * 4;
  }
  return 0;
}


