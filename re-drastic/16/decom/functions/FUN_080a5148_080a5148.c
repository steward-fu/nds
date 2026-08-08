/*
 * Ghidra decompilation
 *
 * Function : FUN_080a5148
 * Address  : 080a5148
 * Program  : drastic16
 */


int ** FUN_080a5148(int **param_1,int *param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined8 *)(param_1 + 2) = uVar1;
  return param_1;
}


