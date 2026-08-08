/*
 * Ghidra decompilation
 *
 * Function : create_numeric
 * Address  : 0017d230
 * Program  : drastic64
 */


undefined8 *
create_numeric(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)malloc(0x40);
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d268;
  }
  else {
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d268;
  }
  param_1 = (undefined8 *)malloc(0x30);
LAB_0017d268:
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = draw_numeric;
  param_1[3] = action_numeric;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1[6] = param_4;
  *(undefined4 *)(puVar1 + 7) = param_5;
  *(undefined4 *)((long)puVar1 + 0x3c) = param_6;
  return puVar1;
}


