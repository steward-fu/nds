/*
 * Ghidra decompilation
 *
 * Function : FUN_08006d30
 * Address  : 08006d30
 * Program  : drastic16
 */


void FUN_08006d30(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0x7ff;
  if (*(byte *)(param_1 + 0x16840 + uVar2) != param_3) {
    if ((param_2 & 0x400) == 0) {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x1d98;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xfba20) + 0x82cd8;
    }
    FUN_08032cac(iVar1,uVar2 + 0x100000,param_3,1,
                 *(undefined2 *)(*(int *)(param_1 + 0xfba1c) + 0x14));
    *(char *)(param_1 + 0x16840 + uVar2) = (char)param_3;
  }
  return;
}


