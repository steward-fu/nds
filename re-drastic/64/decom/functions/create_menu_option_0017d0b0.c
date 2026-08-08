/*
 * Ghidra decompilation
 *
 * Function : create_menu_option
 * Address  : 0017d0b0
 * Program  : drastic64
 */


void create_menu_option(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4
                       ,undefined8 param_5,undefined8 param_6,undefined8 param_7)

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


