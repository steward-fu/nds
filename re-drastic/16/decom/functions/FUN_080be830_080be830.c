/*
 * Ghidra decompilation
 *
 * Function : FUN_080be830
 * Address  : 080be830
 * Program  : drastic16
 */


void FUN_080be830(int param_1,int param_2,undefined4 param_3)

{
  undefined uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_080a4e38(param_3);
  *(undefined8 *)(param_1 + 0x2068) = uVar2;
  *(undefined4 *)(param_1 + 0x42d8) = 0;
  *(undefined4 *)(param_1 + 0x42dc) = 0;
  *(undefined *)(param_1 + 0x42e0) = 1;
  uVar1 = FUN_080af900(param_2 + 0xa024);
  *(undefined *)(param_1 + 0x64e8) = uVar1;
  if (*(char *)(param_1 + 0x64e8) != '\0') {
    memcpy((void *)(param_1 + 0x62e4),(void *)(param_2 + 0xa024),0x201);
  }
  *(undefined *)(param_1 + 0x2061) = 0;
  *(undefined *)(param_1 + 0x64e9) = 0;
  *(undefined *)(param_1 + 0x42e1) = 1;
  *(undefined *)(param_1 + 0x42e2) = 0;
  *(undefined *)(param_1 + 0x42e3) = 0;
  FUN_080b5b88(param_1);
  return;
}


