/*
 * Ghidra decompilation
 *
 * Function : FUN_080d14dc
 * Address  : 080d14dc
 * Program  : drastic16
 */


int FUN_080d14dc(int param_1)

{
  int iVar1;
  
  FUN_080cdd84(param_1);
  if (*(int *)(param_1 + 0x4b34) != 0) {
    free(*(void **)(param_1 + 0x4b34));
  }
  FUN_080d621c(*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x20) != 0) {
    operator_delete__(*(void **)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(param_1 + 0x18) + *(int *)(*(int *)(param_1 + 0x18) + -4) * 0x4ae4;
    while (iVar1 != *(int *)(param_1 + 0x18)) {
      iVar1 = iVar1 + -0x4ae4;
      FUN_080d2808(iVar1);
    }
    operator_delete__((void *)(*(int *)(param_1 + 0x18) + -8));
  }
  FUN_080d5a60(param_1 + 0xe6e0);
  FUN_080d59f8(param_1 + 0xe6d0);
  FUN_080d59f8(param_1 + 0xe6c0);
  FUN_080e2bd8(param_1 + 0xe6b0);
  FUN_080e0f00(param_1 + 59000);
  FUN_080d538c(param_1 + 0x98d0);
  FUN_080d0d54(param_1 + 0x4b38);
  FUN_080d5990(param_1 + 0x44);
  FUN_080a60d0(param_1 + 0x34);
  FUN_080a60d0(param_1 + 0x24);
  FUN_080e2bd8(param_1 + 4);
  return param_1;
}


