/*
 * Ghidra decompilation
 *
 * Function : FUN_08064960
 * Address  : 08064960
 * Program  : drastic16
 */


undefined4 *
FUN_08064960(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)malloc(0x1c);
  }
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)malloc(0x18);
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = &DAT_08061f7c;
  puVar1[3] = FUN_08061ce8;
  puVar1[4] = 0;
  puVar1[5] = FUN_08062430;
  param_1[6] = param_4;
  return param_1;
}


