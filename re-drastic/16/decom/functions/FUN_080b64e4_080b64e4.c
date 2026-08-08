/*
 * Ghidra decompilation
 *
 * Function : FUN_080b64e4
 * Address  : 080b64e4
 * Program  : drastic16
 */


void FUN_080b64e4(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint local_28;
  int iStack_24;
  
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(int *)(param_1 + 0x2c) != 0)) {
    local_28 = param_3;
    iStack_24 = param_4;
    if ((*(uint *)(param_1 + 0x2090) | *(uint *)(param_1 + 0x2094)) != 0) {
      param_5 = *(undefined4 *)(param_1 + 0x2090);
      param_6 = *(undefined4 *)(param_1 + 0x2094);
      local_28 = *(uint *)(param_1 + 0x2088) + param_3;
      iStack_24 = *(int *)(param_1 + 0x208c) + param_4 +
                  (uint)CARRY4(*(uint *)(param_1 + 0x2088),param_3);
    }
    iVar1 = FUN_080b685c(*(undefined4 *)(param_1 + 0x2c));
    iVar2 = FUN_080dfe7c(local_28,iStack_24,param_5,param_6);
    if (*(char *)(iVar1 + 0xc248) != '\x01') {
      if (*(int *)(param_1 + 0x2050) != iVar2) {
        FUN_080a6080(&DAT_080ede84,iVar2);
        *(int *)(param_1 + 0x2050) = iVar2;
      }
    }
  }
  return;
}


