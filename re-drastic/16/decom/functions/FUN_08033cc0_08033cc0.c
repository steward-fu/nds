/*
 * Ghidra decompilation
 *
 * Function : FUN_08033cc0
 * Address  : 08033cc0
 * Program  : drastic16
 */


void FUN_08033cc0(int **param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = param_3;
  param_1[3] = (int *)param_3[param_2 + 0x761];
  piVar2 = (int *)param_3[param_2 + 0x763];
  *(char *)((int)param_1 + 0x97) = (char)param_2;
  iVar1 = *param_3;
  param_1[6] = piVar2;
  param_1[4] = param_3 + (param_2 + 0x110) * 4;
  piVar2 = *(int **)(iVar1 + 0xfc814);
  param_1[0x1d] = (int *)(param_2 << 0x15);
  param_1[0x26] = (int *)param_1;
  param_1[1] = piVar2;
  param_1[0x27] = piVar2;
  param_1[0x49] = piVar2;
  param_1[0x6b] = piVar2;
  param_1[0x8d] = piVar2;
  param_1[0x48] = (int *)param_1;
  param_1[0x6a] = (int *)param_1;
  param_1[0x8c] = (int *)param_1;
  param_1[0x1e] = (int *)(param_2 << 0x15);
  return;
}


