/*
 * Ghidra decompilation
 *
 * Function : FUN_0017d0ac
 * Address  : 0017d0ac
 * Program  : drastic64
 */


void FUN_0017d0ac(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)malloc(0x30);
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  return;
}


