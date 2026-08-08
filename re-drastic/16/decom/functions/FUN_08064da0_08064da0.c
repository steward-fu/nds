/*
 * Ghidra decompilation
 *
 * Function : FUN_08064da0
 * Address  : 08064da0
 * Program  : drastic16
 */


undefined4 * FUN_08064da0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined4 *)malloc(0x20);
  puVar1[7] = param_2;
  puVar1[3] = param_1;
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[4] = 0;
  pvVar2 = malloc(param_1 << 2);
  puVar1[6] = pvVar2;
  return puVar1;
}


