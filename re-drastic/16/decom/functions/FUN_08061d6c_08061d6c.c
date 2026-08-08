/*
 * Ghidra decompilation
 *
 * Function : FUN_08061d6c
 * Address  : 08061d6c
 * Program  : drastic16
 */


void FUN_08061d6c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if ((param_2 != 0) && (pcVar1 = *(code **)(param_2 + 0x10), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1,param_2,1,pcVar1,param_4);
  }
  if (*(code **)(iVar2 + 4) != (code *)0x0) {
    (**(code **)(iVar2 + 4))(param_1,iVar2,1);
  }
  iVar2 = *(int *)(iVar2 + 0x1c);
  if (iVar2 == 0) {
    if (*(char *)(*param_1 + 0x82830) != '\0') {
      param_1[10] = 1;
    }
    return;
  }
  if (*(code **)(iVar2 + 4) != (code *)0x0) {
    (**(code **)(iVar2 + 4))(param_1,iVar2,0);
  }
  param_1[2] = iVar2;
  return;
}


