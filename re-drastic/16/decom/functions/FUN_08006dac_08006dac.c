/*
 * Ghidra decompilation
 *
 * Function : FUN_08006dac
 * Address  : 08006dac
 * Program  : drastic16
 */


void FUN_08006dac(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0x7ff;
  if (*(ushort *)(param_1 + 0x16840 + uVar2) != param_3) {
    if ((param_2 & 0x400) == 0) {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x1d98;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x82cd8;
    }
    FUN_08032cac(iVar1,uVar2 + 0x100000,param_3,2,
                 *(undefined2 *)(*(int *)(param_1 + 0xfba1c) + 0x14));
    *(short *)(param_1 + 0x16840 + uVar2) = (short)param_3;
  }
  return;
}


