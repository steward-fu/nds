/*
 * Ghidra decompilation
 *
 * Function : FUN_08006bbc
 * Address  : 08006bbc
 * Program  : drastic16
 */


undefined FUN_08006bbc(int param_1,uint param_2)

{
  void *pvVar1;
  
  if (*(code **)(param_1 + 0xfbce4) == FUN_08006ea4) {
    pvVar1 = (void *)(param_1 + 0x15840);
  }
  else {
    pvVar1 = memcpy((void *)(param_1 + 0x15840),(void *)(param_1 + 0x15040),0x800);
    *(undefined *)(param_1 + 0xfbd00) = 0;
    *(void **)(param_1 + 0xfbcd8) = pvVar1;
    *(code **)(param_1 + 0xfbce4) = FUN_08006ea4;
    *(code **)(param_1 + 0xfbce8) = FUN_08006f20;
    *(code **)(param_1 + 0xfbcec) = FUN_08006f9c;
  }
  return *(undefined *)((int)pvVar1 + (param_2 & 0x7ff));
}


