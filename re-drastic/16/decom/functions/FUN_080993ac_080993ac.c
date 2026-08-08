/*
 * Ghidra decompilation
 *
 * Function : FUN_080993ac
 * Address  : 080993ac
 * Program  : drastic16
 */


undefined4 FUN_080993ac(int param_1,void *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint __n;
  
  __n = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14);
  if (__n != 0) {
    if (*param_3 < __n) {
      __n = *param_3;
    }
    memcpy(param_2,(void *)(param_1 + *(int *)(param_1 + 0x14) + 0x1c),__n);
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + __n;
    *param_3 = __n;
    return 0;
  }
  uVar1 = (***(code ***)(param_1 + 0x10))();
  return uVar1;
}


