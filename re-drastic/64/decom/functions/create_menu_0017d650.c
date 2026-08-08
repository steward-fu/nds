/*
 * Ghidra decompilation
 *
 * Function : create_menu
 * Address  : 0017d650
 * Program  : drastic64
 */


undefined8 * create_menu(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)malloc(0x30);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(uint *)((long)puVar1 + 0x14) = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[5] = param_2;
  pvVar2 = malloc((ulong)param_1 << 3);
  puVar1[4] = pvVar2;
  return puVar1;
}


