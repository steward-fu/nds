/*
 * Ghidra decompilation
 *
 * Function : FUN_080648b8
 * Address  : 080648b8
 * Program  : drastic16
 */


undefined4 *
FUN_080648b8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  puVar1[3] = FUN_08061e00;
  puVar1[4] = 0;
  puVar1[5] = 0;
  param_1[6] = param_4;
  return param_1;
}


