/*
 * Ghidra decompilation
 *
 * Function : FUN_080b4af8
 * Address  : 080b4af8
 * Program  : drastic16
 */


size_t FUN_080b4af8(int param_1,void *param_2,uint param_3)

{
  void *__src;
  uint uVar1;
  uint __n;
  
  uVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18);
  __n = param_3;
  if (uVar1 < param_3) {
    __n = uVar1;
  }
  if (__n != 0) {
    __src = (void *)FUN_080a609c(param_1,*(undefined4 *)(param_1 + 0x18));
    memcpy(param_2,__src,__n);
  }
  if (__n < param_3) {
    memset((void *)((int)param_2 + __n),0,param_3 - __n);
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + __n;
  return __n;
}


