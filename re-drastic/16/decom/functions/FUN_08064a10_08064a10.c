/*
 * Ghidra decompilation
 *
 * Function : FUN_08064a10
 * Address  : 08064a10
 * Program  : drastic16
 */


undefined4 *
FUN_08064a10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)malloc(0x24);
  }
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)malloc(0x18);
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = FUN_08062024;
  puVar1[3] = &LAB_08061654;
  puVar1[4] = 0;
  puVar1[5] = 0;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  return param_1;
}


