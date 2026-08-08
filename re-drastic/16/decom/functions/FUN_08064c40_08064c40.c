/*
 * Ghidra decompilation
 *
 * Function : FUN_08064c40
 * Address  : 08064c40
 * Program  : drastic16
 */


undefined4 *
FUN_08064c40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

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
  puVar1[2] = FUN_08061940;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = FUN_08061adc;
  param_1[8] = 0;
  param_1[6] = param_4;
  param_1[7] = param_5;
  return param_1;
}


