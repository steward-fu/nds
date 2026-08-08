/*
 * Ghidra decompilation
 *
 * Function : FUN_08004c44
 * Address  : 08004c44
 * Program  : drastic16
 */


void FUN_08004c44(int param_1)

{
  int iVar1;
  
  FUN_08015acc();
  FUN_0801bdc0(param_1 + 0x159ebf8);
  FUN_0801bdc0(param_1 + 0x1da5188);
  iVar1 = **(int **)(param_1 + 0x198);
  *(int *)(param_1 + 0x10) = iVar1;
  *(int *)(param_1 + 0x15a0f64) = *(int *)(param_1 + 0x15a0f64) + iVar1;
  if (*(char *)(param_1 + 0x15a0cfd) == '\0') {
    (**(code **)(param_1 + 0x15a0f6c))(*(undefined4 *)(param_1 + 0x15a0f00));
    return;
  }
  *(undefined4 *)(param_1 + 0x15a0f64) = 0xffffffff;
  (**(code **)(param_1 + 0x15a0f6c))(param_1);
  return;
}


