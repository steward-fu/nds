/*
 * Ghidra decompilation
 *
 * Function : FUN_08007cb4
 * Address  : 08007cb4
 * Program  : drastic16
 */


void FUN_08007cb4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  
  if (*(code **)(param_1 + 0xfbce4) == FUN_08006ea4) {
    pvVar3 = (void *)(param_1 + 0x15840);
  }
  else {
    pvVar3 = memcpy((void *)(param_1 + 0x15840),(void *)(param_1 + 0x15040),0x800);
    *(undefined *)(param_1 + 0xfbd00) = 0;
    *(void **)(param_1 + 0xfbcd8) = pvVar3;
    *(code **)(param_1 + 0xfbce4) = FUN_08006ea4;
    *(code **)(param_1 + 0xfbce8) = FUN_08006f20;
    *(code **)(param_1 + 0xfbcec) = FUN_08006f9c;
  }
  uVar2 = param_2 & 0x7ff;
  if (*(byte *)((int)pvVar3 + uVar2) != param_3) {
    if ((param_2 & 0x400) == 0) {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x1d98;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x82cd8;
    }
    FUN_08032cac(iVar1,uVar2 + 0x200000,param_3,1,
                 *(undefined2 *)(*(int *)(param_1 + 0xfba1c) + 0x14));
    *(char *)((int)pvVar3 + uVar2) = (char)param_3;
  }
  return;
}


