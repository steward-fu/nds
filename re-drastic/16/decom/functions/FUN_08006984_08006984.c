/*
 * Ghidra decompilation
 *
 * Function : FUN_08006984
 * Address  : 08006984
 * Program  : drastic16
 */


int FUN_08006984(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_2 + 4))(param_1,param_3);
  if (iVar1 - (param_3 & 0x3fff) != param_1 + 0x6b040) {
    iVar1 = iVar1 - *(int *)(param_1 + 8);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xffff;
    }
    return *(int *)(param_2 + 0x1c) + (iVar1 >> 0x10) * 4;
  }
  return 0;
}


