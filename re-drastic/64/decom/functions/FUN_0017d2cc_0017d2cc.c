/*
 * Ghidra decompilation
 *
 * Function : FUN_0017d2cc
 * Address  : 0017d2cc
 * Program  : drastic64
 */


undefined8 *
FUN_0017d2cc(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)malloc(0x50);
    puVar2 = param_1;
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d31c;
  }
  else {
    puVar2 = param_1;
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d31c;
  }
  puVar1 = (undefined8 *)malloc(0x40);
  param_1 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)malloc(0x30);
  }
LAB_0017d31c:
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = draw_numeric;
  param_1[3] = action_numeric;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1[6] = param_4;
  *(undefined4 *)(puVar1 + 7) = param_5;
  *(undefined4 *)((long)puVar1 + 0x3c) = param_6;
  puVar2[3] = action_numeric_select;
  puVar2[8] = param_8;
  puVar2[9] = param_7;
  puVar2[4] = param_9;
  return puVar2;
}


