/*
 * Ghidra decompilation
 *
 * Function : FUN_080d5428
 * Address  : 080d5428
 * Program  : drastic16
 */


void FUN_080d5428(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(undefined2 *)(param_1 + 1);
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_2 = uVar2;
  *(undefined2 *)(param_2 + 1) = uVar1;
  return;
}


