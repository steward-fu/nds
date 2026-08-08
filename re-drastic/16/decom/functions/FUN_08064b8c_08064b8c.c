/*
 * Ghidra decompilation
 *
 * Function : FUN_08064b8c
 * Address  : 08064b8c
 * Program  : drastic16
 */


undefined4 *
FUN_08064b8c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = param_1;
  if ((param_1 == (undefined4 *)0x0) &&
     (param_1 = (undefined4 *)malloc(0x28), puVar1 = param_1, param_1 == (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)malloc(0x24);
  }
  puVar2 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)malloc(0x18);
  }
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = FUN_08062024;
  puVar2[3] = &LAB_08061654;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar1[6] = param_4;
  puVar1[7] = param_5;
  puVar1[8] = param_6;
  param_1[9] = param_7;
  param_1[2] = FUN_08061fb8;
  return param_1;
}


