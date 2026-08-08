/*
 * Ghidra decompilation
 *
 * Function : FUN_080d2638
 * Address  : 080d2638
 * Program  : drastic16
 */


void FUN_080d2638(undefined2 *param_1,int param_2)

{
  *(undefined *)(param_1 + 1) = 3;
  *param_1 = (short)(param_2 << 3);
  *(undefined *)((int)param_1 + 3) = 4;
  return;
}


