/*
 * Ghidra decompilation
 *
 * Function : create_select
 * Address  : 0017d110
 * Program  : drastic64
 */


undefined8 *
create_select(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)malloc(0x38);
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d13c;
  }
  else {
    puVar1 = param_1;
    if (param_1 != (undefined8 *)0x0) goto LAB_0017d13c;
  }
  param_1 = (undefined8 *)malloc(0x30);
LAB_0017d13c:
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = draw_menu_option;
  param_1[3] = action_select;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1[6] = param_4;
  return puVar1;
}


