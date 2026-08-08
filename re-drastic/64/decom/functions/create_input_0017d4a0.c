/*
 * Ghidra decompilation
 *
 * Function : create_input
 * Address  : 0017d4a0
 * Program  : drastic64
 */


undefined8 *
create_input(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)malloc(0x40);
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d4d4;
  }
  else {
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d4d4;
  }
  param_1 = (undefined8 *)malloc(0x30);
LAB_0017d4d4:
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = draw_input;
  param_1[3] = action_input;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1[6] = param_4;
  *(undefined4 *)(puVar1 + 7) = param_5;
  *(undefined4 *)((long)puVar1 + 0x3c) = 0;
  return puVar1;
}


