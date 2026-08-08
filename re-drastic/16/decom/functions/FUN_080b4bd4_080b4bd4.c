/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4bd4
 * Address  : 080b4bd4
 * Program  : drastic16
 */


void FUN_080b4bd4(int param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x18) + param_3 * 2) - 1U < *(uint *)(param_1 + 0x14)) {
    uVar1 = FUN_080a609c(param_1,*(undefined4 *)(param_1 + 0x18));
    FUN_080b0284(uVar1,param_2,param_3);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3 * 4;
  }
  else {
    memset(param_2,0,param_3 << 2);
  }
  return;
}


