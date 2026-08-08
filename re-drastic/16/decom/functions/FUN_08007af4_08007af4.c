/*
 * Ghidra decompilation
 *
 * Function : FUN_08007af4
 * Address  : 08007af4
 * Program  : drastic16
 */


void FUN_08007af4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  
  if (*(code **)(param_1 + 0xfbc24) == FUN_08006d30) {
    pvVar3 = (void *)(param_1 + 0x16840);
  }
  else {
    pvVar3 = memcpy((void *)(param_1 + 0x16840),(void *)(param_1 + 0x16040),0x800);
    *(undefined *)(param_1 + 0xfbc40) = 0;
    *(void **)(param_1 + 0xfbc18) = pvVar3;
    *(code **)(param_1 + 0xfbc24) = FUN_08006d30;
    *(code **)(param_1 + 0xfbc28) = FUN_08006dac;
    *(code **)(param_1 + 0xfbc2c) = FUN_08006e28;
  }
  uVar2 = param_2 & 0x7ff;
  if (*(ushort *)((int)pvVar3 + uVar2) != param_3) {
    if ((param_2 & 0x400) == 0) {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x1d98;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x82cd8;
    }
    FUN_08032cac(iVar1,uVar2 + 0x100000,param_3,2,
                 *(undefined2 *)(*(int *)(param_1 + 0xfba1c) + 0x14));
    *(short *)((int)pvVar3 + uVar2) = (short)param_3;
  }
  return;
}


