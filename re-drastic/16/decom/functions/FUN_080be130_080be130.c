/*
 * Ghidra decompilation
 *
 * Function : FUN_080be130
 * Address  : 080be130
 * Program  : drastic16
 */


int FUN_080be130(int param_1,int param_2)

{
  void *pvVar1;
  
  FUN_080b525c(param_1);
  FUN_080b5c80(param_1 + 8);
  FUN_080b74fc(param_1 + 0x62e4);
  *(undefined4 *)(param_1 + 0x42e4) = 0;
  *(undefined4 *)(param_1 + 0x64ec) = 0;
  *(undefined4 *)(param_1 + 0x42d4) = 0;
  FUN_080b76e8(param_1 + 0x62e4,&DAT_080ee230);
  pvVar1 = operator_new(0xe700);
  FUN_080d1220(pvVar1,param_1 + 8);
  *(void **)(param_1 + 0x42d0) = pvVar1;
  FUN_080c2be8(*(undefined4 *)(param_1 + 0x42d0),*(undefined4 *)(param_2 + 0x105a0));
  return param_1;
}


