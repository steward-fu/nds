/*
 * Ghidra decompilation
 *
 * Function : create_button_config
 * Address  : 0017d540
 * Program  : drastic64
 */


undefined8 *
create_button_config
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)malloc(0x50);
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d574;
  }
  else {
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d574;
  }
  param_1 = (undefined8 *)malloc(0x30);
LAB_0017d574:
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = draw_button_config;
  param_1[3] = action_button_config;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined *)(puVar1 + 9) = 0;
  puVar1[7] = param_4;
  puVar1[8] = param_5;
  return puVar1;
}


