/*
 * Ghidra decompilation
 *
 * Function : FUN_08006e28
 * Address  : 08006e28
 * Program  : drastic16
 */


void FUN_08006e28(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0x7ff;
  if (*(int *)(param_1 + 0x16840 + uVar2) != param_3) {
    if ((param_2 & 0x400) == 0) {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x1d98;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x82cd8;
    }
    FUN_08032cac(iVar1,uVar2 + 0x100000,param_3,4,
                 *(undefined2 *)(*(int *)(param_1 + 0xfba1c) + 0x14));
    *(int *)(param_1 + 0x16840 + uVar2) = param_3;
  }
  return;
}


