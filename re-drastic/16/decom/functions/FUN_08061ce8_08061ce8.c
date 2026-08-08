/*
 * Ghidra decompilation
 *
 * Function : FUN_08061ce8
 * Address  : 08061ce8
 * Program  : drastic16
 */


int FUN_08061ce8(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *param_3;
  if (iVar1 != 4) {
    if (iVar1 == 5) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      return 0xb;
    }
    return iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x18);
  pcVar2 = *(code **)(*(int *)(param_1 + 8) + 4);
  *(int *)(param_1 + 8) = iVar1;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1,iVar1,1,pcVar2,param_4);
  }
  if (*(code **)(iVar1 + 4) != (code *)0x0) {
    (**(code **)(iVar1 + 4))(param_1,iVar1,0);
    return 0xb;
  }
  return 0xb;
}


