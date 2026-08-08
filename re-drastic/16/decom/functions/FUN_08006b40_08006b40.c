/*
 * Ghidra decompilation
 *
 * Function : FUN_08006b40
 * Address  : 08006b40
 * Program  : drastic16
 */


undefined4 FUN_08006b40(int param_1,uint param_2)

{
  void *pvVar1;
  
  if (*(code **)(param_1 + 0xfbc24) == FUN_08006d30) {
    pvVar1 = (void *)(param_1 + 0x16840);
  }
  else {
    pvVar1 = memcpy((void *)(param_1 + 0x16840),(void *)(param_1 + 0x16040),0x800);
    *(undefined *)(param_1 + 0xfbc40) = 0;
    *(void **)(param_1 + 0xfbc18) = pvVar1;
    *(code **)(param_1 + 0xfbc24) = FUN_08006d30;
    *(code **)(param_1 + 0xfbc28) = FUN_08006dac;
    *(code **)(param_1 + 0xfbc2c) = FUN_08006e28;
  }
  return *(undefined4 *)((int)pvVar1 + (param_2 & 0x7ff));
}


