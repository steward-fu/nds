/*
 * Ghidra decompilation
 *
 * Function : create_numeric_labeled
 * Address  : 0017d3c0
 * Program  : drastic64
 */


undefined8 *
create_numeric_labeled
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1;
  if ((param_1 == (undefined8 *)0x0) &&
     (param_1 = (undefined8 *)malloc(0x48), puVar1 = param_1, param_1 == (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)malloc(0x40);
  }
  puVar2 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)malloc(0x30);
  }
  *puVar2 = param_2;
  *(undefined4 *)(puVar2 + 1) = param_3;
  puVar2[2] = draw_numeric;
  puVar2[3] = action_numeric;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar1[6] = param_4;
  *(undefined4 *)(puVar1 + 7) = param_5;
  *(undefined4 *)((long)puVar1 + 0x3c) = param_6;
  param_1[2] = draw_numeric_labeled;
  param_1[8] = param_7;
  return param_1;
}


